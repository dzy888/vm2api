// 0073ccb0 {closure#0}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once::<std[6c98fd8553dbae28]::rt::cleanup::{closure#0}>::{closure#0}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once::
<std[6c98fd8553dbae28]::rt::cleanup::{closure#0}>::_closure_0_(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *in_FS_OFFSET;
  bool bVar6;
  uint uStack_20;
  undefined4 uStack_1c;
  char local_11;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') goto LAB_0073ce10;
  local_11 = '\0';
  if (_DAT_0079c608 != 0) goto LAB_0073ce1d;
  do {
    lVar5 = *(longlong *)(*in_FS_OFFSET + -8);
    if (lVar5 != 0) {
      if (lVar5 == std[6c98fd8553dbae28]::io::stdio::STDOUT) {
LAB_0073cd0b:
        if (DAT_0079c5dc == -1) break;
        DAT_0079c5dc = DAT_0079c5dc + 1;
      }
      else {
LAB_0073cd58:
        LOCK();
        bVar6 = DAT_0079c5d8 == 0;
        if (bVar6) {
          DAT_0079c5d8 = 1;
        }
        UNLOCK();
        if (!bVar6) break;
        std[6c98fd8553dbae28]::io::stdio::STDOUT = lVar5;
        DAT_0079c5dc = 1;
      }
      uStack_20 = uStack_20 & 0xffffff00;
      if (DAT_0079c5e0 != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      DAT_0079c5e0 = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
                (&DAT_0079c5e8);
      iVar3 = DAT_0079c5d8;
      _DAT_0079c5f8 = 0;
      uRam000000000079c5fc = 0;
      uRam000000000079c600 = uStack_20;
      uRam000000000079c604 = uStack_1c;
      _DAT_0079c5e8 = 0;
      uRam000000000079c5ec = 0;
      uRam000000000079c5f0 = 1;
      uRam000000000079c5f4 = 0;
      DAT_0079c5e0 = DAT_0079c5e0 + 1;
      DAT_0079c5dc = DAT_0079c5dc + -1;
      if (DAT_0079c5dc == 0) {
        std[6c98fd8553dbae28]::io::stdio::STDOUT = 0;
        LOCK();
        DAT_0079c5d8 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_syscall_00799e60)(1,0x81);
        }
      }
      break;
    }
    lVar4 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    while (lVar4 != -1) {
      lVar5 = lVar4 + 1;
      LOCK();
      bVar6 = lVar4 == <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      if (bVar6) {
        <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER = lVar5;
      }
      else {
        lVar4 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
      }
      UNLOCK();
      if (bVar6) {
        *(longlong *)(*in_FS_OFFSET + -8) = lVar5;
        if (lVar5 != std[6c98fd8553dbae28]::io::stdio::STDOUT) goto LAB_0073cd58;
        goto LAB_0073cd0b;
      }
    }
    <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted();
LAB_0073ce10:
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_0073ce1d:
    <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
    ::initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::_closure_0_>::_closure_0_,_>
              (&local_11);
  } while (local_11 == '\0');
  std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler
            (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::MAIN_ALTSTACK);
  return;
}


