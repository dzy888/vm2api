// 0051f590 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  uVar6 = *(undefined4 *)(param_1 + 2);
  uVar7 = *(undefined4 *)(param_1 + 3);
  uVar8 = *(undefined4 *)(param_1 + 4);
  uVar9 = *(undefined4 *)(param_1 + 5);
  std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
  <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>::_closure_1_::_closure_0_::_closure_0_,()>
            (&local_58);
  uVar5 = std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
          <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>
                    (uVar1,lVar2);
  plVar3 = (longlong *)param_1[6];
  if ((plVar3[3] != 0) && (plVar3[4] != 0)) {
    puVar4 = (undefined8 *)plVar3[5];
    if ((code *)*puVar4 != (code *)0x0) {
      uVar5 = (*(code *)*puVar4)();
    }
    if (puVar4[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,puVar4[2],in_R8,in_R9,uVar6,uVar7,uVar8,uVar9);
    }
  }
  plVar3[3] = 1;
  plVar3[4] = 0;
  plVar3[5] = lVar2;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_00799c58)();
  }
  return;
}


