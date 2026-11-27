// 00763560 write_str

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StdoutLock>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StdoutLock>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (*(code *)PTR_write_all_00799e80)();
  if (lVar2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    *(longlong *)(param_1 + 8) = lVar2;
  }
  return lVar2 != 0;
}


