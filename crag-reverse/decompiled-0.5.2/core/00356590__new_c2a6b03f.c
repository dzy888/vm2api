// 00356590 new

/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>::new
    */

longlong __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
::new(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x90);
  return lVar2;
}


