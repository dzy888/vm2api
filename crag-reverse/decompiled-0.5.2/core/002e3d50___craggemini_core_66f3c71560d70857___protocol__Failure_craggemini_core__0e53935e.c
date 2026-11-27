// 002e3d50 <craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::handle_subagent_action::{closure#0}::{closure#1}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::ok_or_else::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   craggemini_core[66f3c71560d70857]::server::handle_subagent_action::{closure#0}::{closure#1}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::ok_or_else::
<craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_::_closure_1_>
          (undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48 [58];
  undefined2 local_e;
  
  if (param_2 != 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
            (local_48,400,&DAT_001908e8,0x13,&DAT_001908fb,0x23);
  local_e = 0x700;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_58 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (local_58 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *local_58 = 0x746e656761627573;
  *(undefined4 *)((longlong)local_58 + 7) = 0x64695f74;
  local_60 = 0xb;
  local_50 = 0xb;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,local_48,&local_60);
  return;
}


