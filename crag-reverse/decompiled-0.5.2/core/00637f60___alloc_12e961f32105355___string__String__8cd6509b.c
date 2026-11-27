// 00637f60 <alloc[12e961f32105355]::string::String>

/* <tokio[d7d91d38da47d894]::process::Command>::arg::<alloc[12e961f32105355]::string::String> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::arg::<alloc[12e961f32105355]::string::String>
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_arg_00799368)(param_4,param_2[2]);
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  return param_1;
}


