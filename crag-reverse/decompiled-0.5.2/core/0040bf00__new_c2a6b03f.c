// 0040bf00 new

/* <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::new */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::new(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  *(undefined1 *)(puVar2 + 2) = 1;
  return;
}


