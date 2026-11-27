// 00208761 assert_failed

/* <alloc[12e961f32105355]::vec::Vec<_, _>>::remove::assert_failed */

void __rustcall <alloc[12e961f32105355]::vec::Vec<_,_>>::remove::assert_failed(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_0021a010)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


