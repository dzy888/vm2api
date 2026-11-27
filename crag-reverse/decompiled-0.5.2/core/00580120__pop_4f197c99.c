// 00580120 pop

/* <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar9 = *param_2;
  uVar12 = *(ulonglong *)(lVar9 + 0x400);
  pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
  while (PTR___rust_dealloc_00798fc8 = pcVar5, uVar12 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar9 = *(longlong *)(lVar9 + 0x408);
    if (lVar9 == 0) goto LAB_005801c8;
    *param_2 = lVar9;
    pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
    uVar12 = *(ulonglong *)(lVar9 + 0x400);
  }
  lVar4 = param_2[1];
  if ((lVar4 != lVar9) && ((*(ulonglong *)(lVar4 + 0x410) >> 0x20 & 1) != 0)) {
    lVar13 = *(longlong *)(lVar4 + 0x418) - param_2[2];
    while (lVar13 < 1) {
      if (*(longlong *)(lVar4 + 0x408) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_2[1] = *(longlong *)(lVar4 + 0x408);
      *(undefined8 *)(lVar4 + 0x400) = 0;
      *(undefined8 *)(lVar4 + 0x408) = 0;
      *(undefined8 *)(lVar4 + 0x410) = 0;
      lVar9 = *param_3;
      *(longlong *)(lVar4 + 0x400) = *(longlong *)(lVar9 + 0x400) + 0x20;
      lVar13 = 0;
      plVar1 = (longlong *)(lVar9 + 0x408);
      LOCK();
      lVar9 = *plVar1;
      if (lVar9 == 0) {
        *plVar1 = lVar4;
      }
      else {
        lVar13 = lVar9;
      }
      UNLOCK();
      if (lVar9 != 0) {
        *(longlong *)(lVar4 + 0x400) = *(longlong *)(lVar13 + 0x400) + 0x20;
        lVar10 = 0;
        LOCK();
        lVar9 = *(longlong *)(lVar13 + 0x408);
        if (lVar9 == 0) {
          *(longlong *)(lVar13 + 0x408) = lVar4;
        }
        else {
          lVar10 = lVar9;
        }
        UNLOCK();
        if (lVar9 != 0) {
          *(longlong *)(lVar4 + 0x400) = *(longlong *)(lVar10 + 0x400) + 0x20;
          LOCK();
          bVar14 = *(longlong *)(lVar10 + 0x408) == 0;
          if (bVar14) {
            *(longlong *)(lVar10 + 0x408) = lVar4;
          }
          UNLOCK();
          if (!bVar14) {
            (*pcVar5)(lVar4,8);
          }
        }
      }
      lVar9 = *param_2;
      lVar4 = param_2[1];
      if ((lVar4 == lVar9) || ((*(ulonglong *)(lVar4 + 0x410) & 0x100000000) == 0)) break;
      lVar13 = *(longlong *)(lVar4 + 0x418) - param_2[2];
    }
  }
  lVar4 = param_2[2];
  uVar11 = (uint)lVar4;
  if (((uint)*(ulonglong *)(lVar9 + 0x410) >> (uVar11 & 0x1f) & 1) == 0) {
    if ((*(ulonglong *)(lVar9 + 0x410) >> 0x21 & 1) == 0) {
LAB_005801c8:
      *param_1 = 0;
    }
    else {
      param_1[1] = 0;
      *param_1 = 1;
    }
  }
  else {
    uVar12 = (ulonglong)((uVar11 & 0x1f) << 5);
    puVar2 = (undefined8 *)(lVar9 + uVar12);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar9 + 0x10 + uVar12);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    param_1[1] = *puVar2;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    *param_1 = 1;
    if (param_1[1] != 0) {
      param_2[2] = lVar4 + 1;
    }
  }
  return;
}


