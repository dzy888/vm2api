// 00177ff0 {closure#11}

/* WARNING: Switch with 1 destination removed at 0x0017805b */
/* craggemini[b21da2d71f2da7a3]::entry::{closure#11} */

void __rustcall
craggemini[b21da2d71f2da7a3]::entry::_closure_11_(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  lVar1 = (*(code *)PTR_parent_00219ef0)();
  if (lVar1 == 0) {
    *param_1 = 0xffffffffffffffff;
    lVar1 = *param_2;
    local_30 = extraout_XMM0_Da;
  }
  else {
    (*(code *)PTR__join_00219ef8)("manifest.json");
    param_1[2] = local_20;
    *(undefined4 *)param_1 = local_30;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
    lVar1 = *param_2;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(local_30,1);
  return;
}


