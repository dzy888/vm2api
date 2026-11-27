// 0058a260 poll

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_RBX;
  longlong *plVar8;
  longlong unaff_R12;
  longlong *unaff_R14;
  longlong lVar9;
  longlong in_FS_OFFSET;
  bool bVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    unaff_R12 = -0x138;
    uVar6 = (uint)*(byte *)(in_FS_OFFSET + -0xf0);
    unaff_RBX = param_1;
    unaff_R14 = param_2;
    if (*(byte *)(in_FS_OFFSET + -0xf0) != 0) goto LAB_0058a485;
LAB_0058a29b:
    cVar5 = *(char *)(in_FS_OFFSET + unaff_R12 + 0x45);
    if (*(char *)(in_FS_OFFSET + unaff_R12 + 0x44) != '\x01') {
LAB_0058a2bf:
      *(char *)(in_FS_OFFSET + unaff_R12 + 0x45) = cVar5;
      (*(code *)PTR_drop_00799e50)();
      goto LAB_0058a2dc;
    }
    if (cVar5 != '\0') {
      cVar5 = cVar5 + -1;
      goto LAB_0058a2bf;
    }
    (*(code *)PTR_register_waker_00799e58)();
LAB_0058a39d:
    (*(code *)PTR_drop_00799e50)();
    goto LAB_0058a3e6;
  }
  uVar6 = (*(code *)PTR_panic_fmt_007991a8)
                    (param_4,&
                             PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_64_llvm_8405253652347736786_0078de40
                    );
LAB_0058a485:
  if (uVar6 == 1) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + unaff_R12 + 0x48) = 0;
    goto LAB_0058a29b;
  }
LAB_0058a2dc:
  puVar1 = (ulonglong *)(lVar3 + 0x50);
  plVar8 = (longlong *)0x2;
  uVar7 = (*(code *)PTR_load_00799f40)();
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 4) == 0) {
      if ((uVar7 & 1) != 0) {
        if ((*(longlong *)(lVar3 + 0x48) == ((longlong *)*param_3)[1]) &&
           (*(longlong *)(lVar3 + 0x40) == *(longlong *)*param_3)) goto LAB_0058a39d;
        uVar7 = *puVar1;
        do {
          LOCK();
          uVar2 = *puVar1;
          bVar10 = uVar7 == uVar2;
          if (bVar10) {
            *puVar1 = uVar7 & 0xfffffffffffffffe;
          }
          else {
            uVar7 = uVar2;
          }
          UNLOCK();
        } while (!bVar10);
        if ((uVar7 & 2) != 0) {
          LOCK();
          *(ulonglong *)(lVar3 + 0x50) = *(ulonglong *)(lVar3 + 0x50) | 1;
          UNLOCK();
          goto LAB_0058a3ab;
        }
        (*(code *)PTR_drop_task_00799060)();
      }
      (*(code *)PTR_set_task_00799f48)();
      uVar7 = *puVar1;
      do {
        LOCK();
        uVar2 = *puVar1;
        bVar10 = uVar7 == uVar2;
        if (bVar10) {
          *puVar1 = uVar7 | 1;
        }
        else {
          uVar7 = uVar2;
        }
        UNLOCK();
      } while (!bVar10);
      plVar8 = param_3;
      if ((uVar7 & 2) == 0) goto LAB_0058a39d;
      goto LAB_0058a3ab;
    }
  }
  else {
LAB_0058a3ab:
    lVar9 = *(longlong *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    if (lVar9 != -1) {
      local_38 = *(longlong *)(lVar3 + 0x28);
      local_48 = *(undefined4 *)(lVar3 + 0x18);
      uStack_44 = *(undefined4 *)(lVar3 + 0x1c);
      uStack_40 = *(undefined4 *)(lVar3 + 0x20);
      uStack_3c = *(undefined4 *)(lVar3 + 0x24);
      (*(code *)PTR_drop_00799e50)();
      if (lVar9 == -2) {
LAB_0058a3e6:
        *unaff_RBX = -2;
        return unaff_RBX;
      }
      goto LAB_0058a401;
    }
  }
  (*(code *)PTR_drop_00799e50)();
  lVar9 = -1;
LAB_0058a401:
  plVar4 = (longlong *)*unaff_R14;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
      ::drop_slow(unaff_R14,plVar8);
    }
  }
  *unaff_R14 = 0;
  unaff_RBX[2] = CONCAT44(uStack_3c,uStack_40);
  unaff_RBX[3] = local_38;
  *unaff_RBX = lVar9;
  unaff_RBX[1] = CONCAT44(uStack_44,local_48);
  return unaff_RBX;
}


