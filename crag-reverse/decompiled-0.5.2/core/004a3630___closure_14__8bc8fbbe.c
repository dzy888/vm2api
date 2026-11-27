// 004a3630 {closure#14}

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#14} */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_14_
          (longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar7 = *param_2;
  if (uVar1 != 0) {
    if ((uVar7 | uVar1) >> 0x20 == 0) {
      uVar3 = (uVar7 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      uVar3 = uVar7 % uVar1;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
              (local_58,*(longlong *)(lVar2 + 8 + uVar3 * 0x10) + 0x10);
    if (uVar1 == 1) {
      uVar7 = 0;
    }
    else {
      lVar6 = uVar1 - 1;
      uVar8 = local_48;
      uVar5 = uVar7;
      do {
        uVar5 = uVar5 + 1;
        if ((uVar5 | uVar1) >> 0x20 == 0) {
          uVar4 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
        }
        else {
          uVar4 = uVar5 % uVar1;
        }
        <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                  (local_58,*(longlong *)(lVar2 + 8 + uVar4 * 0x10) + 0x10);
        uVar7 = uVar3;
        if (local_48 < uVar8) {
          uVar7 = uVar4;
        }
        if (local_48 <= uVar8) {
          uVar8 = local_48;
        }
        lVar6 = lVar6 + -1;
        uVar3 = uVar7;
      } while (lVar6 != 0);
    }
  }
  return uVar7;
}


