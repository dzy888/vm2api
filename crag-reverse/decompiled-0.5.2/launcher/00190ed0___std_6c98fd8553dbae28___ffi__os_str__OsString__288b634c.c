// 00190ed0 <std[6c98fd8553dbae28]::ffi::os_str::OsString>

/* std[6c98fd8553dbae28]::fs::read::<std[6c98fd8553dbae28]::ffi::os_str::OsString>
   std[6c98fd8553dbae28]::fs::read::<std[6c98fd8553dbae28]::path::PathBuf> */

undefined8 __rustcall
std[6c98fd8553dbae28]::fs::read::<std[6c98fd8553dbae28]::ffi::os_str::OsString>
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_inner_00219db8)(param_4,param_2[2]);
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  return param_1;
}


