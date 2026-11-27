// 00589390 poll

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
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
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    unaff_R12 = -0x138;
    uVar6 = (uint)*(byte *)(in_FS_OFFSET + -0xf0);
    unaff_RBX = param_1;
    unaff_R14 = param_2;
    if (*(byte *)(in_FS_OFFSET + -0xf0) != 0) goto LAB_0058968e;
LAB_005893ce:
    cVar5 = *(char *)(in_FS_OFFSET + unaff_R12 + 0x45);
    if (*(char *)(in_FS_OFFSET + unaff_R12 + 0x44) != '\x01') {
LAB_005893f2:
      *(char *)(in_FS_OFFSET + unaff_R12 + 0x45) = cVar5;
      (*(code *)PTR_drop_00799e50)();
      goto LAB_0058940f;
    }
    if (cVar5 != '\0') {
      cVar5 = cVar5 + -1;
      goto LAB_005893f2;
    }
    (*(code *)PTR_register_waker_00799e58)();
LAB_005894cd:
    (*(code *)PTR_drop_00799e50)();
    goto LAB_00589581;
  }
  uVar6 = (*(code *)PTR_panic_fmt_007991a8)
                    (param_4,&
                             PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_64_llvm_8405253652347736786_0078de40
                    );
LAB_0058968e:
  if (uVar6 == 1) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + unaff_R12 + 0x48) = 0;
    goto LAB_005893ce;
  }
LAB_0058940f:
  puVar1 = (ulonglong *)(lVar3 + 0x30);
  plVar8 = (longlong *)0x2;
  uVar7 = (*(code *)PTR_load_00799f40)();
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 4) == 0) {
      if ((uVar7 & 1) != 0) {
        if ((*(longlong *)(lVar3 + 0x28) == ((longlong *)*param_3)[1]) &&
           (*(longlong *)(lVar3 + 0x20) == *(longlong *)*param_3)) goto LAB_005894cd;
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
          *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) | 1;
          UNLOCK();
          goto LAB_005894de;
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
      if ((uVar7 & 2) == 0) goto LAB_005894cd;
      goto LAB_005894de;
    }
  }
  else {
LAB_005894de:
    lVar9 = *(longlong *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x38) = 0xfffffffffffffffe;
    if (lVar9 != -2) {
      local_48 = *(longlong *)(lVar3 + 0xa0);
      lStack_40 = *(longlong *)(lVar3 + 0xa8);
      local_58 = *(longlong *)(lVar3 + 0x90);
      lStack_50 = *(longlong *)(lVar3 + 0x98);
      local_68 = *(longlong *)(lVar3 + 0x80);
      lStack_60 = *(longlong *)(lVar3 + 0x88);
      local_a8 = *(undefined4 *)(lVar3 + 0x40);
      uStack_a4 = *(undefined4 *)(lVar3 + 0x44);
      uStack_a0 = *(undefined4 *)(lVar3 + 0x48);
      uStack_9c = *(undefined4 *)(lVar3 + 0x4c);
      local_98 = *(undefined4 *)(lVar3 + 0x50);
      uStack_94 = *(undefined4 *)(lVar3 + 0x54);
      uStack_90 = *(undefined4 *)(lVar3 + 0x58);
      uStack_8c = *(undefined4 *)(lVar3 + 0x5c);
      local_88 = *(undefined4 *)(lVar3 + 0x60);
      uStack_84 = *(undefined4 *)(lVar3 + 100);
      uStack_80 = *(undefined4 *)(lVar3 + 0x68);
      uStack_7c = *(undefined4 *)(lVar3 + 0x6c);
      local_78 = *(undefined4 *)(lVar3 + 0x70);
      uStack_74 = *(undefined4 *)(lVar3 + 0x74);
      uStack_70 = *(undefined4 *)(lVar3 + 0x78);
      uStack_6c = *(undefined4 *)(lVar3 + 0x7c);
      (*(code *)PTR_drop_00799e50)();
      if (lVar9 == -3) {
LAB_00589581:
        *unaff_RBX = -3;
        return unaff_RBX;
      }
      goto LAB_0058958d;
    }
  }
  (*(code *)PTR_drop_00799e50)();
  lVar9 = -2;
LAB_0058958d:
  plVar4 = (longlong *)*unaff_R14;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(unaff_R14,plVar8);
    }
  }
  *unaff_R14 = 0;
  unaff_RBX[0xe] = lStack_40;
  unaff_RBX[0xc] = lStack_50;
  unaff_RBX[0xd] = local_48;
  unaff_RBX[10] = lStack_60;
  unaff_RBX[0xb] = local_58;
  unaff_RBX[8] = CONCAT44(uStack_6c,uStack_70);
  unaff_RBX[9] = local_68;
  unaff_RBX[6] = CONCAT44(uStack_7c,uStack_80);
  unaff_RBX[7] = CONCAT44(uStack_74,local_78);
  unaff_RBX[4] = CONCAT44(uStack_8c,uStack_90);
  unaff_RBX[5] = CONCAT44(uStack_84,local_88);
  unaff_RBX[2] = CONCAT44(uStack_9c,uStack_a0);
  unaff_RBX[3] = CONCAT44(uStack_94,local_98);
  *unaff_RBX = lVar9;
  unaff_RBX[1] = CONCAT44(uStack_a4,local_a8);
  return unaff_RBX;
}


