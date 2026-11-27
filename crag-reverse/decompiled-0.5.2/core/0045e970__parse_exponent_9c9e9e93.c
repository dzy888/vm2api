// 0045e970 parse_exponent

/* WARNING: Switch with 1 destination removed at 0x0045ea60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_exponent
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_exponent(undefined8 *param_1,longlong param_2,char param_3,longlong param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_28;
  undefined8 auStack_20 [2];
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar9 = lVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar9;
  bVar11 = true;
  if (uVar9 < uVar2) {
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar9);
    bVar11 = true;
    bVar10 = true;
    if (cVar1 != '+') {
      if (cVar1 != '-') goto LAB_0045e9b3;
      bVar10 = false;
    }
    bVar11 = bVar10;
    uVar9 = lVar3 + 2;
    *(ulonglong *)(param_2 + 0x28) = uVar9;
  }
LAB_0045e9b3:
  if (uVar2 <= uVar9) {
    local_28 = 5;
LAB_0045eb64:
    uVar6 = error(param_2,&local_28);
    param_1[1] = uVar6;
    *param_1 = 1;
    return;
  }
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar9);
  *(ulonglong *)(param_2 + 0x28) = uVar9 + 1;
  bVar8 = cVar1 - 0x30;
  if (9 < bVar8) {
    local_28 = 0xd;
    goto LAB_0045eb64;
  }
  uVar7 = (uint)bVar8;
  if (uVar9 + 1 < uVar2) {
    uVar9 = uVar9 + 2;
    uVar7 = (uint)bVar8;
    do {
      bVar8 = *(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9) - 0x30;
      if (9 < bVar8) break;
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      if ((0xccccccb < (int)uVar7) && ((uVar7 != 0xccccccc || (7 < bVar8)))) {
        if (!(bool)(bVar11 ^ 1U | param_4 == 0)) {
          auStack_20[0] = 0xe;
          uVar6 = error(param_2,auStack_20);
          param_1[1] = uVar6;
          *param_1 = 1;
          return;
        }
        uVar9 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar9) goto LAB_0071d024;
        goto LAB_0071d000;
      }
      uVar7 = (uint)bVar8 + uVar7 * 10;
      bVar10 = uVar9 != uVar2;
      uVar9 = uVar9 + 1;
    } while (bVar10);
  }
  if (bVar11) {
    uVar5 = ((int)(param_5 + uVar7) >> 0x1f) + 0x80000000;
    bVar11 = SCARRY4(param_5,uVar7);
  }
  else {
    uVar5 = (-1 < (int)(param_5 - uVar7)) + 0x7fffffff;
    bVar11 = SBORROW4(param_5,uVar7);
    uVar7 = -uVar7;
  }
  uVar7 = param_5 + uVar7;
  if (bVar11) {
    uVar7 = uVar5;
  }
  auVar14._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar14._0_8_ = param_4;
  auVar14._12_4_ = DAT_00182b10._4_4_;
  dVar4 = (auVar14._8_8_ - _UNK_00182568) +
          ((double)CONCAT44((undefined4)DAT_00182b10,(int)param_4) - _DAT_00182560);
  uVar5 = -uVar7;
  if ((int)-uVar7 < 0) {
    uVar5 = uVar7;
  }
  while (0x134 < uVar5) {
    if ((dVar4 == 0.0) && (!NAN(dVar4))) goto joined_r0x0045eb58;
    if (-1 < (int)uVar7) goto LAB_0045eb88;
    dVar4 = dVar4 / DAT_00185128;
    uVar7 = uVar7 + 0x134;
    uVar5 = -uVar7;
    if ((int)-uVar7 < 0) {
      uVar5 = uVar7;
    }
  }
  if ((int)uVar7 < 0) {
    dVar4 = dVar4 / *(double *)(PTR_POW10_00799920 + (ulonglong)uVar5 * 8);
  }
  else {
    dVar4 = dVar4 * *(double *)(PTR_POW10_00799920 + (ulonglong)uVar5 * 8);
    if (ABS(dVar4) == INFINITY) {
LAB_0045eb88:
      local_28 = 0xe;
      uVar6 = error(param_2,&local_28);
      param_1[1] = uVar6;
      uVar6 = 1;
      goto LAB_0045eb47;
    }
  }
joined_r0x0045eb58:
  if (param_3 == '\0') {
    dVar4 = (double)((ulonglong)dVar4 ^ _DAT_00184280);
  }
  param_1[1] = dVar4;
  uVar6 = 0;
LAB_0045eb47:
  *param_1 = uVar6;
  return;
  while (*(ulonglong *)(param_2 + 0x28) = uVar9, uVar9 != *(ulonglong *)(param_2 + 0x20)) {
LAB_0071d000:
    uVar9 = uVar9 + 1;
    if (9 < (byte)(*(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9) - 0x30U)) break;
  }
LAB_0071d024:
  uVar12 = 0;
  uVar13 = 0;
  if (param_3 == '\0') {
    uVar12 = (undefined4)DAT_001852d8;
    uVar13 = (undefined4)((ulonglong)DAT_001852d8 >> 0x20);
  }
  param_1[1] = CONCAT44(uVar13,uVar12);
  *param_1 = 0;
  return;
}


