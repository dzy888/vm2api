// 001a9c10 peek_position

/* <serde_json[dc3825464c436029]::read::StrRead as
   serde_json[dc3825464c436029]::read::Read>::peek_position */

undefined1  [16] __rustcall
<serde_json[dc3825464c436029]::read::StrRead_as_serde_json[dc3825464c436029]::read::Read>::
peek_position(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  uVar3 = param_1[2] + 1U;
  if ((ulonglong)param_1[1] <= param_1[2] + 1U) {
    uVar3 = param_1[1];
  }
  lVar2 = *param_1;
  lVar4 = lVar2 + uVar3;
  lVar1 = (**(code **)PTR_FN_0021a478)(param_4,lVar4);
  if (lVar1 == 1) {
    lVar4 = (lVar4 - lVar2) + 1;
  }
  else {
    lVar4 = 0;
  }
  lVar2 = (**(code **)PTR_FN_0021a480)(param_4,lVar2 + lVar4);
  auVar5._0_8_ = lVar2 + 1;
  auVar5._8_8_ = uVar3 - lVar4;
  return auVar5;
}


