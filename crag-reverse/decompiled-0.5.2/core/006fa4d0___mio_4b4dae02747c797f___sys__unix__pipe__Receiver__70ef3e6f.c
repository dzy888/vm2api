// 006fa4d0 <mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>

/* tokio[d7d91d38da47d894]::process::imp::set_nonblocking::<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>
    */

ulonglong __rustcall
tokio[d7d91d38da47d894]::process::imp::set_nonblocking::
<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_fcntl_00799e68)();
  if ((iVar1 != -1) && (iVar1 = (*(code *)PTR_fcntl_00799e68)(), iVar1 != -1)) {
    return 0;
  }
  piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
      &anon_4a510ad2c2ece6409108a5920cec5cc2_2_llvm_1700297362806677381) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


