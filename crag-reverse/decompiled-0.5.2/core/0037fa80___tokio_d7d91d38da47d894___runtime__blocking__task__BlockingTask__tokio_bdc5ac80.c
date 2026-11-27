// 0037fa80 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  int iStack_178;
  
  cVar2 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar2 != '\0') {
    (*(code *)PTR_memcpy_00799008)(param_4,0xb8);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iStack_178 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (param_4,&anon_0acbc551f34e4a0bfb9a607189131925_30_llvm_9953415283177307294);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
    if (*param_2 != -2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
                (param_2,param_1 + 0x40);
    }
    (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
  }
  return;
}


