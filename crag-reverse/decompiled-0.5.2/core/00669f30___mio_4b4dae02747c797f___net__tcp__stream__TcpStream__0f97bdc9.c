// 00669f30 <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = (*(code *)PTR_deregister_0079a340)();
  if (lVar6 == 0) {
    piVar1 = (int *)(param_1 + 8);
    LOCK();
    bVar7 = *(int *)(param_1 + 8) == 0;
    if (bVar7) {
      *(int *)(param_1 + 8) = 1;
    }
    UNLOCK();
    if (!bVar7) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar5 = bVar5 ^ 1;
    }
    cVar4 = (*(code *)PTR_deregister_0079a330)();
    if (cVar4 == '\0') {
      if (((bVar5 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
    }
    else {
      if (((bVar5 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      (*(code *)PTR_unpark_0079a338)();
    }
  }
  return lVar6;
}


