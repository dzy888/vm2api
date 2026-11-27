// 00031c00 <agy_bridge[64a9e9deac6c45ce]::PromptArena>

/* WARNING: Switch with 1 destination removed at 0x00031d53 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::PromptArena> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::PromptArena>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    plVar2 = (longlong *)(param_1[1] + 8);
    do {
      if (*plVar2 != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    plVar2 = (longlong *)(param_1[4] + 8);
    do {
      if (*plVar2 != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    plVar2 = (longlong *)(param_1[7] + 8);
    do {
      if (*plVar2 != 0) {
        (*(code *)puVar1)(param_4,8);
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[6] == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


