// 001e9d60 write_all_cold

/* <std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>::write_all_cold
    */

longlong __rustcall
<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
::write_all_cold(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (uVar2 - param_1[2] < param_3) {
    lVar1 = flush_buf(param_1);
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = *param_1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_1[2];
    (*(code *)PTR_memcpy_00219c60)();
    param_1[2] = uVar2 + param_3;
    lVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 1;
    lVar1 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stdout_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(param_2,param_3);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      uVar3 = (uint)lVar1 & 3;
      if (((1 < uVar3) && (uVar3 == 2)) && ((int)((ulonglong)lVar1 >> 0x20) == 9)) {
        lVar1 = 0;
      }
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return lVar1;
}


