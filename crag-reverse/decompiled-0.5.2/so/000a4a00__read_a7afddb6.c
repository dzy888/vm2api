// 000a4a00 read

/* <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream as
   std[6c98fd8553dbae28]::io::Read>::read */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Read>::read
          (void)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0;
  uVar2 = (*(code *)PTR_recv_000c42c8)(0);
  if (uVar2 == 0xffffffffffffffff) {
    piVar3 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar2 = (longlong)iVar1 << 0x20 | 2;
    uVar4 = 1;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


