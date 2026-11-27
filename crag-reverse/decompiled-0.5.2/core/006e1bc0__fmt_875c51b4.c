// 006e1bc0 fmt

/* <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>
   as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
::fmt(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  (*(code *)PTR_debug_list_00799850)();
  puVar1 = PTR_entry_00799858;
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x410;
    do {
      (*(code *)puVar1)(param_4,anon_a54838b0e2c6049171e94f4eeb8260c4_6_llvm_5899425866962164388);
      lVar2 = lVar2 + -0x410;
    } while (lVar2 != 0);
  }
  (*(code *)PTR_finish_00799860)();
  return;
}


