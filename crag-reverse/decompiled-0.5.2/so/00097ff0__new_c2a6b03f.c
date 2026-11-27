// 00097ff0 new

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
    uVar2 = (*(code *)PTR_from_000c4378)();
    unaff_R14 = param_3;
  }
  puVar3 = (undefined8 *)(*(code *)PTR_arcinner_layout_for_value_layout_000c4380)();
  if (param_3 != (undefined8 *)0x0) {
    if (&Elf64_Ehdr_00000000.e_type < puVar3 || puVar3 > param_3) {
      (*(code *)PTR_posix_memalign_000c4288)(puVar3 <= param_3,param_3);
      goto LAB_000980c0;
    }
    puVar3 = (undefined8 *)(*(code *)PTR_malloc_000c4280)();
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
LAB_000980c0:
  (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


