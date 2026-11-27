// 001937c0 write_str

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_all(*param_1);
  if (lVar2 != 0) {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00219c58)();
      }
    }
    param_1[1] = lVar2;
  }
  return lVar2 != 0;
}


