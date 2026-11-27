// 005aaf70 <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>

/* WARNING: Switch with 1 destination removed at 0x005ab19f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8) + 0x20;
    do {
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if ((*(longlong *)(param_1 + 0xd0) != -1) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::AcpMcpServerSpec>>
            (param_1 + 0xe8);
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xc0) + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x150) + 8;
      do {
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x18;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar4 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


