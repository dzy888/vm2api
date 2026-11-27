// 000905f0 allocate

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::allocate */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::allocate
          (char *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = param_2 == 0;
  if (-1 < param_2) goto LAB_00090615;
  uVar6 = true;
  pcVar3 = (char *)0x0;
  while( true ) {
    param_1 = pcVar3;
    (*(code *)PTR_handle_error_000c3a98)();
LAB_00090615:
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    if ((bool)uVar6) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar4 = (*(code *)PTR___rust_alloc_zeroed_000c3b88)();
    uVar6 = lVar4 == 0;
    pcVar3 = Elf64_Ehdr_00000000.e_ident_magic_str;
    if (!(bool)uVar6) {
      uVar5 = *(ulonglong *)(param_1 + 0x10);
      if (uVar5 == *(ulonglong *)param_1) {
LAB_00090659:
        (*(code *)PTR_grow_one_000c4070)();
      }
LAB_00090662:
      uVar2 = *(ulonglong *)(param_1 + 8);
      *(longlong *)(uVar2 + uVar5 * 0x18) = param_2;
      *(longlong *)(uVar2 + 8 + uVar5 * 0x18) = lVar4;
      *(longlong *)(uVar2 + 0x10 + uVar5 * 0x18) = param_2;
      *(ulonglong *)(param_1 + 0x10) = uVar5 + 1;
      if (uVar1 < uVar5 + 1) {
        auVar7._8_8_ = *(undefined8 *)(*(ulonglong *)(param_1 + 8) + 0x10 + uVar1 * 0x18);
        auVar7._0_8_ = *(undefined8 *)(*(ulonglong *)(param_1 + 8) + 8 + uVar1 * 0x18);
        return auVar7;
      }
      (*(code *)PTR_panic_bounds_check_000c3dd8)
                (uVar5 * 3,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c18b0);
      if (param_2 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  lVar4 = 1;
  uVar5 = uVar1;
  if (uVar1 != *(ulonglong *)param_1) goto LAB_00090662;
  goto LAB_00090659;
}


