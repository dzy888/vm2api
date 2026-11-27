// 000a6f20 write_fmt

/* WARNING: Removing unreachable block (ram,0x000a7010) */
/* WARNING: Removing unreachable block (ram,0x000a701d) */
/* WARNING: Removing unreachable block (ram,0x000a7000) */
/* WARNING: Removing unreachable block (ram,0x000a7009) */
/* WARNING: Removing unreachable block (ram,0x000a7022) */
/* <&std[6c98fd8553dbae28]::io::stdio::Stderr as std[6c98fd8553dbae28]::io::Write>::write_fmt */

undefined8 __rustcall
<&std[6c98fd8553dbae28]::io::stdio::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)*param_1;
  plVar5 = (longlong *)__tls_get_addr();
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    lVar6 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    do {
      if (lVar6 == -1) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted(&PTR_000c41c8);
        goto LAB_000a7065;
      }
      lVar7 = lVar6 + 1;
      LOCK();
      bVar8 = lVar6 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      if (bVar8) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar7;
      }
      else {
        lVar6 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar8);
    *plVar5 = lVar7;
    if (lVar7 != *plVar2) goto LAB_000a6fa4;
LAB_000a6f5b:
    if (*(int *)((longlong)plVar2 + 0xc) != -1) {
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      goto LAB_000a6fc2;
    }
LAB_000a7065:
    (*(code *)PTR_expect_failed_000c3d38)();
LAB_000a707e:
    (*(code *)PTR_lock_contended_000c3c80)();
  }
  else {
    if (lVar7 == *plVar2) goto LAB_000a6f5b;
LAB_000a6fa4:
    LOCK();
    bVar8 = (int)plVar2[1] == 0;
    if (bVar8) {
      *(undefined4 *)(plVar2 + 1) = 1;
    }
    UNLOCK();
    if (!bVar8) goto LAB_000a707e;
  }
  *plVar2 = lVar7;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
LAB_000a6fc2:
  uVar4 = (*(code *)PTR_write_000c3f70)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    (*(code *)PTR_panic_fmt_000c3e90)
              (uVar4,&
                     PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c1460
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
    lVar7 = plVar2[1];
    *(undefined4 *)(plVar2 + 1) = 0;
    UNLOCK();
    if ((int)lVar7 == 2) {
      (*(code *)PTR_syscall_000c4110)(1,0x81);
    }
  }
  return 0;
}


