// 000827a0 <<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x10) - param_2;
    if (*(ulonglong *)(param_1 + 0x10) < param_2) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_a5ba4df77f1b4a3fe3c10524a13d0962_7_llvm_10773032595843144328_000c1dc0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_memmove_000c3c50)(param_4,uVar2);
    if (uVar2 <= *(ulonglong *)(param_1 + 0x10)) {
      *(ulonglong *)(param_1 + 0x10) = uVar2;
    }
  }
  return;
}


