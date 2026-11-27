// 006ba580 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006ba5dc */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>>>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar3 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
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


