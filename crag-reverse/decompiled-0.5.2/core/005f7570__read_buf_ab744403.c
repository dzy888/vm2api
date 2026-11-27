// 005f7570 read_buf

/* WARNING: Removing unreachable block (ram,0x005f7613) */
/* <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>
   as std[6c98fd8553dbae28]::io::Read>::read_buf */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>as_std[6c98fd8553dbae28]::io::Read>
::read_buf(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(ulonglong *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(ulonglong *)(param_1 + 8) < (ulonglong)(*(longlong *)(param_2 + 8) - lVar1)) {
      if (*(char *)(param_2 + 0x18) == '\0') {
        uVar2 = (*(code *)PTR_read_buf_0079a090)();
      }
      else {
        uVar2 = (*(code *)PTR_read_buf_0079a090)();
      }
      *(longlong *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar2 = (*(code *)PTR_read_buf_0079a090)();
      *(longlong *)(param_1 + 8) =
           *(longlong *)(param_1 + 8) + (lVar1 - *(longlong *)(param_2 + 0x10));
    }
  }
  return uVar2;
}


