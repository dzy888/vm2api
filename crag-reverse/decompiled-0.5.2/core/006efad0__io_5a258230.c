// 006efad0 io

/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* <tokio[d7d91d38da47d894]::runtime::driver::Handle>::io */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::driver::Handle>::io
          (ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x44) != -1) {
    return param_1;
  }
  (*(code *)PTR_expect_failed_00799440)(param_4,param_2);
  uVar3 = anon_3e483e6b3ccbdca1751358c89510dd96_17_llvm_15764310632135838254._8_8_;
  uVar2 = anon_3e483e6b3ccbdca1751358c89510dd96_17_llvm_15764310632135838254._0_8_;
  uVar5 = *(ulonglong *)
           (anon_3e483e6b3ccbdca1751358c89510dd96_17_llvm_15764310632135838254._8_8_ + 0x10);
  uVar4 = 0;
  if (*(code **)anon_3e483e6b3ccbdca1751358c89510dd96_17_llvm_15764310632135838254._8_8_ !=
      (code *)0x0) {
    uVar4 = (**(code **)anon_3e483e6b3ccbdca1751358c89510dd96_17_llvm_15764310632135838254._8_8_)
                      (uVar5 - 1 & 0xfffffffffffffff0);
  }
  if (uVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(uVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar6 = 8;
      if (8 < uVar5) {
        uVar6 = uVar5;
      }
      uVar4 = *(longlong *)(uVar3 + 8) + uVar6 + 0xf;
      if ((-uVar6 & uVar4) != 0) {
        uVar5 = (*(code *)PTR_free_0079adc8)();
        return uVar5;
      }
    }
  }
  return uVar4;
}


