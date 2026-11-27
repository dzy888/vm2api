// 006e74d0 <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>

/* <tokio[d7d91d38da47d894]::runtime::context::blocking::BlockingRegionGuard>::block_on_timeout::<&mut
   tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>> */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::context::blocking::BlockingRegionGuard>::block_on_timeout::
<&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint in_ECX;
  undefined4 in_EDX;
  ulonglong extraout_RDX;
  ulonglong uVar11;
  char cVar12;
  undefined8 unaff_R13;
  longlong *in_FS_OFFSET;
  undefined1 auVar13 [12];
  undefined1 local_81;
  undefined8 local_80;
  undefined4 local_78;
  undefined **local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  undefined ***local_50;
  undefined ***local_48;
  undefined8 local_40;
  
  lVar3 = *in_FS_OFFSET;
  plVar1 = (longlong *)(lVar3 + -0x58);
  plVar10 = plVar1;
  if (*(char *)(lVar3 + -0x50) != '\x01') {
    auVar13 = <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
              ::get_or_init_slow::
              <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                        (plVar1,0);
    in_EDX = auVar13._8_4_;
    plVar10 = auVar13._0_8_;
    if (plVar10 == (longlong *)0x0) {
      uVar8 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),2);
      goto LAB_006e777c;
    }
  }
  plVar10 = (longlong *)*plVar10;
  LOCK();
  lVar2 = *plVar10;
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  if (*plVar10 != 0 && SCARRY8(lVar2,1) == *plVar10 < 0) {
    local_68 = plVar10 + 2;
    local_70 = &anon_c4f639d01efbe85961be48d14333fbdc_39_llvm_17218896934804705305;
    local_50 = &local_70;
    local_40 = 0;
    local_48 = local_50;
    local_80 = (*(code *)PTR_now_00799250)();
    local_78 = in_EDX;
    uVar7 = (*(code *)PTR_checked_add_0079a828)();
    lVar2 = *in_FS_OFFSET;
    if (in_ECX == 0xffffffff) {
      do {
        cVar12 = *(char *)(lVar2 + -0xf0);
        if (cVar12 == '\0') {
LAB_006e76ba:
          cVar12 = *(char *)(lVar2 + -0xf4);
          uVar7 = (ulonglong)*(byte *)(lVar2 + -0xf3);
          *(undefined2 *)(lVar2 + -0xf4) = 0x8001;
        }
        else if (cVar12 == '\x01') {
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar2 + -0xf0) = 0;
          goto LAB_006e76ba;
        }
        local_80._0_2_ = CONCAT11((char)uVar7,cVar12);
        uVar6 = <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
                ::poll(local_60,&local_50);
        uVar8 = (ulonglong)uVar6;
        if (cVar12 != '\x02') {
          if (*(char *)(lVar2 + -0xf0) != '\0') {
            if (*(char *)(lVar2 + -0xf0) == '\x02') goto LAB_006e76fc;
            (*(code *)PTR_register_00799240)();
            *(undefined1 *)(lVar2 + -0xf0) = 0;
          }
          *(char *)(lVar2 + -0xf4) = cVar12;
          *(char *)(lVar2 + -0xf3) = (char)uVar7;
        }
LAB_006e76fc:
        if ((char)uVar6 != '\x02') goto LAB_006e776f;
        (*(code *)PTR_now_00799250)();
        plVar10 = plVar1;
        if (*(char *)(lVar3 + -0x50) != '\x01') {
          plVar10 = (longlong *)
                    <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
                    ::get_or_init_slow::
                    <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                              (plVar1,0);
          if (plVar10 == (longlong *)0x0) goto LAB_006e77a6;
        }
        <tokio[d7d91d38da47d894]::runtime::park::Inner>::park(*plVar10 + 0x10);
      } while( true );
    }
    local_58 = uVar7;
LAB_006e7590:
    cVar12 = *(char *)(lVar2 + -0xf0);
    if (cVar12 == '\0') {
LAB_006e759e:
      cVar12 = *(char *)(lVar2 + -0xf4);
      uVar7 = (ulonglong)*(byte *)(lVar2 + -0xf3);
      *(undefined2 *)(lVar2 + -0xf4) = 0x8001;
    }
    else if (cVar12 != '\x02') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
      goto LAB_006e759e;
    }
    local_80._0_2_ = CONCAT11((char)uVar7,cVar12);
    uVar6 = <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
            ::poll(local_60,&local_50);
    uVar8 = (ulonglong)uVar6;
    uVar11 = extraout_RDX;
    if (cVar12 != '\x02') {
      if (*(char *)(lVar2 + -0xf0) != '\0') {
        if (*(char *)(lVar2 + -0xf0) == '\x02') goto LAB_006e75e6;
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar2 + -0xf0) = 0;
      }
      *(char *)(lVar2 + -0xf4) = cVar12;
      *(char *)(lVar2 + -0xf3) = (char)uVar7;
    }
LAB_006e75e6:
    if ((char)uVar6 != '\x02') goto LAB_006e776f;
    uVar8 = (*(code *)PTR_now_00799250)();
    bVar5 = in_ECX <= (uint)uVar11;
    if (uVar8 != local_58) {
      bVar5 = (longlong)local_58 <= (longlong)uVar8;
    }
    if (!bVar5) {
      uVar9 = (*(code *)PTR_sub_00799b10)(uVar11 & 0xffffffff,uVar8);
      plVar10 = plVar1;
      if (*(char *)(lVar3 + -0x50) != '\x01') {
        plVar10 = (longlong *)
                  <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
                  ::get_or_init_slow::
                  <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                            (plVar1,0);
        if (plVar10 == (longlong *)0x0) goto LAB_006e77cd;
      }
      <tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout
                (*plVar10 + 0x10,uVar9,uVar8 & 0xffffffff);
      goto LAB_006e7590;
    }
    uVar8 = CONCAT71((uint7)(uint3)(uVar6 >> 8),2);
LAB_006e776f:
    (*(code *)local_70[3])();
LAB_006e777c:
    return uVar8 & 0xffffffff;
  }
  goto LAB_006e77f2;
LAB_006e77a6:
  (*(code *)PTR_unwrap_failed_00799028)
            (anon_c4f639d01efbe85961be48d14333fbdc_18_llvm_17218896934804705305,&local_81,
             &anon_c4f639d01efbe85961be48d14333fbdc_38_llvm_17218896934804705305);
  goto LAB_006e77f2;
LAB_006e77cd:
  (*(code *)PTR_unwrap_failed_00799028)
            (anon_c4f639d01efbe85961be48d14333fbdc_18_llvm_17218896934804705305,&local_81,
             &anon_c4f639d01efbe85961be48d14333fbdc_37_llvm_17218896934804705305);
LAB_006e77f2:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


