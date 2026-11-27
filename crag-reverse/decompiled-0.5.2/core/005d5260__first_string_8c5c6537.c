// 005d5260 first_string

/* craggemini_core[66f3c71560d70857]::credential::first_string */

void __rustcall
craggemini_core[66f3c71560d70857]::credential::first_string
          (longlong *param_1,char *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong extraout_RDX;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 uVar17;
  longlong local_68;
  undefined8 uVar18;
  longlong local_50;
  
  lVar10 = 1;
  if ((*param_2 == '\x05') && (lVar7 = *(longlong *)(param_2 + 8), lVar7 != 0)) {
    uVar18 = *param_3;
    uVar2 = param_3[1];
    local_50 = *(longlong *)(param_2 + 0x10);
    lVar10 = lVar7;
    local_68 = local_50;
    do {
      uVar12 = (ulonglong)*(ushort *)(lVar10 + 0x272);
      pcVar15 = (char *)(lVar10 + -0x20);
      uVar6 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x272) * 8);
      lVar11 = uVar6 * 3;
      uVar13 = 0xffffffffffffffff;
      lVar4 = lVar10 + 0x168;
      do {
        if (lVar11 == 0) goto LAB_005d5355;
        uVar9 = *(ulonglong *)(lVar4 + 0x10);
        uVar8 = uVar9;
        if (uVar2 < uVar9) {
          uVar8 = uVar2;
        }
        iVar3 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar8,param_5,param_6,uVar18);
        lVar14 = uVar2 - uVar9;
        if (iVar3 != 0) {
          lVar14 = (longlong)iVar3;
        }
        bVar5 = (0 < lVar14) - (lVar14 < 0);
        uVar6 = (ulonglong)bVar5;
        pcVar15 = pcVar15 + 0x20;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + -0x18;
        lVar4 = lVar4 + 0x18;
      } while (bVar5 == 1);
      uVar12 = uVar13;
      if (bVar5 == 0) goto LAB_005d5462;
LAB_005d5355:
      bVar16 = local_68 == 0;
      local_68 = local_68 + -1;
      if (bVar16) goto LAB_005d5394;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar12 * 8);
    } while( true );
  }
  lVar7 = 0;
  goto LAB_005d537a;
LAB_005d5394:
  uVar18 = param_3[2];
  uVar2 = param_3[3];
  do {
    uVar1 = *(ushort *)(lVar7 + 0x272);
    pcVar15 = (char *)(lVar7 + -0x20);
    uVar6 = (ulonglong)((uint)uVar1 * 8);
    lVar10 = uVar6 * 3;
    uVar12 = 0xffffffffffffffff;
    lVar11 = lVar7 + 0x168;
    do {
      if (lVar10 == 0) {
        uVar12 = (ulonglong)uVar1;
        goto LAB_005d543a;
      }
      uVar13 = *(ulonglong *)(lVar11 + 0x10);
      uVar9 = uVar13;
      if (uVar2 < uVar13) {
        uVar9 = uVar2;
      }
      iVar3 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar9,param_5,param_6,uVar18);
      lVar4 = uVar2 - uVar13;
      if (iVar3 != 0) {
        lVar4 = (longlong)iVar3;
      }
      bVar5 = (0 < lVar4) - (lVar4 < 0);
      uVar6 = (ulonglong)bVar5;
      pcVar15 = pcVar15 + 0x20;
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + -0x18;
      lVar11 = lVar11 + 0x18;
    } while (bVar5 == 1);
    if (bVar5 == 0) break;
LAB_005d543a:
    bVar16 = local_50 == 0;
    local_50 = local_50 + -1;
    if (bVar16) goto LAB_005d54cd;
    lVar7 = *(longlong *)(lVar7 + 0x278 + uVar12 * 8);
  } while( true );
LAB_005d5462:
  if (*pcVar15 == '\x03') {
    ::<str>::trim_matches::<<char>::is_whitespace>
              (*(undefined8 *)(pcVar15 + 0x10),*(undefined8 *)(pcVar15 + 0x18));
    uVar17 = extraout_RDX == 0;
    lVar7 = extraout_RDX;
    if (-1 < extraout_RDX) goto LAB_005d5485;
    do {
      uVar17 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005d5485:
      if ((bool)uVar17) goto LAB_005d54cd;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar10 == 0);
    (*(code *)PTR_memcpy_00799008)();
  }
  else {
LAB_005d54cd:
    lVar7 = 0;
    lVar10 = 1;
  }
LAB_005d537a:
  *param_1 = lVar7;
  param_1[1] = lVar10;
  param_1[2] = lVar7;
  return;
}


