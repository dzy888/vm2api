// 0005cc20 parse_decimal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::parse_decimal
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
parse_decimal(undefined8 *param_1,longlong param_2,char param_3,ulonglong param_4,ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 local_48 [3];
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  uVar9 = uVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar9;
  if (uVar9 < uVar2) {
    iVar7 = (int)uVar3 + 1;
    lVar10 = 0;
    do {
      bVar1 = *(byte *)(uVar9 + *(longlong *)(param_2 + 0x18) + lVar10);
      bVar6 = bVar1 - 0x30;
      if (9 < bVar6) {
        if ((int)lVar10 != 0) {
          uVar9 = (param_5 & 0xffffffff) - lVar10;
          if ((bVar1 | 0x20) == 0x65) {
            parse_exponent(param_1,param_2,param_3);
            return;
          }
          goto LAB_0005cd1c;
        }
        local_48[0] = 0xd;
        goto LAB_0005ce05;
      }
      if ((0x1999999999999998 < param_4) && ((param_4 != 0x1999999999999999 || (5 < bVar6)))) {
        parse_decimal_overflow(param_1,param_2,param_3,param_4,(int)param_5 - (int)lVar10);
        return;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3 + 2 + lVar10;
      param_4 = param_4 * 10 + (ulonglong)bVar6;
      lVar10 = lVar10 + 1;
    } while (~uVar3 + uVar2 != lVar10);
    if (iVar7 != (int)uVar2) {
      uVar9 = (ulonglong)(uint)((iVar7 + (int)param_5) - (int)uVar2);
LAB_0005cd1c:
      auVar12._8_4_ = (int)(param_4 >> 0x20);
      auVar12._0_8_ = param_4;
      auVar12._12_4_ = _UNK_00008c74;
      dVar11 = (auVar12._8_8_ - _UNK_00008b98) +
               ((double)CONCAT44(_s__00008c70,(int)param_4) - _DAT_00008b90);
      uVar8 = (uint)uVar9;
      uVar4 = -uVar8;
      if ((int)-uVar8 < 0) {
        uVar4 = uVar8;
      }
      while (0x134 < uVar4) {
        if ((dVar11 == 0.0) && (!NAN(dVar11))) goto joined_r0x0005cdef;
        if (-1 < (int)uVar9) goto LAB_0005ce23;
        dVar11 = dVar11 / DAT_0000b9f8;
        uVar8 = (int)uVar9 + 0x134;
        uVar9 = (ulonglong)uVar8;
        uVar4 = -uVar8;
        if ((int)-uVar8 < 0) {
          uVar4 = uVar8;
        }
      }
      if ((int)uVar8 < 0) {
        dVar11 = dVar11 / *(double *)(PTR_POW10_000c3d58 + (ulonglong)uVar4 * 8);
      }
      else {
        dVar11 = dVar11 * *(double *)(PTR_POW10_000c3d58 + (ulonglong)uVar4 * 8);
        if (ABS(dVar11) == INFINITY) {
LAB_0005ce23:
          local_48[0] = 0xe;
          uVar5 = error(param_2,local_48);
          param_1[1] = uVar5;
          *param_1 = 1;
          return;
        }
      }
joined_r0x0005cdef:
      if (param_3 == '\0') {
        dVar11 = (double)((ulonglong)dVar11 ^ _DAT_000090e0);
      }
      param_1[1] = dVar11;
      *param_1 = 0;
      return;
    }
  }
  local_48[0] = 5;
LAB_0005ce05:
  uVar5 = peek_error(param_2,local_48);
  param_1[1] = uVar5;
  *param_1 = 1;
  return;
}


