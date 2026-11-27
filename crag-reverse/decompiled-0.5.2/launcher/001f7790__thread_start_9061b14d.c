// 001f7790 thread_start

/* <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::thread_start */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::thread_start(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *in_FS_OFFSET;
  undefined4 uVar8;
  
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_001f793c;
  lVar1 = *in_FS_OFFSET;
  if (*(longlong *)(lVar1 + -0x10) != 0) {
LAB_001f7919:
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(param_1,&DAT_0012e5e3,0x55);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar6);
    (*(code *)PTR_abort_00219ea8)();
LAB_001f793c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar3 = *(longlong *)(*in_FS_OFFSET + -8);
  if (lVar3 == 0) {
    *(longlong *)(*in_FS_OFFSET + -8) = plVar2[2];
  }
  else if (lVar3 != plVar2[2]) goto LAB_001f7919;
  if (std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::DTORS == 0) {
    <std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init();
  }
  uVar8 = (*(code *)PTR_pthread_setspecific_0021aaf0)();
  *(longlong *)(lVar1 + -0x10) = (longlong)(plVar2 + 2);
  plVar2 = (longlong *)*param_1;
  if (plVar2[3] == 0) {
    if ((std[6c98fd8553dbae28]::thread::main_thread::MAIN == 0) ||
       (std[6c98fd8553dbae28]::thread::main_thread::MAIN != plVar2[2])) goto LAB_001f78a3;
    uVar5 = 4;
LAB_001f7871:
    uVar7 = 0xf;
    if (uVar5 < 0xf) {
      uVar7 = uVar5;
    }
    (*(code *)PTR_memcpy_00219c60)(0,uVar7);
  }
  else {
    uVar5 = plVar2[4] - 1;
    if (uVar5 != 0) goto LAB_001f7871;
  }
  (*(code *)PTR_pthread_self_0021aa50)();
  uVar8 = (*(code *)PTR_pthread_setname_np_0021ab70)();
LAB_001f78a3:
  lVar1 = param_1[2];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar8 = (*(code *)PTR_drop_slow_00219e28)();
  }
  (*(code *)PTR___rust_dealloc_00219c40)(uVar8,8);
  uVar6 = std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::make_handler(0,0x18);
  uVar8 = (**(code **)(lVar1 + 0x18))();
  if (*(longlong *)(lVar1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar8,*(undefined8 *)(lVar1 + 0x10));
  }
  std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler(uVar6);
  return 0;
}


