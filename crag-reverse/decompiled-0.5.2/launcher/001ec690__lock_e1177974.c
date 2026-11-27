// 001ec690 lock

/* <std[6c98fd8553dbae28]::io::stdio::Stderr>::lock
   <std[6c98fd8553dbae28]::io::stdio::Stdout>::lock */

longlong * __rustcall <std[6c98fd8553dbae28]::io::stdio::Stderr>::lock(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *in_FS_OFFSET;
  bool bVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = *(longlong *)(*in_FS_OFFSET + -8);
  if (lVar3 == 0) {
    lVar2 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    do {
      if (lVar2 == -1) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
        goto LAB_001ec725;
      }
      lVar3 = lVar2 + 1;
      LOCK();
      bVar4 = lVar2 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      if (bVar4) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar3;
      }
      else {
        lVar2 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
    } while (!bVar4);
    *(longlong *)(*in_FS_OFFSET + -8) = lVar3;
    if (lVar3 != *plVar1) goto LAB_001ec700;
LAB_001ec6ba:
    if (*(int *)((longlong)plVar1 + 0xc) != -1) {
      *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
      return plVar1;
    }
LAB_001ec725:
    (*(code *)PTR_expect_failed_0021a0e0)();
  }
  else {
    if (lVar3 == *plVar1) goto LAB_001ec6ba;
LAB_001ec700:
    LOCK();
    bVar4 = (int)plVar1[1] == 0;
    if (bVar4) {
      *(undefined4 *)(plVar1 + 1) = 1;
    }
    UNLOCK();
    if (bVar4) goto LAB_001ec70e;
  }
  (*(code *)PTR_lock_contended_00219d70)();
LAB_001ec70e:
  *plVar1 = lVar3;
  *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
  return plVar1;
}


