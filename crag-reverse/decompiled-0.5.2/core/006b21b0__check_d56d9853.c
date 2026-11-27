// 006b21b0 check

/* <hyper[c4782d5b5c5e3493]::common::time::Time>::check */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::common::time::Time>::check
          (longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  code *local_8;
  
  if (*param_2 == 1) {
    if (param_2[4] != -1) {
      if (*param_1 == 0) {
        local_10 = &local_20;
        local_8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        ppuVar3 = &PTR_s__vendor_hyper_1_12_0_src_common__007920c0;
        local_20 = param_3;
        local_18 = param_4;
        (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__vendor_hyper_1_12_0_src_common__007920c0);
        pcVar1 = (code *)swi(3);
        auVar7._0_8_ = (*pcVar1)();
        auVar7._8_8_ = ppuVar3;
        return auVar7;
      }
      auVar4._8_4_ = param_2[4];
      auVar4._0_8_ = *(undefined8 *)(param_2 + 2);
      auVar4._12_4_ = 0;
      return auVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (param_2[4] != 0xffffffff) {
      if (*param_1 != 0) {
        in_RAX = *(undefined8 *)(param_2 + 2);
        uVar2 = (ulonglong)(uint)param_2[4];
      }
      auVar5._8_8_ = uVar2;
      auVar5._0_8_ = in_RAX;
      return auVar5;
    }
  }
  auVar6._8_8_ = 0xffffffff;
  auVar6._0_8_ = in_RAX;
  return auVar6;
}


