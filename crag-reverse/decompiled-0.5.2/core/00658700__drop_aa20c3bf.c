// 00658700 drop

/* WARNING: Switch with 1 destination removed at 0x00658738 */
/* <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<bytes[e9829e187354639b]::bytes::Bytes>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

ulonglong __rustcall
<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)*param_1;
  uVar6 = (*(code *)PTR_is_closed_00799108)();
  if (((char)uVar6 == '\0') || (uVar6 = (*(code *)PTR_is_idle_00799110)(), (char)uVar6 == '\0')) {
    return uVar6;
  }
  lVar4 = *plVar3;
  uVar6 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar1 = *(ulonglong *)(lVar4 + 0x110);
    bVar7 = uVar6 == uVar1;
    if (bVar7) {
      *(ulonglong *)(lVar4 + 0x110) = uVar6 | 2;
    }
    else {
      uVar6 = uVar1;
    }
    UNLOCK();
  } while (!bVar7);
  if (uVar6 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x100);
    uVar6 = *(ulonglong *)(lVar4 + 0x108);
    *(longlong *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar2 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(lVar5 + 8))(lVar5,uVar2);
      return uVar6;
    }
  }
  return uVar6;
}


