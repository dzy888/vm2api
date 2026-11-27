// 0064feb0 get_by_env

/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get_by_env */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get_by_env
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong *puVar15;
  bool bVar16;
  byte bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  LOCK();
  bVar16 = *(int *)(param_1 + 0x58) == 0;
  if (bVar16) {
    *(int *)(param_1 + 0x58) = 1;
  }
  UNLOCK();
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = *(char *)(param_1 + 0x5c);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = *(char *)(param_1 + 0x5c);
  }
  if (cVar7 != '\0') {
    local_98 = param_1 + 0x58;
    local_90 = bVar6;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>_00790660
               ,&local_98,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790748);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_60 = param_2;
    uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_1 + 0x80,param_2,param_3);
    puVar5 = PTR_bcmp_00799020;
    lVar1 = *(longlong *)(param_1 + 0x60);
    uVar12 = *(ulonglong *)(param_1 + 0x68);
    bVar17 = (byte)(uVar10 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar19 = pshuflw(auVar18,auVar18,0);
    auVar18._0_8_ = auVar19._0_8_;
    auVar18._8_4_ = auVar19._0_4_;
    auVar18._12_4_ = auVar19._4_4_;
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar12;
      auVar19 = *(undefined1 (*) [16])(lVar1 + uVar10);
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
      uVar8 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar8;
      if (uVar8 != 0) {
        local_80 = param_1 + 0x58;
        local_78 = uVar12;
        local_70 = lVar13;
        local_68 = uVar10;
        local_58 = auVar19;
        local_48 = auVar18;
        do {
          uVar3 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar12 = uVar3 + local_68 & local_78;
          if ((param_3 == *(longlong *)(lVar1 + -0x20 + uVar12 * -0x30)) &&
             (iVar9 = (*(code *)puVar5)(-uVar12,param_3), iVar9 == 0)) {
            (*(code *)PTR_clone_00798fd0)();
            if ((bVar6 == 0) &&
               (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0 &&
                (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')))) {
              *(undefined1 *)(param_1 + 0x5c) = 1;
            }
            LOCK();
            iVar9 = *(int *)(param_1 + 0x58);
            *(int *)(param_1 + 0x58) = 0;
            UNLOCK();
            if (iVar9 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            uVar11 = get(param_1,CONCAT71(uStack_8f,local_90),local_88);
            if (local_98 == 0) {
              return uVar11;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
            return uVar11;
          }
          uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
          uVar10 = local_68;
          lVar13 = local_70;
          uVar12 = local_78;
          auVar18 = local_48;
          auVar19 = local_58;
        } while (uVar8 != 0);
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
      puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  if (((bVar6 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  LOCK();
  iVar9 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = 0;
  UNLOCK();
  if (iVar9 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return 0;
}


