// 003c8140 <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>

/* WARNING: Switch with 1 destination removed at 0x003c818e */
/* WARNING: Switch with 1 destination removed at 0x006ba5dc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::upgrade::Pending>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((*param_1 != '\0') && (plVar4 = *(longlong **)(param_1 + 8), plVar4 != (longlong *)0x0)) {
    uVar3 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar4[4] + 0x10))();
      plVar4 = *(longlong **)(param_1 + 8);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar2 = *(ulonglong *)(lVar1 + 0x30);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar2 & 8) != 0) {
        (*(code *)PTR_drop_task_00799060)();
      }
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                  (lVar1 + 0x40);
      }
      if (lVar1 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar1 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


