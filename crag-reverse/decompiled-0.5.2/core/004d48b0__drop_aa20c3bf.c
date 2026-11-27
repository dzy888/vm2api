// 004d48b0 drop

/* <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  longlong *local_30;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    LOCK();
    bVar6 = *(int *)(lVar2 + 0x10) == 0;
    if (bVar6) {
      *(int *)(lVar2 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar6) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar4 = bVar4 ^ 1;
    }
    local_30 = (longlong *)
               <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::remove::<alloc[12e961f32105355]::string::String>(lVar2 + 0x18,param_1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(&local_30);
      }
    }
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(lVar2 + 0x14) = 1;
    }
    LOCK();
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  return;
}


