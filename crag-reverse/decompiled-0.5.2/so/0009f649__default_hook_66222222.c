// 0009f649 default_hook

/* std[6c98fd8553dbae28]::panicking::default_hook */

void __rustcall
std[6c98fd8553dbae28]::panicking::default_hook(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *extraout_RDX;
  longlong *plVar4;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  longlong local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  local_21 = 0xff;
  if (*(char *)(param_1 + 0x19) == '\0') {
    lVar2 = __tls_get_addr();
    local_21 = 1;
    if (*(ulonglong *)(lVar2 + 0x40) < 2) {
      local_21 = (*(code *)PTR_get_backtrace_style_000c4410)();
    }
  }
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_78 = (*(code *)PTR_payload_as_str_000c4418)();
  local_40 = &local_78;
  local_70 = param_3;
  local_48 = &local_68;
  local_38 = &local_21;
  bVar1 = (*(code *)PTR_try_set_output_capture_000c4420)();
  if (param_3 == 0 || (bVar1 & 1) != 0) {
    default_hook::_closure_0_(&local_48,&local_22,&DAT_000c1c88);
  }
  else {
    local_30 = param_3;
    <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>::lock
              (&local_60,param_3 + 0x10);
    default_hook::_closure_0_
              (&local_48,(longlong)local_58 + 8,&PTR_<alloc[12e961f32105355]::vec::Vec<u8>>_000c1cd8
              );
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
              (local_58,local_50);
    plVar4 = extraout_RDX;
    uVar3 = (*(code *)PTR_try_set_output_capture_000c4420)();
    if ((uVar3 & 1) == 0) {
      local_60 = 1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = plVar4;
          (*(code *)PTR_drop_slow_000c4120)();
        }
      }
    }
  }
  return;
}


