// 000a3ab0 thread_start

/* <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::thread_start */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::thread_start(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_000a3c5c;
  ppuVar9 = &PTR_000c4230;
  plVar4 = (longlong *)__tls_get_addr();
  if (*plVar4 != 0) {
LAB_000a3c39:
    uVar7 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(ppuVar9,&DAT_00015f43,0x55);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar7);
    (*(code *)PTR_abort_000c3e60)();
LAB_000a3c5c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppuVar9 = &PTR_000c41c8;
  plVar5 = (longlong *)__tls_get_addr();
  if (*plVar5 == 0) {
    *plVar5 = plVar2[2];
  }
  else if (*plVar5 != plVar2[2]) goto LAB_000a3c39;
  if (std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::DTORS == 0) {
    <std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init();
  }
  uVar10 = (*(code *)PTR_pthread_setspecific_000c4468)();
  *plVar4 = (longlong)(plVar2 + 2);
  plVar2 = (longlong *)*param_1;
  if (plVar2[3] == 0) {
    if ((std[6c98fd8553dbae28]::thread::main_thread::MAIN == 0) ||
       (std[6c98fd8553dbae28]::thread::main_thread::MAIN != plVar2[2])) goto LAB_000a3bc3;
    uVar6 = 4;
LAB_000a3b91:
    uVar8 = 0xf;
    if (uVar6 < 0xf) {
      uVar8 = uVar6;
    }
    (*(code *)PTR_memcpy_000c3aa8)(0,uVar8);
  }
  else {
    uVar6 = plVar2[4] - 1;
    if (uVar6 != 0) goto LAB_000a3b91;
  }
  (*(code *)PTR_pthread_self_000c43d0)();
  uVar10 = (*(code *)PTR_pthread_setname_np_000c44e8)();
LAB_000a3bc3:
  lVar1 = param_1[2];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar10 = (*(code *)PTR_drop_slow_000c3af0)();
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar10,8);
  uVar7 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::make_handler(0,0x18);
  uVar10 = (**(code **)(lVar1 + 0x18))();
  if (*(longlong *)(lVar1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar10,*(undefined8 *)(lVar1 + 0x10));
  }
  std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler(uVar7);
  return 0;
}


