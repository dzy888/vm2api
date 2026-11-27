// 004b1120 release_slot

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::release_slot */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::release_slot
          (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined8 param_5
          ,longlong *param_6,undefined8 param_7,longlong param_8)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  longlong lVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  byte bVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong local_1100;
  longlong lStack_10f8;
  longlong local_10f0;
  undefined8 local_10e8;
  longlong local_10e0;
  longlong local_10d8;
  int local_10d0;
  char local_10cc;
  ulonglong local_10c8;
  undefined8 local_10c0;
  longlong local_10b8;
  undefined8 local_1030;
  undefined1 local_878 [1608];
  undefined8 local_230;
  longlong local_228;
  longlong local_50;
  
  local_1030 = 0;
  local_1100 = 0;
  lStack_10f8 = 8;
  local_10f0 = 0;
  LOCK();
  bVar20 = *(int *)(param_2 + 0x490) == 0;
  if (bVar20) {
    *(int *)(param_2 + 0x490) = 1;
  }
  UNLOCK();
  local_10d8 = param_3;
  if (!bVar20) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_2 + 0x494);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_2 + 0x494);
  }
  if (cVar8 != '\0') {
    uVar17 = (ulonglong)local_10b8 >> 8;
    local_10b8 = CONCAT71((int7)uVar17,bVar7);
    local_10c0 = (longlong *)(param_2 + 0x490);
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_10c0,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b820);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_10e0 = param_2 + 0x490;
  uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&u64>(param_2 + 0x550,&local_10d8);
  lVar13 = *(longlong *)(param_2 + 0x530);
  uVar17 = *(ulonglong *)(param_2 + 0x538);
  bVar21 = (byte)(uVar11 >> 0x39);
  auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar16 = 0;
  do {
    uVar11 = uVar11 & uVar17;
    auVar24 = *(undefined1 (*) [16])(lVar13 + uVar11);
    auVar26[0] = -(auVar24[0] == auVar23[0]);
    auVar26[1] = -(auVar24[1] == auVar23[1]);
    auVar26[2] = -(auVar24[2] == auVar23[2]);
    auVar26[3] = -(auVar24[3] == auVar23[3]);
    auVar26[4] = -(auVar24[4] == auVar23[4]);
    auVar26[5] = -(auVar24[5] == auVar23[5]);
    auVar26[6] = -(auVar24[6] == auVar23[6]);
    auVar26[7] = -(auVar24[7] == auVar23[7]);
    auVar26[8] = -(auVar24[8] == auVar23[0]);
    auVar26[9] = -(auVar24[9] == auVar23[1]);
    auVar26[10] = -(auVar24[10] == auVar23[2]);
    auVar26[0xb] = -(auVar24[0xb] == auVar23[3]);
    auVar26[0xc] = -(auVar24[0xc] == auVar23[4]);
    auVar26[0xd] = -(auVar24[0xd] == auVar23[5]);
    auVar26[0xe] = -(auVar24[0xe] == auVar23[6]);
    auVar26[0xf] = -(auVar24[0xf] == auVar23[7]);
    uVar14 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    uVar18 = (uint)uVar14;
    if (uVar14 != 0) {
LAB_004b1223:
      uVar5 = 0;
      for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar19 = uVar5 + uVar11 & uVar17;
      lVar15 = uVar19 * -0xe0;
      if (param_3 != *(longlong *)(lVar13 + -0xe0 + lVar15)) break;
      lVar15 = lVar15 + lVar13;
      lVar16 = ((longlong)(uVar19 * 0xe0) >> 5) * 0x6db6db6db6db6db7;
      uVar17 = lVar16 - 0x10U & uVar17;
      pcVar1 = (char *)(lVar13 + uVar17);
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      pcVar1 = (char *)(lVar13 + lVar16);
      auVar24[0] = -(*pcVar1 == -1);
      auVar24[1] = -(pcVar1[1] == -1);
      auVar24[2] = -(pcVar1[2] == -1);
      auVar24[3] = -(pcVar1[3] == -1);
      auVar24[4] = -(pcVar1[4] == -1);
      auVar24[5] = -(pcVar1[5] == -1);
      auVar24[6] = -(pcVar1[6] == -1);
      auVar24[7] = -(pcVar1[7] == -1);
      auVar24[8] = -(pcVar1[8] == -1);
      auVar24[9] = -(pcVar1[9] == -1);
      auVar24[10] = -(pcVar1[10] == -1);
      auVar24[0xb] = -(pcVar1[0xb] == -1);
      auVar24[0xc] = -(pcVar1[0xc] == -1);
      auVar24[0xd] = -(pcVar1[0xd] == -1);
      auVar24[0xe] = -(pcVar1[0xe] == -1);
      auVar24[0xf] = -(pcVar1[0xf] == -1);
      uVar14 = 0xf;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar14 == 0; uVar14 = uVar14 - 1) {
        }
      }
      sVar4 = 0;
      for (uVar18 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar24[0xf] >> 7) << 0xf) | 0x10000; (uVar18 & 1) == 0;
          uVar18 = uVar18 >> 1 | 0x80000000) {
        sVar4 = sVar4 + 1;
      }
      uVar12 = 0x80;
      if ((ushort)(sVar4 + (uVar14 ^ 0xf)) < 0x10) {
        *(longlong *)(param_2 + 0x540) = *(longlong *)(param_2 + 0x540) + 1;
        uVar12 = 0xff;
      }
      *(undefined1 *)(lVar13 + lVar16) = uVar12;
      *(undefined1 *)(lVar13 + 0x10 + uVar17) = uVar12;
      *(longlong *)(param_2 + 0x548) = *(longlong *)(param_2 + 0x548) + -1;
      lVar16 = *(longlong *)(lVar15 + -0xd8);
      if (lVar16 != -1) {
        (*(code *)PTR_memcpy_00799008)(lVar13,0xd0);
        local_10c0 = (longlong *)lVar16;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo>(&local_10c0,lVar15 + -0xd0);
      }
      goto LAB_004b1331;
    }
LAB_004b1260:
    auVar25[0] = -(auVar24[0] == -1);
    auVar25[1] = -(auVar24[1] == -1);
    auVar25[2] = -(auVar24[2] == -1);
    auVar25[3] = -(auVar24[3] == -1);
    auVar25[4] = -(auVar24[4] == -1);
    auVar25[5] = -(auVar24[5] == -1);
    auVar25[6] = -(auVar24[6] == -1);
    auVar25[7] = -(auVar24[7] == -1);
    auVar25[8] = -(auVar24[8] == -1);
    auVar25[9] = -(auVar24[9] == -1);
    auVar25[10] = -(auVar24[10] == -1);
    auVar25[0xb] = -(auVar24[0xb] == -1);
    auVar25[0xc] = -(auVar24[0xc] == -1);
    auVar25[0xd] = -(auVar24[0xd] == -1);
    auVar25[0xe] = -(auVar24[0xe] == -1);
    auVar25[0xf] = -(auVar24[0xf] == -1);
    if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_004b1331;
    uVar11 = uVar11 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  } while( true );
  uVar14 = (ushort)(uVar18 - 1) & (ushort)uVar18;
  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar14);
  if (uVar14 == 0) goto LAB_004b1260;
  goto LAB_004b1223;
LAB_004b1331:
  local_10c0 = (longlong *)
               <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::remove::<str>(param_2 + 0x560,param_4,param_5);
  if (local_10c0 != (longlong *)0x0) {
    LOCK();
    *local_10c0 = *local_10c0 + -1;
    UNLOCK();
    if (*local_10c0 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(&local_10c0);
    }
  }
  uVar17 = *(ulonglong *)(param_2 + 0x48);
  if ((int)*param_6 != 2) {
    uVar22 = (*(code *)PTR_memcpy_00799008)(*param_6 == 2,0x848);
    if (*(char *)(param_2 + 0x598) == '\0') {
      uVar22 = (*(code *)PTR_try_wait_00799320)();
      if (local_10d0 == 0) {
        if (local_10cc == '\0') {
          uVar9 = (*(code *)PTR_as_raw_fd_00799b70)();
          local_10c0 = (longlong *)CONCAT44(0x2001,uVar9);
          iVar10 = (*(code *)PTR_poll_00799b78)(extraout_XMM0_Qa,0);
          uVar22 = extraout_XMM0_Qa_00;
          if (((-1 < iVar10) && (((ulonglong)local_10c0 & 0x2038000000000000) == 0)) &&
             (local_228 == param_8)) {
            if (param_8 != 0) {
              local_10e8 = local_230;
              lVar13 = 0;
              do {
                (*(code *)PTR_<u8>_00799268)();
                lVar13 = lVar13 + 1;
              } while (param_8 != lVar13);
            }
            cVar8 = (*(code *)PTR_<u8>_00799268)();
            uVar22 = extraout_XMM0_Qa_01;
            if ((cVar8 != '\0') &&
               ((ulonglong)(*(longlong *)(param_2 + 0x4b0) + *(longlong *)(param_2 + 0x548)) <
                uVar17)) {
              local_50 = param_3;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,0x848);
              <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
              ::push_back_mut(param_2 + 0x498,&local_10c0);
              goto LAB_004b144a;
            }
          }
        }
      }
      else if ((1 < ((uint)local_10c8 & 3) - 2) && ((local_10c8 & 3) != 0)) {
        local_10b8 = local_10c8 - 1;
        local_10c0 = (longlong *)CONCAT71(local_10c0._1_7_,3);
        uVar22 = (*(code *)PTR_drop_00799040)();
      }
    }
    uVar22 = (*(code *)PTR_memcpy_00799008)(uVar22,0x848);
    lVar13 = local_10f0;
    if (local_10f0 == local_1100) {
      uVar22 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
               ::grow_one(&local_1100,local_878);
    }
    (*(code *)PTR_memcpy_00799008)(uVar22,0x848);
    local_10f0 = lVar13 + 1;
  }
LAB_004b144a:
  craggemini_core[66f3c71560d70857]::pool::pump_account_queue
            (param_2 + 0x498,uVar17,param_7,param_8,&local_1100);
  if (*(longlong *)(param_2 + 0x548) == 0) {
    (*(code *)PTR_notify_waiters_00799550)();
  }
  param_1[2] = local_10f0;
  *param_1 = local_1100;
  param_1[1] = lStack_10f8;
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0x494) = 1;
  }
  LOCK();
  iVar10 = *(int *)(param_2 + 0x490);
  *(int *)(param_2 + 0x490) = 0;
  UNLOCK();
  if (iVar10 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


