// 00721070 index_into

/* <str as serde_json[dc3825464c436029]::value::index::Index>::index_into */

longlong __rustcall
<str_as_serde_json[dc3825464c436029]::value::index::Index>::index_into
          (undefined8 param_1,ulonglong param_2,char *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_50;
  
  if ((*param_3 != '\x05') || (lVar6 = *(longlong *)(param_3 + 8), lVar6 == 0)) {
    return 0;
  }
  local_50 = *(longlong *)(param_3 + 0x10);
  do {
    uVar1 = *(ushort *)(lVar6 + 0x272);
    lVar12 = lVar6 + -0x20;
    uVar7 = (ulonglong)((uint)uVar1 * 8);
    lVar10 = uVar7 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar4 = lVar6 + 0x168;
    do {
      if (lVar10 == 0) {
        uVar11 = (ulonglong)uVar1;
        goto LAB_00721145;
      }
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      uVar8 = uVar2;
      if (param_2 < uVar2) {
        uVar8 = param_2;
      }
      iVar3 = (*(code *)PTR_memcmp_00799528)(uVar7,uVar8,param_5,param_6,param_1);
      lVar9 = param_2 - uVar2;
      if (iVar3 != 0) {
        lVar9 = (longlong)iVar3;
      }
      bVar5 = (0 < lVar9) - (lVar9 < 0);
      uVar7 = (ulonglong)bVar5;
      lVar12 = lVar12 + 0x20;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + -0x18;
      lVar4 = lVar4 + 0x18;
    } while (bVar5 == 1);
    if (bVar5 == 0) {
      return lVar12;
    }
LAB_00721145:
    bVar13 = local_50 == 0;
    local_50 = local_50 + -1;
    if (bVar13) {
      return 0;
    }
    lVar6 = *(longlong *)(lVar6 + 0x278 + uVar11 * 8);
  } while( true );
}


