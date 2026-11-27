// 003b7390 drop

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
  undefined *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar7 = (longlong)puVar2 - (longlong)puVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar7;
  plVar8 = SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  *param_1 = 8;
  param_1[1] = 8;
  puVar6 = PTR_drop_slow_007995f0;
  if (puVar2 == puVar1) {
    lVar9 = param_1[4];
    if (lVar9 != 0) {
      lVar3 = param_1[2];
      plVar4 = *(longlong **)(lVar3 + 0x10);
      plVar8 = (longlong *)param_1[3];
      if (plVar8 != plVar4) {
        plVar8 = (longlong *)
                 (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar3 + 8),lVar9 * 0x18);
      }
      *(longlong *)(lVar3 + 0x10) = (longlong)plVar4 + lVar9;
    }
  }
  else {
    lVar9 = 1 - uVar7 / 0x18;
    do {
      plVar8 = (longlong *)*puVar1;
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        plVar8 = (longlong *)(*(code *)puVar6)();
      }
      lVar9 = lVar9 + 1;
      puVar1 = puVar1 + 3;
    } while (lVar9 != 1);
    lVar9 = param_1[4];
    if (lVar9 != 0) {
      lVar3 = param_1[2];
      plVar8 = (longlong *)param_1[3];
      plVar4 = *(longlong **)(lVar3 + 0x10);
      if (plVar8 != plVar4) {
        plVar8 = (longlong *)
                 (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar3 + 8),lVar9 * 0x18);
      }
      *(longlong *)(lVar3 + 0x10) = (longlong)plVar4 + lVar9;
    }
  }
  return plVar8;
}


