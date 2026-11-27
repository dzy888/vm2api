// 002de400 record_rate_limit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountScoringState>::record_rate_limit */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountScoringState>::record_rate_limit
          (double *param_1,char param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar2 = *param_1;
  lVar1 = (longlong)param_3 - (longlong)param_1[4];
  if ((ulonglong)param_1[4] <= (ulonglong)param_3 && lVar1 != 0) {
    auVar4._8_4_ = (int)((ulonglong)lVar1 >> 0x20);
    auVar4._0_8_ = lVar1;
    auVar4._12_4_ = DAT_00182b10._4_4_;
    dVar5 = ((auVar4._8_8_ - _UNK_00182568) +
            ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar1) - _DAT_00182560)) / _s__00185460;
    dVar3 = _DAT_001852a8 * dVar5 + param_1[1];
    if (_DAT_00185410 <= dVar3) {
      dVar3 = _DAT_00185410;
    }
    param_1[1] = dVar3;
    dVar5 = dVar5 / _s__00185430;
    dVar2 = dVar2 + dVar5 + dVar5;
    if (DAT_001852c8 <= dVar2) {
      dVar2 = DAT_001852c8;
    }
    param_1[4] = param_3;
  }
  dVar3 = dVar2 + _s__001851d8;
  if (dVar2 + _s__001851d8 <= 0.0) {
    dVar3 = 0.0;
  }
  *param_1 = dVar3;
  if (param_2 == '\0') {
    dVar2 = param_1[2] * _DAT_00185448;
    if (param_1[2] * _DAT_00185448 <= DAT_00185258) {
      dVar2 = DAT_00185258;
    }
  }
  else {
    dVar2 = 0.0;
    if (param_2 != '\x01') {
      dVar2 = param_1[2] * _DAT_001852d0;
      if (param_1[2] * _DAT_001852d0 <= _DAT_001852a8) {
        dVar2 = _DAT_001852a8;
      }
      param_1[2] = dVar2;
      return;
    }
  }
  param_1[2] = dVar2;
  return;
}


