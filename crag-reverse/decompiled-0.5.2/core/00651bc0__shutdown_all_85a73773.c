// 00651bc0 shutdown_all

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::shutdown_all */

void __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::shutdown_all(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  bool bVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_03;
  longlong *local_88;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  undefined1 *local_70;
  ushort local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x20);
  LOCK();
  bVar17 = *(int *)(param_1 + 0x20) == 0;
  if (bVar17) {
    *(int *)(param_1 + 0x20) = 1;
  }
  UNLOCK();
  if (!bVar17) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar10 = *(char *)(param_1 + 0x24);
    uVar18 = _UNK_0078aa78;
    lVar2 = local_60;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar10 = *(char *)(param_1 + 0x24);
    uVar18 = _UNK_0078aa78;
    lVar2 = local_60;
  }
  _UNK_0078aa78 = uVar18;
  if (cVar10 == '\0') {
    local_38 = (undefined8 *)(param_1 + 0x28);
    local_80 = *(undefined1 (**) [16])(param_1 + 0x28);
    local_70 = *local_80 + *(longlong *)(param_1 + 0x30) + 1;
    auVar19 = *local_80;
    local_68 = ~((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
    local_60 = *(longlong *)(param_1 + 0x40);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(ulonglong *)(param_1 + 0x30);
    local_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x28) =
         anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    *(undefined8 *)(param_1 + 0x30) = uVar18;
    auVar19 = _DAT_0078aa80;
    uVar18 = (undefined8)DAT_0078aa80;
    *(undefined1 (*) [16])(param_1 + 0x38) = _DAT_0078aa80;
    local_78 = local_80 + 1;
    if (local_60 != 0) {
      do {
        uVar11 = (uint)local_68;
        if (local_68 == 0) {
          do {
            auVar19 = *local_78;
            local_80 = local_80 + -0x20;
            local_78 = local_78 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar11 == 0);
        }
        uVar18 = auVar19._0_8_;
        iVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar11 = uVar11 - 1 & uVar11;
        local_68 = (ushort)uVar11;
        lVar15 = local_60 + -1;
        lVar2 = *(longlong *)((longlong)local_80 + (-0x20 - (ulonglong)(uint)(iVar5 << 5)));
        if (lVar2 == -1) {
          lVar2 = lVar15;
          if (lVar15 != 0) {
            pauVar14 = local_78;
            pauVar16 = local_80;
            do {
              if ((short)uVar11 == 0) {
                do {
                  auVar19 = *pauVar14;
                  pauVar16 = pauVar16 + -0x20;
                  pauVar14 = pauVar14 + 1;
                  uVar11 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar11 == 0);
                local_80 = pauVar16;
                local_78 = pauVar14;
              }
              iVar5 = 0;
              for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                iVar5 = iVar5 + 1;
              }
              uVar11 = uVar11 - 1 & uVar11;
              local_68 = (ushort)uVar11;
              uVar13 = (ulonglong)(uint)(iVar5 << 5);
              lVar15 = lVar15 + -1;
              local_60 = lVar15;
              if (*(longlong *)((longlong)pauVar16 + (-0x20 - uVar13)) != 0) {
                auVar19._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
                auVar19._8_8_ = extraout_XMM0_Qb_02;
              }
              plVar3 = *(longlong **)((longlong)pauVar16 + (-8 - uVar13));
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                auVar19._0_8_ =
                     <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
                     ::drop_slow((longlong)pauVar16 + (-8 - uVar13));
                auVar19._8_8_ = extraout_XMM0_Qb_03;
              }
              uVar18 = auVar19._0_8_;
              lVar2 = local_60;
            } while (lVar15 != 0);
          }
          break;
        }
        local_88 = *(longlong **)((longlong)local_80 + (-8 - (ulonglong)(uint)(iVar5 << 5)));
        local_60 = lVar15;
        if (local_88[100] != 0) {
          auVar19._0_8_ =
               <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop
                         (local_88[100] + 0x10);
          auVar19._8_8_ = extraout_XMM0_Qb;
        }
        LOCK();
        *local_88 = *local_88 + -1;
        UNLOCK();
        if (*local_88 == 0) {
          auVar19._0_8_ =
               <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
               ::drop_slow(&local_88);
          auVar19._8_8_ = extraout_XMM0_Qb_00;
        }
        if (lVar2 != 0) {
          auVar19._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar19._0_8_,1);
          auVar19._8_8_ = extraout_XMM0_Qb_01;
        }
        uVar18 = auVar19._0_8_;
        lVar2 = local_60;
      } while (local_60 != 0);
    }
    local_60 = lVar2;
    uVar13 = uStack_50;
    if (uStack_50 != 0) {
      (*(code *)PTR_memset_00799090)(uVar18,uStack_50 + 0x11);
    }
    uVar12 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
    if (uVar13 < 8) {
      uVar12 = uVar13;
    }
    uStack_40 = 0;
    local_48._0_4_ = (undefined4)uVar12;
    local_48._4_4_ = (undefined4)(uVar12 >> 0x20);
    *local_38 = local_58;
    local_38[1] = uStack_50;
    *(undefined4 *)(local_38 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)local_38 + 0x14) = local_48._4_4_;
    *(undefined4 *)(local_38 + 3) = 0;
    *(undefined4 *)((longlong)local_38 + 0x1c) = 0;
    pauVar14 = (undefined1 (*) [16])(param_1 + 0x58);
    LOCK();
    bVar17 = *(int *)(param_1 + 0x58) == 0;
    if (bVar17) {
      *(int *)(param_1 + 0x58) = 1;
    }
    puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    UNLOCK();
    local_48 = uVar12;
    if (!bVar17) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) == 0) {
      bVar9 = 0;
      cVar10 = *(char *)(param_1 + 0x5c);
    }
    else {
      bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar9 = bVar9 ^ 1;
      cVar10 = *(char *)(param_1 + 0x5c);
    }
    if (cVar10 == '\0') {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>
      ::clear(param_1 + 0x60);
      if (((bVar9 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
        *(undefined1 *)(param_1 + 0x5c) = 1;
      }
      LOCK();
      iVar5 = *(int *)*pauVar14;
      *(undefined4 *)*pauVar14 = 0;
      UNLOCK();
      if (iVar5 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      LOCK();
      iVar5 = *(int *)*pauVar1;
      *(undefined4 *)*pauVar1 = 0;
      UNLOCK();
      if (iVar5 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      return;
    }
    local_78._1_7_ = (undefined7)((ulonglong)local_78 >> 8);
    local_78 = (undefined1 (*) [16])CONCAT71(local_78._1_7_,bVar9);
    local_80 = pauVar14;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>_00790660
               ,&local_80,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790790);
  }
  else {
    local_78._1_7_ = (undefined7)((ulonglong)local_78 >> 8);
    local_78 = (undefined1 (*) [16])CONCAT71(local_78._1_7_,bVar8);
    local_80 = pauVar1;
    local_60 = lVar2;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_63b06cc94833867f683611f039574387_321_llvm_6903579140370050947,&local_80,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790778);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


