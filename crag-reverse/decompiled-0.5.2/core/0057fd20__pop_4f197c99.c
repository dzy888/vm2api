// 0057fd20 pop

/* <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::pop
    */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
::pop(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar12 = *param_2;
  uVar3 = *(ulonglong *)(lVar12 + 0xd00);
  pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
  while (PTR___rust_dealloc_00798fc8 = pcVar5, uVar3 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar12 = *(longlong *)(lVar12 + 0xd08);
    if (lVar12 == 0) goto LAB_0057fdf5;
    *param_2 = lVar12;
    pcVar5 = (code *)PTR___rust_dealloc_00798fc8;
    uVar3 = *(ulonglong *)(lVar12 + 0xd00);
  }
  lVar4 = param_2[1];
  if ((lVar4 != lVar12) && ((*(ulonglong *)(lVar4 + 0xd10) >> 0x20 & 1) != 0)) {
    lVar15 = *(longlong *)(lVar4 + 0xd18) - param_2[2];
    while (lVar15 < 1) {
      if (*(longlong *)(lVar4 + 0xd08) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_2[1] = *(longlong *)(lVar4 + 0xd08);
      *(undefined8 *)(lVar4 + 0xd00) = 0;
      *(undefined8 *)(lVar4 + 0xd08) = 0;
      *(undefined8 *)(lVar4 + 0xd10) = 0;
      lVar12 = *param_3;
      *(longlong *)(lVar4 + 0xd00) = *(longlong *)(lVar12 + 0xd00) + 0x20;
      lVar15 = 0;
      plVar1 = (longlong *)(lVar12 + 0xd08);
      LOCK();
      lVar12 = *plVar1;
      if (lVar12 == 0) {
        *plVar1 = lVar4;
      }
      else {
        lVar15 = lVar12;
      }
      UNLOCK();
      if (lVar12 != 0) {
        *(longlong *)(lVar4 + 0xd00) = *(longlong *)(lVar15 + 0xd00) + 0x20;
        lVar13 = 0;
        LOCK();
        lVar12 = *(longlong *)(lVar15 + 0xd08);
        if (lVar12 == 0) {
          *(longlong *)(lVar15 + 0xd08) = lVar4;
        }
        else {
          lVar13 = lVar12;
        }
        UNLOCK();
        if (lVar12 != 0) {
          *(longlong *)(lVar4 + 0xd00) = *(longlong *)(lVar13 + 0xd00) + 0x20;
          LOCK();
          bVar16 = *(longlong *)(lVar13 + 0xd08) == 0;
          if (bVar16) {
            *(longlong *)(lVar13 + 0xd08) = lVar4;
          }
          UNLOCK();
          if (!bVar16) {
            (*pcVar5)(lVar4,8);
          }
        }
      }
      lVar12 = *param_2;
      lVar4 = param_2[1];
      if ((lVar4 == lVar12) || ((*(ulonglong *)(lVar4 + 0xd10) & 0x100000000) == 0)) break;
      lVar15 = *(longlong *)(lVar4 + 0xd18) - param_2[2];
    }
  }
  lVar4 = param_2[2];
  uVar14 = (uint)lVar4;
  if (((uint)*(ulonglong *)(lVar12 + 0xd10) >> (uVar14 & 0x1f) & 1) == 0) {
    if ((*(ulonglong *)(lVar12 + 0xd10) >> 0x21 & 1) == 0) {
LAB_0057fdf5:
      *param_1 = 0xfffffffffffffffe;
    }
    else {
      *param_1 = 0xffffffffffffffff;
    }
  }
  else {
    lVar15 = (ulonglong)(uVar14 & 0x1f) * 0x68;
    uVar3 = ((ulonglong *)(lVar12 + lVar15))[1];
    puVar2 = (ulonglong *)(lVar12 + 0x10 + lVar15);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (ulonglong *)(lVar12 + 0x20 + lVar15);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    puVar2 = (ulonglong *)(lVar12 + 0x30 + lVar15);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    *param_1 = *(ulonglong *)(lVar12 + lVar15);
    param_1[1] = uVar3;
    param_1[0xc] = *(ulonglong *)(lVar12 + 0x60 + lVar15);
    puVar2 = (ulonglong *)(lVar12 + 0x50 + lVar15);
    uVar3 = puVar2[1];
    param_1[10] = *puVar2;
    param_1[0xb] = uVar3;
    puVar2 = (ulonglong *)(lVar12 + 0x40 + lVar15);
    uVar3 = puVar2[1];
    param_1[8] = *puVar2;
    param_1[9] = uVar3;
    param_1[6] = uVar10;
    param_1[7] = uVar11;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    if (*param_1 < 0xfffffffffffffffe) {
      param_2[2] = lVar4 + 1;
    }
  }
  return;
}


