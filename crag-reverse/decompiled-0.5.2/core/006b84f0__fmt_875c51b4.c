// 006b84f0 fmt

/* <&alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName> as
   core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
::fmt(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x10);
  (*(code *)PTR_debug_list_00799850)();
  puVar1 = PTR_entry_00799858;
  if (lVar2 != 0) {
    lVar2 = lVar2 << 5;
    do {
      (*(code *)puVar1)(param_4,anon_ef4b14893529305f96204f3f48f3faf4_0_llvm_5442923914717514648);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  (*(code *)PTR_finish_00799860)();
  return;
}


