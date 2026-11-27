// 0020c7f5 assert_failed_inner

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed_inner */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed_inner
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_2;
  local_10 = param_3;
  if (param_6 == 0) {
    (*(code *)PTR_panic_fmt_0021a010)
              (&local_28,param_8,param_5,0,&local_28,
               <&dyn_core[c0acaeba6ab4c2e0]::fmt::Debug_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt)
    ;
  }
  (*(code *)PTR_panic_fmt_0021a010)();
  (*(code *)PTR_panic_nounwind_0021aa78)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


