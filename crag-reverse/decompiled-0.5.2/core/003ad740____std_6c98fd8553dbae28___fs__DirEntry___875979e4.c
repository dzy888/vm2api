// 003ad740 <[std[6c98fd8553dbae28]::fs::DirEntry]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[std[6c98fd8553dbae28]::fs::DirEntry]> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[std[6c98fd8553dbae28]::fs::DirEntry]>
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_drop_slow_007997d0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (param_2 != 0) {
    do {
      plVar1 = (longlong *)*param_1;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar4)();
      }
      lVar2 = param_1[2];
      *(undefined1 *)param_1[1] = 0;
      if (lVar2 != 0) {
        (*(code *)puVar3)(param_4,1);
      }
      param_1 = param_1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


