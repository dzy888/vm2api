// 006dfee0 park

/* <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::park */

void __rustcall <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::park(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *in_FS_OFFSET;
  undefined1 local_1;
  
  plVar2 = (longlong *)(*in_FS_OFFSET + -0x58);
  if (*(char *)(*in_FS_OFFSET + -0x50) != '\x01') {
    plVar2 = (longlong *)
             <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
             ::get_or_init_slow::
             <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
                       (plVar2,0);
    if (plVar2 == (longlong *)0x0) {
      (*(code *)PTR_unwrap_failed_00799028)
                (anon_c4f639d01efbe85961be48d14333fbdc_18_llvm_17218896934804705305,&local_1,
                 &anon_c4f639d01efbe85961be48d14333fbdc_38_llvm_17218896934804705305);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  <tokio[d7d91d38da47d894]::runtime::park::Inner>::park(*plVar2 + 0x10);
  return;
}


