// 00708210 park_internal

/* <tokio[d7d91d38da47d894]::runtime::time::Driver>::park_internal */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::Driver>::park_internal
          (char *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined **extraout_RDX;
  ulonglong uVar14;
  undefined **ppuVar15;
  longlong *plVar16;
  uint unaff_EBP;
  ulonglong uVar17;
  longlong unaff_R14;
  int *unaff_R15;
  bool bVar18;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  if (*(int *)(param_2 + 0x90) == -1) {
    param_1 = "A";
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_26_llvm_17798946807444736387_007954e0
              );
  }
  else {
    unaff_EBP = (uint)param_4;
    unaff_R15 = (int *)(param_2 + 0x50);
    LOCK();
    bVar18 = *(int *)(param_2 + 0x50) == 0;
    if (bVar18) {
      *(int *)(param_2 + 0x50) = 1;
    }
    UNLOCK();
    unaff_R14 = param_2;
    local_58 = param_3;
    if (bVar18) goto LAB_0070824b;
  }
  (*(code *)PTR_lock_contended_00798fe0)();
LAB_0070824b:
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar2 = *(char *)(unaff_R14 + 0x80);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar2 = *(char *)(unaff_R14 + 0x80);
  }
  if (cVar2 != '\0') {
    (*(code *)PTR_panic_00799338)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::next_expiration
            (&local_50,unaff_R14 + 0x58);
  cVar2 = (char)local_50;
  lVar10 = local_38 + (local_38 == 0);
  plVar16 = (longlong *)0x0;
  if ((char)local_50 == '\0') {
    lVar10 = 0;
  }
  *(longlong *)(unaff_R14 + 0x78) = lVar10;
  ppuVar15 = extraout_RDX;
  uVar17 = local_38;
  if ((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
  goto LAB_007085cd;
  do {
    uVar13 = SUB84(ppuVar15,0);
    LOCK();
    iVar1 = *unaff_R15;
    *unaff_R15 = (int)plVar16;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
      if (cVar2 != '\0') goto LAB_007082e9;
LAB_007084ad:
      if (unaff_EBP == 0xffffffff) {
        if (*(longlong *)param_1 == -1) {
          <tokio[d7d91d38da47d894]::runtime::park::Inner>::park
                    (*(longlong *)((longlong)param_1 + 8) + 0x10);
          uVar13 = extraout_EDX_02;
          goto LAB_0070853f;
        }
        if (*(int *)(unaff_R14 + 0x44) == -1) {
          (*(code *)PTR_expect_failed_00799440)
                    (0xffffffff,&anon_c49be660a078f24638188b28ebcb61a3_10_llvm_15508925077749842928)
          ;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::time::InnerState>>
                    (unaff_R15,bVar8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
LAB_007084fa:
        <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::turn(param_1,unaff_R14);
        <tokio[d7d91d38da47d894]::runtime::signal::Driver>::process(param_1);
        <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
        ::reap_orphans(tokio[d7d91d38da47d894]::process::imp::get_orphan_queue::ORPHAN_QUEUE,
                       (longlong *)((longlong)param_1 + 0x48));
        uVar13 = extraout_EDX_00;
LAB_0070853f:
        local_50 = (*(code *)PTR_now_00799250)();
        local_48 = uVar13;
        uVar11 = (ulonglong)*(uint *)(unaff_R14 + 0x90);
        uVar17 = (*(code *)PTR_duration_since_007992b0)();
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (uVar11 & 0xffffffff) / 1000000;
        auVar7 = auVar4 * ZEXT816(1000) + auVar7;
        uVar17 = auVar7._0_8_;
        if (0xfffffffffffffffc < uVar17) {
          uVar17 = 0xfffffffffffffffd;
        }
        if (auVar7._8_8_ != 0) {
          uVar17 = 0xfffffffffffffffd;
        }
        <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::process_at_time(unaff_R15,uVar17);
        return;
      }
      if (*(longlong *)param_1 == -1) {
        lVar10 = *(longlong *)((longlong)param_1 + 8);
LAB_00708529:
        <tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout
                  (lVar10 + 0x10,local_58,unaff_EBP);
        uVar13 = extraout_EDX_01;
        goto LAB_0070853f;
      }
      iVar1 = *(int *)(unaff_R14 + 0x44);
    }
    else {
      if (cVar2 == '\0') goto LAB_007084ad;
LAB_007082e9:
      local_50 = (*(code *)PTR_now_00799250)();
      uVar14 = (ulonglong)*(uint *)(unaff_R14 + 0x90);
      local_48 = uVar13;
      uVar11 = (*(code *)PTR_duration_since_007992b0)();
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (uVar14 & 0xffffffff) / 1000000;
      auVar6 = auVar3 * ZEXT816(1000) + auVar6;
      uVar11 = auVar6._0_8_;
      if (0xfffffffffffffffc < uVar11) {
        uVar11 = 0xfffffffffffffffd;
      }
      if (auVar6._8_8_ != 0) {
        uVar11 = 0xfffffffffffffffd;
      }
      bVar18 = uVar11 <= uVar17;
      uVar17 = uVar17 - uVar11;
      uVar11 = 0;
      if (bVar18) {
        uVar11 = uVar17;
      }
      uVar14 = uVar11 / 1000;
      if (999 < uVar11 || uVar11 % 1000 != 0) {
        uVar12 = (int)(uVar11 % 1000) * 1000000;
        if (unaff_EBP != 0xffffffff) {
          bVar18 = uVar14 < local_58;
          if (uVar14 == local_58) {
            bVar18 = uVar12 < unaff_EBP;
          }
          if (!bVar18) {
            uVar14 = local_58;
            uVar12 = unaff_EBP;
          }
        }
        if (*(longlong *)param_1 != -1) {
          iVar1 = *(int *)(unaff_R14 + 0x44);
          goto joined_r0x007083cf;
        }
        lVar10 = *(longlong *)((longlong)param_1 + 8);
        local_58 = uVar14;
        unaff_EBP = uVar12;
        goto LAB_00708529;
      }
      if (*(longlong *)param_1 == -1) {
        <tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout
                  (*(longlong *)((longlong)param_1 + 8) + 0x10,0,0);
        uVar13 = extraout_EDX;
        goto LAB_0070853f;
      }
      iVar1 = *(int *)(unaff_R14 + 0x44);
    }
joined_r0x007083cf:
    if (iVar1 != -1) goto LAB_007084fa;
    ppuVar15 = &anon_c49be660a078f24638188b28ebcb61a3_9_llvm_15508925077749842928;
    (*(code *)PTR_expect_failed_00799440)();
    plVar16 = (longlong *)param_1;
LAB_007085cd:
    cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar9 == '\0') {
      *(undefined1 *)(unaff_R14 + 0x54) = 1;
    }
  } while( true );
}


