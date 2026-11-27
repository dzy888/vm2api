// 000635a0 clone

/* <alloc[12e961f32105355]::vec::Vec<u8> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

char * __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar4 = lVar1 == 0;
  if (-1 < lVar1) goto LAB_000635c0;
  uVar4 = true;
  pcVar2 = (char *)0x0;
  while( true ) {
    param_1 = pcVar2;
    (*(code *)PTR_handle_error_000c3a98)();
LAB_000635c0:
    if ((bool)uVar4) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
    uVar4 = lVar3 == 0;
    pcVar2 = Elf64_Ehdr_00000000.e_ident_magic_str;
    if (!(bool)uVar4) {
      *(longlong *)param_1 = lVar1;
      *(longlong *)(param_1 + 8) = lVar3;
      (*(code *)PTR_memcpy_000c3aa8)(param_4,lVar1);
      *(longlong *)(param_1 + 0x10) = lVar1;
      return param_1;
    }
  }
  *(longlong *)param_1 = 0;
  *(longlong *)(param_1 + 8) = 1;
  *(longlong *)(param_1 + 0x10) = 0;
  return param_1;
}


