// 00770a50 fmt

/* <[u8] as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<[u8]as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  (*(code *)PTR_debug_list_00799850)();
  puVar1 = PTR_entry_00799858;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)puVar1)(param_4,&DAT_00797748);
  }
  (*(code *)PTR_finish_00799860)();
  return;
}


