// 0020c7c0 panic_nounwind_fmt

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_fmt */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_fmt
          (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined1 local_f;
  
  local_20 = &local_30;
  local_10 = 0;
  local_30 = param_1;
  local_28 = param_2;
  local_18 = param_4;
  local_f = param_3;
  (*(code *)PTR_rust_begin_unwind_00219c10)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


