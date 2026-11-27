// 00602ea0 {closure#9}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#9} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_9_
          (undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined1 local_48 [58];
  undefined2 local_e;
  
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
            (local_48,400,"invalid_crag_prompt",0x13,"crag_prompt.text must be a string",0x21);
  local_e = 0x700;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_58 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar4 = _UNK_001833ac;
  uVar3 = _UNK_001833a8;
  uVar2 = _UNK_001833a4;
  if (local_58 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *local_58 = _DAT_001833a0;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_60 = 0x10;
  local_50 = 0x10;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,local_48,&local_60);
  return;
}


