// 0066a8c0 <std[6c98fd8553dbae28]::path::PathBuf>

/* <std[6c98fd8553dbae28]::path::Path>::join::<std[6c98fd8553dbae28]::path::PathBuf>
   <std[6c98fd8553dbae28]::path::Path>::join::<alloc[12e961f32105355]::string::String>
   <std[6c98fd8553dbae28]::path::Path>::join::<std[6c98fd8553dbae28]::ffi::os_str::OsString> */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::Path>::join::<std[6c98fd8553dbae28]::path::PathBuf>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  (*(code *)PTR__join_00799210)(param_4[1],param_3,param_4[2]);
  if (*param_4 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


