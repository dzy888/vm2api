// 00614660 insert_locked

/* <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked */

void __rustcall
<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked
          (ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
          longlong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_b8 = param_4;
  local_b0 = param_6;
  if (param_2[7] != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 8,param_3);
    puVar6 = PTR_bcmp_00799020;
    uVar13 = param_2[4];
    uVar14 = param_2[5];
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar19 = pshuflw(auVar18,auVar18,0);
    auVar18._0_8_ = auVar19._0_8_;
    auVar18._8_4_ = auVar19._0_4_;
    auVar18._12_4_ = auVar19._4_4_;
    lVar10 = param_3[2];
    lVar15 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar14;
      auVar19 = *(undefined1 (*) [16])(uVar13 + uVar9);
      auVar20[0] = -(auVar19[0] == auVar18[0]);
      auVar20[1] = -(auVar19[1] == auVar18[1]);
      auVar20[2] = -(auVar19[2] == auVar18[2]);
      auVar20[3] = -(auVar19[3] == auVar18[3]);
      auVar20[4] = -(auVar19[4] == auVar18[4]);
      auVar20[5] = -(auVar19[5] == auVar18[5]);
      auVar20[6] = -(auVar19[6] == auVar18[6]);
      auVar20[7] = -(auVar19[7] == auVar18[7]);
      auVar20[8] = -(auVar19[8] == auVar18[8]);
      auVar20[9] = -(auVar19[9] == auVar18[9]);
      auVar20[10] = -(auVar19[10] == auVar18[10]);
      auVar20[0xb] = -(auVar19[0xb] == auVar18[0xb]);
      auVar20[0xc] = -(auVar19[0xc] == auVar18[0xc]);
      auVar20[0xd] = -(auVar19[0xd] == auVar18[0xd]);
      auVar20[0xe] = -(auVar19[0xe] == auVar18[0xe]);
      auVar20[0xf] = -(auVar19[0xf] == auVar18[0xf]);
      uVar7 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar12 = (ulonglong)uVar7;
      if (uVar7 != 0) {
        local_e0 = lVar15;
        local_d8 = uVar13;
        local_d0 = uVar14;
        local_c8 = uVar9;
        local_58 = auVar19;
        local_48 = auVar18;
        do {
          uVar5 = 0;
          for (uVar11 = (uint)uVar12; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar13 = uVar5 + local_c8 & local_d0;
          local_c0 = uVar12;
          if ((lVar10 == *(longlong *)(local_d8 + uVar13 * -0x40 + -0x30)) &&
             (iVar8 = (*(code *)puVar6)(uVar13 * 0x40,lVar10), iVar8 == 0)) {
            <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
            ::retain::
            <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::_closure_0_>
                      (param_2,param_3);
            goto LAB_006147b7;
          }
          iVar8 = (int)local_c0 + -1;
          uVar7 = (ushort)iVar8 & (ushort)local_c0;
          uVar12 = (ulonglong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar9 = local_c8;
          uVar14 = local_d0;
          uVar13 = local_d8;
          lVar15 = local_e0;
          auVar18 = local_48;
          auVar19 = local_58;
        } while (uVar7 != 0);
      }
      auVar21[0] = -(auVar19[0] == -1);
      auVar21[1] = -(auVar19[1] == -1);
      auVar21[2] = -(auVar19[2] == -1);
      auVar21[3] = -(auVar19[3] == -1);
      auVar21[4] = -(auVar19[4] == -1);
      auVar21[5] = -(auVar19[5] == -1);
      auVar21[6] = -(auVar19[6] == -1);
      auVar21[7] = -(auVar19[7] == -1);
      auVar21[8] = -(auVar19[8] == -1);
      auVar21[9] = -(auVar19[9] == -1);
      auVar21[10] = -(auVar19[10] == -1);
      auVar21[0xb] = -(auVar19[0xb] == -1);
      auVar21[0xc] = -(auVar19[0xc] == -1);
      auVar21[0xd] = -(auVar19[0xd] == -1);
      auVar21[0xe] = -(auVar19[0xe] == -1);
      auVar21[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar9 = uVar9 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_006147b7:
  (*(code *)PTR_clone_00798fd0)();
  if (-1 < param_5) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_a0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_a0 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_5);
      local_90 = local_b0;
      local_88 = param_7;
      local_a8 = param_5;
      local_98 = param_5;
      uVar17 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::insert(&local_80,param_2 + 4,&local_f8,&local_a8);
      if ((local_80 != -1) && (local_80 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
      }
      uVar17 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar13 = *param_2;
      uVar14 = param_2[3];
      if (uVar14 == uVar13) {
        <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
        ::grow(param_2);
        uVar13 = *param_2;
        uVar14 = param_2[3];
      }
      param_2[3] = uVar14 + 1;
      uVar9 = 0;
      if (uVar13 <= uVar14 + param_2[2]) {
        uVar9 = uVar13;
      }
      lVar10 = (uVar14 + param_2[2]) - uVar9;
      uVar13 = param_2[1];
      *(undefined8 *)(uVar13 + lVar10 * 0x18) = uVar17;
      *(undefined8 *)(uVar13 + 8 + lVar10 * 0x18) = uVar2;
      *(undefined8 *)(uVar13 + 0x10 + lVar10 * 0x18) = uVar3;
      puVar6 = PTR___rust_dealloc_00798fc8;
      if (*param_1 < param_2[7]) {
        do {
          if (param_2[3] == 0) {
            return;
          }
          uVar13 = param_2[2];
          uVar14 = *param_2;
          if (uVar13 + 1 < uVar14) {
            uVar14 = 0;
          }
          param_2[2] = (uVar13 - uVar14) + 1;
          param_2[3] = param_2[3] - 1;
          lVar10 = *(longlong *)(param_2[1] + uVar13 * 0x18);
          puVar1 = (undefined8 *)(param_2[1] + 8 + uVar13 * 0x18);
          local_f8 = *puVar1;
          uStack_f0 = puVar1[1];
          if (lVar10 == -1) {
            return;
          }
          local_80 = lVar10;
          local_78 = local_f8;
          uStack_70 = uStack_f0;
          uVar17 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::remove::<alloc[12e961f32105355]::string::String>
                             (&local_a8,param_2 + 4,&local_80);
          if ((local_a8 != -1) && (local_a8 != 0)) {
            uVar17 = (*(code *)puVar6)(uVar17,1);
          }
          if (lVar10 != 0) {
            (*(code *)puVar6)(uVar17,1);
          }
        } while (*param_1 < param_2[7]);
      }
      return;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


