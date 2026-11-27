// 00041bc0 fatal

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::fatal */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::fatal
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  code *local_8;
  
  local_10 = &local_20;
  local_8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_20 = param_2;
  local_18 = param_3;
  (*(code *)PTR__eprint_000c3bc0)();
  (*(code *)PTR__exit_000c3cb8)();
  return;
}


