// 00598700 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
          (longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xf0) == '\x03') {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if (lVar2 != 0) {
      uVar5 = *(ulonglong *)(lVar2 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        bVar6 = uVar5 == uVar1;
        if (bVar6) {
          *(ulonglong *)(lVar2 + 0x30) = uVar5 | 4;
        }
        else {
          uVar5 = uVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if (((uint)uVar5 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))();
      }
      if (((uint)uVar5 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar5 & 2) != 0) {
        local_38 = *(undefined8 *)(lVar2 + 0x58);
        lVar4 = *(longlong *)(lVar2 + 0x38);
        uStack_50 = *(undefined4 *)(lVar2 + 0x40);
        uStack_4c = *(undefined4 *)(lVar2 + 0x44);
        local_48 = *(undefined4 *)(lVar2 + 0x48);
        uStack_44 = *(undefined4 *)(lVar2 + 0x4c);
        uStack_40 = *(undefined4 *)(lVar2 + 0x50);
        uStack_3c = *(undefined4 *)(lVar2 + 0x54);
        *(undefined8 *)(lVar2 + 0x38) = 2;
        if (lVar4 != 2) {
          <serde_json[dc3825464c436029]::value::Value>(&uStack_50);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0xe8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
          ::drop_slow((undefined8 *)(param_1 + 0xe8));
        }
      }
    }
    if (*(longlong *)(param_1 + 0x78) != 2) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        plVar3 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x88);
    }
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  return;
}


