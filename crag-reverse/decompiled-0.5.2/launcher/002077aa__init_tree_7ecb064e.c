// 002077aa init_tree

/* miniz_oxide[d073f249698f1019]::inflate::core::init_tree */

undefined1  [16] __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::init_tree
          (longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  ushort local_a8 [16];
  int local_88 [20];
  longlong local_38;
  
  local_38 = param_2;
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x28ef));
LAB_002077c8:
  uVar10 = uVar2 & 0xff;
  iVar12 = (int)uVar10;
  if ((char)uVar2 == '\0') {
    uVar8 = 0x120;
    lVar3 = param_1 + 0x2780;
LAB_00207850:
    lVar23 = uVar10 * 0xc80 + param_1 + 0x200;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0x10] = 0;
    lVar4 = 0;
    do {
      *(undefined2 *)(lVar23 + lVar4) = 0x31e;
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x800);
    param_3 = 0x480;
    uVar5 = (*(code *)PTR_memset_00219d00)(0,0x480);
  }
  else {
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        uVar8 = 0x20;
        lVar3 = param_1 + 0x28a0;
        goto LAB_00207850;
      }
      uVar5 = CONCAT71((int7)(uVar2 >> 8),0xff);
      goto LAB_00207b52;
    }
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0x10] = 0;
    lVar3 = 0;
    do {
      *(undefined2 *)(param_1 + 0x1b00 + lVar3) = 0x31e;
      lVar3 = lVar3 + 2;
    } while (lVar3 != 0x800);
    uVar8 = 0x13;
    lVar3 = param_1 + 0x28f1;
    lVar23 = param_1 + 0x1b00;
    uVar5 = 0x800;
  }
  uVar20 = *(ushort *)(param_1 + 0x28e8 + uVar10 * 2);
  uVar2 = (ulonglong)uVar20;
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff);
  param_3 = CONCAT71((int7)(param_3 >> 8),0x1c);
  if (uVar20 <= uVar8) {
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        if (0xf < (ulonglong)*(byte *)(lVar3 + uVar10)) goto LAB_00207b52;
        local_a8[*(byte *)(lVar3 + uVar10)] = local_a8[*(byte *)(lVar3 + uVar10)] + 1;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    uVar16 = 1;
    bVar18 = false;
    iVar14 = 0;
    iVar9 = 0;
    uVar10 = 0;
    do {
      if (bVar18) {
        uVar17 = uVar10 + (uVar10 < 0x10);
        if (0xf < uVar10) goto LAB_00207961;
      }
      else {
        uVar17 = 0x10 - uVar10;
        if (uVar16 <= 0x10 - uVar10) {
          uVar17 = uVar16;
        }
        if (uVar10 <= uVar17 + uVar10) {
          uVar10 = uVar17 + uVar10;
        }
        if (0xf < uVar10) goto LAB_00207961;
        uVar17 = uVar10 + 1;
      }
      iVar9 = iVar9 + (uint)local_a8[uVar10];
      iVar14 = (iVar14 + (uint)local_a8[uVar10]) * 2;
      local_88[uVar10 + 1] = iVar14;
      bVar18 = true;
      uVar16 = 0;
      uVar10 = uVar17;
    } while( true );
  }
  goto LAB_00207b52;
LAB_00207961:
  if ((iVar14 != 0x10000) &&
     ((uVar5 = CONCAT71((int7)(uVar10 >> 8),1), iVar12 == 2 || (1 < (ushort)iVar9))))
  goto LAB_00207b52;
  if (uVar2 != 0) {
    uVar8 = 0xffff;
    uVar10 = 0;
    do {
      while( true ) {
        param_3 = uVar10;
        uVar10 = param_3 + 1;
        bVar1 = *(byte *)(lVar3 + param_3);
        uVar19 = bVar1 & 0xf;
        if ((bVar1 & 0xf) != 0) break;
LAB_00207a41:
        if (uVar10 == uVar2) goto LAB_00207b09;
      }
      bVar7 = (byte)uVar19;
      uVar20 = (ushort)((uint)(local_88[uVar19] << (-bVar7 & 0x1f)) >> (-bVar7 & 0x1f));
      uVar20 = uVar20 << 8 | uVar20 >> 8;
      uVar22 = (uVar20 & 0xf0f) << 4 | (uVar20 & 0xf0f0) >> 4;
      uVar22 = (uVar22 >> 2 & 0x3333) + (uVar22 & 0x3333) * 4;
      uVar13 = (uVar22 >> 1 & 0x5555) + (uVar22 & 0x5555) * 2 >> (0x10 - bVar7 & 0x1f);
      local_88[uVar19] = local_88[uVar19] + 1;
      uVar22 = uVar13 & 0xffff;
      uVar16 = (ulonglong)uVar22;
      if (bVar7 < 0xb) {
        if (uVar22 < 0x400) {
          uVar19 = (uint)param_3 | uVar19 << 9;
          param_3 = (ulonglong)uVar19;
          do {
            *(short *)(lVar23 + uVar16 * 2) = (short)uVar19;
            uVar16 = uVar16 + (uint)(1 << bVar7);
          } while (uVar16 < 0x400);
        }
        goto LAB_00207a41;
      }
      uVar16 = (ulonglong)(uVar13 & 0x3ff);
      uVar20 = *(ushort *)(lVar23 + uVar16 * 2);
      if (uVar20 == 0x31e) {
        *(ushort *)(lVar23 + uVar16 * 2) = uVar8;
        uVar20 = uVar8;
        uVar8 = uVar8 - 2;
      }
      uVar22 = uVar22 >> 9;
      uVar16 = (ulonglong)uVar22;
      if (bVar7 != 0xb) {
        cVar15 = (bVar1 & 0xf) - 0xb;
        do {
          uVar21 = ~uVar20 + (ushort)(((uint)uVar16 >> 1 & 1) != 0);
          if (0x23f < uVar21) goto LAB_00207b28;
          uVar20 = *(ushort *)(lVar23 + 0x800 + (ulonglong)uVar21 * 2);
          if (uVar20 == 0) {
            *(ushort *)(lVar23 + 0x800 + (ulonglong)uVar21 * 2) = uVar8;
            uVar20 = uVar8;
            uVar8 = uVar8 - 2;
          }
          else {
          }
          uVar16 = uVar16 >> 1;
          uVar22 = (uint)uVar16;
          cVar15 = cVar15 + -1;
        } while (cVar15 != '\0');
      }
      uVar20 = ~uVar20 + (ushort)((uVar22 >> 1 & 1) != 0);
      if (0x23f < uVar20) {
LAB_00207b28:
        param_3 = CONCAT71((int7)(param_3 >> 8),10);
        uVar5 = CONCAT71((int7)(uVar10 >> 8),0xff);
        goto LAB_00207b52;
      }
      *(short *)(lVar23 + 0x800 + (ulonglong)uVar20 * 2) = (short)param_3;
    } while (uVar10 < uVar2);
  }
LAB_00207b09:
  cVar15 = *(char *)(param_1 + 0x28ef);
  uVar11 = (undefined7)(param_3 >> 8);
  uVar6 = (undefined7)((ulonglong)local_38 >> 8);
  if (cVar15 == '\0') {
    *(undefined4 *)(local_38 + 0x10) = 0;
    uVar5 = CONCAT71(uVar6,1);
    param_3 = CONCAT71(uVar11,0xc);
    goto LAB_00207b52;
  }
  if (cVar15 == '\x02') {
    *(undefined4 *)(local_38 + 0x10) = 0;
    uVar5 = CONCAT71(uVar6,1);
    param_3 = CONCAT71(uVar11,10);
LAB_00207b52:
    auVar24._8_8_ = param_3;
    auVar24._0_8_ = uVar5;
    return auVar24;
  }
  uVar2 = (ulonglong)(byte)(cVar15 - 1U);
  *(byte *)(param_1 + 0x28ef) = cVar15 - 1U;
  goto LAB_002077c8;
}


