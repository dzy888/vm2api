// 005899f0 poll

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    unaff_R12 = -0x138;
    uVar6 = (uint)*(byte *)(in_FS_OFFSET + -0xf0);
    unaff_RBX = param_1;
    unaff_R14 = param_2;
    if (*(byte *)(in_FS_OFFSET + -0xf0) != 0) goto LAB_00589c1f;
LAB_00589a2b:
    cVar5 = *(char *)(in_FS_OFFSET + unaff_R12 + 0x45);
    if (*(char *)(in_FS_OFFSET + unaff_R12 + 0x44) != '\x01') {
LAB_00589a4f:
      *(char *)(in_FS_OFFSET + unaff_R12 + 0x45) = cVar5;
      (*(code *)PTR_drop_00799e50)();
      goto LAB_00589a6c;
    }
    if (cVar5 != '\0') {
      cVar5 = cVar5 + -1;
      goto LAB_00589a4f;
    }
    (*(code *)PTR_register_waker_00799e58)();
LAB_00589b2d:
    (*(code *)PTR_drop_00799e50)();
    goto LAB_00589bed;
  }
  uVar6 = (*(code *)PTR_panic_fmt_007991a8)
                    (param_4,&
                             PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_64_llvm_8405253652347736786_0078de40
                    );
LAB_00589c1f:
  if (uVar6 == 1) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + unaff_R12 + 0x48) = 0;
    goto LAB_00589a2b;
  }
LAB_00589a6c:
  puVar1 = (ulonglong *)(lVar3 + 0x30);
  plVar8 = (longlong *)0x2;
  uVar7 = (*(code *)PTR_load_00799f40)();
  if ((uVar7 & 2) == 0) {
    if ((uVar7 & 4) == 0) {
      if ((uVar7 & 1) != 0) {
        if ((*(longlong *)(lVar3 + 0x28) == ((longlong *)*param_3)[1]) &&
           (*(longlong *)(lVar3 + 0x20) == *(longlong *)*param_3)) goto LAB_00589b2d;
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
          goto LAB_00589b3e;
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
      if ((uVar7 & 2) == 0) goto LAB_00589b2d;
      goto LAB_00589b3e;
    }
  }
  else {
LAB_00589b3e:
    lVar9 = *(longlong *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x38) = 2;
    if (lVar9 != 2) {
      local_58 = *(undefined4 *)(lVar3 + 0x40);
      uStack_54 = *(undefined4 *)(lVar3 + 0x44);
      uStack_50 = *(undefined4 *)(lVar3 + 0x48);
      uStack_4c = *(undefined4 *)(lVar3 + 0x4c);
      local_48 = *(undefined4 *)(lVar3 + 0x50);
      uStack_44 = *(undefined4 *)(lVar3 + 0x54);
      uStack_40 = *(undefined4 *)(lVar3 + 0x58);
      uStack_3c = *(undefined4 *)(lVar3 + 0x5c);
      (*(code *)PTR_drop_00799e50)();
      if (lVar9 == -1) {
LAB_00589bed:
        *unaff_RBX = -1;
        return unaff_RBX;
      }
      goto LAB_00589b8d;
    }
  }
  (*(code *)PTR_drop_00799e50)();
  lVar9 = 2;
LAB_00589b8d:
  plVar4 = (longlong *)*unaff_R14;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
      ::drop_slow(unaff_R14,plVar8);
    }
  }
  *unaff_R14 = 0;
  unaff_RBX[4] = CONCAT44(uStack_3c,uStack_40);
  unaff_RBX[2] = CONCAT44(uStack_4c,uStack_50);
  unaff_RBX[3] = CONCAT44(uStack_44,local_48);
  *unaff_RBX = lVar9;
  unaff_RBX[1] = CONCAT44(uStack_54,local_58);
  return unaff_RBX;
}


