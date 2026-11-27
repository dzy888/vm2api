// 006152a0 resolve

/* <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::resolve */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::resolve
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  code *pcStack_e0;
  undefined1 *local_d8;
  code *local_d0;
  longlong *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  
  uVar18 = param_3;
  local_58 = (*(code *)PTR_now_00799250)();
  local_50 = (undefined4)uVar18;
  auVar24 = craggemini_core[66f3c71560d70857]::schema::strip_mcp_prefix(param_5,param_6);
  auVar24 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar24._0_8_,auVar24._8_8_);
  lVar11 = auVar24._8_8_;
  local_f8 = auVar24._0_8_;
  if (lVar11 == 0) {
    *param_1 = -1;
    return param_1;
  }
  LOCK();
  bVar16 = *(int *)(param_2 + 8) == 0;
  if (bVar16) {
    *(int *)(param_2 + 8) = 1;
  }
  UNLOCK();
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  local_c0 = param_1;
  local_60 = param_2 + 8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_11c = 0;
  }
  else {
    local_11c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_11c = local_11c ^ 1;
  }
  auVar24 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
  local_b8 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar24._0_8_,auVar24._8_8_);
  local_a8 = ::<str>::trim_matches::<<char>::is_whitespace>(local_f8,lVar11);
  local_e8 = (undefined8 *)local_b8;
  pcStack_e0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_d8 = local_a8;
  local_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_format_inner_00799048)(local_d8,&local_e8);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 0x50,&local_118);
    lVar4 = local_108;
    puVar3 = PTR_bcmp_00799020;
    lVar13 = *(longlong *)(param_2 + 0x30);
    uVar10 = *(ulonglong *)(param_2 + 0x38);
    bVar17 = (byte)(uVar9 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar19 = pshuflw(auVar24,auVar24,0);
    auVar24._0_8_ = auVar19._0_8_;
    auVar24._8_4_ = auVar19._0_4_;
    auVar24._12_4_ = auVar19._4_4_;
    local_100 = local_110;
    lVar12 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar10;
      auVar19 = *(undefined1 (*) [16])(lVar13 + uVar9);
      auVar20[0] = -(auVar19[0] == auVar24[0]);
      auVar20[1] = -(auVar19[1] == auVar24[1]);
      auVar20[2] = -(auVar19[2] == auVar24[2]);
      auVar20[3] = -(auVar19[3] == auVar24[3]);
      auVar20[4] = -(auVar19[4] == auVar24[4]);
      auVar20[5] = -(auVar19[5] == auVar24[5]);
      auVar20[6] = -(auVar19[6] == auVar24[6]);
      auVar20[7] = -(auVar19[7] == auVar24[7]);
      auVar20[8] = -(auVar19[8] == auVar24[8]);
      auVar20[9] = -(auVar19[9] == auVar24[9]);
      auVar20[10] = -(auVar19[10] == auVar24[10]);
      auVar20[0xb] = -(auVar19[0xb] == auVar24[0xb]);
      auVar20[0xc] = -(auVar19[0xc] == auVar24[0xc]);
      auVar20[0xd] = -(auVar19[0xd] == auVar24[0xd]);
      auVar20[0xe] = -(auVar19[0xe] == auVar24[0xe]);
      auVar20[0xf] = -(auVar19[0xf] == auVar24[0xf]);
      uVar6 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        local_98._0_8_ = lVar13;
        local_f0 = uVar10;
        local_88 = auVar24;
        local_68 = lVar12;
        local_48 = auVar19;
        do {
          local_78._0_8_ = uVar14;
          uVar15 = 0;
          for (uVar7 = (uint)uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          lVar13 = lVar13 + (uVar15 + uVar9 & local_f0) * -0x40;
          if (lVar4 == *(longlong *)(lVar13 + -0x30)) {
            iVar8 = (*(code *)puVar3)(local_f0,lVar4);
            if (iVar8 == 0) {
              uVar15 = *(uint *)(lVar13 + -8);
              uVar10 = (*(code *)PTR_duration_since_007992b0)();
              if (uVar10 == *(ulonglong *)(param_2 + 0x60)) {
                if (uVar15 <= *(uint *)(param_2 + 0x68)) goto LAB_00615750;
              }
              else if (uVar10 <= *(ulonglong *)(param_2 + 0x60)) goto LAB_00615750;
              uVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<alloc[12e961f32105355]::string::String>
                                 (&local_e8,param_2 + 0x30,&local_118);
              if ((local_e8 != (undefined8 *)0xffffffffffffffff) && (local_e8 != (undefined8 *)0x0))
              {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
              ::retain::
              <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::_closure_0_>
                        (param_2 + 0x10,&local_118);
              goto LAB_00615586;
            }
          }
          iVar8 = local_78._0_4_ + -1;
          uVar6 = (ushort)iVar8 & local_78._0_2_;
          uVar14 = (ulonglong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar6);
          uVar10 = local_f0;
          lVar12 = local_68;
          lVar13 = local_98._0_8_;
          auVar24 = local_88;
          auVar19 = local_48;
        } while (uVar6 != 0);
      }
      auVar22[0] = -(auVar19[0] == -1);
      auVar22[1] = -(auVar19[1] == -1);
      auVar22[2] = -(auVar19[2] == -1);
      auVar22[3] = -(auVar19[3] == -1);
      auVar22[4] = -(auVar19[4] == -1);
      auVar22[5] = -(auVar19[5] == -1);
      auVar22[6] = -(auVar19[6] == -1);
      auVar22[7] = -(auVar19[7] == -1);
      auVar22[8] = -(auVar19[8] == -1);
      auVar22[9] = -(auVar19[9] == -1);
      auVar22[10] = -(auVar19[10] == -1);
      auVar22[0xb] = -(auVar19[0xb] == -1);
      auVar22[0xc] = -(auVar19[0xc] == -1);
      auVar22[0xd] = -(auVar19[0xd] == -1);
      auVar22[0xe] = -(auVar19[0xe] == -1);
      auVar22[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar9 = uVar9 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_00615586:
  if (local_118 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  auVar24 = ::<str>::trim_matches::<<char>::is_whitespace>(1,0);
  local_b8 = auVar24;
  auVar24 = ::<str>::trim_matches::<<char>::is_whitespace>(local_f8,lVar11);
  local_e8 = (undefined8 *)local_b8;
  pcStack_e0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_d8 = local_a8;
  local_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_a8 = auVar24;
  (*(code *)PTR_format_inner_00799048)(local_d8,&local_e8);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 0x50);
    puVar3 = PTR_bcmp_00799020;
    lVar11 = *(longlong *)(param_2 + 0x30);
    uVar10 = *(ulonglong *)(param_2 + 0x38);
    bVar17 = (byte)(uVar9 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar24 = pshuflw(auVar24,auVar24,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._8_4_ = auVar24._0_4_;
    auVar19._12_4_ = auVar24._4_4_;
    local_100 = local_110;
    uVar14 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar10;
      auVar24 = *(undefined1 (*) [16])(lVar11 + uVar9);
      auVar21[0] = -(auVar24[0] == auVar19[0]);
      auVar21[1] = -(auVar24[1] == auVar19[1]);
      auVar21[2] = -(auVar24[2] == auVar19[2]);
      auVar21[3] = -(auVar24[3] == auVar19[3]);
      auVar21[4] = -(auVar24[4] == auVar19[4]);
      auVar21[5] = -(auVar24[5] == auVar19[5]);
      auVar21[6] = -(auVar24[6] == auVar19[6]);
      auVar21[7] = -(auVar24[7] == auVar19[7]);
      auVar21[8] = -(auVar24[8] == auVar19[8]);
      auVar21[9] = -(auVar24[9] == auVar19[9]);
      auVar21[10] = -(auVar24[10] == auVar19[10]);
      auVar21[0xb] = -(auVar24[0xb] == auVar19[0xb]);
      auVar21[0xc] = -(auVar24[0xc] == auVar19[0xc]);
      auVar21[0xd] = -(auVar24[0xd] == auVar19[0xd]);
      auVar21[0xe] = -(auVar24[0xe] == auVar19[0xe]);
      auVar21[0xf] = -(auVar24[0xf] == auVar19[0xf]);
      uVar6 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar6;
      if (uVar6 != 0) {
        local_88._0_8_ = uVar10;
        local_f8 = uVar9;
        local_f0 = uVar14;
        local_98 = auVar24;
        local_78 = auVar19;
        do {
          uVar7 = 0;
          for (uVar1 = uVar15; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar10 = uVar7 + local_f8 & uVar10;
          lVar13 = lVar11 + uVar10 * -0x40;
          if (local_108 == *(longlong *)(lVar13 + -0x30)) {
            iVar8 = (*(code *)puVar3)(uVar10 * 0x40,local_108);
            if (iVar8 == 0) {
              uVar15 = *(uint *)(lVar13 + -8);
              uVar10 = (*(code *)PTR_duration_since_007992b0)();
              if (uVar10 == *(ulonglong *)(param_2 + 0x60)) {
                if (uVar15 <= *(uint *)(param_2 + 0x68)) goto LAB_00615750;
              }
              else if (uVar10 <= *(ulonglong *)(param_2 + 0x60)) goto LAB_00615750;
              uVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<alloc[12e961f32105355]::string::String>
                                 (&local_e8,param_2 + 0x30,&local_118);
              if ((local_e8 != (undefined8 *)0xffffffffffffffff) && (local_e8 != (undefined8 *)0x0))
              {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
              ::retain::
              <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::_closure_0_>
                        (param_2 + 0x10,&local_118);
              goto LAB_006157e9;
            }
          }
          uVar6 = (ushort)(uVar15 - 1) & (ushort)uVar15;
          uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar6);
          uVar9 = local_f8;
          uVar14 = local_f0;
          uVar10 = local_88._0_8_;
          auVar19 = local_78;
          auVar24 = local_98;
        } while (uVar6 != 0);
      }
      auVar23[0] = -(auVar24[0] == -1);
      auVar23[1] = -(auVar24[1] == -1);
      auVar23[2] = -(auVar24[2] == -1);
      auVar23[3] = -(auVar24[3] == -1);
      auVar23[4] = -(auVar24[4] == -1);
      auVar23[5] = -(auVar24[5] == -1);
      auVar23[6] = -(auVar24[6] == -1);
      auVar23[7] = -(auVar24[7] == -1);
      auVar23[8] = -(auVar24[8] == -1);
      auVar23[9] = -(auVar24[9] == -1);
      auVar23[10] = -(auVar24[10] == -1);
      auVar23[0xb] = -(auVar24[0xb] == -1);
      auVar23[0xc] = -(auVar24[0xc] == -1);
      auVar23[0xd] = -(auVar24[0xd] == -1);
      auVar23[0xe] = -(auVar24[0xe] == -1);
      auVar23[0xf] = -(auVar24[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar9 = uVar9 + uVar14 + 0x10;
      uVar14 = uVar14 + 0x10;
    }
  }
LAB_006157e9:
  if (local_118 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *local_c0 = -1;
  plVar2 = local_c0;
joined_r0x0061579c:
  if ((local_11c == 0) &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar5 == '\0') {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
  }
  LOCK();
  iVar8 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = 0;
  UNLOCK();
  if (iVar8 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return plVar2;
LAB_00615750:
  (*(code *)PTR_clone_00798fd0)();
  plVar2 = local_c0;
  local_c0[2] = (longlong)local_d8;
  *local_c0 = (longlong)local_e8;
  local_c0[1] = (longlong)pcStack_e0;
  if (local_118 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  goto joined_r0x0061579c;
}


