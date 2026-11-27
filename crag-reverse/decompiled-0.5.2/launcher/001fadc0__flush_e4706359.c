// 001fadc0 flush

/* <std[6c98fd8553dbae28]::io::stdio::StdoutLock as std[6c98fd8553dbae28]::io::Write>::flush */

void __rustcall
<std[6c98fd8553dbae28]::io::stdio::StdoutLock_as_std[6c98fd8553dbae28]::io::Write>::flush
          (longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    (*(code *)PTR_panic_already_borrowed_0021a620)();
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  <std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
  ::flush_buf(lVar1 + 0x18);
  *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
  return;
}


