// 002de9e0 new

/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::new
    */

longlong __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::new
          (void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 in_RCX;
  
  (*(code *)PTR_memcpy_00799008)(in_RCX,0xa8);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (*(code *)PTR_memcpy_00799008)(in_RCX,0xb8);
  return lVar2;
}


