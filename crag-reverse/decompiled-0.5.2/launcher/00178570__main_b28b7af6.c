// 00178570 main

/* craggemini[b21da2d71f2da7a3]::main */

void __rustcall craggemini[b21da2d71f2da7a3]::main(void)

{
  code *pcVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  code *local_10;
  
  local_28 = entry();
  local_18 = local_28;
  if (local_28._0_8_ != 0) {
    local_10 = <alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error>as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    (*(code *)PTR__eprint_00219f38)();
    (*(code *)PTR_exit_00219f40)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}


