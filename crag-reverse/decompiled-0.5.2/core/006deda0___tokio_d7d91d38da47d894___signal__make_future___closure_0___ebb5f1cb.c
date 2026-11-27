// 006deda0 <tokio[d7d91d38da47d894]::signal::make_future::{closure#0}>

/* <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>>::set::<tokio[d7d91d38da47d894]::signal::make_future::{closure#0}>
    */

void __rustcall
<tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>>
::set::<tokio[d7d91d38da47d894]::signal::make_future::_closure_0_>(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = puVar1[1];
  uVar5 = puVar1[2] ^ 8 | uVar2 ^ 0xa0;
  if (uVar5 == 0) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    (*(code *)PTR_memcpy_00799008)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(uVar5,0xa0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar4 == 0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    (*(code *)PTR_memcpy_00799008)();
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (uVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *param_1 = lVar4;
  }
  param_1[1] = (longlong)&anon_c4f639d01efbe85961be48d14333fbdc_0_llvm_17218896934804705305;
  return;
}


