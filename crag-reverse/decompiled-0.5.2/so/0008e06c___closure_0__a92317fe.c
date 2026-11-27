// 0008e06c {closure#0}

/* std[6c98fd8553dbae28]::panicking::default_hook::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::panicking::default_hook::_closure_0_
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  longlong *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  
  lVar6 = param_3;
  uVar3 = (*(code *)PTR_lock_000c4228)();
  local_58 = (longlong *)*param_1;
  puStack_50 = (undefined *)param_1[1];
  local_48 = param_2;
  local_40 = param_3;
  puVar4 = (ulonglong *)__tls_get_addr();
  if (*puVar4 < 3) {
    uVar8 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&local_58,0);
  }
  else {
    local_38 = *puVar4 - 0x10;
    uVar8 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&local_58);
  }
  cVar2 = {closure#0}::FIRST_PANIC;
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    local_58 = &local_38;
    local_38 = (ulonglong)local_38._1_7_ << 8;
    puStack_50 = PTR_fmt_000c4240;
    puVar7 = &DAT_0000a44b;
    uVar5 = (**(code **)(param_3 + 0x48))();
  }
  else if (cVar1 == '\x01') {
    local_58 = &local_38;
    local_38 = CONCAT71(local_38._1_7_,1);
    puStack_50 = PTR_fmt_000c4240;
    puVar7 = &DAT_0000a44b;
    uVar5 = (**(code **)(param_3 + 0x48))();
  }
  else {
    if (cVar1 != '\x02') goto LAB_0008e17a;
    LOCK();
    {closure#0}::FIRST_PANIC = '\0';
    UNLOCK();
    if (cVar2 == '\0') goto LAB_0008e17a;
    puVar7 = &DAT_00015df7;
    uVar5 = (**(code **)(param_3 + 0x48))(uVar8,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
            (uVar5,puVar7);
LAB_0008e17a:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
            (uVar3,(byte)lVar6 & 1);
  return;
}


