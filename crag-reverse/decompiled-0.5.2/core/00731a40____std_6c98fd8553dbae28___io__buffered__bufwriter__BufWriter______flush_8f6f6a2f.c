// 00731a40 <<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>

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
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_12_llvm_14698491423915303612_00796e90);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_memmove_00799258)(param_4,uVar2);
    if (uVar2 <= *(ulonglong *)(param_1 + 0x10)) {
      *(ulonglong *)(param_1 + 0x10) = uVar2;
    }
  }
  return;
}


