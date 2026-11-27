// 0018e4b0 <alloc[12e961f32105355]::string::String>

/* <std[6c98fd8553dbae28]::process::Command>::new::<alloc[12e961f32105355]::string::String> */

undefined8 __rustcall
<std[6c98fd8553dbae28]::process::Command>::new::<alloc[12e961f32105355]::string::String>
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_new_0021a1f8)(param_4,param_2[2]);
  (*(code *)PTR_memcpy_00219c60)(param_4,200);
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  return param_1;
}


