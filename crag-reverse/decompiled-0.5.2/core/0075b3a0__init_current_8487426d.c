// 0075b3a0 init_current

/* std[6c98fd8553dbae28]::thread::current::init_current */

longlong * __rustcall std[6c98fd8553dbae28]::thread::current::init_current(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  longlong *unaff_R14;
  longlong *in_FS_OFFSET;
  bool bVar4;
  undefined1 local_19;
  
  if (param_1 == 0) {
    unaff_RBX = (undefined8 *)(*in_FS_OFFSET + -0x10);
    *unaff_RBX = 1;
    if (*(longlong *)(*in_FS_OFFSET + -8) == 0) {
      param_1 = 0;
      lVar2 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      do {
        if (lVar2 == -1) {
          <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
          goto LAB_0075b459;
        }
        param_1 = lVar2 + 1;
        LOCK();
        bVar4 = lVar2 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
        if (bVar4) {
          <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = param_1;
        }
        else {
          lVar2 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
        }
        UNLOCK();
      } while (!bVar4);
      *(longlong *)(*in_FS_OFFSET + -8) = param_1;
    }
    unaff_R14 = (longlong *)(*(code *)PTR_new_00799ca8)();
    if (sys::thread_local::guard::key::enable::DTORS != 0) {
      (*(code *)PTR_pthread_setspecific_0079b070)();
      LOCK();
      lVar2 = *unaff_R14;
      *unaff_R14 = *unaff_R14 + 1;
      UNLOCK();
      if (*unaff_R14 == 0 || SCARRY8(lVar2,1) != *unaff_R14 < 0) goto LAB_0075b49b;
      goto LAB_0075b43e;
    }
  }
  else {
LAB_0075b459:
    if (param_1 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)();
      LOCK();
      *unaff_R14 = *unaff_R14 + -1;
      UNLOCK();
      if (*unaff_R14 == 0) {
        (*(code *)PTR_drop_slow_007996e8)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_19,
                      "fatal runtime error: init_current() was re-entrant, which indicates a bug in the Rust threading implementation, aborting\n"
                      ,0xf3);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar3);
    (*(code *)PTR_abort_00799748)();
  }
  <std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init();
  (*(code *)PTR_pthread_setspecific_0079b070)();
  LOCK();
  lVar2 = *unaff_R14;
  *unaff_R14 = *unaff_R14 + 1;
  UNLOCK();
  if (*unaff_R14 == 0 || SCARRY8(lVar2,1) != *unaff_R14 < 0) {
LAB_0075b49b:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_0075b43e:
  *unaff_RBX = unaff_R14 + 2;
  return unaff_R14;
}


