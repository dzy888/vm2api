// 00740a40 allocate

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::allocate */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::allocate
          (ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = param_2 == 0;
  if (-1 < param_2) goto LAB_00740a65;
  uVar6 = true;
  puVar3 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar3;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00740a65:
    uVar1 = param_1[2];
    if ((bool)uVar6) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    uVar6 = lVar4 == 0;
    puVar3 = (ulonglong *)0x1;
    if (!(bool)uVar6) {
      uVar5 = param_1[2];
      if (uVar5 == *param_1) {
LAB_00740aa9:
        (*(code *)PTR_grow_one_0079a528)();
      }
LAB_00740ab2:
      uVar2 = param_1[1];
      *(longlong *)(uVar2 + uVar5 * 0x18) = param_2;
      *(longlong *)(uVar2 + 8 + uVar5 * 0x18) = lVar4;
      *(longlong *)(uVar2 + 0x10 + uVar5 * 0x18) = param_2;
      param_1[2] = uVar5 + 1;
      if (uVar1 < uVar5 + 1) {
        auVar7._8_8_ = *(undefined8 *)(param_1[1] + 0x10 + uVar1 * 0x18);
        auVar7._0_8_ = *(undefined8 *)(param_1[1] + 8 + uVar1 * 0x18);
        return auVar7;
      }
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar5 * 3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796798);
      if (param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  lVar4 = 1;
  uVar5 = uVar1;
  if (uVar1 != *param_1) goto LAB_00740ab2;
  goto LAB_00740aa9;
}


