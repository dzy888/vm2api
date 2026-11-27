// 0073d8dc {closure#0}

/* std[6c98fd8553dbae28]::panicking::default_hook::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::panicking::default_hook::_closure_0_
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *in_FS_OFFSET;
  undefined4 uVar7;
  longlong *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  
  lVar5 = param_3;
  uVar3 = (*(code *)PTR_lock_0079ad48)();
  local_58 = (longlong *)*param_1;
  puStack_50 = (undefined *)param_1[1];
  local_48 = param_2;
  local_40 = param_3;
  if (*(ulonglong *)(*in_FS_OFFSET + -0x10) < 3) {
    uVar7 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&local_58,0);
  }
  else {
    local_38 = *(ulonglong *)(*in_FS_OFFSET + -0x10) - 0x10;
    uVar7 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&local_58);
  }
  cVar2 = {closure#0}::FIRST_PANIC;
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    local_58 = &local_38;
    local_38 = (ulonglong)local_38._1_7_ << 8;
    puStack_50 = PTR_fmt_0079ad50;
    puVar6 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
    uVar4 = (**(code **)(param_3 + 0x48))();
  }
  else if (cVar1 == '\x01') {
    local_58 = &local_38;
    local_38 = CONCAT71(local_38._1_7_,1);
    puStack_50 = PTR_fmt_0079ad50;
    puVar6 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
    uVar4 = (**(code **)(param_3 + 0x48))();
  }
  else {
    if (cVar1 != '\x02') goto LAB_0073d9ea;
    LOCK();
    {closure#0}::FIRST_PANIC = '\0';
    UNLOCK();
    if (cVar2 == '\0') goto LAB_0073d9ea;
    puVar6 = (undefined2 *)&DAT_001bfec5;
    uVar4 = (**(code **)(param_3 + 0x48))(uVar7,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
            (uVar4,puVar6);
LAB_0073d9ea:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
            (uVar3,(byte)lVar5 & 1);
  return;
}


