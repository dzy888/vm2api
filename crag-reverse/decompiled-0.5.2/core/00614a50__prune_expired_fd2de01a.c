// 00614a50 prune_expired

/* <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired
          (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong *puVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_60 = param_3;
  local_68 = (*(code *)PTR_now_00799250)();
  LOCK();
  bVar23 = *(int *)(param_1 + 8) == 0;
  if (bVar23) {
    *(int *)(param_1 + 8) = 1;
  }
  UNLOCK();
  if (!bVar23) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
  }
  local_90 = *(ulonglong *)(param_1 + 0x48);
  local_d0 = param_1 + 8;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::
  <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired_at::_closure_1_>
            (param_1 + 0x30,&local_68,param_1);
  local_f0 = *(ulonglong *)(param_1 + 0x48);
  if (0x555555555555555 < local_f0) {
LAB_00614afb:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_f0 * 0x18 == 0) {
    uStack_e8 = 8;
    local_f0 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uStack_e8 = (*(code *)PTR___rust_alloc_00799000)();
    if (uStack_e8 == 0) goto LAB_00614afb;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  uVar16 = *(ulonglong *)(param_1 + 0x28);
  if (uVar16 == 0) {
    lVar11 = 0;
    uVar18 = 0;
    lVar15 = 0;
  }
  else {
    uVar18 = *(ulonglong *)(param_1 + 0x10);
    uVar14 = 0;
    if (uVar18 <= *(ulonglong *)(param_1 + 0x20)) {
      uVar14 = uVar18;
    }
    lVar11 = *(ulonglong *)(param_1 + 0x20) - uVar14;
    lVar15 = uVar16 - (uVar18 - lVar11);
    if (uVar16 < uVar18 - lVar11 || lVar15 == 0) {
      uVar18 = uVar16 + lVar11;
      lVar15 = 0;
    }
  }
  local_98 = (ulonglong *)(param_1 + 0x10);
  local_c0 = *(longlong *)(param_1 + 0x18);
  lVar11 = local_c0 + lVar11 * 0x18;
  lVar22 = local_c0 + uVar18 * 0x18;
  local_c8 = local_c0 + lVar15 * 0x18;
  local_70 = param_1 + 0x50;
LAB_00614c13:
  do {
    do {
      puVar5 = PTR___rust_dealloc_00798fc8;
      if (lVar11 == lVar22) {
        bVar23 = local_c0 == local_c8;
        lVar15 = local_c0;
        lVar22 = local_c8;
        local_c8 = lVar11;
        local_c0 = lVar11;
        if (bVar23) {
          local_a8 = local_e0;
          uStack_a0 = uStack_d8;
          local_b8 = local_f0;
          uStack_b0 = uStack_e8;
          uVar16 = *(ulonglong *)(param_1 + 0x28);
          if (uVar16 != 0) {
            uVar18 = *(ulonglong *)(param_1 + 0x20);
            uVar14 = *(ulonglong *)(param_1 + 0x10);
            lVar11 = *(longlong *)(param_1 + 0x18);
            uVar13 = uVar14;
            if (uVar18 < uVar14) {
              uVar13 = 0;
            }
            lVar15 = uVar18 - uVar13;
            uVar19 = uVar14 - lVar15;
            lVar22 = uVar16 - uVar19;
            bVar23 = lVar22 != 0;
            if (uVar16 < uVar19) {
              lVar22 = 0;
            }
            uVar21 = lVar15 + uVar16;
            if (uVar16 >= uVar19 && bVar23) {
              uVar21 = uVar14;
            }
            lVar15 = uVar21 - lVar15;
            if (lVar15 != 0) {
              lVar17 = uVar18 * 0x18 + uVar13 * -0x18 + lVar11 + 8;
              do {
                if (*(longlong *)(lVar17 + -8) != 0) {
                  (*(code *)puVar5)();
                }
                lVar17 = lVar17 + 0x18;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            puVar5 = PTR___rust_dealloc_00798fc8;
            if (uVar19 < uVar16) {
              lVar11 = lVar11 + 8;
              do {
                if (*(longlong *)(lVar11 + -8) != 0) {
                  (*(code *)puVar5)();
                }
                lVar11 = lVar11 + 0x18;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
          }
          puVar6 = local_98;
          if (*local_98 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          puVar6[2] = local_a8;
          puVar6[3] = uStack_a0;
          *puVar6 = local_b8;
          puVar6[1] = uStack_b0;
          uVar16 = *(ulonglong *)(param_1 + 0x48);
          if (((bVar7 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
            *(undefined1 *)(param_1 + 0xc) = 1;
          }
          LOCK();
          iVar10 = *(int *)(param_1 + 8);
          *(int *)(param_1 + 8) = 0;
          UNLOCK();
          if (iVar10 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          lVar11 = 0;
          if (uVar16 <= local_90) {
            lVar11 = local_90 - uVar16;
          }
          return lVar11;
        }
      }
      else {
        lVar15 = lVar11;
      }
      lVar11 = lVar15 + 0x18;
    } while (*(longlong *)(param_1 + 0x48) == 0);
    uVar18 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(local_70,lVar15);
    lVar17 = *(longlong *)(param_1 + 0x30);
    uVar16 = *(ulonglong *)(param_1 + 0x38);
    bVar24 = (byte)(uVar18 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar26 = pshuflw(auVar25,auVar25,0);
    auVar25._0_8_ = auVar26._0_8_;
    auVar25._8_4_ = auVar26._0_4_;
    auVar25._12_4_ = auVar26._4_4_;
    lVar15 = *(longlong *)(lVar15 + 0x10);
    lVar12 = 0;
    while( true ) {
      uVar18 = uVar18 & uVar16;
      auVar26 = *(undefined1 (*) [16])(lVar17 + uVar18);
      auVar27[0] = -(auVar26[0] == auVar25[0]);
      auVar27[1] = -(auVar26[1] == auVar25[1]);
      auVar27[2] = -(auVar26[2] == auVar25[2]);
      auVar27[3] = -(auVar26[3] == auVar25[3]);
      auVar27[4] = -(auVar26[4] == auVar25[4]);
      auVar27[5] = -(auVar26[5] == auVar25[5]);
      auVar27[6] = -(auVar26[6] == auVar25[6]);
      auVar27[7] = -(auVar26[7] == auVar25[7]);
      auVar27[8] = -(auVar26[8] == auVar25[8]);
      auVar27[9] = -(auVar26[9] == auVar25[9]);
      auVar27[10] = -(auVar26[10] == auVar25[10]);
      auVar27[0xb] = -(auVar26[0xb] == auVar25[0xb]);
      auVar27[0xc] = -(auVar26[0xc] == auVar25[0xc]);
      auVar27[0xd] = -(auVar26[0xd] == auVar25[0xd]);
      auVar27[0xe] = -(auVar26[0xe] == auVar25[0xe]);
      auVar27[0xf] = -(auVar26[0xf] == auVar25[0xf]);
      uVar9 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar9;
      if (uVar9 != 0) {
        local_88 = lVar12;
        local_80 = lVar17;
        local_78 = uVar16;
        local_58 = auVar26;
        local_48 = auVar25;
        do {
          uVar3 = 0;
          for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          if ((lVar15 == *(longlong *)(local_80 + (uVar3 + uVar18 & local_78) * -0x40 + -0x30)) &&
             (iVar10 = (*(code *)PTR_bcmp_00799020)(), iVar10 == 0)) {
            (*(code *)PTR_clone_00798fd0)();
            if (uStack_d8 == local_f0) {
              <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
              ::grow(&local_f0);
            }
            uVar16 = 0;
            if (local_f0 <= uStack_d8 + local_e0) {
              uVar16 = local_f0;
            }
            lVar15 = (uStack_d8 + local_e0) - uVar16;
            *(ulonglong *)(uStack_e8 + 0x10 + lVar15 * 0x18) = local_a8;
            puVar1 = (undefined4 *)(uStack_e8 + lVar15 * 0x18);
            *puVar1 = (undefined4)local_b8;
            puVar1[1] = local_b8._4_4_;
            puVar1[2] = (undefined4)uStack_b0;
            puVar1[3] = uStack_b0._4_4_;
            uStack_d8 = uStack_d8 + 1;
            goto LAB_00614c13;
          }
          uVar9 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar9);
          lVar12 = local_88;
          lVar17 = local_80;
          uVar16 = local_78;
          auVar25 = local_48;
          auVar26 = local_58;
        } while (uVar9 != 0);
      }
      auVar28[0] = -(auVar26[0] == -1);
      auVar28[1] = -(auVar26[1] == -1);
      auVar28[2] = -(auVar26[2] == -1);
      auVar28[3] = -(auVar26[3] == -1);
      auVar28[4] = -(auVar26[4] == -1);
      auVar28[5] = -(auVar26[5] == -1);
      auVar28[6] = -(auVar26[6] == -1);
      auVar28[7] = -(auVar26[7] == -1);
      auVar28[8] = -(auVar26[8] == -1);
      auVar28[9] = -(auVar26[9] == -1);
      auVar28[10] = -(auVar26[10] == -1);
      auVar28[0xb] = -(auVar26[0xb] == -1);
      auVar28[0xc] = -(auVar26[0xc] == -1);
      auVar28[0xd] = -(auVar26[0xd] == -1);
      auVar28[0xe] = -(auVar26[0xe] == -1);
      auVar28[0xf] = -(auVar26[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar18 = uVar18 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  } while( true );
}


