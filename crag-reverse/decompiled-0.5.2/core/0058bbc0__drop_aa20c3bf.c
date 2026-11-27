// 0058bbc0 drop

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
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
  ulonglong local_b0 [3];
  longlong local_98;
  longlong local_80;
  undefined1 local_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x1b8) == '\0') {
    *(undefined1 *)(lVar6 + 0x1b8) = 1;
  }
  lVar1 = lVar6 + 0x1c0;
  (*(code *)PTR_close_00799f70)();
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
  local_48 = lVar2;
  local_40 = lVar3;
  local_38 = lVar1;
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
  puVar7 = PTR___rust_dealloc_00798fc8;
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
    ::pop(local_b0,lVar2,lVar3);
    uVar8 = local_b0[0];
    if (0xfffffffffffffffd < local_b0[0]) break;
    (*(code *)PTR_add_permit_00799da0)();
    if (uVar8 != 0) {
      (*(code *)puVar7)();
    }
    if (local_98 != 0) {
      (*(code *)puVar7)();
    }
    if (local_80 != 0) {
      (*(code *)puVar7)();
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_68);
  }
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
  ::pop(local_b0,lVar2,lVar3);
  if (local_b0[0] < 0xfffffffffffffffe) {
    do {
      uVar8 = local_b0[0];
      (*(code *)PTR_add_permit_00799da0)();
      if (uVar8 != 0) {
        (*(code *)puVar7)();
      }
      if (local_98 != 0) {
        (*(code *)puVar7)();
      }
      if (local_80 != 0) {
        (*(code *)puVar7)();
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_68)
      ;
      <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
      ::pop(local_b0,lVar2,lVar3);
    } while (local_b0[0] < 0xfffffffffffffffe);
  }
  return;
}


