// 006def30 <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>

/* <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::<&mut
   tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>> */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
<&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  char cVar8;
  undefined1 unaff_R15B;
  longlong *in_FS_OFFSET;
  undefined1 local_69;
  undefined **local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined ***local_50;
  undefined ***local_48;
  undefined8 local_40;
  
  lVar3 = *in_FS_OFFSET;
  plVar1 = (longlong *)(lVar3 + -0x58);
  plVar6 = plVar1;
  if (*(char *)(lVar3 + -0x50) != '\x01') {
    plVar6 = (longlong *)
             <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
             ::get_or_init_slow::
             <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                       (plVar1,0);
    if (plVar6 == (longlong *)0x0) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
LAB_006df082:
      return uVar7 & 0xffffffff;
    }
  }
  plVar6 = (longlong *)*plVar6;
  LOCK();
  lVar2 = *plVar6;
  *plVar6 = *plVar6 + 1;
  UNLOCK();
  if (*plVar6 != 0 && SCARRY8(lVar2,1) == *plVar6 < 0) {
    local_60 = plVar6 + 2;
    local_68 = &anon_c4f639d01efbe85961be48d14333fbdc_39_llvm_17218896934804705305;
    local_50 = &local_68;
    local_40 = 0;
    lVar2 = *in_FS_OFFSET;
    local_48 = local_50;
    do {
      cVar8 = *(char *)(lVar2 + -0xf0);
      if (cVar8 == '\0') {
LAB_006defca:
        cVar8 = *(char *)(lVar2 + -0xf4);
        unaff_R15B = *(undefined1 *)(lVar2 + -0xf3);
        *(undefined2 *)(lVar2 + -0xf4) = 0x8001;
      }
      else if (cVar8 == '\x01') {
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar2 + -0xf0) = 0;
        goto LAB_006defca;
      }
      uVar5 = <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(local_58,&local_50);
      uVar7 = (ulonglong)uVar5;
      if (cVar8 != '\x02') {
        if (*(char *)(lVar2 + -0xf0) != '\0') {
          if (*(char *)(lVar2 + -0xf0) == '\x02') goto LAB_006df00b;
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar2 + -0xf0) = 0;
        }
        *(char *)(lVar2 + -0xf4) = cVar8;
        *(undefined1 *)(lVar2 + -0xf3) = unaff_R15B;
      }
LAB_006df00b:
      if ((char)uVar5 != '\x02') {
        (*(code *)local_68[3])();
        goto LAB_006df082;
      }
      plVar6 = plVar1;
      if (*(char *)(lVar3 + -0x50) != '\x01') {
        plVar6 = (longlong *)
                 <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
                 ::get_or_init_slow::
                 <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                           (plVar1,0);
        if (plVar6 == (longlong *)0x0) goto LAB_006df0ab;
      }
      <tokio[d7d91d38da47d894]::runtime::park::Inner>::park(*plVar6 + 0x10);
    } while( true );
  }
LAB_006df0d0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_006df0ab:
  (*(code *)PTR_unwrap_failed_00799028)
            (anon_c4f639d01efbe85961be48d14333fbdc_18_llvm_17218896934804705305,&local_69,
             &anon_c4f639d01efbe85961be48d14333fbdc_38_llvm_17218896934804705305);
  goto LAB_006df0d0;
}


