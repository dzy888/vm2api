// 007665f0 write_fmt

/* WARNING: Removing unreachable block (ram,0x007666e0) */
/* WARNING: Removing unreachable block (ram,0x007666ed) */
/* WARNING: Removing unreachable block (ram,0x007666d0) */
/* WARNING: Removing unreachable block (ram,0x007666d9) */
/* WARNING: Removing unreachable block (ram,0x007666f2) */
/* <&std[6c98fd8553dbae28]::io::stdio::Stdout as std[6c98fd8553dbae28]::io::Write>::write_fmt */

undefined8 __rustcall
<&std[6c98fd8553dbae28]::io::stdio::Stdout_as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *in_FS_OFFSET;
  bool bVar7;
  
  plVar2 = *(longlong **)*param_1;
  lVar6 = *(longlong *)(*in_FS_OFFSET + -8);
  if (lVar6 == 0) {
    lVar5 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    do {
      if (lVar5 == -1) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
        goto LAB_00766735;
      }
      lVar6 = lVar5 + 1;
      LOCK();
      bVar7 = lVar5 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      if (bVar7) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar6;
      }
      else {
        lVar5 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar7);
    *(longlong *)(*in_FS_OFFSET + -8) = lVar6;
    if (lVar6 != *plVar2) goto LAB_00766674;
LAB_0076662b:
    if (*(int *)((longlong)plVar2 + 0xc) != -1) {
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      goto LAB_00766692;
    }
LAB_00766735:
    (*(code *)PTR_expect_failed_00799440)();
LAB_0076674e:
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  else {
    if (lVar6 == *plVar2) goto LAB_0076662b;
LAB_00766674:
    LOCK();
    bVar7 = (int)plVar2[1] == 0;
    if (bVar7) {
      *(undefined4 *)(plVar2 + 1) = 1;
    }
    UNLOCK();
    if (!bVar7) goto LAB_0076674e;
  }
  *plVar2 = lVar6;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
LAB_00766692:
  uVar4 = (*(code *)PTR_write_007994b0)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar4,&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_00796228
              );
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  piVar1 = (int *)((longlong)plVar2 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *plVar2 = 0;
    LOCK();
    lVar6 = plVar2[1];
    *(undefined4 *)(plVar2 + 1) = 0;
    UNLOCK();
    if ((int)lVar6 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
    }
  }
  return 0;
}


