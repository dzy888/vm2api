// 006e1820 clone

/* tokio[d7d91d38da47d894]::runtime::park::clone */

undefined1  [16] __rustcall tokio[d7d91d38da47d894]::runtime::park::clone(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x10);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = &anon_c4f639d01efbe85961be48d14333fbdc_39_llvm_17218896934804705305;
  return auVar4;
}


