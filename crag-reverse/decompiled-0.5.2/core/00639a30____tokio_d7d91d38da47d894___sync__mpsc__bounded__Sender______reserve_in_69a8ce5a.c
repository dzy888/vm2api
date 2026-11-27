// 00639a30 <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<bytes[e9829e187354639b]::bytes::Bytes>>

/* WARNING: Switch with 1 destination removed at 0x00639a69 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<bytes[e9829e187354639b]::bytes::Bytes>>
    */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::_closure_0_::WakeReceiverOnDrop<bytes[e9829e187354639b]::bytes::Bytes>>
          (longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar5 = (*(code *)PTR_is_closed_00799108)();
  if (((char)uVar5 == '\0') || (uVar5 = (*(code *)PTR_is_idle_00799110)(), (char)uVar5 == '\0')) {
    return uVar5;
  }
  lVar3 = *param_1;
  uVar5 = *(ulonglong *)(lVar3 + 0x110);
  do {
    LOCK();
    uVar1 = *(ulonglong *)(lVar3 + 0x110);
    bVar6 = uVar5 == uVar1;
    if (bVar6) {
      *(ulonglong *)(lVar3 + 0x110) = uVar5 | 2;
    }
    else {
      uVar5 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
  if (uVar5 == 0) {
    lVar4 = *(longlong *)(lVar3 + 0x100);
    uVar5 = *(ulonglong *)(lVar3 + 0x108);
    *(longlong *)(lVar3 + 0x100) = 0;
    LOCK();
    uVar2 = *(undefined8 *)(lVar3 + 0x110);
    *(undefined8 *)(lVar3 + 0x110) = 0;
    UNLOCK();
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar4 + 8))(lVar4,uVar2);
      return uVar5;
    }
  }
  return uVar5;
}


