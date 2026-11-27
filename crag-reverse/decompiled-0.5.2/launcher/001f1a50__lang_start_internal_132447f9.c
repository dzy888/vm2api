// 001f1a50 lang_start_internal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std[6c98fd8553dbae28]::rt::lang_start_internal */

longlong __rustcall
std[6c98fd8553dbae28]::rt::lang_start_internal
          (undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
          ulonglong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *in_FS_OFFSET;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  int local_3c;
  int local_38 [2];
  
  uVar18 = param_5 & 0xffffffff;
  plVar1 = (longlong *)(*in_FS_OFFSET + -8);
  lVar12 = *plVar1;
  plVar16 = param_4;
  local_68 = param_3;
  if (lVar12 == 0) {
    lVar14 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    do {
      if (lVar14 == -1) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
        goto LAB_001f20d3;
      }
      lVar12 = lVar14 + 1;
      LOCK();
      bVar19 = lVar14 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      if (bVar19) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar12;
      }
      else {
        lVar14 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar19);
    *plVar1 = lVar12;
    plVar16 = plVar1;
  }
  puVar5 = PTR_poll_0021a440;
  puVar4 = PTR___errno_location_00219f18;
  local_108 = (code *)0x0;
  uStack_100 = CONCAT44(_UNK_00113ce4,_DAT_00113ce0);
  uStack_f8 = CONCAT44(_UNK_00113cec,_UNK_00113ce8);
  thread::main_thread::MAIN = lVar12;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = param_4;
  do {
    iVar8 = (*(code *)puVar5)(plVar16,0);
    puVar7 = PTR_dup_0021aa40;
    puVar6 = PTR_open64_0021a840;
    if (iVar8 != -1) {
      puVar11 = (uint *)0xffffffff;
      lVar12 = 0;
      uVar20 = extraout_XMM0_Da;
      goto LAB_001f1c60;
    }
    puVar11 = (uint *)(*(code *)puVar4)();
    uVar10 = *puVar11;
    plVar16 = (longlong *)(ulonglong)uVar10;
  } while (uVar10 == 4);
  if ((0x16 < uVar10) || ((0x401800U >> (uVar10 & 0x1f) & 1) == 0)) goto LAB_001f1ca8;
  iVar8 = (*(code *)PTR_fcntl_00219f30)();
  iVar9 = -1;
  if ((iVar8 == -1) &&
     ((*puVar11 == 9 && (iVar9 = (*(code *)PTR_open64_0021a840)(extraout_XMM0_Da_00,0), iVar9 == -1)
      ))) goto LAB_001f1ca8;
  iVar8 = (*(code *)PTR_fcntl_00219f30)();
  if ((iVar8 == -1) && (*puVar11 == 9)) {
    uVar20 = extraout_XMM0_Da_01;
    if (iVar9 != -1) {
      iVar8 = (*(code *)PTR_dup_0021aa40)();
      uVar20 = extraout_XMM0_Da_02;
      if (iVar8 != -1) goto LAB_001f1bca;
    }
    iVar9 = (*(code *)PTR_open64_0021a840)(uVar20,0);
    if (iVar9 == -1) goto LAB_001f1ca8;
  }
LAB_001f1bca:
  iVar8 = (*(code *)PTR_fcntl_00219f30)();
  uVar20 = extraout_XMM0_Da_03;
  if ((iVar8 == -1) && (*puVar11 == 9)) {
    if (iVar9 != -1) {
      iVar8 = (*(code *)PTR_dup_0021aa40)();
      uVar20 = extraout_XMM0_Da_04;
      if (iVar8 != -1) goto LAB_001f1c18;
    }
    iVar8 = (*(code *)PTR_open64_0021a840)(uVar20,0);
    uVar20 = extraout_XMM0_Da_05;
    if (iVar8 == -1) {
LAB_001f1ca8:
      lVar12 = (*(code *)PTR_abort_0021aa48)();
      return lVar12;
    }
  }
LAB_001f1c18:
  if (3 < (byte)uVar18) {
    (*(code *)PTR_panic_00219ca8)(uVar20,&PTR_s__rustc_48a229ceaefd4985c50990b14_002180f8);
    goto LAB_001f20d3;
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_5 & 0xff) {
  case 1:
    DAT_0021c908._4_1_ = 1;
    goto LAB_001f1ccc;
  case 3:
  case 2:
    DAT_0021c908._4_1_ = 1;
  }
  lVar12 = (*(code *)PTR_signal_0021a960)();
  if (lVar12 == -1) {
    uVar15 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
             write_all(0xd,
                       "fatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\n"
                       ,0x61);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar15);
    (*(code *)PTR_abort_00219ea8)();
LAB_001f1fc2:
    (*(code *)PTR_panic_nounwind_0021aa78)();
  }
  else {
LAB_001f1ccc:
    uVar13 = (*(code *)PTR_sysconf_0021a980)();
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    local_108 = (code *)0x0;
    uStack_100 = 0;
    local_d8 = 0;
    sys::pal::unix::stack_overflow::imp::PAGE_SIZE = uVar13;
    (*(code *)PTR_pthread_self_0021aa50)();
    iVar8 = (*(code *)PTR_pthread_getattr_np_0021aa58)();
    bVar19 = iVar8 == 0;
    if (!bVar19) {
LAB_001f1db9:
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      local_108 = (code *)0x0;
      uStack_100 = 0;
      local_78 = 0;
      uVar20 = (*(code *)PTR_sigaction_0021aa68)(0,&local_108);
      if (local_108 == (code *)0x0) {
        if (sys::pal::unix::stack_overflow::imp::NEED_ALTSTACK == '\0') {
          sys::pal::unix::stack_overflow::imp::NEED_ALTSTACK = '\x01';
          sys::pal::unix::stack_overflow::imp::MAIN_ALTSTACK =
               sys::pal::unix::stack_overflow::imp::make_handler(1,0);
          uVar20 = extraout_XMM0_Da_08;
          if (iVar8 == 0) {
            uVar20 = sys::pal::unix::stack_overflow::thread_info::set_current_info(puVar11,uVar18);
          }
          bVar19 = false;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,0x8000004);
        local_108 = sys::pal::unix::stack_overflow::imp::signal_handler;
        uVar20 = (*(code *)PTR_sigaction_0021aa68)(uVar20,0);
      }
      uVar20 = (*(code *)PTR_sigaction_0021aa68)(uVar20,&local_108);
      if (local_108 == (code *)0x0) {
        if (sys::pal::unix::stack_overflow::imp::NEED_ALTSTACK == '\0') {
          sys::pal::unix::stack_overflow::imp::NEED_ALTSTACK = '\x01';
          sys::pal::unix::stack_overflow::imp::MAIN_ALTSTACK =
               sys::pal::unix::stack_overflow::imp::make_handler(1,0);
          uVar20 = extraout_XMM0_Da_09;
          if (bVar19) {
            uVar20 = sys::pal::unix::stack_overflow::thread_info::set_current_info(puVar11,uVar18);
          }
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,0x8000004);
        local_108 = sys::pal::unix::stack_overflow::imp::signal_handler;
        (*(code *)PTR_sigaction_0021aa68)(uVar20,0);
      }
      sys::args::unix::imp::ARGC = local_68;
      sys::args::unix::imp::ARGV = local_50;
      iVar8 = (**(code **)(local_60 + 0x28))();
      if (cleanup::CLEANUP != 0) {
        local_38[0]._0_1_ = 1;
        local_108 = (code *)local_38;
        (*(code *)PTR_call_0021a698)
                  (&DAT_00217240,&local_108,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217cc0);
      }
      lVar14 = (*(code *)PTR___errno_location_00219f18)();
      puVar4 = PTR_pause_0021aa70;
      lVar12 = 0;
      LOCK();
      bVar19 = sys::exit::unique_thread_exit::EXITING_THREAD_ID == 0;
      if (bVar19) {
        sys::exit::unique_thread_exit::EXITING_THREAD_ID = lVar14;
      }
      else {
        lVar12 = sys::exit::unique_thread_exit::EXITING_THREAD_ID;
      }
      UNLOCK();
      if (bVar19) {
        return (longlong)iVar8;
      }
      if (lVar12 != lVar14) {
        do {
          (*(code *)puVar4)();
        } while( true );
      }
      goto LAB_001f1fc2;
    }
    local_48 = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_3c = (*(code *)PTR_pthread_attr_getstack_0021aa60)();
    uVar18 = local_48;
    if (local_3c == 0) {
      iVar9 = (*(code *)PTR_pthread_attr_destroy_0021a770)();
      local_38[0] = iVar9;
      if (iVar9 == 0) {
        if (uVar13 == 0) {
          (*(code *)PTR_panic_const_rem_by_zero_0021a6d8)();
          goto LAB_001f20d3;
        }
        if ((uVar18 | uVar13) >> 0x20 == 0) {
          uVar17 = (uVar18 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar17 = uVar18 % uVar13;
        }
        lVar12 = uVar13 - uVar17;
        if (uVar17 == 0) {
          lVar12 = 0;
        }
        uVar18 = uVar18 + lVar12;
        puVar11 = (uint *)(uVar18 - uVar13);
        goto LAB_001f1db9;
      }
    }
  }
  (*(code *)PTR_<i32,i32>_0021a778)(0,"");
LAB_001f20d3:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
  while( true ) {
    uVar10 = (*(code *)puVar6)(uVar20,0);
    puVar11 = (uint *)(ulonglong)uVar10;
    uVar20 = extraout_XMM0_Da_07;
    if (uVar10 == 0xffffffff) break;
LAB_001f1c60:
    do {
      if (lVar12 == 0x18) goto LAB_001f1c18;
      lVar14 = lVar12 + 8;
      lVar3 = lVar12 + 6;
      lVar12 = lVar14;
    } while ((*(byte *)((longlong)&local_108 + lVar3) & 0x20) == 0);
    if ((int)puVar11 != -1) {
      iVar8 = (*(code *)puVar7)();
      uVar20 = extraout_XMM0_Da_06;
      if (iVar8 != -1) goto LAB_001f1c60;
    }
  }
  goto LAB_001f1ca8;
}


