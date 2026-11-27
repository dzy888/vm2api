// 00034f90 {closure#1}

/* agy_bridge[64a9e9deac6c45ce]::start::{closure#1} */

undefined8 __rustcall
agy_bridge[64a9e9deac6c45ce]::start::_closure_1_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_<&str>_000c3b30)(param_4,0x1e);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Runtime>
            (param_1,"agy bridge already initialized");
  return uVar1;
}


