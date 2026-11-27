// 001db4f0 {closure#0}

/* std[6c98fd8553dbae28]::alloc::rust_oom::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::alloc::rust_oom::_closure_0_
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *in_FS_OFFSET;
  undefined4 uVar9;
  longlong *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  pcVar6 = *(code **)PTR_HOOK_0021a850;
  if (*(code **)PTR_HOOK_0021a850 == (code *)0x0) {
    pcVar6 = (code *)PTR_default_alloc_error_hook_0021a858;
  }
  plVar2 = (longlong *)*param_1;
  uVar5 = param_1[1];
  (*pcVar6)();
  (*(code *)PTR_abort_00219ea8)();
  lVar7 = param_3;
  uVar4 = (*(code *)PTR_lock_0021a860)();
  plStack_60 = (longlong *)*plVar2;
  puStack_58 = (undefined *)plVar2[1];
  uStack_50 = uVar5;
  lStack_48 = param_3;
  if (*(ulonglong *)(*in_FS_OFFSET + -0x10) < 3) {
    uVar9 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&plStack_60,0);
  }
  else {
    lStack_40 = *(ulonglong *)(*in_FS_OFFSET + -0x10) - 0x10;
    uVar9 = thread::current::with_current_name::
            <std[6c98fd8553dbae28]::panicking::default_hook::{closure#0}::{closure#0},()>::
            _closure_0_(&plStack_60);
  }
  cVar3 = panicking::default_hook::{closure#0}::FIRST_PANIC;
  cVar1 = *(char *)plVar2[2];
  if (cVar1 == '\0') {
    plStack_60 = &lStack_40;
    lStack_40 = (ulonglong)lStack_40._1_7_ << 8;
    puStack_58 = PTR_fmt_0021a868;
    puVar8 = &DAT_00115987;
    uVar5 = (**(code **)(param_3 + 0x48))();
  }
  else if (cVar1 == '\x01') {
    plStack_60 = &lStack_40;
    lStack_40 = CONCAT71(lStack_40._1_7_,1);
    puStack_58 = PTR_fmt_0021a868;
    puVar8 = &DAT_00115987;
    uVar5 = (**(code **)(param_3 + 0x48))();
  }
  else {
    if (cVar1 != '\x02') goto LAB_001db62a;
    LOCK();
    panicking::default_hook::{closure#0}::FIRST_PANIC = '\0';
    UNLOCK();
    if (cVar3 == '\0') goto LAB_001db62a;
    puVar8 = &DAT_0012e469;
    uVar5 = (**(code **)(param_3 + 0x48))(uVar9,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
            (uVar5,puVar8);
LAB_001db62a:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
            (uVar4,(byte)lVar7 & 1);
  return;
}


