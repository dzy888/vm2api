// 0057fb40 pop

/* <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
          (ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar6 = *param_2;
  uVar3 = *(ulonglong *)(lVar6 + 0x300);
  pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
  while (PTR___rust_dealloc_00798fc8 = pcVar5, uVar3 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar6 = *(longlong *)(lVar6 + 0x308);
    if (lVar6 == 0) goto LAB_0057fbe0;
    *param_2 = lVar6;
    pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
    uVar3 = *(ulonglong *)(lVar6 + 0x300);
  }
  lVar4 = param_2[1];
  if ((lVar4 != lVar6) && ((*(ulonglong *)(lVar4 + 0x310) >> 0x20 & 1) != 0)) {
    lVar10 = *(longlong *)(lVar4 + 0x318) - param_2[2];
    while (lVar10 < 1) {
      if (*(longlong *)(lVar4 + 0x308) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_2[1] = *(longlong *)(lVar4 + 0x308);
      *(undefined8 *)(lVar4 + 0x300) = 0;
      *(undefined8 *)(lVar4 + 0x308) = 0;
      *(undefined8 *)(lVar4 + 0x310) = 0;
      lVar6 = *param_3;
      *(longlong *)(lVar4 + 0x300) = *(longlong *)(lVar6 + 0x300) + 0x20;
      lVar10 = 0;
      plVar1 = (longlong *)(lVar6 + 0x308);
      LOCK();
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = lVar4;
      }
      else {
        lVar10 = lVar6;
      }
      UNLOCK();
      if (lVar6 != 0) {
        *(longlong *)(lVar4 + 0x300) = *(longlong *)(lVar10 + 0x300) + 0x20;
        lVar7 = 0;
        LOCK();
        lVar6 = *(longlong *)(lVar10 + 0x308);
        if (lVar6 == 0) {
          *(longlong *)(lVar10 + 0x308) = lVar4;
        }
        else {
          lVar7 = lVar6;
        }
        UNLOCK();
        if (lVar6 != 0) {
          *(longlong *)(lVar4 + 0x300) = *(longlong *)(lVar7 + 0x300) + 0x20;
          LOCK();
          bVar11 = *(longlong *)(lVar7 + 0x308) == 0;
          if (bVar11) {
            *(longlong *)(lVar7 + 0x308) = lVar4;
          }
          UNLOCK();
          if (!bVar11) {
            (*pcVar5)(lVar4,8);
          }
        }
      }
      lVar6 = *param_2;
      lVar4 = param_2[1];
      if ((lVar4 == lVar6) || ((*(ulonglong *)(lVar4 + 0x310) & 0x100000000) == 0)) break;
      lVar10 = *(longlong *)(lVar4 + 0x318) - param_2[2];
    }
  }
  lVar4 = param_2[2];
  uVar8 = (uint)lVar4;
  if (((uint)*(ulonglong *)(lVar6 + 0x310) >> (uVar8 & 0x1f) & 1) == 0) {
    if ((*(ulonglong *)(lVar6 + 0x310) >> 0x21 & 1) == 0) {
LAB_0057fbe0:
      *param_1 = 0xfffffffffffffffe;
    }
    else {
      *param_1 = 0xffffffffffffffff;
    }
  }
  else {
    uVar9 = (ulonglong)(uVar8 & 0x1f);
    puVar2 = (ulonglong *)(lVar6 + uVar9 * 0x18);
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    param_1[2] = *(ulonglong *)(lVar6 + 0x10 + uVar9 * 0x18);
    if (*param_1 < 0xfffffffffffffffe) {
      param_2[2] = lVar4 + 1;
    }
  }
  return;
}


