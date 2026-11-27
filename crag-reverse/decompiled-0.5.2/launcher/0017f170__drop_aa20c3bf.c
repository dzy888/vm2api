// 0017f170 drop

/* <alloc[12e961f32105355]::vec::drain::Drain<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

longlong * __rustcall
<alloc[12e961f32105355]::vec::drain::Drain<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = (longlong)puVar2 - (longlong)puVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  plVar7 = SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  *param_1 = 8;
  param_1[1] = 8;
  if (puVar2 == puVar1) {
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      lVar3 = param_1[2];
      plVar4 = *(longlong **)(lVar3 + 0x10);
      plVar7 = (longlong *)param_1[3];
      if (plVar7 != plVar4) {
        plVar7 = (longlong *)
                 (*(code *)PTR_memmove_00219fb0)(*(undefined8 *)(lVar3 + 8),lVar8 * 0x18);
      }
      *(longlong *)(lVar3 + 0x10) = (longlong)plVar4 + lVar8;
    }
  }
  else {
    lVar8 = 1 - uVar6 / 0x18;
    do {
      plVar7 = (longlong *)*puVar1;
      LOCK();
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        plVar7 = (longlong *)
                 <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>
                 ::drop_slow(puVar1);
      }
      lVar8 = lVar8 + 1;
      puVar1 = puVar1 + 3;
    } while (lVar8 != 1);
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      lVar3 = param_1[2];
      plVar7 = (longlong *)param_1[3];
      plVar4 = *(longlong **)(lVar3 + 0x10);
      if (plVar7 != plVar4) {
        plVar7 = (longlong *)
                 (*(code *)PTR_memmove_00219fb0)(*(undefined8 *)(lVar3 + 8),lVar8 * 0x18);
      }
      *(longlong *)(lVar3 + 0x10) = (longlong)plVar4 + lVar8;
    }
  }
  return plVar7;
}


