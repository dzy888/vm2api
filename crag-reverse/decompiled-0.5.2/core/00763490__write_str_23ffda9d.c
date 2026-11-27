// 00763490 write_str

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StderrLock>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StderrLock>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong unaff_RBX;
  
  lVar1 = *(longlong *)*param_1;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    *(longlong *)(unaff_RBX + 8) = lVar1;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  lVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_all();
  if ((lVar3 == 0) ||
     (((uVar5 = (uint)lVar3 & 3, 1 < uVar5 && (uVar5 == 2)) &&
      ((int)((ulonglong)lVar3 >> 0x20) == 9)))) {
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
    uVar4 = 0;
  }
  else {
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    param_1[1] = lVar3;
    uVar4 = 1;
  }
  return uVar4;
}


