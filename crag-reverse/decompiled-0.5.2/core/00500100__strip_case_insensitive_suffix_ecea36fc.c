// 00500100 strip_case_insensitive_suffix

/* craggemini_core[66f3c71560d70857]::models::strip_case_insensitive_suffix */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::models::strip_case_insensitive_suffix
          (ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar6._8_8_ = param_2 - param_4;
  if (param_2 < param_4) {
    param_1 = 0;
LAB_0050010e:
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  if ((auVar6._8_8_ != 0) && (*(char *)(param_1 + auVar6._8_8_) < -0x40)) {
    (*(code *)PTR_slice_error_fail_00799408)(param_2,auVar6._8_8_,&PTR_s_src_models_rs_0078cbb8);
    pcVar3 = (code *)swi(3);
    auVar8._0_8_ = (*pcVar3)();
    auVar8._8_8_ = auVar6._8_8_;
    return auVar8;
  }
  uVar5 = 0;
  while (param_4 != uVar5) {
    bVar2 = ((char *)(param_1 + auVar6._8_8_))[uVar5];
    pbVar1 = (byte *)(param_3 + uVar5);
    uVar5 = uVar5 + 1;
    if ((byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2) !=
        (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar6._8_8_;
      return auVar4 << 0x40;
    }
  }
  if (auVar6._8_8_ != 0) {
    if (-0x41 < *(char *)(param_1 + auVar6._8_8_)) goto LAB_0050010e;
    (*(code *)PTR_slice_error_fail_00799408)(auVar6._8_8_,0,&PTR_s_src_models_rs_0078cbd0);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}


