// 001fa8b0 write_fmt

/* WARNING: Removing unreachable block (ram,0x001fa9a0) */
/* WARNING: Removing unreachable block (ram,0x001fa9ad) */
/* WARNING: Removing unreachable block (ram,0x001fa990) */
/* WARNING: Removing unreachable block (ram,0x001fa999) */
/* WARNING: Removing unreachable block (ram,0x001fa9b2) */
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
        goto LAB_001fa9f5;
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
    if (lVar6 != *plVar2) goto LAB_001fa934;
LAB_001fa8eb:
    if (*(int *)((longlong)plVar2 + 0xc) != -1) {
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      goto LAB_001fa952;
    }
LAB_001fa9f5:
    (*(code *)PTR_expect_failed_0021a0e0)();
LAB_001faa0e:
    (*(code *)PTR_lock_contended_00219d70)();
  }
  else {
    if (lVar6 == *plVar2) goto LAB_001fa8eb;
LAB_001fa934:
    LOCK();
    bVar7 = (int)plVar2[1] == 0;
    if (bVar7) {
      *(undefined4 *)(plVar2 + 1) = 1;
    }
    UNLOCK();
    if (!bVar7) goto LAB_001faa0e;
  }
  *plVar2 = lVar6;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
LAB_001fa952:
  uVar4 = (*(code *)PTR_write_0021a2e0)(param_3,param_2);
  if ((char)uVar4 != '\0') {
    (*(code *)PTR_panic_fmt_0021a010)
              (uVar4,&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_002173d8)
    ;
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
      (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    }
  }
  return 0;
}


