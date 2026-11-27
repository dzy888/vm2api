// 0070b620 channel

/* tokio[d7d91d38da47d894]::runtime::blocking::shutdown::channel */

void __rustcall tokio[d7d91d38da47d894]::runtime::blocking::shutdown::channel(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *plVar3 = 1;
    plVar3[1] = 1;
    plVar3[6] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_0070b6d4;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = plVar3;
      *puVar4 = 1;
      puVar4[1] = 1;
      return;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0070b6d4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


