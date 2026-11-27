// 007747f1 assert_failed

/* <alloc[12e961f32105355]::vec::Vec<_, _>>::swap_remove::assert_failed */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<_,_>>::swap_remove::assert_failed
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  (*(code *)PTR_panic_fmt_007991a8)(&local_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798170);
  (*(code *)PTR_panic_fmt_007991a8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


