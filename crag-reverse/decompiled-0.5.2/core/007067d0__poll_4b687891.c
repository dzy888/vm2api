// 007067d0 poll

/* <&mut tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

ulonglong __rustcall
<&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined **param_3,uint param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  char cVar11;
  char cVar12;
  longlong *unaff_R14;
  longlong *in_FS_OFFSET;
  bool bVar13;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = *plVar2;
  uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (lVar3 == 0) {
    param_3 = &PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_64_llvm_8405253652347736786_007953c0;
    lVar8 = (*(code *)PTR_panic_fmt_007991a8)();
LAB_00706965:
    if (param_4 == 1) {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar8 + 0x48) = 0;
      goto LAB_00706809;
    }
    cVar11 = '\0';
    cVar12 = '\0';
  }
  else {
    lVar8 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    param_4 = (uint)bVar1;
    unaff_R14 = param_2;
    if (bVar1 != 0) goto LAB_00706965;
LAB_00706809:
    cVar12 = *(char *)(lVar8 + 0x44);
    cVar11 = *(char *)(lVar8 + 0x45);
    cVar9 = cVar11;
    if (cVar12 == '\x01') {
      if (cVar11 == '\0') {
        (*(code *)PTR_defer_0079a740)();
        uVar6 = CONCAT71(uVar10,2);
        goto LAB_0070693b;
      }
      cVar9 = cVar11 + -1;
    }
    *(char *)(lVar8 + 0x45) = cVar9;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x30);
  if ((uVar4 & 2) == 0) {
    uVar6 = CONCAT71(uVar10,1);
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 1) == 0) {
LAB_0070689e:
        uVar7 = (*(code *)**(undefined8 **)*unaff_R14)();
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        *(undefined ***)(lVar3 + 0x28) = param_3;
        uVar6 = *(ulonglong *)(lVar3 + 0x30);
        do {
          LOCK();
          uVar4 = *(ulonglong *)(lVar3 + 0x30);
          bVar13 = uVar6 == uVar4;
          if (bVar13) {
            *(ulonglong *)(lVar3 + 0x30) = uVar6 | 1;
          }
          else {
            uVar6 = uVar4;
          }
          UNLOCK();
        } while (!bVar13);
        if ((uVar6 & 2) != 0) goto LAB_0070690f;
      }
      else if ((*(longlong *)(lVar3 + 0x28) != ((longlong *)*unaff_R14)[1]) ||
              (param_3 = *(undefined ***)(lVar3 + 0x20), param_3 != *(undefined ***)*unaff_R14)) {
        uVar6 = *(ulonglong *)(lVar3 + 0x30);
        do {
          LOCK();
          uVar4 = *(ulonglong *)(lVar3 + 0x30);
          bVar13 = uVar6 == uVar4;
          if (bVar13) {
            *(ulonglong *)(lVar3 + 0x30) = uVar6 & 0xfffffffffffffffe;
          }
          else {
            uVar6 = uVar4;
          }
          UNLOCK();
        } while (!bVar13);
        if ((uVar6 & 2) != 0) {
          LOCK();
          *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) | 1;
          UNLOCK();
          goto LAB_0070690f;
        }
        (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x18))();
        goto LAB_0070689e;
      }
      if (cVar12 != '\0') {
        if (*(char *)(lVar8 + 0x48) != '\0') {
          if (*(char *)(lVar8 + 0x48) == '\x02') goto LAB_007068ef;
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar8 + 0x48) = 0;
        }
        *(undefined1 *)(lVar8 + 0x44) = 1;
        *(char *)(lVar8 + 0x45) = cVar11;
      }
LAB_007068ef:
      uVar6 = CONCAT71((int7)((ulonglong)lVar8 >> 8),2);
      goto LAB_0070693b;
    }
  }
  else {
LAB_0070690f:
    bVar1 = *(byte *)(lVar3 + 0x38);
    *(undefined1 *)(lVar3 + 0x38) = 0;
    uVar6 = (ulonglong)(bVar1 ^ 1);
  }
  plVar5 = (longlong *)*plVar2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      (*(code *)PTR_drop_slow_00799b00)();
    }
  }
  *plVar2 = 0;
LAB_0070693b:
  return uVar6 & 0xffffffff;
}


