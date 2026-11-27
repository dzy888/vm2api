// 006a3190 drop

/* WARNING: Switch with 1 destination removed at 0x006a31cf */
/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  uVar1 = param_1[0x10];
  uVar3 = param_1[1];
  for (uVar6 = *param_1 & 0xfffffffffffffffe; uVar6 != (uVar1 & 0xfffffffffffffffe);
      uVar6 = uVar6 + 2) {
    uVar4 = (uint)(uVar6 >> 1) & 0x1f;
    if (uVar4 == 0x1f) {
      uVar3 = *(ulonglong *)(uVar3 + 0x7c0);
      (*(code *)puVar2)(param_4,8);
    }
    else {
      lVar5 = (uVar4 << 6) + uVar3;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(lVar5);
      if (*(int *)(lVar5 + 0x28) != -1) {
        <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
        drop(lVar5 + 0x28);
      }
    }
  }
  if (uVar3 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


