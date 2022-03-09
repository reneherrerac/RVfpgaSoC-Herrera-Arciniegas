# <p align= "center">  RVfpgaSoC </p>

_Daniel Arciniegas_

_Brayan Herrera_

## Resumen

En este proyecto encontrara la implementación de
Lab 1: Introduction to RVfpga-SoC
Lab 2: Running Software on RVfpga-SoC  del curso RVfpgaSoC ofrecido por la empresa imagination.

Temas a tratar:
- [Introducción.](#Introducción)
  - [Software libre.](#Software-libre)
  -  [Beneficios del software libre.](#Beneficios-del-software-libre)
  - [Hardware libre.](#Hardware-libre)
  - [Fundación RISC-V.](#Fundación-RISC-V)
  - [Patrocinadores.]()
  - [Intel invirtio en ris-v.]()
- [Descripción del curso RVfpgaSoC.](#Descripcion-del-curso-RVfpgaSoC)
  - [Lab1 Descripción general.](#Lab1-descripcion-general)
  - [Resultados lab1.](#Resultados-lab1)
  - [Lab2 Descripción general.](#Lab2-descripcion-general)
  - [Resultados lab2.](#Resultados-lab2)
- [Conclusiones.](#Conclusiones)
-  [Referencias.](#Referencias)


## Introducción
Para la época de los 80, Richard Matthew Stallman no imaginaba que revolucionaria el mundo con el concepto del software libre, al punto que hoy en día, mas del 90% de las supercomputadoras del mundo corren sobre un núcleo linux, el cual tiene una licencia GPL.  [1]  
## Software libre
Hoy en día se distribuye software bajo diferentes licencias siendo la mas comunes, MIT, GPL y APACHE.
De acuerdo con la definición establecida por Richard Stallman, un software es "libre" cuando garantiza las siguientes libertades:
- La libertad de usar el programa, con cualquier propósito (uso).
- La libertad de estudiar cómo funciona el programa y modificarlo, adaptándolo a las propias necesidades (estudio).
-La libertad de distribuir copias del programa, con lo cual se puede ayudar a otros usuarios (distribución).
- La libertad de mejorar el programa y hacer públicas esas mejoras a los demás, de modo que toda la comunidad se beneficie (mejora).

### Beneficios del software libre
- Desarrollo y mejoramiento continuo.
- Permite la independencia tecnológica.
- Permite ahorrar en la adquisición, mantenimiento y renovación de tecnologías.
- Permite ser copiado.

### Hardware libre
En el ámbito de hardware ya no es tan fácil definir cuando es  libre o hasta que punto, pues al ser un elemento físico, la fabricación de este  depende de muchos factores desde la materia física, la fabrica, el diseño y la parte económica.
Una parte muy importante para el diseño de software es el set de intrucciones ISA que se va a usar para unir el software y el hardware. Existen principalmente tres tipos:
- CISC (Complex Instruction Set Computer)
- RISC (Reduced Instruction Set Computer)
- SISC (Simple Instruction Set Computing)

Las arquitecturas comerciales mas comunes como x86 de INTEL y ARM de ARM holdings son privativas por lo que la aparición de el set de instrucciones RIS-V en el 2010 en la universidad de Berkeley  abre el horizonte para una colaboración global para lograr un software y hardware libre y abierto y a un avance mas rápido en la generación de nuevas tegnologias.
El proyecto de 5 años Par Lab pagado por Intel y Microsoft  y lederado por el Prof. David Pattersondonde se buscaba avances en la computacion paralela termino creando RIS-V.

## Fundación RISC-V
La Fundación RISC-V ( www.riscv.org ) nace en el año 2015 para construir una comunidad abierta y colaborativa de innovadores de software y hardware basada en RISC-V ISA. La Fundación, una corporación sin fines de lucro controlada por sus miembros, dirigió el desarrollo para impulsar la adopción inicial de RISC-V ISA.
en marzo de 2020 Su cede paso de estados unidos  a suiza para evitar que el gobierno de Donal Trump influyera en el acceso libre y el desarrollo de la fundacion.

  - patrocinadores
  - Intel invirtio en ris-v
  - Hardware libre ?

## Descripcion del curso RVfpgaSoC
Consiste en un curso libre para que las personas puedan aprender sobre cómo crear un SoC a partir de un núcleo y otros componentes básicos, y ejecutar programas en el SoC. Este curso RVfpga-SoC muestra cómo construir un SoC RISC-V desde cero usando los bloques de construcción proporcionados y un enfoque de diseño visual basado en bloques. Los componentes básicos incluyen el núcleo de la CPU SweRV EH 1, el bloque de interconexiones, la ROM de arranque, el controlador del sistema y el controlador GPIO. estos se deberán enlazar y poner en funcionamiento para que corra instrucciones en assembly o en C

  ## Lab1 descripcion general
  En esta práctica de laboratorio, mostraremos cómo construir un sistema RISC-V en un chip (SoC) a partir de bloques de construcción. Un SoC incluye un núcleo y todos los periféricos e interfaces necesarios para cargar un sistema operativo y ejecutar programas.
  
#### Los módulos que se usaron se pueden clasificar en tres grandes bloques o categorías:
1. CPU (_SweRV EH1 Core Complex_)
2. Interconexión (_AXI-Interconnect, AXI2WB, and WB-Interconnect_)
3. Periféricos (_Boot-ROM, GPIO controller, and System controller_)
![DIAGRAMA12.jpeg](https://www.dropbox.com/s/4ubs117almsvnpv/DIAGRAMA12.jpeg?dl=0&raw=1)
- ## Resultados lab1
Se creó un proyecto en vivado para realizar el diagrama de bloques, Se configuró el proyecto, se cargaron los bloques pre establecidos y se inician las conexiones
- ## Bloques entregados

![cpufinal.jpeg](https://www.dropbox.com/s/izk6owx7le9hrg5/cpufinal.jpeg?dl=0&raw=1)![SYSCON.jpeg](https://www.dropbox.com/s/q7vzgf8fvfd9mh8/SYSCON.jpeg?dl=0&raw=1)

![intercon.jpeg](https://www.dropbox.com/s/6xanwkspfbuxhdo/intercon.jpeg?dl=0&raw=1) ![GPU.jpeg](https://www.dropbox.com/s/k7u1pk6ekxfyqpb/GPU.jpeg?dl=0&raw=1)

![ROM.jpeg](https://www.dropbox.com/s/anhyu4n25co2xu7/ROM.jpeg?dl=0&raw=1)![BIDIRECT.jpeg](https://www.dropbox.com/s/58yw6q76ht9dixb/BIDIRECT.jpeg?dl=0&raw=1)
- ## Conexion de los bloques
Se realizaron las respectivas conexiones internas entre bloques, la cpu con el bloque de interconexiones y sus demás eprifericos, como la memoria ROM o la GPU. El diagrama resultante fue el siguiente
![bloques.jpeg](https://www.dropbox.com/s/i2vxeolpbcs4fs5/bloques.jpeg?dl=0&raw=1)
- ## Generación del Bitstream y del archivo verilog DB.v que representa los bloques 
![bitstream.jpeg](https://www.dropbox.com/s/wfmafw1f8lxip3m/bitstream.jpeg?dl=0&raw=1)
## Lab2 descripcion general
Este laboratorio muestra cómo ejecutar programas escritos en lenguaje _Assembly_ o _C_ en el subconjunto _SweRVolfX_ que creamos en el laboratorio 1 usando la herramienta de diseño Vivado Block. Posteriormente de haber cargado el programa se simula en verilator y se observa en GTKWAVE el comportamiento.
- ## Resultados lab2
El diseño de bloques creado en el lab1 genera un archivo Verilog de ese módulo de diseño de bloques como un todo. (BD.v)
- ## Simulando un programa en Verilator
Para la simulación se cargaron instrucciones en assembly y se simula en verilator, al conluir la simulación genera un archivo  _trace.vcd_

 ```
 .globl main
main:
# Register t3 is also called register 28 (x28)
li t3, 0x0				 	      # t3 = 0              # 0x00000E13
REPEAT:      
	addi t3, t3, 6		 	              # t3 = t3 + 6         # 0x006E0E13
	addi t3, t3, -1		                      # t3 = t3 - 1         # 0xFFFE0E13
	andi t3, t3, 3			              # t3 = t3 AND 3       # 0x003E7E13
	beq  zero, zero, REPEAT                         # Repeat the loop     # 0xFE000CE3
    nop                                               #nop                  # 0x00000013
.end
```
![gtk20.jpeg](https://www.dropbox.com/s/xoz0jecglj20ju1/gtk20.jpeg?dl=0&raw=1)
En GTKWAVE se puede observar como son ejecutadas las instrucciones ingresadas y en el registro t3 a la salida el cambio esperado
## Conclusiones
  - Importancia del curso
  - Que aprendí del curso

## Referencias
  - Empresas patrocinadoras del curso 
 ![patrocinadore.jpeg](https://www.dropbox.com/s/d987gxnnl83f5rt/patrocinadore.jpeg?dl=0&raw=1)

  - [1] RISC-V Assembly for Beginners  [Link](https://www.compuhoy.com/cuantos-servidores-usan-linux/)
  - https://university.imgtec.com/resources/download/rvfpgasoc-v1-0/
