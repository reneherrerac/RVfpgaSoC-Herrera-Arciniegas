# <p align= "center">  RVfpgaSoC </p>

_Daniel Arciniegas_

_Brayan Herrera_

temas a tratar:
- Introducción y descripcion del curso RVfpgaSoC
- Lab1 descripcion general
- resultados lab1
- lab2 descripcion general
- resultados lab2
- Que aprendí del curso
- Fundación RISC-V
- Hablar del software libre
- Beneficios del software/hardware libre 
- Conclusiones
En este workshop encontrará la descripción de dos programas uno en assembly y otro en c, cada uno con su descripción, diagrama de flujo, y capturas de GTKwave donde podrá visualizar el correcto funcionamiento del programa.
## Calcular los divisores en RISC-V Assembly
El programa en assembly realiza el cálculo de los divisores de un número ingresado previamente, este procedimiento lo completa a través de restas sucesivas, . Utiliza un contador que va desde 1 hasta el número ingresado para ir comprobando uno a uno cual de los números es divisor, el número que cumple los requisitos se muestra en el registro de salida s1 temporalmente hasta que aparezca el siguiente divisor. En la simulación de gtkwave se podrá observar el historial de los numeros que cumplen y son los divisores.

## Diagrama de flujo.
![diagrama de flujo.jpeg](https://www.dropbox.com/s/pemy5sek07j2qcy/diagrama%20de%20flujo.jpeg?dl=0&raw=1)

##  Instrucciones
- se realizaron en total 15 instrucciones.
![memory.jpeg](https://www.dropbox.com/s/lezqoiubbf0deob/memory.jpeg?dl=0&raw=1)
![atrivute.jpeg](https://www.dropbox.com/s/axs1r09uc0lg14o/atrivute.jpeg?dl=0&raw=1)

- ## Código de Assembly con indicaciónes
 ```
ADDI x2, x0, 1  # Se inicializa x2=1
 ADDI t0, x0, 10 # Se inicializa t0=10. Número a calcular los dígitos
 ADDI t1, x0, 10 # Restas inicializadas
 ADDI t2, x0, 0 # Contador inicializado en cero

.divisor:
  ADDI t2, t2, 1  # Inicia el contador
  .inicializacion:
   AND t1, x0, t1
   ADDI t1, x0, 10
  .restas:
    BLT t1, x0, .inicializacion
    SUB t1, t1, t2                  
    BLT x0, t1, .restas   # si las restas aun no llegan a cero continua restando
  BNE x0, t1, .divisor
  ADD  a1, x0, t2   #guarda el divisor en el registro a1
  BNE  t0, t2, .divisor
  SW  t2, 4(x0)   # Guarda en memoria el divisor
```


## Resultados
En la ultima linea se puede observar los divisores que han sido mostrados en la variable a1
### GTKWAVE

![Simu_divisores.jpeg](https://www.dropbox.com/s/8x2jp6t133b503p/Simu_divisores.jpeg?dl=0&raw=1)

## Pasos para ejecutar el programa

- ### Clonar el repositorio
```
git clone https://github.com/Computer-Architecture-I-UIS/workshop_risc-v_assembly-arciniegas-porras.git
```

### Compilar en RISC-V

**doasm.sh** funciones:

- Compilar el asm
- Montar su programa
- Obtener el código binario mahine
- Obtener el archivo HEX para Verilog techbench
- Imprimir el archivo volcado
- Imprimir el número de instrucciones

```sh
./doasm.sh assembly/projects/divisores.S
```

### Simular en Icarus

```sh
cd verilog
```
```sh
iverilog -o test *.v
```
```sh
vvp test
```

### Observar los resultados

```sh
gtkwave test.vcd
```
### Cosas a tener en cuenta para visualizar los resultados
si desea ver la señales, necesita seguir el siguiente path:
>Ottochip tb/myCHIP/Ottochip nopads/core/core/DATA/ID
>> - rego_2[31:0] ---> hace referencia a la señal x2
>>
>> - rego_5[31:0] ---> hace referencia a la señal t0
>>
>> - rego_6[31:0] ---> hace referencia a la señal t1
>>
>> - rego_7[31:0] ---> hace referencia a la señal t2

>> - rego_11[31:0] ---> hace referencia a la señal a1


# Números Capicúa
este programa fue creado en ***C*** y consiste en detectar los números capicúa(aquellos que se leen igual de izquierda a derecha y viceversa), con lo cual si el numero ingresado es capicúa la salida va a ser ***1*** indicando que es correcto y un ***0*** indicando si por lo contrario no lo es. El script contiene una serie de condicionales que aseguran la correcta detección de estos números, en la sección que sigue acontinuación ***cómo funciona*** podrá encontrar un diagrama de flujo que describe de manera sencilla como es la lógica del programa.

### Cómo funciona

![diagramaflujo](https://user-images.githubusercontent.com/94850035/152728651-4d43252d-3dae-4294-b77f-c6b81d1d3f9b.png)


Para la realización de este algoritmo se implementó una serie de procesos para invertir el número, los cuales son los que se encuentran dentro del primer while, pero para esto se uso otro while dentro de este, ya que asi podiamos hallar el ***residuo*** y ***cociente*** de la división del número que se quiere comprobar entre 10, y estos resultados los usamos en los procesos del primer while, cuando la condición de este primer while deja de cumplirse pasamos a un condicional if el cual lo que hace, es que, le damos la condición de que compare el número invertido que en nuestro caso lo llamamos ***capd*** con el número ingresado al cual llamamos ***num***, de esta manera si los dos son iguales, la salida de este va a ser ***1*** comprobando que el número ingresado es capicúa, pero si por lo contrario son diferentes la salida va a ser un ***0*** indicando que el número no es capicúa.

### Pasos para ejecutar el programa
- Clonar el repositorio
```
git clone https://github.com/Computer-Architecture-I-UIS/workshop_risc-v_assembly-arciniegas-porras.git
```
- Es necesario dar los permisos necesarios al siguiente script, de esta manera:
```
sudo chmod +x compile.sh
```
- Si desea ejecutar la simulación, lo que debe hacer es dentro de la carpeta workshop_risc-v_assembly-arciniegas-porras, ejecutar el siguiente comando:
```
./compile.sh c_program/numcapicua.c
```
- Luego de esto ejecuta los siguientes comandos para simulación en icarus:
```
cd verilog
```
```
iverilog -o test *.v
```
```
vvp test
```
- Ahora para observar los resultados, ejecute el siguiente comando y automaticamente el script le mostrara el entorno ***GTKwave***.
```
gtkwave test.vcd
```
- Si presenta problemas para abrir el ***GTKwave*** con el paso anterior, puede ejecutar el siguiente comando, el cual le abrira la carpeta donde se encuentra el archivo ***.vcd*** y podrá abrirlo manualmente dando click en el y escogiendo abrirlo con ***GTKwave***
```
explorer.exe .
```

### Instrucciones
En las siguientes imagenes se puede visualizar el resúmen de cuales y cuantas instrucciones se utilizaron.

  ![inst](https://user-images.githubusercontent.com/94850035/152730998-ba8702bd-546f-430d-aa12-81fd701e0e9e.png)

  ![instru](https://user-images.githubusercontent.com/94850035/152731051-50f061a4-1bd2-4713-a6ab-84abff135e66.png)


### Resultados correcto funcionamiento
Test1. Input: ---> num = 101
![test1](https://user-images.githubusercontent.com/94850035/152732131-b17180c7-501d-4d5b-a8d5-a6a5e1827670.png)


Test2. Input position: ---> num = 17
![test2](https://user-images.githubusercontent.com/94850035/152732557-903f4ba2-b987-420a-b7d3-d74bc894b07c.png)


### Cosas a tener en cuenta
si desea ver la señales, necesita seguir el siguiente path:
>Ottochip tb/myCHIP/Ottochip nopads/regtest1
>> - rego_0[31:0] ---> hace referencia a la señal num
>>
>> - rego_1[31:0] ---> hace referencia a la señal capb
>>
>> - rego_2[31:0] ---> hace referencia a la señal capc
>>
>> - rego_3[31:0] ---> hace referencia a la señal capd

>Ottochip tb/myCHIP/Ottochip nopads/regtest2
>> - rego_0[31:0] ---> hace referencia a la señal compb
>>
>> - rego_1[31:0] ---> hace referencia a la señal cont
>>

# Conclusiones

- Cuando estabamos haciendo los respectivos programas tanto en assembly como en c, nos dimos cuenta que risc-v no desarrollaba la operacion división, ni la de residuo, con lo cual investigamos y esto se debia que posiblemente tenemos la version de risc-v basica, ya que existen extensiones que se le pueden agregar, las cuales permiten hacer operaciones de division, de punto flotante, entre otras, por lo cual la version que tenemos no tiene dichas extensiones, asi que nos tuvimos modificar el código para hacer las respectivas operaciones mencionadas anteriormente por medio de restas sucesivas.
 - Es necesario guardar la información en el registro de memoria adecuado que se escogió para poder saber donde buscar las señales en la simulacion y asi visualizarlas correctamente
 - Con el resultado de la cantidad de instrucciones que se usaron tanto en assembly como en c, se pudo ver que el número de instrucciones en assembly es menor que en c, esto es debido a que en assembly tenemos la posibilidad de controlar con instrucciones exactas lo que necesitamos para desarrollar el codigo, es decir tenemos control directo sobre el hardware, lo cual quiere decir que es un lenguaje de bajo nivel, mientras que c es un lenguaje de alto nivel y no tenemos control de las instrucciones, inlcuso de los registros y la redirección de la información.

 # Referencias

 - RISC-V Assembly for Beginners [Link](https://medium.com/swlh/risc-v-assembly-for-beginners-387c6cd02c49)
 - RISC-V Assembly Language [Link](https://web.eecs.utk.edu/~smarz1/courses/ece356/notes/assembly/)
 - RV32I INSTRUCTIONS [link](https://doc-04-bo-apps-viewer.googleusercontent.com/viewer/secure/pdf/9vi6ttp4qj54bd105ueu5at1k7pip9fo/9l87lkm9k9n0al4klh0uotun00thlqo1/1644215850000/drive/01311830593157202484/ACFrOgArYfhP-5Ju_8xpTUO0DpeB3pXqrZSibihyeHdV8QfoKZkizHm_viE5eH4voHMeEm5MNkqXVRCeUMtMHQ_7CN0WWcQAnWjTLqp3SqJZu5ScN28JlaBCEWu8O3xJGS6Smzn0XZQS2eLQqtkM?print=true&nonce=non4v81j6ljki&user=01311830593157202484&hash=7cpjso84n4g173p3mj1ujj9eqouijq8n)
 - Guía Práctica de RISC-V: El Atlas de una Arquitectura Abierta [Link](http://riscvbook.com/spanish/)
 - https://github.com/Computer-Architecture-I-UIS/workshop_risc-v_assembly-leal-centeno.git
