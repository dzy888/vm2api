// 005cb3e0 {closure#1}

/* craggemini_core[66f3c71560d70857]::tools::resolve_client_mcp_call_name::{closure#1} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::resolve_client_mcp_call_name::_closure_1_
          (undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong local_a0;
  longlong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_3 != 0) {
    lVar11 = param_3;
    local_a0 = param_4;
    while( true ) {
      uVar4 = *(ushort *)(lVar11 + 0x272);
      uVar6 = (ulonglong)((uint)uVar4 * 8);
      lVar15 = uVar6 * 3;
      uVar10 = 0xffffffffffffffff;
      lVar14 = lVar11 + 0x168;
      plVar1 = (longlong *)(lVar11 + -8);
      do {
        plVar9 = plVar1;
        if (lVar15 == 0) {
          uVar10 = (ulonglong)uVar4;
          goto LAB_005cb4b5;
        }
        uVar8 = *(ulonglong *)(lVar14 + 0x10);
        lVar13 = uVar8 - 0xb;
        if (10 < uVar8) {
          uVar8 = 0xb;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar8);
        lVar13 = -lVar13;
        if (iVar5 != 0) {
          lVar13 = (longlong)iVar5;
        }
        bVar7 = (0 < lVar13) - (lVar13 < 0);
        uVar6 = (ulonglong)bVar7;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + -0x18;
        lVar14 = lVar14 + 0x18;
        plVar1 = plVar9 + 4;
      } while (bVar7 == 1);
      if (bVar7 == 0) break;
LAB_005cb4b5:
      bVar16 = local_a0 == 0;
      local_a0 = local_a0 + -1;
      if (bVar16) goto LAB_005cb4f8;
      lVar11 = *(longlong *)(lVar11 + 0x278 + uVar10 * 8);
    }
    if ((char)plVar9[1] == '\x03') {
      plVar1 = (longlong *)plVar9[3];
      lVar11 = plVar9[4];
      if (lVar11 == 10) {
        if ((short)plVar1[1] == 0x696e && *plVar1 == 0x696d656767617263) goto LAB_005cb52f;
      }
      else if ((lVar11 == 4) && ((int)*plVar1 == 0x67617263)) {
LAB_005cb52f:
        local_58 = param_4;
        goto LAB_005cb53b;
      }
    }
  }
LAB_005cb4f8:
  *param_1 = 0xffffffffffffffff;
  return;
LAB_005cb7fd:
  (*(code *)PTR_clone_00798fd0)();
  goto LAB_005cb818;
LAB_005cb53b:
  uVar4 = *(ushort *)(param_3 + 0x272);
  uVar6 = (ulonglong)((uint)uVar4 * 8);
  lVar11 = uVar6 * 3;
  uVar10 = 0xffffffffffffffff;
  lVar15 = param_3 + 0x168;
  plVar1 = (longlong *)(param_3 + -8);
  do {
    plVar9 = plVar1;
    if (lVar11 == 0) {
      uVar10 = (ulonglong)uVar4;
      goto LAB_005cb5d1;
    }
    uVar8 = *(ulonglong *)(lVar15 + 0x10);
    lVar14 = uVar8 - 9;
    if (8 < uVar8) {
      uVar8 = 9;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar8);
    lVar14 = -lVar14;
    if (iVar5 != 0) {
      lVar14 = (longlong)iVar5;
    }
    bVar7 = (0 < lVar14) - (lVar14 < 0);
    uVar6 = (ulonglong)bVar7;
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + -0x18;
    lVar15 = lVar15 + 0x18;
    plVar1 = plVar9 + 4;
  } while (bVar7 == 1);
  if (bVar7 != 0) {
LAB_005cb5d1:
    bVar16 = local_58 == 0;
    local_58 = local_58 + -1;
    if (bVar16) goto LAB_005cb7f2;
    param_3 = *(longlong *)(param_3 + 0x278 + uVar10 * 8);
    goto LAB_005cb53b;
  }
  if (((char)plVar9[1] == '\x03') && (param_2[3] != 0)) {
    lVar11 = plVar9[3];
    lVar15 = plVar9[4];
    uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 4,lVar11,lVar15);
    lVar14 = *param_2;
    uVar10 = param_2[1];
    bVar7 = (byte)(uVar6 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar7,bVar7));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar13 = 0;
    while( true ) {
      uVar6 = uVar6 & uVar10;
      auVar22 = *(undefined1 (*) [16])(lVar14 + uVar6);
      auVar18[0] = -(auVar22[0] == auVar17[0]);
      auVar18[1] = -(auVar22[1] == auVar17[1]);
      auVar18[2] = -(auVar22[2] == auVar17[2]);
      auVar18[3] = -(auVar22[3] == auVar17[3]);
      auVar18[4] = -(auVar22[4] == auVar17[4]);
      auVar18[5] = -(auVar22[5] == auVar17[5]);
      auVar18[6] = -(auVar22[6] == auVar17[6]);
      auVar18[7] = -(auVar22[7] == auVar17[7]);
      auVar18[8] = -(auVar22[8] == auVar17[0]);
      auVar18[9] = -(auVar22[9] == auVar17[1]);
      auVar18[10] = -(auVar22[10] == auVar17[2]);
      auVar18[0xb] = -(auVar22[0xb] == auVar17[3]);
      auVar18[0xc] = -(auVar22[0xc] == auVar17[4]);
      auVar18[0xd] = -(auVar22[0xd] == auVar17[5]);
      auVar18[0xe] = -(auVar22[0xe] == auVar17[6]);
      auVar18[0xf] = -(auVar22[0xf] == auVar17[7]);
      uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar4;
      if (uVar4 != 0) {
        do {
          uVar2 = 0;
          for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if ((lVar15 == *(longlong *)(lVar14 + -0x20 + (uVar2 + uVar6 & uVar10) * -0x30)) &&
             (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) goto LAB_005cb7fd;
          uVar4 = (ushort)(uVar12 - 1) & (ushort)uVar12;
          uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar4);
        } while (uVar4 != 0);
      }
      auVar20[0] = -(auVar22[0] == -1);
      auVar20[1] = -(auVar22[1] == -1);
      auVar20[2] = -(auVar22[2] == -1);
      auVar20[3] = -(auVar22[3] == -1);
      auVar20[4] = -(auVar22[4] == -1);
      auVar20[5] = -(auVar22[5] == -1);
      auVar20[6] = -(auVar22[6] == -1);
      auVar20[7] = -(auVar22[7] == -1);
      auVar20[8] = -(auVar22[8] == -1);
      auVar20[9] = -(auVar22[9] == -1);
      auVar20[10] = -(auVar22[10] == -1);
      auVar20[0xb] = -(auVar22[0xb] == -1);
      auVar20[0xc] = -(auVar22[0xc] == -1);
      auVar20[0xd] = -(auVar22[0xd] == -1);
      auVar20[0xe] = -(auVar22[0xe] == -1);
      auVar20[0xf] = -(auVar22[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar6 = uVar6 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    auVar22 = schema::strip_mcp_prefix(lVar11,lVar15);
    uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 4,auVar22._0_8_);
    bVar7 = (byte)(uVar6 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar7,bVar7));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & uVar10;
      auVar18 = *(undefined1 (*) [16])(lVar14 + uVar6);
      auVar19[0] = -(auVar18[0] == auVar17[0]);
      auVar19[1] = -(auVar18[1] == auVar17[1]);
      auVar19[2] = -(auVar18[2] == auVar17[2]);
      auVar19[3] = -(auVar18[3] == auVar17[3]);
      auVar19[4] = -(auVar18[4] == auVar17[4]);
      auVar19[5] = -(auVar18[5] == auVar17[5]);
      auVar19[6] = -(auVar18[6] == auVar17[6]);
      auVar19[7] = -(auVar18[7] == auVar17[7]);
      auVar19[8] = -(auVar18[8] == auVar17[0]);
      auVar19[9] = -(auVar18[9] == auVar17[1]);
      auVar19[10] = -(auVar18[10] == auVar17[2]);
      auVar19[0xb] = -(auVar18[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar18[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar18[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar18[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar18[0xf] == auVar17[7]);
      uVar4 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar4;
      if (uVar4 != 0) {
        do {
          uVar2 = 0;
          for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if ((auVar22._8_8_ == *(longlong *)(lVar14 + -0x20 + (uVar2 + uVar6 & uVar10) * -0x30)) &&
             (iVar5 = (*(code *)PTR_bcmp_00799020)(uVar10,auVar22._8_8_), iVar5 == 0))
          goto LAB_005cb7fd;
          uVar4 = (ushort)(uVar12 - 1) & (ushort)uVar12;
          uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar4);
        } while (uVar4 != 0);
      }
      auVar21[0] = -(auVar18[0] == -1);
      auVar21[1] = -(auVar18[1] == -1);
      auVar21[2] = -(auVar18[2] == -1);
      auVar21[3] = -(auVar18[3] == -1);
      auVar21[4] = -(auVar18[4] == -1);
      auVar21[5] = -(auVar18[5] == -1);
      auVar21[6] = -(auVar18[6] == -1);
      auVar21[7] = -(auVar18[7] == -1);
      auVar21[8] = -(auVar18[8] == -1);
      auVar21[9] = -(auVar18[9] == -1);
      auVar21[10] = -(auVar18[10] == -1);
      auVar21[0xb] = -(auVar18[0xb] == -1);
      auVar21[0xc] = -(auVar18[0xc] == -1);
      auVar21[0xd] = -(auVar18[0xd] == -1);
      auVar21[0xe] = -(auVar18[0xe] == -1);
      auVar21[0xf] = -(auVar18[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_005cb7f2:
  local_48 = 0xffffffffffffffff;
LAB_005cb818:
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = local_40;
  return;
}


