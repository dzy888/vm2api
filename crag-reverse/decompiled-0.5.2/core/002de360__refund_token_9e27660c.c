// 002de360 refund_token

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountScoringState>::refund_token */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountScoringState>::refund_token
          (double *param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  lVar1 = (longlong)param_2 - (longlong)param_1[4];
  if ((ulonglong)param_2 < (ulonglong)param_1[4] || lVar1 == 0) {
    dVar2 = param_1[1] + _s__00185250;
    if (_DAT_00185410 <= param_1[1] + _s__00185250) {
      dVar2 = _DAT_00185410;
    }
    param_1[1] = dVar2;
    return;
  }
  auVar3._8_4_ = (int)((ulonglong)lVar1 >> 0x20);
  auVar3._0_8_ = lVar1;
  auVar3._12_4_ = DAT_00182b10._4_4_;
  dVar4 = ((auVar3._8_8_ - _UNK_00182568) +
          ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar1) - _DAT_00182560)) / _s__00185460;
  dVar2 = _DAT_001852a8 * dVar4 + param_1[1];
  if (_DAT_00185410 <= dVar2) {
    dVar2 = _DAT_00185410;
  }
  dVar4 = dVar4 / _s__00185430;
  dVar4 = dVar4 + dVar4 + *param_1;
  if (DAT_001852c8 <= dVar4) {
    dVar4 = DAT_001852c8;
  }
  *param_1 = dVar4;
  param_1[4] = param_2;
  dVar4 = dVar2 + _s__00185250;
  if (_DAT_00185410 <= dVar2 + _s__00185250) {
    dVar4 = _DAT_00185410;
  }
  param_1[1] = dVar4;
  return;
}


