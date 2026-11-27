// 00068a10 <(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>

/* WARNING: Switch with 1 destination removed at 0x00068b57 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(u32, agy_bridge[64a9e9deac6c45ce]::StreamSlot)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(longlong *)(param_1 + 0x20) != -1) && (*(longlong *)(param_1 + 0x20) != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x38) != -1) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x50) != -1) && (*(longlong *)(param_1 + 0x50) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x68) != -1) && (*(longlong *)(param_1 + 0x68) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x80) != -1) && (*(longlong *)(param_1 + 0x80) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x98) != -1) && (*(longlong *)(param_1 + 0x98) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0xb0) != -1) && (*(longlong *)(param_1 + 0xb0) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 200) != -1) && (*(longlong *)(param_1 + 200) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
  }
  if ((*(longlong *)(param_1 + 0xe8) != -1) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,1);
  return;
}


