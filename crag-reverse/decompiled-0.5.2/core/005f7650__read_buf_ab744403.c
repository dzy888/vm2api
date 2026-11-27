// 005f7650 read_buf

/* WARNING: Removing unreachable block (ram,0x005f76f3) */
/* <core[c0acaeba6ab4c2e0]::io::util::Take<&mut std[6c98fd8553dbae28]::fs::File> as
   std[6c98fd8553dbae28]::io::Read>::read_buf */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>as_std[6c98fd8553dbae28]::io::Read>
::read_buf(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x10);
    if (uVar1 < (ulonglong)(*(longlong *)(param_2 + 8) - lVar2)) {
      if (*(char *)(param_2 + 0x18) == '\0') {
        uVar3 = (*(code *)PTR_read_buf_007999a0)();
      }
      else {
        uVar3 = (*(code *)PTR_read_buf_007999a0)();
      }
      *(longlong *)(param_2 + 0x10) = lVar2;
      *(ulonglong *)(param_1 + 0x10) = uVar1;
    }
    else {
      uVar3 = (*(code *)PTR_read_buf_007999a0)();
      *(ulonglong *)(param_1 + 0x10) = (lVar2 + uVar1) - *(longlong *)(param_2 + 0x10);
    }
  }
  return uVar3;
}


