// 000a4dd0 fmt

/* <&alloc[12e961f32105355]::vec::Vec<u8> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x10);
  (*(code *)PTR_debug_list_000c3df8)();
  puVar1 = PTR_entry_000c3e00;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    (*(code *)puVar1)(param_4,&DAT_000c1338);
  }
  (*(code *)PTR_finish_000c3e08)();
  return;
}


