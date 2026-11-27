// 0018bb50 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  local_58 = param_1[2];
  uStack_50 = param_1[3];
  local_48 = param_1[4];
  uStack_40 = param_1[5];
  local_78 = *(undefined4 *)(param_1 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_70 = *(undefined4 *)(param_1 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_68 = *(undefined4 *)(param_1 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_60 = *(undefined4 *)(param_1 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_88 = uVar1;
  local_80 = lVar2;
  std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
  <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_58);
  uVar5 = std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
          <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>
                    (uVar1,lVar2);
  plVar3 = (longlong *)param_1[6];
  if ((plVar3[3] != 0) && (plVar3[4] != 0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      uVar5 = (*(code *)*puVar4)();
    }
    if (puVar4[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar5,puVar4[2]);
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  plVar3[5] = lVar2;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    local_90 = plVar3;
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(&local_90);
  }
  return;
}


