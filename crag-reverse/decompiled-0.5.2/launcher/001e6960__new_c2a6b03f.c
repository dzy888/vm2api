// 001e6960 new

/* <std[6c98fd8553dbae28]::thread::thread::Thread>::new */

void __rustcall
<std[6c98fd8553dbae28]::thread::thread::Thread>::new
          (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_R14;
  
  if (*param_2 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_from_0021a9f8)();
    unaff_R14 = param_3;
  }
  puVar3 = (undefined8 *)(*(code *)PTR_arcinner_layout_for_value_layout_0021aa00)();
  if (param_3 != (undefined8 *)0x0) {
    if (&DAT_00000010 < puVar3 || puVar3 > param_3) {
      (*(code *)PTR_posix_memalign_0021a8b0)(puVar3 <= param_3,param_3);
      goto LAB_001e6a30;
    }
    puVar3 = (undefined8 *)(*(code *)PTR_malloc_0021a8a8)();
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[3] = uVar2;
    puVar3[4] = unaff_R14;
    puVar3[2] = param_1;
    *(undefined4 *)(puVar3 + 5) = 0;
    return;
  }
LAB_001e6a30:
  (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


