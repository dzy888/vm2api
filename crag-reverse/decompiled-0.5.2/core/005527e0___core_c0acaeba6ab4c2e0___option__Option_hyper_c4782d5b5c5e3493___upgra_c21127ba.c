// 005527e0 <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>

/* WARNING: Switch with 1 destination removed at 0x00552825 */
/* WARNING: Switch with 1 destination removed at 0x006ba5dc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*param_1 != '\0') && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar3 = *(ulonglong *)(lVar2 + 0x30);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar3 & 8) != 0) {
        (*(code *)PTR_drop_task_00799060)();
      }
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                  (lVar2 + 0x40);
      }
      if (lVar2 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


