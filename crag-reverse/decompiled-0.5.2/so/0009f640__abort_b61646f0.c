// 0009f640 abort

/* std[6c98fd8553dbae28]::process::abort */

void __rustcall std[6c98fd8553dbae28]::process::abort(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong extraout_RDX;
  longlong lVar4;
  longlong *extraout_RDX_00;
  longlong *plVar5;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  longlong lStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  sys::pal::unix::abort_internal();
  uStack_29 = 0xff;
  lVar4 = extraout_RDX;
  if (*(char *)(param_1 + 0x19) == '\0') {
    lVar2 = __tls_get_addr();
    uStack_29 = 1;
    if (*(ulonglong *)(lVar2 + 0x40) < 2) {
      uStack_29 = (*(code *)PTR_get_backtrace_style_000c4410)();
    }
  }
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = (*(code *)PTR_payload_as_str_000c4418)();
  puStack_48 = &uStack_80;
  lStack_78 = lVar4;
  puStack_50 = &uStack_70;
  puStack_40 = &uStack_29;
  bVar1 = (*(code *)PTR_try_set_output_capture_000c4420)();
  if (lVar4 == 0 || (bVar1 & 1) != 0) {
    panicking::default_hook::_closure_0_(&puStack_50,&uStack_2a,&DAT_000c1c88);
  }
  else {
    lStack_38 = lVar4;
    <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>::lock
              (&uStack_68,lVar4 + 0x10);
    panicking::default_hook::_closure_0_
              (&puStack_50,(longlong)plStack_60 + 8,
               &PTR_<alloc[12e961f32105355]::vec::Vec<u8>>_000c1cd8);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
              (plStack_60,uStack_58);
    plVar5 = extraout_RDX_00;
    uVar3 = (*(code *)PTR_try_set_output_capture_000c4420)();
    if ((uVar3 & 1) == 0) {
      uStack_68 = 1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          plStack_60 = plVar5;
          (*(code *)PTR_drop_slow_000c4120)();
        }
      }
    }
  }
  return;
}


