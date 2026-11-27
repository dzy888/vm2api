// 005884c0 drop

/* WARNING: Switch with 1 destination removed at 0x005885a9 */
/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar3 = *(ulonglong *)(lVar4 + 0x50);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar4 + 0x50);
      bVar6 = uVar3 == uVar1;
      if (bVar6) {
        *(ulonglong *)(lVar4 + 0x50) = uVar3 | 4;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar3 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))();
    }
    if (((uint)uVar3 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar4 + 0x50) = *(ulonglong *)(lVar4 + 0x50) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar3 & 2) != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
      if (lVar2 != -1) {
        lVar5 = *(longlong *)(lVar4 + 0x20) + 1;
        lVar4 = *(longlong *)(lVar4 + 0x18);
        for (; lVar5 != 1; lVar5 = lVar5 + -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (lVar4);
          lVar4 = lVar4 + 0x20;
        }
        if (lVar2 != 0) {
          (*(code *)PTR_free_0079adc8)();
          return;
        }
      }
    }
  }
  return;
}


