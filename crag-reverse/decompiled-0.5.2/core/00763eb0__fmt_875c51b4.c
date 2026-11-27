// 00763eb0 fmt

/* <&alloc[12e961f32105355]::vec::Vec<u8> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x10);
  (*(code *)PTR_debug_list_00799850)();
  puVar1 = PTR_entry_00799858;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    (*(code *)puVar1)(param_4,&DAT_007960c8);
  }
  (*(code *)PTR_finish_00799860)();
  return;
}


