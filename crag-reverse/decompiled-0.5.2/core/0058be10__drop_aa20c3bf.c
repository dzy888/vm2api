// 0058be10 drop

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  bool bVar9;
  byte local_60 [32];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x1b8) == '\0') {
    *(undefined1 *)(lVar6 + 0x1b8) = 1;
  }
  lVar1 = lVar6 + 0x1c0;
  LOCK();
  *(ulonglong *)(lVar6 + 0x1c0) = *(ulonglong *)(lVar6 + 0x1c0) | 1;
  UNLOCK();
  (*(code *)PTR_notify_waiters_00799550)();
  lVar2 = lVar6 + 0x1a0;
  lVar3 = lVar6 + 0x80;
  uVar8 = *(ulonglong *)(lVar6 + 0x110);
  do {
    LOCK();
    uVar4 = *(ulonglong *)(lVar6 + 0x110);
    bVar9 = uVar8 == uVar4;
    if (bVar9) {
      *(ulonglong *)(lVar6 + 0x110) = uVar8 | 2;
    }
    else {
      uVar8 = uVar4;
    }
    UNLOCK();
  } while (!bVar9);
  local_40 = lVar2;
  local_38 = lVar3;
  local_30 = lVar1;
  if (uVar8 == 0) {
    lVar1 = *(longlong *)(lVar6 + 0x100);
    *(undefined8 *)(lVar6 + 0x100) = 0;
    LOCK();
    uVar5 = *(undefined8 *)(lVar6 + 0x110);
    *(undefined8 *)(lVar6 + 0x110) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(uVar5);
    }
  }
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
              (local_60,lVar2,lVar3);
    if (0xfd < local_60[0]) break;
    (*(code *)PTR_add_permit_00799728)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_60);
  }
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
            (local_60,lVar2,lVar3);
  puVar7 = PTR_add_permit_00799728;
  if (local_60[0] < 0xfe) {
    do {
      (*(code *)puVar7)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_60)
      ;
      <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::
      pop(local_60,lVar2,lVar3);
    } while (local_60[0] < 0xfe);
  }
  return;
}


