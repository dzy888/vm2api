// 0008e040 {closure#0}

/* std[6c98fd8553dbae28]::alloc::rust_oom::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::alloc::rust_oom::_closure_0_
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined4 uVar10;
  longlong *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  pcVar7 = *(code **)PTR_HOOK_000c4218;
  if (*(code **)PTR_HOOK_000c4218 == (code *)0x0) {
    pcVar7 = (code *)PTR_default_alloc_error_hook_000c4220;
  }
  plVar2 = (longlong *)*param_1;
  uVar6 = param_1[1];
  (*pcVar7)();
  (*(code *)PTR_abort_000c3e60)();
  lVar8 = param_3;
  uVar4 = (*(code *)PTR_lock_000c4228)();
  plStack_60 = (longlong *)*plVar2;
  puStack_58 = (undefined *)plVar2[1];
  uStack_50 = uVar6;
  lStack_48 = param_3;
  puVar5 = (ulonglong *)__tls_get_addr();
  if (*puVar5 < 3) {
    uVar10 = thread::current::with_current_name::
             <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
             _closure_0_(&plStack_60,0);
  }
  else {
    lStack_40 = *puVar5 - 0x10;
    uVar10 = thread::current::with_current_name::
             <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
             _closure_0_(&plStack_60);
  }
  cVar3 = panicking::default_hook::{closure#0}::FIRST_PANIC;
  cVar1 = *(char *)plVar2[2];
  if (cVar1 == '\0') {
    plStack_60 = &lStack_40;
    lStack_40 = (ulonglong)lStack_40._1_7_ << 8;
    puStack_58 = PTR_fmt_000c4240;
    puVar9 = &DAT_0000a44b;
    uVar6 = (**(code **)(param_3 + 0x48))();
  }
  else if (cVar1 == '\x01') {
    plStack_60 = &lStack_40;
    lStack_40 = CONCAT71(lStack_40._1_7_,1);
    puStack_58 = PTR_fmt_000c4240;
    puVar9 = &DAT_0000a44b;
    uVar6 = (**(code **)(param_3 + 0x48))();
  }
  else {
    if (cVar1 != '\x02') goto LAB_0008e17a;
    LOCK();
    panicking::default_hook::{closure#0}::FIRST_PANIC = '\0';
    UNLOCK();
    if (cVar3 == '\0') goto LAB_0008e17a;
    puVar9 = &DAT_00015df7;
    uVar6 = (**(code **)(param_3 + 0x48))(uVar10,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
            (uVar6,puVar9);
LAB_0008e17a:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
            (uVar4,(byte)lVar8 & 1);
  return;
}


