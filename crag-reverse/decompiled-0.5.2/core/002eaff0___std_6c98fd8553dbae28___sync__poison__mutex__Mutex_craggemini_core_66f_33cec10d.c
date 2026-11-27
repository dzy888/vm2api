// 002eaff0 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SessionStore>>

/* WARNING: Switch with 1 destination removed at 0x002eb182 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SessionStore>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SessionStore>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x68) != -1) && (*(longlong *)(param_1 + 0x68) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x80) != -1) && (*(longlong *)(param_1 + 0x80) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x98) != -1) && (*(longlong *)(param_1 + 0x98) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  for (lVar2 = *(longlong *)(param_1 + 0x48) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>(lVar3);
    lVar3 = lVar3 + 0x280;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58) + 0x38;
    do {
      if (*(longlong *)(lVar2 + -0x38) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x68;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


