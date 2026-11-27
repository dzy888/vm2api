// 003a8b50 <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88) + 8;
    do {
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if ((*(longlong *)(param_1 + 0xb0) != -1) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 200) != -1) && (*(longlong *)(param_1 + 200) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x138);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>>
    ::drop_slow(param_1 + 0x138);
    return;
  }
  return;
}


