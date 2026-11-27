// 00250960 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#6}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_some_and::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#6}>
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_some_and::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_6_>
          (longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int *local_68;
  byte local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_1 == 0) {
    uVar13 = 0;
  }
  else {
    piVar1 = (int *)(param_3 + 0x2a8);
    LOCK();
    bVar17 = *(int *)(param_3 + 0x2a8) == 0;
    if (bVar17) {
      *(int *)(param_3 + 0x2a8) = 1;
    }
    UNLOCK();
    if (!bVar17) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      cVar9 = *(char *)(param_3 + 0x2ac);
    }
    else {
      bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar8 = bVar8 ^ 1;
      cVar9 = *(char *)(param_3 + 0x2ac);
    }
    if (cVar9 != '\0') {
      local_68 = piVar1;
      local_60 = bVar8;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>>>>_00785d90
                 ,&local_68,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00784168);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(longlong *)(param_3 + 1000) != 0) {
      uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
               ::hash_one::<&str>(param_3 + 0x3f0,param_1,param_2);
      puVar7 = PTR_bcmp_00799020;
      lVar2 = *(longlong *)(param_3 + 0x3d0);
      uVar3 = *(ulonglong *)(param_3 + 0x3d8);
      bVar18 = (byte)(uVar12 >> 0x39);
      auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
      auVar20 = pshuflw(auVar19,auVar19,0);
      auVar19._0_8_ = auVar20._0_8_;
      auVar19._8_4_ = auVar20._0_4_;
      auVar19._12_4_ = auVar20._4_4_;
      lVar15 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar3;
        auVar20 = *(undefined1 (*) [16])(lVar2 + uVar12);
        auVar21[0] = -(auVar20[0] == auVar19[0]);
        auVar21[1] = -(auVar20[1] == auVar19[1]);
        auVar21[2] = -(auVar20[2] == auVar19[2]);
        auVar21[3] = -(auVar20[3] == auVar19[3]);
        auVar21[4] = -(auVar20[4] == auVar19[4]);
        auVar21[5] = -(auVar20[5] == auVar19[5]);
        auVar21[6] = -(auVar20[6] == auVar19[6]);
        auVar21[7] = -(auVar20[7] == auVar19[7]);
        auVar21[8] = -(auVar20[8] == auVar19[8]);
        auVar21[9] = -(auVar20[9] == auVar19[9]);
        auVar21[10] = -(auVar20[10] == auVar19[10]);
        auVar21[0xb] = -(auVar20[0xb] == auVar19[0xb]);
        auVar21[0xc] = -(auVar20[0xc] == auVar19[0xc]);
        auVar21[0xd] = -(auVar20[0xd] == auVar19[0xd]);
        auVar21[0xe] = -(auVar20[0xe] == auVar19[0xe]);
        auVar21[0xf] = -(auVar20[0xf] == auVar19[0xf]);
        uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar10;
        if (uVar10 != 0) {
          local_58 = auVar20;
          local_48 = auVar19;
          do {
            uVar5 = 0;
            for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar12 & uVar3;
            if (param_2 == *(longlong *)(lVar2 + uVar14 * -0x80 + -0x70)) {
              iVar11 = (*(code *)puVar7)(uVar14 * 0x80,param_2);
              uVar13 = 1;
              if (iVar11 == 0) goto LAB_00250acb;
            }
            uVar10 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar10);
            auVar19 = local_48;
            auVar20 = local_58;
          } while (uVar10 != 0);
        }
        auVar22[0] = -(auVar20[0] == -1);
        auVar22[1] = -(auVar20[1] == -1);
        auVar22[2] = -(auVar20[2] == -1);
        auVar22[3] = -(auVar20[3] == -1);
        auVar22[4] = -(auVar20[4] == -1);
        auVar22[5] = -(auVar20[5] == -1);
        auVar22[6] = -(auVar20[6] == -1);
        auVar22[7] = -(auVar20[7] == -1);
        auVar22[8] = -(auVar20[8] == -1);
        auVar22[9] = -(auVar20[9] == -1);
        auVar22[10] = -(auVar20[10] == -1);
        auVar22[0xb] = -(auVar20[0xb] == -1);
        auVar22[0xc] = -(auVar20[0xc] == -1);
        auVar22[0xd] = -(auVar20[0xd] == -1);
        auVar22[0xe] = -(auVar20[0xe] == -1);
        auVar22[0xf] = -(auVar20[0xf] == -1);
        if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x1f,0) & 1) != 0) || (SUB161(auVar22 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
        uVar12 = uVar12 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
    uVar13 = 0;
LAB_00250acb:
    if ((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
    {
      cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar9 == '\0') {
        *(undefined1 *)(param_3 + 0x2ac) = 1;
      }
    }
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  return uVar13;
}


