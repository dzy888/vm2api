// 00160070 parse_exponent

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::parse_exponent
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
parse_exponent(undefined8 *param_1,longlong param_2,char param_3,longlong param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  bool bVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 local_28 [3];
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar9 = lVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar9;
  cVar7 = '\x01';
  if (uVar9 < uVar2) {
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar9);
    cVar7 = '\x01';
    if (cVar1 != '+') {
      if (cVar1 != '-') goto LAB_001600b3;
      cVar7 = '\0';
    }
    uVar9 = lVar3 + 2;
    *(ulonglong *)(param_2 + 0x28) = uVar9;
  }
LAB_001600b3:
  if (uVar2 <= uVar9) {
    local_28[0] = 5;
LAB_00160264:
    uVar5 = error(param_2,local_28);
    param_1[1] = uVar5;
    *param_1 = 1;
    return;
  }
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar9);
  *(ulonglong *)(param_2 + 0x28) = uVar9 + 1;
  bVar8 = cVar1 - 0x30;
  if (9 < bVar8) {
    local_28[0] = 0xd;
    goto LAB_00160264;
  }
  uVar6 = (uint)bVar8;
  if (uVar9 + 1 < uVar2) {
    uVar9 = uVar9 + 2;
    uVar6 = (uint)bVar8;
    do {
      bVar8 = *(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9) - 0x30;
      if (9 < bVar8) break;
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      if ((0xccccccb < (int)uVar6) && ((uVar6 != 0xccccccc || (7 < bVar8)))) {
        parse_exponent_overflow(param_1,param_2,param_3,param_4 == 0,cVar7);
        return;
      }
      uVar6 = (uint)bVar8 + uVar6 * 10;
      bVar10 = uVar9 != uVar2;
      uVar9 = uVar9 + 1;
    } while (bVar10);
  }
  if (cVar7 == '\0') {
    uVar4 = (-1 < (int)(param_5 - uVar6)) + 0x7fffffff;
    bVar10 = SBORROW4(param_5,uVar6);
    uVar6 = -uVar6;
  }
  else {
    uVar4 = ((int)(param_5 + uVar6) >> 0x1f) + 0x80000000;
    bVar10 = SCARRY4(param_5,uVar6);
  }
  uVar6 = param_5 + uVar6;
  if (bVar10) {
    uVar6 = uVar4;
  }
  auVar12._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar12._0_8_ = param_4;
  auVar12._12_4_ = _UNK_001139c4;
  dVar11 = (auVar12._8_8_ - _UNK_00113858) +
           ((double)CONCAT44(_DAT_001139c0,(int)param_4) - _DAT_00113850);
  uVar4 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar4 = uVar6;
  }
  while (0x134 < uVar4) {
    if ((dVar11 == 0.0) && (!NAN(dVar11))) goto joined_r0x00160258;
    if (-1 < (int)uVar6) goto LAB_00160288;
    dVar11 = dVar11 / DAT_001142e8;
    uVar6 = uVar6 + 0x134;
    uVar4 = -uVar6;
    if ((int)-uVar6 < 0) {
      uVar4 = uVar6;
    }
  }
  if ((int)uVar6 < 0) {
    dVar11 = dVar11 / *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
  }
  else {
    dVar11 = dVar11 * *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
    if (ABS(dVar11) == INFINITY) {
LAB_00160288:
      local_28[0] = 0xe;
      uVar5 = error(param_2,local_28);
      param_1[1] = uVar5;
      uVar5 = 1;
      goto LAB_00160247;
    }
  }
joined_r0x00160258:
  if (param_3 == '\0') {
    dVar11 = (double)((ulonglong)dVar11 ^ _DAT_00113f70);
  }
  param_1[1] = dVar11;
  uVar5 = 0;
LAB_00160247:
  *param_1 = uVar5;
  return;
}


