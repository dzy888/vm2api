// 0039ddb0 <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>

/* WARNING: Switch with 1 destination removed at 0x0039de28 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  if (param_1[2] != 0) {
    lVar3 = 1 - param_1[2];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(lVar1 + lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar3 != 1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


