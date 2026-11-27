// 00612df0 insert

/* <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert
          (ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong local_48;
  longlong lStack_40;
  
  if (param_1[7] == 0) {
    if (param_1[10] != 0) goto LAB_00612f51;
  }
  else {
    uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 8);
    puVar4 = PTR_bcmp_00799020;
    uVar9 = param_1[4];
    uVar10 = param_1[5];
    bVar13 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar16 = pshuflw(auVar15,auVar15,0);
    auVar15._0_8_ = auVar16._0_8_;
    auVar15._8_4_ = auVar16._0_4_;
    auVar15._12_4_ = auVar16._4_4_;
    lVar8 = param_2[2];
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar10;
      auVar16 = *(undefined1 (*) [16])(uVar9 + uVar7);
      auVar17[0] = -(auVar16[0] == auVar15[0]);
      auVar17[1] = -(auVar16[1] == auVar15[1]);
      auVar17[2] = -(auVar16[2] == auVar15[2]);
      auVar17[3] = -(auVar16[3] == auVar15[3]);
      auVar17[4] = -(auVar16[4] == auVar15[4]);
      auVar17[5] = -(auVar16[5] == auVar15[5]);
      auVar17[6] = -(auVar16[6] == auVar15[6]);
      auVar17[7] = -(auVar16[7] == auVar15[7]);
      auVar17[8] = -(auVar16[8] == auVar15[8]);
      auVar17[9] = -(auVar16[9] == auVar15[9]);
      auVar17[10] = -(auVar16[10] == auVar15[10]);
      auVar17[0xb] = -(auVar16[0xb] == auVar15[0xb]);
      auVar17[0xc] = -(auVar16[0xc] == auVar15[0xc]);
      auVar17[0xd] = -(auVar16[0xd] == auVar15[0xd]);
      auVar17[0xe] = -(auVar16[0xe] == auVar15[0xe]);
      auVar17[0xf] = -(auVar16[0xf] == auVar15[0xf]);
      uVar5 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar5;
      if (uVar5 != 0) {
        local_80 = uVar10;
        local_78 = lVar12;
        local_70 = uVar7;
        local_68 = auVar16;
        local_58 = auVar15;
        do {
          uVar2 = 0;
          for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          uVar10 = uVar2 + local_70 & local_80;
          if ((lVar8 == *(longlong *)((uVar9 - 8) + uVar10 * -0x18)) &&
             (iVar6 = (*(code *)puVar4)(-uVar10,lVar8), iVar6 == 0)) {
            if (*param_2 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
            }
            return 0;
          }
          uVar5 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar5);
          uVar7 = local_70;
          lVar12 = local_78;
          uVar10 = local_80;
          auVar15 = local_58;
          auVar16 = local_68;
        } while (uVar5 != 0);
      }
      auVar18[0] = -(auVar16[0] == -1);
      auVar18[1] = -(auVar16[1] == -1);
      auVar18[2] = -(auVar16[2] == -1);
      auVar18[3] = -(auVar16[3] == -1);
      auVar18[4] = -(auVar16[4] == -1);
      auVar18[5] = -(auVar16[5] == -1);
      auVar18[6] = -(auVar16[6] == -1);
      auVar18[7] = -(auVar16[7] == -1);
      auVar18[8] = -(auVar16[8] == -1);
      auVar18[9] = -(auVar16[9] == -1);
      auVar18[10] = -(auVar16[10] == -1);
      auVar18[0xb] = -(auVar16[0xb] == -1);
      auVar18[0xc] = -(auVar16[0xc] == -1);
      auVar18[0xd] = -(auVar16[0xd] == -1);
      auVar18[0xe] = -(auVar16[0xe] == -1);
      auVar18[0xf] = -(auVar16[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
    if (param_1[7] < param_1[10]) goto LAB_00612f51;
  }
  do {
    if (param_1[3] == 0) break;
    uVar9 = param_1[2];
    uVar10 = *param_1;
    if (uVar9 + 1 < uVar10) {
      uVar10 = 0;
    }
    param_1[2] = (uVar9 - uVar10) + 1;
    param_1[3] = param_1[3] - 1;
    lVar8 = *(longlong *)(param_1[1] + uVar9 * 0x18);
    plVar1 = (longlong *)(param_1[1] + 8 + uVar9 * 0x18);
    local_48 = *plVar1;
    lStack_40 = plVar1[1];
    if (lVar8 == -1) break;
    local_98 = lVar8;
    lStack_90 = local_48;
    local_88 = lStack_40;
    uVar14 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::remove::<alloc[12e961f32105355]::string::String>(param_1 + 4,&local_98);
    if (lVar8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
    }
  } while (param_1[10] <= param_1[7]);
LAB_00612f51:
  (*(code *)PTR_clone_00798fd0)();
  uVar9 = *param_1;
  uVar10 = param_1[3];
  if (uVar10 == uVar9) {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
    ::grow(param_1,param_2);
    uVar9 = *param_1;
    uVar10 = param_1[3];
  }
  param_1[3] = uVar10 + 1;
  uVar7 = 0;
  if (uVar9 <= uVar10 + param_1[2]) {
    uVar7 = uVar9;
  }
  lVar8 = (uVar10 + param_1[2]) - uVar7;
  uVar9 = param_1[1];
  *(longlong *)(uVar9 + 0x10 + lVar8 * 0x18) = local_88;
  plVar1 = (longlong *)(uVar9 + lVar8 * 0x18);
  *plVar1 = local_98;
  plVar1[1] = lStack_90;
  local_88 = param_2[2];
  local_98 = *param_2;
  lStack_90 = param_2[1];
  uVar9 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::insert(param_1 + 4,&local_98);
  return uVar9 ^ 1;
}


