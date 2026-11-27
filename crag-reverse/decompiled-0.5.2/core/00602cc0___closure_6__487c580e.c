// 00602cc0 {closure#6}

/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#6} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_6_
          (undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48 [58];
  undefined2 local_e;
  
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
            (local_48,400,"invalid_crag_prompt",0x13,
             "crag_prompt must be a JSON object with optional \'mode\' and \'text\' fields",0x48);
  local_e = 0x700;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_58 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (local_58 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *local_58 = 0x6f72705f67617263;
  *(undefined4 *)((longlong)local_58 + 7) = 0x74706d6f;
  local_60 = 0xb;
  local_50 = 0xb;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,local_48,&local_60);
  return;
}


