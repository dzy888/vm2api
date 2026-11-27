// 000b7880 unwrap_failed

/* core[c0acaeba6ab4c2e0]::option::unwrap_failed */

void __rustcall
core[c0acaeba6ab4c2e0]::option::unwrap_failed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_000c3b00)(param_4,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


