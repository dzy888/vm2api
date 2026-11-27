// 00637fc0 <&str,alloc[12e961f32105355]::string::String>

/* <tokio[d7d91d38da47d894]::process::Command>::env::<&str, alloc[12e961f32105355]::string::String>
   <tokio[d7d91d38da47d894]::process::Command>::env::<&str, std[6c98fd8553dbae28]::path::PathBuf> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::env::<&str,alloc[12e961f32105355]::string::String>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  (*(code *)PTR_set_00799380)(param_4[1],param_3,param_4[2]);
  if (*param_4 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


