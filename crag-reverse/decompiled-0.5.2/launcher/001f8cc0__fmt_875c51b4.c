// 001f8cc0 fmt

/* <&alloc[12e961f32105355]::vec::Vec<u8> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x10);
  (*(code *)PTR_debug_list_0021a158)();
  puVar1 = PTR_entry_0021a160;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    (*(code *)puVar1)(param_4,&DAT_002172b0);
  }
  (*(code *)PTR_finish_0021a168)();
  return;
}


