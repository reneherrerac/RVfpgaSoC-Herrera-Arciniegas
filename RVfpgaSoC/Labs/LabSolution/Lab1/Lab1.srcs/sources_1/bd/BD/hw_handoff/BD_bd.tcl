
################################################################
# This is a generated script based on design: BD
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2019.2
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   catch {common::send_msg_id "BD_TCL-109" "ERROR" "This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."}

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source BD_script.tcl


# The design that will be created by this Tcl script contains the following 
# module references:
# bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bidirec, bootrom_wrapper, gpio_wrapper, intcon_wrapper_bd, swerv_wrapper_verilog, syscon_wrapper

# Please add the sources of those modules before sourcing this Tcl script.

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set list_projs [get_projects -quiet]
if { $list_projs eq "" } {
   create_project project_1 myproj -part xc7a100tcsg324-1
   set_property BOARD_PART digilentinc.com:nexys-a7-100t:part0:1.0 [current_project]
}


# CHANGE DESIGN NAME HERE
variable design_name
set design_name BD

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      common::send_msg_id "BD_TCL-001" "INFO" "Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   common::send_msg_id "BD_TCL-002" "INFO" "Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   common::send_msg_id "BD_TCL-003" "INFO" "Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   common::send_msg_id "BD_TCL-004" "INFO" "Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

common::send_msg_id "BD_TCL-005" "INFO" "Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   catch {common::send_msg_id "BD_TCL-114" "ERROR" $errMsg}
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_msg_id "BD_TCL-100" "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_msg_id "BD_TCL-101" "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports

  # Create ports
  set AN_0 [ create_bd_port -dir O -from 7 -to 0 AN_0 ]
  set Digits_Bits_0 [ create_bd_port -dir O -from 6 -to 0 Digits_Bits_0 ]
  set bidir_0 [ create_bd_port -dir O bidir_0 ]
  set bidir_1 [ create_bd_port -dir O bidir_1 ]
  set bidir_2 [ create_bd_port -dir O bidir_2 ]
  set bidir_3 [ create_bd_port -dir O bidir_3 ]
  set bidir_4 [ create_bd_port -dir O bidir_4 ]
  set bidir_5 [ create_bd_port -dir O bidir_5 ]
  set bidir_6 [ create_bd_port -dir O bidir_6 ]
  set bidir_7 [ create_bd_port -dir O bidir_7 ]
  set bidir_8 [ create_bd_port -dir O bidir_8 ]
  set bidir_9 [ create_bd_port -dir O bidir_9 ]
  set bidir_10 [ create_bd_port -dir O bidir_10 ]
  set bidir_11 [ create_bd_port -dir O bidir_11 ]
  set bidir_12 [ create_bd_port -dir O bidir_12 ]
  set bidir_13 [ create_bd_port -dir O bidir_13 ]
  set bidir_14 [ create_bd_port -dir O bidir_14 ]
  set bidir_15 [ create_bd_port -dir O bidir_15 ]
  set bidir_16 [ create_bd_port -dir O bidir_16 ]
  set bidir_17 [ create_bd_port -dir O bidir_17 ]
  set bidir_18 [ create_bd_port -dir O bidir_18 ]
  set bidir_19 [ create_bd_port -dir O bidir_19 ]
  set bidir_20 [ create_bd_port -dir O bidir_20 ]
  set bidir_21 [ create_bd_port -dir O bidir_21 ]
  set bidir_22 [ create_bd_port -dir O bidir_22 ]
  set bidir_23 [ create_bd_port -dir O bidir_23 ]
  set bidir_24 [ create_bd_port -dir O bidir_24 ]
  set bidir_25 [ create_bd_port -dir O bidir_25 ]
  set bidir_26 [ create_bd_port -dir O bidir_26 ]
  set bidir_27 [ create_bd_port -dir O bidir_27 ]
  set bidir_28 [ create_bd_port -dir O bidir_28 ]
  set bidir_29 [ create_bd_port -dir O bidir_29 ]
  set bidir_30 [ create_bd_port -dir O bidir_30 ]
  set bidir_31 [ create_bd_port -dir O bidir_31 ]
  set clk_0 [ create_bd_port -dir I -type clk clk_0 ]
  set dmi_hard_reset_0 [ create_bd_port -dir I -type rst dmi_hard_reset_0 ]
  set dmi_reg_addr_0 [ create_bd_port -dir I -from 6 -to 0 dmi_reg_addr_0 ]
  set dmi_reg_en_0 [ create_bd_port -dir I dmi_reg_en_0 ]
  set dmi_reg_rdata_0 [ create_bd_port -dir O -from 31 -to 0 dmi_reg_rdata_0 ]
  set dmi_reg_wdata_0 [ create_bd_port -dir I -from 31 -to 0 dmi_reg_wdata_0 ]
  set dmi_reg_wr_en_0 [ create_bd_port -dir I dmi_reg_wr_en_0 ]
  set i_ram_arready_0 [ create_bd_port -dir I i_ram_arready_0 ]
  set i_ram_awready_0 [ create_bd_port -dir I i_ram_awready_0 ]
  set i_ram_bid_0 [ create_bd_port -dir I -from 5 -to 0 i_ram_bid_0 ]
  set i_ram_bresp_0 [ create_bd_port -dir I -from 1 -to 0 i_ram_bresp_0 ]
  set i_ram_bvalid_0 [ create_bd_port -dir I i_ram_bvalid_0 ]
  set i_ram_init_done_0 [ create_bd_port -dir I i_ram_init_done_0 ]
  set i_ram_init_error_0 [ create_bd_port -dir I i_ram_init_error_0 ]
  set i_ram_rdata_0 [ create_bd_port -dir I -from 63 -to 0 i_ram_rdata_0 ]
  set i_ram_rid_0 [ create_bd_port -dir I -from 5 -to 0 i_ram_rid_0 ]
  set i_ram_rlast_0 [ create_bd_port -dir I i_ram_rlast_0 ]
  set i_ram_rresp_0 [ create_bd_port -dir I -from 1 -to 0 i_ram_rresp_0 ]
  set i_ram_rvalid_0 [ create_bd_port -dir I i_ram_rvalid_0 ]
  set i_ram_wready_0 [ create_bd_port -dir I i_ram_wready_0 ]
  set o_ram_araddr_0 [ create_bd_port -dir O -from 31 -to 0 o_ram_araddr_0 ]
  set o_ram_arburst_0 [ create_bd_port -dir O -from 1 -to 0 o_ram_arburst_0 ]
  set o_ram_arcache_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_arcache_0 ]
  set o_ram_arid_0 [ create_bd_port -dir O -from 5 -to 0 o_ram_arid_0 ]
  set o_ram_arlen_0 [ create_bd_port -dir O -from 7 -to 0 o_ram_arlen_0 ]
  set o_ram_arlock_0 [ create_bd_port -dir O o_ram_arlock_0 ]
  set o_ram_arprot_0 [ create_bd_port -dir O -from 2 -to 0 o_ram_arprot_0 ]
  set o_ram_arqos_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_arqos_0 ]
  set o_ram_arregion_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_arregion_0 ]
  set o_ram_arsize_0 [ create_bd_port -dir O -from 2 -to 0 o_ram_arsize_0 ]
  set o_ram_arvalid_0 [ create_bd_port -dir O o_ram_arvalid_0 ]
  set o_ram_awaddr_0 [ create_bd_port -dir O -from 31 -to 0 o_ram_awaddr_0 ]
  set o_ram_awburst_0 [ create_bd_port -dir O -from 1 -to 0 o_ram_awburst_0 ]
  set o_ram_awcache_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_awcache_0 ]
  set o_ram_awid_0 [ create_bd_port -dir O -from 5 -to 0 o_ram_awid_0 ]
  set o_ram_awlen_0 [ create_bd_port -dir O -from 7 -to 0 o_ram_awlen_0 ]
  set o_ram_awlock_0 [ create_bd_port -dir O o_ram_awlock_0 ]
  set o_ram_awprot_0 [ create_bd_port -dir O -from 2 -to 0 o_ram_awprot_0 ]
  set o_ram_awqos_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_awqos_0 ]
  set o_ram_awregion_0 [ create_bd_port -dir O -from 3 -to 0 o_ram_awregion_0 ]
  set o_ram_awsize_0 [ create_bd_port -dir O -from 2 -to 0 o_ram_awsize_0 ]
  set o_ram_awvalid_0 [ create_bd_port -dir O o_ram_awvalid_0 ]
  set o_ram_bready_0 [ create_bd_port -dir O o_ram_bready_0 ]
  set o_ram_rready_0 [ create_bd_port -dir O o_ram_rready_0 ]
  set o_ram_wdata_0 [ create_bd_port -dir O -from 63 -to 0 o_ram_wdata_0 ]
  set o_ram_wlast_0 [ create_bd_port -dir O o_ram_wlast_0 ]
  set o_ram_wstrb_0 [ create_bd_port -dir O -from 7 -to 0 o_ram_wstrb_0 ]
  set o_ram_wvalid_0 [ create_bd_port -dir O o_ram_wvalid_0 ]
  set rst_0 [ create_bd_port -dir I -type rst rst_0 ]

  # Create instance: bidirec_0, and set properties
  set block_name bidirec
  set block_cell_name bidirec_0
  if { [catch {set bidirec_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_1, and set properties
  set block_name bidirec
  set block_cell_name bidirec_1
  if { [catch {set bidirec_1 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_1 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_2, and set properties
  set block_name bidirec
  set block_cell_name bidirec_2
  if { [catch {set bidirec_2 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_2 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_3, and set properties
  set block_name bidirec
  set block_cell_name bidirec_3
  if { [catch {set bidirec_3 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_3 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_4, and set properties
  set block_name bidirec
  set block_cell_name bidirec_4
  if { [catch {set bidirec_4 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_4 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_5, and set properties
  set block_name bidirec
  set block_cell_name bidirec_5
  if { [catch {set bidirec_5 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_5 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_6, and set properties
  set block_name bidirec
  set block_cell_name bidirec_6
  if { [catch {set bidirec_6 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_6 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_7, and set properties
  set block_name bidirec
  set block_cell_name bidirec_7
  if { [catch {set bidirec_7 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_7 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_8, and set properties
  set block_name bidirec
  set block_cell_name bidirec_8
  if { [catch {set bidirec_8 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_8 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_9, and set properties
  set block_name bidirec
  set block_cell_name bidirec_9
  if { [catch {set bidirec_9 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_9 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_10, and set properties
  set block_name bidirec
  set block_cell_name bidirec_10
  if { [catch {set bidirec_10 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_10 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_11, and set properties
  set block_name bidirec
  set block_cell_name bidirec_11
  if { [catch {set bidirec_11 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_11 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_12, and set properties
  set block_name bidirec
  set block_cell_name bidirec_12
  if { [catch {set bidirec_12 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_12 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_13, and set properties
  set block_name bidirec
  set block_cell_name bidirec_13
  if { [catch {set bidirec_13 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_13 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_14, and set properties
  set block_name bidirec
  set block_cell_name bidirec_14
  if { [catch {set bidirec_14 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_14 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_15, and set properties
  set block_name bidirec
  set block_cell_name bidirec_15
  if { [catch {set bidirec_15 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_15 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_16, and set properties
  set block_name bidirec
  set block_cell_name bidirec_16
  if { [catch {set bidirec_16 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_16 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_17, and set properties
  set block_name bidirec
  set block_cell_name bidirec_17
  if { [catch {set bidirec_17 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_17 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_18, and set properties
  set block_name bidirec
  set block_cell_name bidirec_18
  if { [catch {set bidirec_18 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_18 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_19, and set properties
  set block_name bidirec
  set block_cell_name bidirec_19
  if { [catch {set bidirec_19 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_19 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_20, and set properties
  set block_name bidirec
  set block_cell_name bidirec_20
  if { [catch {set bidirec_20 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_20 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_21, and set properties
  set block_name bidirec
  set block_cell_name bidirec_21
  if { [catch {set bidirec_21 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_21 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_22, and set properties
  set block_name bidirec
  set block_cell_name bidirec_22
  if { [catch {set bidirec_22 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_22 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_23, and set properties
  set block_name bidirec
  set block_cell_name bidirec_23
  if { [catch {set bidirec_23 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_23 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_24, and set properties
  set block_name bidirec
  set block_cell_name bidirec_24
  if { [catch {set bidirec_24 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_24 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_25, and set properties
  set block_name bidirec
  set block_cell_name bidirec_25
  if { [catch {set bidirec_25 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_25 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_26, and set properties
  set block_name bidirec
  set block_cell_name bidirec_26
  if { [catch {set bidirec_26 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_26 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_27, and set properties
  set block_name bidirec
  set block_cell_name bidirec_27
  if { [catch {set bidirec_27 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_27 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_28, and set properties
  set block_name bidirec
  set block_cell_name bidirec_28
  if { [catch {set bidirec_28 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_28 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_29, and set properties
  set block_name bidirec
  set block_cell_name bidirec_29
  if { [catch {set bidirec_29 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_29 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_30, and set properties
  set block_name bidirec
  set block_cell_name bidirec_30
  if { [catch {set bidirec_30 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_30 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bidirec_31, and set properties
  set block_name bidirec
  set block_cell_name bidirec_31
  if { [catch {set bidirec_31 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bidirec_31 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: bootrom_wrapper_0, and set properties
  set block_name bootrom_wrapper
  set block_cell_name bootrom_wrapper_0
  if { [catch {set bootrom_wrapper_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $bootrom_wrapper_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: gpio_wrapper_0, and set properties
  set block_name gpio_wrapper
  set block_cell_name gpio_wrapper_0
  if { [catch {set gpio_wrapper_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $gpio_wrapper_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: intcon_wrapper_bd_0, and set properties
  set block_name intcon_wrapper_bd
  set block_cell_name intcon_wrapper_bd_0
  if { [catch {set intcon_wrapper_bd_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $intcon_wrapper_bd_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: swerv_wrapper_verilog_0, and set properties
  set block_name swerv_wrapper_verilog
  set block_cell_name swerv_wrapper_verilog_0
  if { [catch {set swerv_wrapper_verilog_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $swerv_wrapper_verilog_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: syscon_wrapper_0, and set properties
  set block_name syscon_wrapper
  set block_cell_name syscon_wrapper_0
  if { [catch {set syscon_wrapper_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $syscon_wrapper_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create port connections
  connect_bd_net -net bidirec_0_bidir [get_bd_ports bidir_0] [get_bd_pins bidirec_0/bidir]
  connect_bd_net -net bidirec_0_outp [get_bd_pins bidirec_0/outp] [get_bd_pins gpio_wrapper_0/outp_0]
  connect_bd_net -net bidirec_10_bidir [get_bd_ports bidir_10] [get_bd_pins bidirec_10/bidir]
  connect_bd_net -net bidirec_10_outp [get_bd_pins bidirec_10/outp] [get_bd_pins gpio_wrapper_0/outp_10]
  connect_bd_net -net bidirec_11_bidir [get_bd_ports bidir_11] [get_bd_pins bidirec_11/bidir]
  connect_bd_net -net bidirec_11_outp [get_bd_pins bidirec_11/outp] [get_bd_pins gpio_wrapper_0/outp_11]
  connect_bd_net -net bidirec_12_bidir [get_bd_ports bidir_12] [get_bd_pins bidirec_12/bidir]
  connect_bd_net -net bidirec_12_outp [get_bd_pins bidirec_12/outp] [get_bd_pins gpio_wrapper_0/outp_12]
  connect_bd_net -net bidirec_13_bidir [get_bd_ports bidir_13] [get_bd_pins bidirec_13/bidir]
  connect_bd_net -net bidirec_13_outp [get_bd_pins bidirec_13/outp] [get_bd_pins gpio_wrapper_0/outp_13]
  connect_bd_net -net bidirec_14_bidir [get_bd_ports bidir_14] [get_bd_pins bidirec_14/bidir]
  connect_bd_net -net bidirec_14_outp [get_bd_pins bidirec_14/outp] [get_bd_pins gpio_wrapper_0/outp_14]
  connect_bd_net -net bidirec_15_bidir [get_bd_ports bidir_15] [get_bd_pins bidirec_15/bidir]
  connect_bd_net -net bidirec_15_outp [get_bd_pins bidirec_15/outp] [get_bd_pins gpio_wrapper_0/outp_15]
  connect_bd_net -net bidirec_16_bidir [get_bd_ports bidir_16] [get_bd_pins bidirec_16/bidir]
  connect_bd_net -net bidirec_16_outp [get_bd_pins bidirec_16/outp] [get_bd_pins gpio_wrapper_0/outp_16]
  connect_bd_net -net bidirec_17_bidir [get_bd_ports bidir_17] [get_bd_pins bidirec_17/bidir]
  connect_bd_net -net bidirec_17_outp [get_bd_pins bidirec_17/outp] [get_bd_pins gpio_wrapper_0/outp_17]
  connect_bd_net -net bidirec_18_bidir [get_bd_ports bidir_18] [get_bd_pins bidirec_18/bidir]
  connect_bd_net -net bidirec_18_outp [get_bd_pins bidirec_18/outp] [get_bd_pins gpio_wrapper_0/outp_18]
  connect_bd_net -net bidirec_19_bidir [get_bd_ports bidir_19] [get_bd_pins bidirec_19/bidir]
  connect_bd_net -net bidirec_19_outp [get_bd_pins bidirec_19/outp] [get_bd_pins gpio_wrapper_0/outp_19]
  connect_bd_net -net bidirec_1_bidir [get_bd_ports bidir_1] [get_bd_pins bidirec_1/bidir]
  connect_bd_net -net bidirec_1_outp [get_bd_pins bidirec_1/outp] [get_bd_pins gpio_wrapper_0/outp_1]
  connect_bd_net -net bidirec_20_bidir [get_bd_ports bidir_20] [get_bd_pins bidirec_20/bidir]
  connect_bd_net -net bidirec_20_outp [get_bd_pins bidirec_20/outp] [get_bd_pins gpio_wrapper_0/outp_20]
  connect_bd_net -net bidirec_21_bidir [get_bd_ports bidir_21] [get_bd_pins bidirec_21/bidir]
  connect_bd_net -net bidirec_21_outp [get_bd_pins bidirec_21/outp] [get_bd_pins gpio_wrapper_0/outp_21]
  connect_bd_net -net bidirec_22_bidir [get_bd_ports bidir_22] [get_bd_pins bidirec_22/bidir]
  connect_bd_net -net bidirec_22_outp [get_bd_pins bidirec_22/outp] [get_bd_pins gpio_wrapper_0/outp_22]
  connect_bd_net -net bidirec_23_bidir [get_bd_ports bidir_23] [get_bd_pins bidirec_23/bidir]
  connect_bd_net -net bidirec_23_outp [get_bd_pins bidirec_23/outp] [get_bd_pins gpio_wrapper_0/outp_23]
  connect_bd_net -net bidirec_24_bidir [get_bd_ports bidir_24] [get_bd_pins bidirec_24/bidir]
  connect_bd_net -net bidirec_24_outp [get_bd_pins bidirec_24/outp] [get_bd_pins gpio_wrapper_0/outp_24]
  connect_bd_net -net bidirec_25_bidir [get_bd_ports bidir_25] [get_bd_pins bidirec_25/bidir]
  connect_bd_net -net bidirec_25_outp [get_bd_pins bidirec_25/outp] [get_bd_pins gpio_wrapper_0/outp_25]
  connect_bd_net -net bidirec_26_bidir [get_bd_ports bidir_26] [get_bd_pins bidirec_26/bidir]
  connect_bd_net -net bidirec_26_outp [get_bd_pins bidirec_26/outp] [get_bd_pins gpio_wrapper_0/outp_26]
  connect_bd_net -net bidirec_27_bidir [get_bd_ports bidir_27] [get_bd_pins bidirec_27/bidir]
  connect_bd_net -net bidirec_27_outp [get_bd_pins bidirec_27/outp] [get_bd_pins gpio_wrapper_0/outp_27]
  connect_bd_net -net bidirec_28_bidir [get_bd_ports bidir_28] [get_bd_pins bidirec_28/bidir]
  connect_bd_net -net bidirec_28_outp [get_bd_pins bidirec_28/outp] [get_bd_pins gpio_wrapper_0/outp_28]
  connect_bd_net -net bidirec_29_bidir [get_bd_ports bidir_29] [get_bd_pins bidirec_29/bidir]
  connect_bd_net -net bidirec_29_outp [get_bd_pins bidirec_29/outp] [get_bd_pins gpio_wrapper_0/outp_29]
  connect_bd_net -net bidirec_2_bidir [get_bd_ports bidir_2] [get_bd_pins bidirec_2/bidir]
  connect_bd_net -net bidirec_2_outp [get_bd_pins bidirec_2/outp] [get_bd_pins gpio_wrapper_0/outp_2]
  connect_bd_net -net bidirec_30_bidir [get_bd_ports bidir_30] [get_bd_pins bidirec_30/bidir]
  connect_bd_net -net bidirec_30_outp [get_bd_pins bidirec_30/outp] [get_bd_pins gpio_wrapper_0/outp_30]
  connect_bd_net -net bidirec_31_bidir [get_bd_ports bidir_31] [get_bd_pins bidirec_31/bidir]
  connect_bd_net -net bidirec_31_outp [get_bd_pins bidirec_31/outp] [get_bd_pins gpio_wrapper_0/outp_31]
  connect_bd_net -net bidirec_3_bidir [get_bd_ports bidir_3] [get_bd_pins bidirec_3/bidir]
  connect_bd_net -net bidirec_3_outp [get_bd_pins bidirec_3/outp] [get_bd_pins gpio_wrapper_0/outp_3]
  connect_bd_net -net bidirec_4_bidir [get_bd_ports bidir_4] [get_bd_pins bidirec_4/bidir]
  connect_bd_net -net bidirec_4_outp [get_bd_pins bidirec_4/outp] [get_bd_pins gpio_wrapper_0/outp_4]
  connect_bd_net -net bidirec_5_bidir [get_bd_ports bidir_5] [get_bd_pins bidirec_5/bidir]
  connect_bd_net -net bidirec_5_outp [get_bd_pins bidirec_5/outp] [get_bd_pins gpio_wrapper_0/outp_5]
  connect_bd_net -net bidirec_6_bidir [get_bd_ports bidir_6] [get_bd_pins bidirec_6/bidir]
  connect_bd_net -net bidirec_6_outp [get_bd_pins bidirec_6/outp] [get_bd_pins gpio_wrapper_0/outp_6]
  connect_bd_net -net bidirec_7_bidir [get_bd_ports bidir_7] [get_bd_pins bidirec_7/bidir]
  connect_bd_net -net bidirec_7_outp [get_bd_pins bidirec_7/outp] [get_bd_pins gpio_wrapper_0/outp_7]
  connect_bd_net -net bidirec_8_bidir [get_bd_ports bidir_8] [get_bd_pins bidirec_8/bidir]
  connect_bd_net -net bidirec_8_outp [get_bd_pins bidirec_8/outp] [get_bd_pins gpio_wrapper_0/outp_8]
  connect_bd_net -net bidirec_9_bidir [get_bd_ports bidir_9] [get_bd_pins bidirec_9/bidir]
  connect_bd_net -net bidirec_9_outp [get_bd_pins bidirec_9/outp] [get_bd_pins gpio_wrapper_0/outp_9]
  connect_bd_net -net bootrom_wrapper_0_o_wb_ack [get_bd_pins bootrom_wrapper_0/o_wb_ack] [get_bd_pins intcon_wrapper_bd_0/wb_rom_ack_i]
  connect_bd_net -net bootrom_wrapper_0_o_wb_rdt [get_bd_pins bootrom_wrapper_0/o_wb_rdt] [get_bd_pins intcon_wrapper_bd_0/wb_rom_dat_i]
  connect_bd_net -net clk_0_1 [get_bd_ports clk_0] [get_bd_pins bootrom_wrapper_0/i_clk] [get_bd_pins gpio_wrapper_0/wb_clk_i] [get_bd_pins intcon_wrapper_bd_0/clk_i_wrapper] [get_bd_pins swerv_wrapper_verilog_0/clk] [get_bd_pins syscon_wrapper_0/i_clk]
  connect_bd_net -net dmi_hard_reset_0_1 [get_bd_ports dmi_hard_reset_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_hard_reset]
  connect_bd_net -net dmi_reg_addr_0_1 [get_bd_ports dmi_reg_addr_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_reg_addr]
  connect_bd_net -net dmi_reg_en_0_1 [get_bd_ports dmi_reg_en_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_reg_en]
  connect_bd_net -net dmi_reg_wdata_0_1 [get_bd_ports dmi_reg_wdata_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_reg_wdata]
  connect_bd_net -net dmi_reg_wr_en_0_1 [get_bd_ports dmi_reg_wr_en_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_reg_wr_en]
  connect_bd_net -net gpio_wrapper_0_inp_0 [get_bd_pins bidirec_0/inp] [get_bd_pins gpio_wrapper_0/inp_0]
  connect_bd_net -net gpio_wrapper_0_inp_1 [get_bd_pins bidirec_1/inp] [get_bd_pins gpio_wrapper_0/inp_1]
  connect_bd_net -net gpio_wrapper_0_inp_2 [get_bd_pins bidirec_2/inp] [get_bd_pins gpio_wrapper_0/inp_2]
  connect_bd_net -net gpio_wrapper_0_inp_3 [get_bd_pins bidirec_3/inp] [get_bd_pins gpio_wrapper_0/inp_3]
  connect_bd_net -net gpio_wrapper_0_inp_4 [get_bd_pins bidirec_4/inp] [get_bd_pins gpio_wrapper_0/inp_4]
  connect_bd_net -net gpio_wrapper_0_inp_5 [get_bd_pins bidirec_5/inp] [get_bd_pins gpio_wrapper_0/inp_5]
  connect_bd_net -net gpio_wrapper_0_inp_6 [get_bd_pins bidirec_6/inp] [get_bd_pins gpio_wrapper_0/inp_6]
  connect_bd_net -net gpio_wrapper_0_inp_7 [get_bd_pins bidirec_7/inp] [get_bd_pins gpio_wrapper_0/inp_7]
  connect_bd_net -net gpio_wrapper_0_inp_8 [get_bd_pins bidirec_8/inp] [get_bd_pins gpio_wrapper_0/inp_8]
  connect_bd_net -net gpio_wrapper_0_inp_9 [get_bd_pins bidirec_9/inp] [get_bd_pins gpio_wrapper_0/inp_9]
  connect_bd_net -net gpio_wrapper_0_inp_10 [get_bd_pins bidirec_10/inp] [get_bd_pins gpio_wrapper_0/inp_10]
  connect_bd_net -net gpio_wrapper_0_inp_11 [get_bd_pins bidirec_11/inp] [get_bd_pins gpio_wrapper_0/inp_11]
  connect_bd_net -net gpio_wrapper_0_inp_12 [get_bd_pins bidirec_12/inp] [get_bd_pins gpio_wrapper_0/inp_12]
  connect_bd_net -net gpio_wrapper_0_inp_13 [get_bd_pins bidirec_13/inp] [get_bd_pins gpio_wrapper_0/inp_13]
  connect_bd_net -net gpio_wrapper_0_inp_14 [get_bd_pins bidirec_14/inp] [get_bd_pins gpio_wrapper_0/inp_14]
  connect_bd_net -net gpio_wrapper_0_inp_15 [get_bd_pins bidirec_15/inp] [get_bd_pins gpio_wrapper_0/inp_15]
  connect_bd_net -net gpio_wrapper_0_inp_16 [get_bd_pins bidirec_16/inp] [get_bd_pins gpio_wrapper_0/inp_16]
  connect_bd_net -net gpio_wrapper_0_inp_17 [get_bd_pins bidirec_17/inp] [get_bd_pins gpio_wrapper_0/inp_17]
  connect_bd_net -net gpio_wrapper_0_inp_18 [get_bd_pins bidirec_18/inp] [get_bd_pins gpio_wrapper_0/inp_18]
  connect_bd_net -net gpio_wrapper_0_inp_19 [get_bd_pins bidirec_19/inp] [get_bd_pins gpio_wrapper_0/inp_19]
  connect_bd_net -net gpio_wrapper_0_inp_20 [get_bd_pins bidirec_20/inp] [get_bd_pins gpio_wrapper_0/inp_20]
  connect_bd_net -net gpio_wrapper_0_inp_21 [get_bd_pins bidirec_21/inp] [get_bd_pins gpio_wrapper_0/inp_21]
  connect_bd_net -net gpio_wrapper_0_inp_22 [get_bd_pins bidirec_22/inp] [get_bd_pins gpio_wrapper_0/inp_22]
  connect_bd_net -net gpio_wrapper_0_inp_23 [get_bd_pins bidirec_23/inp] [get_bd_pins gpio_wrapper_0/inp_23]
  connect_bd_net -net gpio_wrapper_0_inp_24 [get_bd_pins bidirec_24/inp] [get_bd_pins gpio_wrapper_0/inp_24]
  connect_bd_net -net gpio_wrapper_0_inp_25 [get_bd_pins bidirec_25/inp] [get_bd_pins gpio_wrapper_0/inp_25]
  connect_bd_net -net gpio_wrapper_0_inp_26 [get_bd_pins bidirec_26/inp] [get_bd_pins gpio_wrapper_0/inp_26]
  connect_bd_net -net gpio_wrapper_0_inp_27 [get_bd_pins bidirec_27/inp] [get_bd_pins gpio_wrapper_0/inp_27]
  connect_bd_net -net gpio_wrapper_0_inp_28 [get_bd_pins bidirec_28/inp] [get_bd_pins gpio_wrapper_0/inp_28]
  connect_bd_net -net gpio_wrapper_0_inp_29 [get_bd_pins bidirec_29/inp] [get_bd_pins gpio_wrapper_0/inp_29]
  connect_bd_net -net gpio_wrapper_0_inp_30 [get_bd_pins bidirec_30/inp] [get_bd_pins gpio_wrapper_0/inp_30]
  connect_bd_net -net gpio_wrapper_0_inp_31 [get_bd_pins bidirec_31/inp] [get_bd_pins gpio_wrapper_0/inp_31]
  connect_bd_net -net gpio_wrapper_0_oe_0 [get_bd_pins bidirec_0/oe] [get_bd_pins gpio_wrapper_0/oe_0]
  connect_bd_net -net gpio_wrapper_0_oe_1 [get_bd_pins bidirec_1/oe] [get_bd_pins gpio_wrapper_0/oe_1]
  connect_bd_net -net gpio_wrapper_0_oe_2 [get_bd_pins bidirec_2/oe] [get_bd_pins gpio_wrapper_0/oe_2]
  connect_bd_net -net gpio_wrapper_0_oe_3 [get_bd_pins bidirec_3/oe] [get_bd_pins gpio_wrapper_0/oe_3]
  connect_bd_net -net gpio_wrapper_0_oe_4 [get_bd_pins bidirec_4/oe] [get_bd_pins gpio_wrapper_0/oe_4]
  connect_bd_net -net gpio_wrapper_0_oe_5 [get_bd_pins bidirec_5/oe] [get_bd_pins gpio_wrapper_0/oe_5]
  connect_bd_net -net gpio_wrapper_0_oe_6 [get_bd_pins bidirec_6/oe] [get_bd_pins gpio_wrapper_0/oe_6]
  connect_bd_net -net gpio_wrapper_0_oe_7 [get_bd_pins bidirec_7/oe] [get_bd_pins gpio_wrapper_0/oe_7]
  connect_bd_net -net gpio_wrapper_0_oe_8 [get_bd_pins bidirec_8/oe] [get_bd_pins gpio_wrapper_0/oe_8]
  connect_bd_net -net gpio_wrapper_0_oe_9 [get_bd_pins bidirec_9/oe] [get_bd_pins gpio_wrapper_0/oe_9]
  connect_bd_net -net gpio_wrapper_0_oe_10 [get_bd_pins bidirec_10/oe] [get_bd_pins gpio_wrapper_0/oe_10]
  connect_bd_net -net gpio_wrapper_0_oe_11 [get_bd_pins bidirec_11/oe] [get_bd_pins gpio_wrapper_0/oe_11]
  connect_bd_net -net gpio_wrapper_0_oe_12 [get_bd_pins bidirec_12/oe] [get_bd_pins gpio_wrapper_0/oe_12]
  connect_bd_net -net gpio_wrapper_0_oe_13 [get_bd_pins bidirec_13/oe] [get_bd_pins gpio_wrapper_0/oe_13]
  connect_bd_net -net gpio_wrapper_0_oe_14 [get_bd_pins bidirec_14/oe] [get_bd_pins gpio_wrapper_0/oe_14]
  connect_bd_net -net gpio_wrapper_0_oe_15 [get_bd_pins bidirec_15/oe] [get_bd_pins gpio_wrapper_0/oe_15]
  connect_bd_net -net gpio_wrapper_0_oe_16 [get_bd_pins bidirec_16/oe] [get_bd_pins gpio_wrapper_0/oe_16]
  connect_bd_net -net gpio_wrapper_0_oe_17 [get_bd_pins bidirec_17/oe] [get_bd_pins gpio_wrapper_0/oe_17]
  connect_bd_net -net gpio_wrapper_0_oe_18 [get_bd_pins bidirec_18/oe] [get_bd_pins gpio_wrapper_0/oe_18]
  connect_bd_net -net gpio_wrapper_0_oe_19 [get_bd_pins bidirec_19/oe] [get_bd_pins gpio_wrapper_0/oe_19]
  connect_bd_net -net gpio_wrapper_0_oe_20 [get_bd_pins bidirec_20/oe] [get_bd_pins gpio_wrapper_0/oe_20]
  connect_bd_net -net gpio_wrapper_0_oe_21 [get_bd_pins bidirec_21/oe] [get_bd_pins gpio_wrapper_0/oe_21]
  connect_bd_net -net gpio_wrapper_0_oe_22 [get_bd_pins bidirec_22/oe] [get_bd_pins gpio_wrapper_0/oe_22]
  connect_bd_net -net gpio_wrapper_0_oe_23 [get_bd_pins bidirec_23/oe] [get_bd_pins gpio_wrapper_0/oe_23]
  connect_bd_net -net gpio_wrapper_0_oe_24 [get_bd_pins bidirec_24/oe] [get_bd_pins gpio_wrapper_0/oe_24]
  connect_bd_net -net gpio_wrapper_0_oe_25 [get_bd_pins bidirec_25/oe] [get_bd_pins gpio_wrapper_0/oe_25]
  connect_bd_net -net gpio_wrapper_0_oe_26 [get_bd_pins bidirec_26/oe] [get_bd_pins gpio_wrapper_0/oe_26]
  connect_bd_net -net gpio_wrapper_0_oe_27 [get_bd_pins bidirec_27/oe] [get_bd_pins gpio_wrapper_0/oe_27]
  connect_bd_net -net gpio_wrapper_0_oe_28 [get_bd_pins bidirec_28/oe] [get_bd_pins gpio_wrapper_0/oe_28]
  connect_bd_net -net gpio_wrapper_0_oe_29 [get_bd_pins bidirec_29/oe] [get_bd_pins gpio_wrapper_0/oe_29]
  connect_bd_net -net gpio_wrapper_0_oe_30 [get_bd_pins bidirec_30/oe] [get_bd_pins gpio_wrapper_0/oe_30]
  connect_bd_net -net gpio_wrapper_0_oe_31 [get_bd_pins bidirec_31/oe] [get_bd_pins gpio_wrapper_0/oe_31]
  connect_bd_net -net gpio_wrapper_0_wb_ack_o [get_bd_pins gpio_wrapper_0/wb_ack_o] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_ack_i]
  connect_bd_net -net gpio_wrapper_0_wb_dat_o [get_bd_pins gpio_wrapper_0/wb_dat_o] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_dat_i]
  connect_bd_net -net gpio_wrapper_0_wb_err_o [get_bd_pins gpio_wrapper_0/wb_err_o] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_err_i]
  connect_bd_net -net gpio_wrapper_0_wb_inta_o [get_bd_pins gpio_wrapper_0/wb_inta_o] [get_bd_pins syscon_wrapper_0/gpio_irq]
  connect_bd_net -net i_ram_arready_0_1 [get_bd_ports i_ram_arready_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_arready]
  connect_bd_net -net i_ram_awready_0_1 [get_bd_ports i_ram_awready_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_awready]
  connect_bd_net -net i_ram_bid_0_1 [get_bd_ports i_ram_bid_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_bid]
  connect_bd_net -net i_ram_bresp_0_1 [get_bd_ports i_ram_bresp_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_bresp]
  connect_bd_net -net i_ram_bvalid_0_1 [get_bd_ports i_ram_bvalid_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_bvalid]
  connect_bd_net -net i_ram_init_done_0_1 [get_bd_ports i_ram_init_done_0] [get_bd_pins syscon_wrapper_0/i_ram_init_done]
  connect_bd_net -net i_ram_init_error_0_1 [get_bd_ports i_ram_init_error_0] [get_bd_pins syscon_wrapper_0/i_ram_init_error]
  connect_bd_net -net i_ram_rdata_0_1 [get_bd_ports i_ram_rdata_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_rdata]
  connect_bd_net -net i_ram_rid_0_1 [get_bd_ports i_ram_rid_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_rid]
  connect_bd_net -net i_ram_rlast_0_1 [get_bd_ports i_ram_rlast_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_rlast]
  connect_bd_net -net i_ram_rresp_0_1 [get_bd_ports i_ram_rresp_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_rresp]
  connect_bd_net -net i_ram_rvalid_0_1 [get_bd_ports i_ram_rvalid_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_rvalid]
  connect_bd_net -net i_ram_wready_0_1 [get_bd_ports i_ram_wready_0] [get_bd_pins intcon_wrapper_bd_0/i_ram_wready]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_arready [get_bd_pins intcon_wrapper_bd_0/o_ifu_arready] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arready]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_rdata [get_bd_pins intcon_wrapper_bd_0/o_ifu_rdata] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rdata]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_rid [get_bd_pins intcon_wrapper_bd_0/o_ifu_rid] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rid]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_rlast [get_bd_pins intcon_wrapper_bd_0/o_ifu_rlast] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rlast]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_rresp [get_bd_pins intcon_wrapper_bd_0/o_ifu_rresp] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rresp]
  connect_bd_net -net intcon_wrapper_bd_0_o_ifu_rvalid [get_bd_pins intcon_wrapper_bd_0/o_ifu_rvalid] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_arready [get_bd_pins intcon_wrapper_bd_0/o_lsu_arready] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arready]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_awready [get_bd_pins intcon_wrapper_bd_0/o_lsu_awready] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awready]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_bid [get_bd_pins intcon_wrapper_bd_0/o_lsu_bid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_bid]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_bresp [get_bd_pins intcon_wrapper_bd_0/o_lsu_bresp] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_bresp]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_bvalid [get_bd_pins intcon_wrapper_bd_0/o_lsu_bvalid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_bvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_rdata [get_bd_pins intcon_wrapper_bd_0/o_lsu_rdata] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rdata]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_rid [get_bd_pins intcon_wrapper_bd_0/o_lsu_rid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rid]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_rlast [get_bd_pins intcon_wrapper_bd_0/o_lsu_rlast] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rlast]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_rresp [get_bd_pins intcon_wrapper_bd_0/o_lsu_rresp] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rresp]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_rvalid [get_bd_pins intcon_wrapper_bd_0/o_lsu_rvalid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_lsu_wready [get_bd_pins intcon_wrapper_bd_0/o_lsu_wready] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_wready]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_araddr [get_bd_ports o_ram_araddr_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_araddr]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arburst [get_bd_ports o_ram_arburst_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arburst]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arcache [get_bd_ports o_ram_arcache_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arcache]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arid [get_bd_ports o_ram_arid_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arid]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arlen [get_bd_ports o_ram_arlen_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arlen]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arlock [get_bd_ports o_ram_arlock_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arlock]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arprot [get_bd_ports o_ram_arprot_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arprot]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arqos [get_bd_ports o_ram_arqos_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arqos]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arregion [get_bd_ports o_ram_arregion_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arregion]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arsize [get_bd_ports o_ram_arsize_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arsize]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_arvalid [get_bd_ports o_ram_arvalid_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_arvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awaddr [get_bd_ports o_ram_awaddr_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awaddr]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awburst [get_bd_ports o_ram_awburst_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awburst]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awcache [get_bd_ports o_ram_awcache_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awcache]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awid [get_bd_ports o_ram_awid_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awid]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awlen [get_bd_ports o_ram_awlen_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awlen]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awlock [get_bd_ports o_ram_awlock_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awlock]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awprot [get_bd_ports o_ram_awprot_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awprot]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awqos [get_bd_ports o_ram_awqos_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awqos]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awregion [get_bd_ports o_ram_awregion_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awregion]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awsize [get_bd_ports o_ram_awsize_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awsize]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_awvalid [get_bd_ports o_ram_awvalid_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_awvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_bready [get_bd_ports o_ram_bready_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_bready]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_rready [get_bd_ports o_ram_rready_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_rready]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_wdata [get_bd_ports o_ram_wdata_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_wdata]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_wlast [get_bd_ports o_ram_wlast_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_wlast]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_wstrb [get_bd_ports o_ram_wstrb_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_wstrb]
  connect_bd_net -net intcon_wrapper_bd_0_o_ram_wvalid [get_bd_ports o_ram_wvalid_0] [get_bd_pins intcon_wrapper_bd_0/o_ram_wvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_arready [get_bd_pins intcon_wrapper_bd_0/o_sb_arready] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arready]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_awready [get_bd_pins intcon_wrapper_bd_0/o_sb_awready] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awready]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_bid [get_bd_pins intcon_wrapper_bd_0/o_sb_bid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_bid]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_bresp [get_bd_pins intcon_wrapper_bd_0/o_sb_bresp] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_bresp]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_bvalid [get_bd_pins intcon_wrapper_bd_0/o_sb_bvalid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_bvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_rdata [get_bd_pins intcon_wrapper_bd_0/o_sb_rdata] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rdata]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_rid [get_bd_pins intcon_wrapper_bd_0/o_sb_rid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rid]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_rlast [get_bd_pins intcon_wrapper_bd_0/o_sb_rlast] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rlast]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_rresp [get_bd_pins intcon_wrapper_bd_0/o_sb_rresp] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rresp]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_rvalid [get_bd_pins intcon_wrapper_bd_0/o_sb_rvalid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rvalid]
  connect_bd_net -net intcon_wrapper_bd_0_o_sb_wready [get_bd_pins intcon_wrapper_bd_0/o_sb_wready] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_wready]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_adr_o [get_bd_pins gpio_wrapper_0/wb_adr_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_adr_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_cyc_o [get_bd_pins gpio_wrapper_0/wb_cyc_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_cyc_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_dat_o [get_bd_pins gpio_wrapper_0/wb_dat_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_dat_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_sel_o [get_bd_pins gpio_wrapper_0/wb_sel_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_sel_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_stb_o [get_bd_pins gpio_wrapper_0/wb_stb_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_stb_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_gpio_we_o [get_bd_pins gpio_wrapper_0/wb_we_i] [get_bd_pins intcon_wrapper_bd_0/wb_gpio_we_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_adr_o [get_bd_pins bootrom_wrapper_0/i_wb_adr] [get_bd_pins intcon_wrapper_bd_0/wb_rom_adr_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_cyc_o [get_bd_pins bootrom_wrapper_0/i_wb_cyc] [get_bd_pins intcon_wrapper_bd_0/wb_rom_cyc_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_dat_o [get_bd_pins bootrom_wrapper_0/i_wb_dat] [get_bd_pins intcon_wrapper_bd_0/wb_rom_dat_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_sel_o [get_bd_pins bootrom_wrapper_0/i_wb_sel] [get_bd_pins intcon_wrapper_bd_0/wb_rom_sel_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_stb_o [get_bd_pins bootrom_wrapper_0/i_wb_stb] [get_bd_pins intcon_wrapper_bd_0/wb_rom_stb_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_rom_we_o [get_bd_pins bootrom_wrapper_0/i_wb_we] [get_bd_pins intcon_wrapper_bd_0/wb_rom_we_o]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_adr_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_adr_o] [get_bd_pins syscon_wrapper_0/i_wb_adr]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_cyc_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_cyc_o] [get_bd_pins syscon_wrapper_0/i_wb_cyc]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_dat_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_dat_o] [get_bd_pins syscon_wrapper_0/i_wb_dat]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_sel_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_sel_o] [get_bd_pins syscon_wrapper_0/i_wb_sel]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_stb_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_stb_o] [get_bd_pins syscon_wrapper_0/i_wb_stb]
  connect_bd_net -net intcon_wrapper_bd_0_wb_sys_we_o [get_bd_pins intcon_wrapper_bd_0/wb_sys_we_o] [get_bd_pins syscon_wrapper_0/i_wb_we]
  connect_bd_net -net rst_0_1 [get_bd_ports rst_0] [get_bd_pins bootrom_wrapper_0/i_rst] [get_bd_pins gpio_wrapper_0/wb_rst_i] [get_bd_pins intcon_wrapper_bd_0/rst_ni_wrapper] [get_bd_pins swerv_wrapper_verilog_0/rst] [get_bd_pins syscon_wrapper_0/i_rst]
  connect_bd_net -net swerv_wrapper_verilog_0_dmi_reg_rdata [get_bd_ports dmi_reg_rdata_0] [get_bd_pins swerv_wrapper_verilog_0/dmi_reg_rdata]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_araddr [get_bd_pins intcon_wrapper_bd_0/i_ifu_araddr] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_araddr]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arburst [get_bd_pins intcon_wrapper_bd_0/i_ifu_arburst] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arburst]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arcache [get_bd_pins intcon_wrapper_bd_0/i_ifu_arcache] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arcache]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arid [get_bd_pins intcon_wrapper_bd_0/i_ifu_arid] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arid]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arlen [get_bd_pins intcon_wrapper_bd_0/i_ifu_arlen] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arlen]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arlock [get_bd_pins intcon_wrapper_bd_0/i_ifu_arlock] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arlock]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arprot [get_bd_pins intcon_wrapper_bd_0/i_ifu_arprot] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arprot]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arqos [get_bd_pins intcon_wrapper_bd_0/i_ifu_arqos] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arqos]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arregion [get_bd_pins intcon_wrapper_bd_0/i_ifu_arregion] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arregion]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arsize [get_bd_pins intcon_wrapper_bd_0/i_ifu_arsize] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arsize]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_arvalid [get_bd_pins intcon_wrapper_bd_0/i_ifu_arvalid] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_arvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_ifu_axi_rready [get_bd_pins intcon_wrapper_bd_0/i_ifu_rready] [get_bd_pins swerv_wrapper_verilog_0/ifu_axi_rready]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_araddr [get_bd_pins intcon_wrapper_bd_0/i_lsu_araddr] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_araddr]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arburst [get_bd_pins intcon_wrapper_bd_0/i_lsu_arburst] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arburst]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arcache [get_bd_pins intcon_wrapper_bd_0/i_lsu_arcache] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arcache]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arid [get_bd_pins intcon_wrapper_bd_0/i_lsu_arid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arid]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arlen [get_bd_pins intcon_wrapper_bd_0/i_lsu_arlen] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arlen]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arlock [get_bd_pins intcon_wrapper_bd_0/i_lsu_arlock] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arlock]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arprot [get_bd_pins intcon_wrapper_bd_0/i_lsu_arprot] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arprot]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arqos [get_bd_pins intcon_wrapper_bd_0/i_lsu_arqos] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arqos]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arregion [get_bd_pins intcon_wrapper_bd_0/i_lsu_arregion] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arregion]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arsize [get_bd_pins intcon_wrapper_bd_0/i_lsu_arsize] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arsize]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_arvalid [get_bd_pins intcon_wrapper_bd_0/i_lsu_arvalid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_arvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awaddr [get_bd_pins intcon_wrapper_bd_0/i_lsu_awaddr] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awaddr]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awburst [get_bd_pins intcon_wrapper_bd_0/i_lsu_awburst] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awburst]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awcache [get_bd_pins intcon_wrapper_bd_0/i_lsu_awcache] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awcache]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awid [get_bd_pins intcon_wrapper_bd_0/i_lsu_awid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awid]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awlen [get_bd_pins intcon_wrapper_bd_0/i_lsu_awlen] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awlen]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awlock [get_bd_pins intcon_wrapper_bd_0/i_lsu_awlock] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awlock]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awprot [get_bd_pins intcon_wrapper_bd_0/i_lsu_awprot] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awprot]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awqos [get_bd_pins intcon_wrapper_bd_0/i_lsu_awqos] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awqos]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awregion [get_bd_pins intcon_wrapper_bd_0/i_lsu_awregion] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awregion]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awsize [get_bd_pins intcon_wrapper_bd_0/i_lsu_awsize] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awsize]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_awvalid [get_bd_pins intcon_wrapper_bd_0/i_lsu_awvalid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_awvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_bready [get_bd_pins intcon_wrapper_bd_0/i_lsu_bready] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_bready]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_rready [get_bd_pins intcon_wrapper_bd_0/i_lsu_rready] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_rready]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_wdata [get_bd_pins intcon_wrapper_bd_0/i_lsu_wdata] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_wdata]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_wlast [get_bd_pins intcon_wrapper_bd_0/i_lsu_wlast] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_wlast]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_wstrb [get_bd_pins intcon_wrapper_bd_0/i_lsu_wstrb] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_wstrb]
  connect_bd_net -net swerv_wrapper_verilog_0_lsu_axi_wvalid [get_bd_pins intcon_wrapper_bd_0/i_lsu_wvalid] [get_bd_pins swerv_wrapper_verilog_0/lsu_axi_wvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_araddr [get_bd_pins intcon_wrapper_bd_0/i_sb_araddr] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_araddr]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arburst [get_bd_pins intcon_wrapper_bd_0/i_sb_arburst] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arburst]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arcache [get_bd_pins intcon_wrapper_bd_0/i_sb_arcache] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arcache]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arid [get_bd_pins intcon_wrapper_bd_0/i_sb_arid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arid]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arlen [get_bd_pins intcon_wrapper_bd_0/i_sb_arlen] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arlen]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arlock [get_bd_pins intcon_wrapper_bd_0/i_sb_arlock] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arlock]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arprot [get_bd_pins intcon_wrapper_bd_0/i_sb_arprot] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arprot]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arqos [get_bd_pins intcon_wrapper_bd_0/i_sb_arqos] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arqos]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arregion [get_bd_pins intcon_wrapper_bd_0/i_sb_arregion] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arregion]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arsize [get_bd_pins intcon_wrapper_bd_0/i_sb_arsize] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arsize]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_arvalid [get_bd_pins intcon_wrapper_bd_0/i_sb_arvalid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_arvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awaddr [get_bd_pins intcon_wrapper_bd_0/i_sb_awaddr] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awaddr]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awburst [get_bd_pins intcon_wrapper_bd_0/i_sb_awburst] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awburst]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awcache [get_bd_pins intcon_wrapper_bd_0/i_sb_awcache] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awcache]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awid [get_bd_pins intcon_wrapper_bd_0/i_sb_awid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awid]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awlen [get_bd_pins intcon_wrapper_bd_0/i_sb_awlen] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awlen]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awlock [get_bd_pins intcon_wrapper_bd_0/i_sb_awlock] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awlock]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awprot [get_bd_pins intcon_wrapper_bd_0/i_sb_awprot] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awprot]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awqos [get_bd_pins intcon_wrapper_bd_0/i_sb_awqos] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awqos]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awregion [get_bd_pins intcon_wrapper_bd_0/i_sb_awregion] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awregion]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awsize [get_bd_pins intcon_wrapper_bd_0/i_sb_awsize] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awsize]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_awvalid [get_bd_pins intcon_wrapper_bd_0/i_sb_awvalid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_awvalid]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_bready [get_bd_pins intcon_wrapper_bd_0/i_sb_bready] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_bready]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_rready [get_bd_pins intcon_wrapper_bd_0/i_sb_rready] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_rready]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_wdata [get_bd_pins intcon_wrapper_bd_0/i_sb_wdata] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_wdata]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_wlast [get_bd_pins intcon_wrapper_bd_0/i_sb_wlast] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_wlast]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_wstrb [get_bd_pins intcon_wrapper_bd_0/i_sb_wstrb] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_wstrb]
  connect_bd_net -net swerv_wrapper_verilog_0_sb_axi_wvalid [get_bd_pins intcon_wrapper_bd_0/i_sb_wvalid] [get_bd_pins swerv_wrapper_verilog_0/sb_axi_wvalid]
  connect_bd_net -net syscon_wrapper_0_AN [get_bd_ports AN_0] [get_bd_pins syscon_wrapper_0/AN]
  connect_bd_net -net syscon_wrapper_0_Digits_Bits [get_bd_ports Digits_Bits_0] [get_bd_pins syscon_wrapper_0/Digits_Bits]
  connect_bd_net -net syscon_wrapper_0_o_nmi_int [get_bd_pins swerv_wrapper_verilog_0/nmi_int] [get_bd_pins syscon_wrapper_0/o_nmi_int]
  connect_bd_net -net syscon_wrapper_0_o_nmi_vec [get_bd_pins swerv_wrapper_verilog_0/nmi_vec] [get_bd_pins syscon_wrapper_0/o_nmi_vec]
  connect_bd_net -net syscon_wrapper_0_o_timer_irq [get_bd_pins swerv_wrapper_verilog_0/timer_int] [get_bd_pins syscon_wrapper_0/o_timer_irq]
  connect_bd_net -net syscon_wrapper_0_o_wb_ack [get_bd_pins intcon_wrapper_bd_0/wb_sys_ack_i] [get_bd_pins syscon_wrapper_0/o_wb_ack]
  connect_bd_net -net syscon_wrapper_0_o_wb_rdt [get_bd_pins intcon_wrapper_bd_0/wb_sys_dat_i] [get_bd_pins syscon_wrapper_0/o_wb_rdt]

  # Create address segments


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


