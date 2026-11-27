// 0008f570 load_dwarf_package

/* WARNING: Switch with 1 destination removed at 0x0008f813 */
/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::load_dwarf_package */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::load_dwarf_package
          (longlong *param_1,char *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  char *pcVar6;
  char local_c8;
  short *local_c0;
  longlong local_b8;
  char *local_90;
  longlong local_88;
  char *local_80;
  undefined2 local_58;
  undefined1 local_56;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  local_50 = param_4;
  if (param_3 == 0) {
    local_40 = 1;
    local_38 = 0;
    local_56 = false;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
      if (local_90 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)();
      }
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_000c3aa8)();
    local_56 = *param_2 == '/';
    local_40 = lVar3;
    local_38 = param_3;
  }
  local_80 = (char *)CONCAT71(local_80._1_7_,0xff);
  local_58 = 0x201;
  local_90 = param_2;
  local_88 = param_3;
  local_48 = local_38;
  (*(code *)PTR_next_back_000c40d0)();
  if (((local_c8 == -1) || (local_c8 != '\t')) || ((local_b8 == 2 && (*local_c0 == 0x2e2e)))) {
LAB_0008f70d:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pcVar6 = Elf64_Ehdr_00000000.e_ident_magic_str + 2;
    puVar4 = (undefined2 *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (puVar4 == (undefined2 *)0x0) {
LAB_0008f84a:
      (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_0008f858;
    }
    *(undefined1 *)(puVar4 + 1) = 0x70;
    *puVar4 = 0x7764;
  }
  else {
    lVar3 = local_b8;
    do {
      if (lVar3 == 0) goto LAB_0008f70d;
      lVar5 = lVar3 + -1;
      lVar1 = lVar3 + -1;
      lVar3 = lVar5;
    } while (*(char *)((longlong)local_c0 + lVar1) != '.');
    if (lVar5 == 0) goto LAB_0008f70d;
    lVar3 = 1;
    pcVar6 = (char *)((local_b8 + -1) - lVar5);
    if (pcVar6 != (char *)0x0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_000c3aa8)();
        goto LAB_0008f6c2;
      }
      goto LAB_0008f84a;
    }
LAB_0008f6c2:
    local_90 = pcVar6;
    local_88 = lVar3;
    local_80 = pcVar6;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_90,pcVar6,4,1,1);
    *(undefined4 *)(local_80 + local_88) = 0x7077642e;
    pcVar6 = local_90;
  }
  (*(code *)PTR__set_extension_000c42e0)();
  if (pcVar6 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)();
  }
  std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap(&local_90,local_40,local_38);
  pcVar6 = local_80;
  lVar3 = local_88;
  if ((int)local_90 == 1) {
    lVar5 = *(longlong *)(local_50 + 0x28);
    if (lVar5 == *(longlong *)(local_50 + 0x18)) {
      (*(code *)PTR_grow_one_000c40f0)();
    }
    lVar1 = *(longlong *)(local_50 + 0x20);
    *(longlong *)(lVar1 + lVar5 * 0x10) = lVar3;
    *(char **)(lVar1 + 8 + lVar5 * 0x10) = pcVar6;
    lVar5 = lVar5 + 1;
    *(longlong *)(local_50 + 0x28) = lVar5;
    if (lVar5 == 0) {
      (*(code *)PTR_unwrap_failed_000c3b08)();
LAB_0008f858:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
              (param_1,*(undefined8 *)(*(longlong *)(local_50 + 0x20) + -0x10 + lVar5 * 0x10),
               *(undefined8 *)(*(longlong *)(local_50 + 0x20) + -8 + lVar5 * 0x10));
    if (*param_1 != -1) goto joined_r0x0008f827;
  }
  *param_1 = -1;
joined_r0x0008f827:
  if (local_48 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)();
  return;
}


