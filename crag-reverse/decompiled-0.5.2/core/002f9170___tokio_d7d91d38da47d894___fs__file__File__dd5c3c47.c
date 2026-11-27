// 002f9170 <tokio[d7d91d38da47d894]::fs::file::File>

/* WARNING: Switch with 1 destination removed at 0x002f91ae */
/* WARNING: Switch with 1 destination removed at 0x002f91cf */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::file::File> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::file::File>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990f8)();
  }
  lVar2 = param_1[6];
  if (lVar2 == -2) {
    lVar2 = param_1[7];
    cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x20))();
      return;
    }
  }
  else if ((lVar2 != -1) && (lVar2 != 0)) {
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  return;
}


