// 005890d0 poll

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *unaff_RBX;
  longlong unaff_R13;
  longlong *unaff_R14;
  longlong in_FS_OFFSET;
  bool bVar9;
  undefined1 local_878 [2120];
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    unaff_R13 = -0x138;
    uVar7 = (uint)*(byte *)(in_FS_OFFSET + -0xf0);
    unaff_RBX = param_1;
    unaff_R14 = param_2;
    if (*(byte *)(in_FS_OFFSET + -0xf0) != 0) goto LAB_00589318;
LAB_0058911c:
    cVar6 = *(char *)(in_FS_OFFSET + unaff_R13 + 0x45);
    if (*(char *)(in_FS_OFFSET + unaff_R13 + 0x44) != '\x01') {
LAB_0058913f:
      *(char *)(in_FS_OFFSET + unaff_R13 + 0x45) = cVar6;
      (*(code *)PTR_drop_00799e50)();
      goto LAB_0058915b;
    }
    if (cVar6 != '\0') {
      cVar6 = cVar6 + -1;
      goto LAB_0058913f;
    }
    (*(code *)PTR_register_waker_00799e58)();
LAB_0058922d:
    (*(code *)PTR_drop_00799e50)();
    goto LAB_00589294;
  }
  uVar7 = (*(code *)PTR_panic_fmt_007991a8)
                    (param_4,&
                             PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_64_llvm_8405253652347736786_0078de40
                    );
LAB_00589318:
  if (uVar7 == 1) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + unaff_R13 + 0x48) = 0;
    goto LAB_0058911c;
  }
LAB_0058915b:
  puVar1 = (ulonglong *)(lVar3 + 0x880);
  uVar8 = (*(code *)PTR_load_00799f40)();
  if ((uVar8 & 2) == 0) {
    if ((uVar8 & 4) == 0) {
      if ((uVar8 & 1) != 0) {
        if ((*(longlong *)(lVar3 + 0x878) == ((longlong *)*param_3)[1]) &&
           (*(longlong *)(lVar3 + 0x870) == *(longlong *)*param_3)) goto LAB_0058922d;
        uVar8 = *puVar1;
        do {
          LOCK();
          uVar2 = *puVar1;
          bVar9 = uVar8 == uVar2;
          if (bVar9) {
            *puVar1 = uVar8 & 0xfffffffffffffffe;
          }
          else {
            uVar8 = uVar2;
          }
          UNLOCK();
        } while (!bVar9);
        if ((uVar8 & 2) != 0) {
          LOCK();
          *(ulonglong *)(lVar3 + 0x880) = *(ulonglong *)(lVar3 + 0x880) | 1;
          UNLOCK();
          goto LAB_0058923e;
        }
        (*(code *)PTR_drop_task_00799060)();
      }
      (*(code *)PTR_set_task_00799f48)();
      uVar8 = *puVar1;
      do {
        LOCK();
        uVar2 = *puVar1;
        bVar9 = uVar8 == uVar2;
        if (bVar9) {
          *puVar1 = uVar8 | 1;
        }
        else {
          uVar8 = uVar2;
        }
        UNLOCK();
      } while (!bVar9);
      if ((uVar8 & 2) == 0) goto LAB_0058922d;
      goto LAB_0058923e;
    }
  }
  else {
LAB_0058923e:
    lVar4 = *(longlong *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffffe;
    if (lVar4 != -2) {
      (*(code *)PTR_memcpy_00799008)();
      (*(code *)PTR_drop_00799e50)();
      if (lVar4 == -3) {
LAB_00589294:
        *unaff_RBX = 0xfffffffffffffffd;
        return unaff_RBX;
      }
      goto LAB_0058929d;
    }
  }
  (*(code *)PTR_drop_00799e50)();
LAB_0058929d:
  (*(code *)PTR_memcpy_00799008)();
  plVar5 = (longlong *)*unaff_R14;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(unaff_R14,local_878);
    }
  }
  *unaff_R14 = 0;
  (*(code *)PTR_memcpy_00799008)();
  return unaff_RBX;
}


