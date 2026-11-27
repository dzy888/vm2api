// 0018c2f0 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},
   ()>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},()>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong unaff_R15;
  undefined4 uVar3;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_70 = param_1[4];
  local_90 = *param_1;
  uStack_88 = param_1[1];
  local_80 = *(undefined4 *)(param_1 + 2);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_78 = *(undefined4 *)(param_1 + 3);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_d8 = param_1[5];
  uStack_d0 = param_1[6];
  local_a0 = *(undefined4 *)(param_1 + 7);
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_98 = *(undefined4 *)(param_1 + 8);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x44);
  local_c8 = *(undefined4 *)(param_1 + 7);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_c0 = *(undefined4 *)(param_1 + 8);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x44);
  local_b0 = local_d8;
  local_a8 = uStack_d0;
  local_68 = local_a0;
  uStack_64 = uStack_9c;
  uStack_60 = uStack_98;
  uStack_5c = uStack_94;
  local_58 = local_90;
  uStack_50 = uStack_88;
  local_48 = local_80;
  uStack_44 = uStack_7c;
  uStack_40 = uStack_78;
  uStack_3c = uStack_74;
  local_38 = local_70;
  std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
  <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_d8);
  local_b8 = param_1[4];
  local_d8 = *param_1;
  uStack_d0 = param_1[1];
  local_c8 = *(undefined4 *)(param_1 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_c0 = *(undefined4 *)(param_1 + 3);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar3 = std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
          <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>
                    (&local_d8);
  plVar1 = (longlong *)param_1[9];
  if ((plVar1[3] != 0) && (plVar1[4] != 0)) {
    puVar2 = (undefined8 *)plVar1[5];
    if ((code *)*puVar2 != (code *)0x0) {
      uVar3 = (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar3,puVar2[2]);
    }
  }
  plVar1[3] = 1;
  plVar1[4] = 0;
  plVar1[5] = unaff_R15;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    local_e0 = plVar1;
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(&local_e0);
  }
  return;
}


