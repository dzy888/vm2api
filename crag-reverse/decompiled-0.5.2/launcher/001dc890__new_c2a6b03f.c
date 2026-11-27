// 001dc890 new

/* <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::new */

void __rustcall <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::new(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *in_FS_OFFSET;
  bool bVar7;
  
  uVar2 = *(ulonglong *)(*in_FS_OFFSET + -0x10);
  if (uVar2 < 3) {
    if (uVar2 == 2) {
      if (*(longlong *)(*in_FS_OFFSET + -8) == 0) {
        lVar6 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
        do {
          if (lVar6 == -1) {
            <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
            goto LAB_001dc992;
          }
          lVar3 = lVar6 + 1;
          LOCK();
          bVar7 = lVar6 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
          if (bVar7) {
            <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar3;
          }
          else {
            lVar6 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
          }
          UNLOCK();
        } while (!bVar7);
        *(longlong *)(*in_FS_OFFSET + -8) = lVar3;
      }
      lVar6 = (*(code *)PTR_new_0021a1b0)();
    }
    else {
      lVar6 = std[6c98fd8553dbae28]::thread::current::init_current(uVar2);
    }
  }
  else {
    LOCK();
    plVar1 = (longlong *)(uVar2 - 0x10);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar6,1) != *plVar1 < 0) goto LAB_001dc9a6;
    lVar6 = uVar2 - 0x10;
  }
  lVar3 = *in_FS_OFFSET;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[4] = 0;
    puVar5[5] = lVar3 + -0x70;
    puVar5[2] = lVar6;
    puVar5[3] = 0;
    *puVar5 = 1;
    puVar5[1] = 1;
    return;
  }
LAB_001dc992:
  (*(code *)PTR_handle_alloc_error_00219eb0)();
LAB_001dc9a6:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


