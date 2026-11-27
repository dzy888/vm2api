// 00771540 capacity_overflow

/* <hashbrown[b5c94476ffc33875]::raw::Fallibility>::capacity_overflow */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::raw::Fallibility>::capacity_overflow
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__rust_deps_hashbrown_0_17_1_src__00797d10);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


