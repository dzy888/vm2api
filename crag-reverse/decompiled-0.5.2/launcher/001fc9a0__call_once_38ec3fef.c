// 001fc9a0 call_once

/* <<core[c0acaeba6ab4c2e0]::io::error::Error>::from_raw_os_error::FUNCTIONS::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(i32, &mut
   core[c0acaeba6ab4c2e0]::fmt::Formatter)>>::call_once */

ulonglong __rustcall
<<core[c0acaeba6ab4c2e0]::io::error::Error>::from_raw_os_error::FUNCTIONS::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(i32,&mut_core[c0acaeba6ab4c2e0]::fmt::Formatter)>>
::call_once(void)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da_01;
  longlong local_38;
  undefined8 local_28;
  
  iVar1 = (*(code *)PTR___xpg_strerror_r_0021a690)
                    (0,0x80,in_R8,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (iVar1 < 0) {
    uVar4 = (*(code *)PTR_panic_fmt_0021a010)
                      (extraout_XMM0_Da,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217fd8);
    if (local_38 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar4,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  uVar2 = (*(code *)PTR_strlen_0021a890)();
  (*(code *)PTR_from_utf8_lossy_00219e60)(extraout_XMM0_Da_00,uVar2);
  uVar4 = (*(code *)PTR_from_0021ab48)();
  uVar3 = (*(code *)PTR_write_str_00219e10)(uVar4,local_28);
  if (local_38 != 0) {
    uVar3 = uVar3 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da_01,1);
  }
  return uVar3;
}


