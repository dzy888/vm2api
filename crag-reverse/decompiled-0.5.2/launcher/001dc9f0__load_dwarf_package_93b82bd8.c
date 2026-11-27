// 001dc9f0 load_dwarf_package

/* WARNING: Switch with 1 destination removed at 0x001dcc93 */
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
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar3 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      if (local_90 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00219c60)();
    local_56 = *param_2 == '/';
    local_40 = lVar3;
    local_38 = param_3;
  }
  local_80 = (char *)CONCAT71(local_80._1_7_,0xff);
  local_58 = 0x201;
  local_90 = param_2;
  local_88 = param_3;
  local_48 = local_38;
  (*(code *)PTR_next_back_0021a718)();
  if (((local_c8 == -1) || (local_c8 != '\t')) || ((local_b8 == 2 && (*local_c0 == 0x2e2e)))) {
LAB_001dcb8d:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    pcVar6 = (char *)0x3;
    puVar4 = (undefined2 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar4 == (undefined2 *)0x0) {
LAB_001dccca:
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_001dccd8;
    }
    *(undefined1 *)(puVar4 + 1) = 0x70;
    *puVar4 = 0x7764;
  }
  else {
    lVar3 = local_b8;
    do {
      if (lVar3 == 0) goto LAB_001dcb8d;
      lVar5 = lVar3 + -1;
      lVar1 = lVar3 + -1;
      lVar3 = lVar5;
    } while (*(char *)((longlong)local_c0 + lVar1) != '.');
    if (lVar5 == 0) goto LAB_001dcb8d;
    lVar3 = 1;
    pcVar6 = (char *)((local_b8 + -1) - lVar5);
    if (pcVar6 != (char *)0x0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar3 = (*(code *)PTR___rust_alloc_00219c88)();
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_00219c60)();
        goto LAB_001dcb42;
      }
      goto LAB_001dccca;
    }
LAB_001dcb42:
    local_90 = pcVar6;
    local_88 = lVar3;
    local_80 = pcVar6;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_90,pcVar6,4,1,1);
    builtin_strncpy(local_80 + local_88,".dwp",4);
    pcVar6 = local_90;
  }
  (*(code *)PTR__set_extension_0021a908)();
  if (pcVar6 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
  std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap(&local_90,local_40,local_38);
  pcVar6 = local_80;
  lVar3 = local_88;
  if ((int)local_90 == 1) {
    lVar5 = *(longlong *)(local_50 + 0x28);
    if (lVar5 == *(longlong *)(local_50 + 0x18)) {
      (*(code *)PTR_grow_one_0021a740)();
    }
    lVar1 = *(longlong *)(local_50 + 0x20);
    *(longlong *)(lVar1 + lVar5 * 0x10) = lVar3;
    *(char **)(lVar1 + 8 + lVar5 * 0x10) = pcVar6;
    lVar5 = lVar5 + 1;
    *(longlong *)(local_50 + 0x28) = lVar5;
    if (lVar5 == 0) {
      (*(code *)PTR_unwrap_failed_00219e58)();
LAB_001dccd8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
              (param_1,*(undefined8 *)(*(longlong *)(local_50 + 0x20) + -0x10 + lVar5 * 0x10),
               *(undefined8 *)(*(longlong *)(local_50 + 0x20) + -8 + lVar5 * 0x10));
    if (*param_1 != -1) goto joined_r0x001dcca7;
  }
  *param_1 = -1;
joined_r0x001dcca7:
  if (local_48 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)();
  return;
}


