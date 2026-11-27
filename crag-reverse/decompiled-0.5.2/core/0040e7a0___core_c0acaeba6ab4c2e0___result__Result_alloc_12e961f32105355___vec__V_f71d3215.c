// 0040e7a0 <core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040e83d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar1 = *param_1;
  if (lVar1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar3 = param_1[1] + 0x38;
    do {
      if (*(longlong *)(lVar3 + -0x38) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      if (*(longlong *)(lVar3 + -0x20) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar3 = lVar3 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


