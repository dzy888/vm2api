// 000b00d0 fmt

/* <[u8] as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<[u8]as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  (*(code *)PTR_debug_list_000c3df8)();
  puVar1 = PTR_entry_000c3e00;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)puVar1)(param_4,&DAT_000c2498);
  }
  (*(code *)PTR_finish_000c3e08)();
  return;
}


