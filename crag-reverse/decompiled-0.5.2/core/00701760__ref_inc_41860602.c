// 00701760 ref_inc

/* <tokio[d7d91d38da47d894]::runtime::task::raw::RawTask>::ref_inc */

void __rustcall <tokio[d7d91d38da47d894]::runtime::task::raw::RawTask>::ref_inc(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  LOCK();
  lVar1 = *param_1;
  *param_1 = *param_1 + 0x40;
  UNLOCK();
  if (lVar1 < 0) {
    (*(code *)PTR_abort_00799748)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


