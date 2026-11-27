// 00722950 position

/* <serde_json[dc3825464c436029]::read::SliceRead as
   serde_json[dc3825464c436029]::read::Read>::position */

undefined1  [16] __rustcall
<serde_json[dc3825464c436029]::read::SliceRead_as_serde_json[dc3825464c436029]::read::Read>::
position(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar5 = param_1[1];
  uVar1 = param_1[2];
  if (uVar5 < uVar1) {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302);
    pcVar2 = (code *)swi(3);
    auVar8._0_8_ = (*pcVar2)();
    auVar8._8_8_ = uVar5;
    return auVar8;
  }
  lVar4 = *param_1;
  lVar6 = lVar4 + uVar1;
  lVar3 = (**(code **)PTR_FN_0079ab30)(param_4,lVar6);
  if (lVar3 == 1) {
    lVar6 = (lVar6 - lVar4) + 1;
  }
  else {
    lVar6 = 0;
  }
  lVar4 = (**(code **)PTR_FN_0079ab38)();
  auVar7._0_8_ = lVar4 + 1;
  auVar7._8_8_ = uVar1 - lVar6;
  return auVar7;
}


