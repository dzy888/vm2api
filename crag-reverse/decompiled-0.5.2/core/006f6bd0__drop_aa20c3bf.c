// 006f6bd0 drop

/* WARNING: Switch with 1 destination removed at 0x006f6c48 */
/* <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong lVar8;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  if ((lVar4 != 0) && (lVar5 != 0)) {
    puVar6 = (undefined8 *)param_1[3];
    pcVar7 = (code *)*puVar6;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)();
    }
    if (puVar6[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  param_1[1] = 0;
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  if (((byte)lVar4 & lVar5 != 0) != 0) {
    *(undefined1 *)(lVar8 + 0x20) = 1;
  }
  LOCK();
  plVar1 = (longlong *)(lVar8 + 0x18);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(lVar8 + 0x10) + 0x28);
    iVar3 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
    if (iVar3 == -1) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


