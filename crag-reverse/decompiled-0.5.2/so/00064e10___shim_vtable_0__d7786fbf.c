// 00064e10 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},
   ()>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},()>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong unaff_R15;
  undefined4 uVar3;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *(undefined8 *)(param_1 + 4);
  uStack_40 = *(undefined8 *)(param_1 + 6);
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
  <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_58);
  uVar3 = std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
          <agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>();
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1[3] != 0) && (plVar1[4] != 0)) {
    puVar2 = (undefined8 *)plVar1[5];
    if ((code *)*puVar2 != (code *)0x0) {
      uVar3 = (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar3,puVar2[2]);
    }
  }
  plVar1[3] = 1;
  plVar1[4] = 0;
  plVar1[5] = unaff_R15;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    local_60 = plVar1;
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(&local_60);
  }
  return;
}


