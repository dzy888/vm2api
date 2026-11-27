// 0008d5e0 {closure#0}

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
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uStack_20;
  undefined4 uStack_1c;
  char local_11;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') goto LAB_0008d740;
  local_11 = '\0';
  if (_DAT_000c5d38 != 0) goto LAB_0008d74d;
  do {
    plVar4 = (longlong *)__tls_get_addr();
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      if (lVar6 == std[6c98fd8553dbae28]::io::stdio::STDOUT) {
LAB_0008d63b:
        if (DAT_000c5d0c == -1) break;
        DAT_000c5d0c = DAT_000c5d0c + 1;
      }
      else {
LAB_0008d688:
        LOCK();
        bVar7 = DAT_000c5d08 == 0;
        if (bVar7) {
          DAT_000c5d08 = 1;
        }
        UNLOCK();
        if (!bVar7) break;
        std[6c98fd8553dbae28]::io::stdio::STDOUT = lVar6;
        DAT_000c5d0c = 1;
      }
      uStack_20 = uStack_20 & 0xffffff00;
      if (DAT_000c5d10 != 0) {
        (*(code *)PTR_panic_already_borrowed_000c41d8)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      DAT_000c5d10 = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
                (&DAT_000c5d18);
      iVar3 = DAT_000c5d08;
      _DAT_000c5d28 = 0;
      uRam00000000000c5d2c = 0;
      uRam00000000000c5d30 = uStack_20;
      uRam00000000000c5d34 = uStack_1c;
      _DAT_000c5d18 = 0;
      uRam00000000000c5d1c = 0;
      uRam00000000000c5d20 = 1;
      uRam00000000000c5d24 = 0;
      DAT_000c5d10 = DAT_000c5d10 + 1;
      DAT_000c5d0c = DAT_000c5d0c + -1;
      if (DAT_000c5d0c == 0) {
        std[6c98fd8553dbae28]::io::stdio::STDOUT = 0;
        LOCK();
        DAT_000c5d08 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_syscall_000c4110)(1,0x81);
        }
      }
      break;
    }
    lVar5 = <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::COUNTER;
    while (lVar5 != -1) {
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
      if (bVar7) {
        *plVar4 = lVar6;
        if (lVar6 != std[6c98fd8553dbae28]::io::stdio::STDOUT) goto LAB_0008d688;
        goto LAB_0008d63b;
      }
    }
    <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted(&PTR_000c41c8);
LAB_0008d740:
    (*(code *)PTR_unwrap_failed_000c3b08)();
LAB_0008d74d:
    <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
    ::initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::_closure_0_>::_closure_0_,_>
              (&local_11);
  } while (local_11 == '\0');
  std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::drop_handler
            (std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::MAIN_ALTSTACK);
  return;
}


