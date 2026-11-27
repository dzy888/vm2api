// 006dff50 waker

/* <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::waker */

undefined1  [16] __rustcall <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::waker(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *in_FS_OFFSET;
  undefined1 auVar6 [16];
  
  puVar4 = (undefined8 *)(*in_FS_OFFSET + -0x58);
  if (*(char *)(*in_FS_OFFSET + -0x50) != '\x01') {
    plVar5 = (longlong *)0x0;
    puVar4 = (undefined8 *)
             <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
             ::get_or_init_slow::
             <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                       (puVar4,0);
    if (puVar4 == (undefined8 *)0x0) goto LAB_006dff79;
  }
  plVar5 = (longlong *)*puVar4;
  LOCK();
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_006dff79:
  ppuVar3 = &anon_c4f639d01efbe85961be48d14333fbdc_39_llvm_17218896934804705305;
  if (plVar5 == (longlong *)0x0) {
    ppuVar3 = (undefined **)0x0;
  }
  auVar6._8_8_ = plVar5 + 2;
  auVar6._0_8_ = ppuVar3;
  return auVar6;
}


