// 000664f0 install

/* WARNING: Removing unreachable block (ram,0x00078126) */
/* WARNING: Switch with 1 destination removed at 0x00066af9 */
/* WARNING: Switch with 1 destination removed at 0x00078171 */
/* WARNING: Type propagation algorithm not settling */
/* agy_bridge[64a9e9deac6c45ce]::hooks::install */

ulonglong __rustcall agy_bridge[64a9e9deac6c45ce]::hooks::install(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [24];
  
  puVar6 = PTR_bcmp_000c3b80;
  lVar17 = 0;
  while( true ) {
    lVar18 = lVar17;
    puVar7 = PTR_mmap_000c3d90;
    puVar16 = PTR_munmap_000c3ac0;
    if (lVar18 == 0x400) break;
    uVar2 = *(undefined8 *)((longlong)&DAT_000c0590 + lVar18);
    lVar3 = *(longlong *)((longlong)&DAT_000c05a8 + lVar18);
    iVar8 = (*(code *)puVar6)();
    if ((iVar8 != 0) || (lVar17 = lVar18 + 0x20, 0x1000 < lVar3 + (ulonglong)((uint)uVar2 & 0xfff)))
    {
      local_88 = CONCAT71(local_88._1_7_,(&DAT_000c0598)[lVar18]);
      local_b0 = &local_88;
      local_a8 = (longlong *)PTR_fmt_000c3f28;
      (*(code *)PTR_format_inner_000c3b78)();
      uVar9 = <core[c0acaeba6ab4c2e0]::io::error::Error>::new::
              <alloc[12e961f32105355]::string::String>(local_48,&DAT_0000a497);
      return uVar9;
    }
  }
  lVar17 = param_1 + 0x20000000;
  lVar18 = -0x1ffffffb;
  while (local_58 = (*(code *)puVar7)(0x100022,3,0xffffffff,0), local_58 != lVar17) {
    if (local_58 != -1) {
      (*(code *)puVar16)();
    }
    lVar18 = lVar18 + -0x1000000;
    lVar17 = lVar17 + 0x1000000;
    if (lVar18 == -0x6ffffffb) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar17 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar17 == 0) {
        (*(code *)PTR_handle_error_000c3a98)();
        (*(code *)PTR___rust_dealloc_000c3aa0)();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      (*(code *)PTR_memcpy_000c3aa8)();
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *puVar14 = 0x23;
      puVar14[1] = lVar17;
      puVar14[2] = 0x23;
      lVar17 = (*(code *)PTR_custom_owner_from_box_000c3ee0)();
      return lVar17 + 1;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  plVar10 = (longlong *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (plVar10 == (longlong *)0x0) {
    (*(code *)PTR_handle_error_000c3a98)();
LAB_00066e1b:
    local_70 = puVar16;
LAB_00066b01:
    (*(code *)PTR_handle_error_000c3a98)();
LAB_00066e3b:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar18 = -lVar18;
  local_88 = 0x20;
  local_78 = 0;
  local_90 = (longlong *)0x0;
  local_80 = plVar10;
  do {
    puVar6 = PTR___rust_alloc_000c3a90;
    cVar1 = (&DAT_000c0598)[(longlong)local_90];
    local_50 = *(longlong *)((longlong)&DAT_000c0590 + (longlong)local_90);
    puVar4 = *(undefined2 **)((longlong)&PTR_DAT_000c05a0 + (longlong)local_90);
    puVar16 = *(undefined1 **)((longlong)&DAT_000c05a8 + (longlong)local_90);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    puVar11 = (undefined1 *)(*(code *)puVar6)();
    if (puVar11 == (undefined1 *)0x0) {
      (*(code *)PTR_handle_alloc_error_000c3d10)();
      goto LAB_00066e3b;
    }
    *puVar11 = 0x6a;
    puVar11[1] = cVar1;
    *(undefined8 *)(puVar11 + 2) = 0x8eb0000000215ff;
    local_b0 = (longlong *)0xa;
    local_a0 = (undefined1 *)0xa;
    local_a8 = (longlong *)puVar11;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_b0,10,8,1,1);
    *(undefined **)((longlong)local_a8 + (longlong)local_a0) = PTR_agy_bridge_trampoline_000c47c0;
    local_a0 = (undefined1 *)((longlong)local_a0 + 8);
    if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 5) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,5,1,1);
    }
    *(undefined1 *)((longlong)local_a8 + (longlong)local_a0 + 4) = 8;
    *(undefined4 *)((longlong)local_a8 + (longlong)local_a0) = 0x24648d48;
    local_a0 = (undefined1 *)((longlong)local_a0 + 5);
    if (cVar1 == '\x05') {
      if (puVar16 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) {
        (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter_hooks_rs_000c0990,puVar16);
        goto LAB_00066e3b;
      }
      if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 3) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,3,1,1);
      }
      ((undefined1 *)((longlong)local_a8 + 2))[(longlong)local_a0] = *(undefined1 *)(puVar4 + 1);
      *(undefined2 *)((longlong)local_a8 + (longlong)local_a0) = *puVar4;
      local_a0 = local_a0 + 3;
      if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,2,1,1);
      }
      *(undefined2 *)((longlong)local_a8 + (longlong)local_a0) = 0xb848;
      local_a0 = local_a0 + 2;
      if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,8,1,1);
      }
      *(longlong *)((longlong)local_a8 + (longlong)local_a0) = param_1 + 0xb308020;
      local_a0 = local_a0 + 8;
    }
    else {
      if ((undefined1 *)((longlong)local_b0 - (longlong)local_a0) < puVar16) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,puVar16,1,1);
LAB_000667ed:
        puVar11 = local_a0;
        (*(code *)PTR_memcpy_000c3aa8)();
      }
      else {
        puVar11 = local_a0;
        if (puVar16 != (undefined1 *)0x0) goto LAB_000667ed;
      }
      local_a0 = puVar11 + (longlong)puVar16;
    }
    if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 6) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,6,1,1);
    }
    *(undefined2 *)((undefined1 *)((longlong)local_a8 + 4) + (longlong)local_a0) = 0;
    *(undefined4 *)((longlong)local_a8 + (longlong)local_a0) = 0x25ff;
    local_a0 = local_a0 + 6;
    if ((ulonglong)((longlong)local_b0 - (longlong)local_a0) < 8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_a0,8,1,1);
    }
    lVar17 = local_50;
    local_60 = param_1 + local_50;
    *(undefined1 **)((longlong)local_a8 + (longlong)local_a0) = puVar16 + local_60;
    local_68 = (undefined1 *)local_a8;
    (*(code *)PTR_memcpy_000c3aa8)();
    if ((lVar18 - lVar17 < -0x80000000) || (0x7fffffff < lVar18 - lVar17)) {
      uVar9 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>_000c3f30)();
      pcVar5 = (code *)PTR___rust_dealloc_000c3aa0;
      lVar17 = local_78;
      if (local_b0 != (longlong *)0x0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)();
        lVar17 = local_78;
      }
      goto joined_r0x00066b51;
    }
    lVar17 = (longlong)local_90 + 0x20;
    iVar8 = (int)local_60;
    if ((longlong)puVar16 < 0) goto LAB_00066b01;
    local_90 = (longlong *)lVar17;
    if (puVar16 == (undefined1 *)0x0) {
      (*(code *)PTR_panic_bounds_check_000c3dd8)(lVar17,&PTR_s_adapter_hooks_rs_000c09a8);
      goto LAB_00066e3b;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    puVar11 = (undefined1 *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (puVar11 == (undefined1 *)0x0) goto LAB_00066e1b;
    (*(code *)PTR_memset_000c3cd8)();
    lVar3 = local_60;
    lVar17 = local_78;
    *puVar11 = 0xe9;
    if (puVar16 < &Elf64_Ehdr_00000000.e_ident_data) {
      (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter_hooks_rs_000c09c0,puVar16);
      goto LAB_00066e3b;
    }
    *(int *)(puVar11 + 1) = ((int)param_1 - iVar8) + (int)lVar18;
    local_70 = puVar11;
    if (local_78 == local_88) {
      <alloc[12e961f32105355]::raw_vec::RawVec<(usize,alloc[12e961f32105355]::vec::Vec<u8>)>>::
      grow_one(&local_88,0x90);
    }
    local_80[lVar17 * 4] = lVar3;
    local_80[lVar17 * 4 + 1] = (longlong)puVar16;
    local_80[lVar17 * 4 + 2] = (longlong)local_70;
    local_80[lVar17 * 4 + 3] = (longlong)puVar16;
    local_78 = lVar17 + 1;
    if (local_b0 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(lVar17 * 0x20,1);
    }
    lVar18 = lVar18 + 0x40;
  } while (local_90 != (longlong *)0x400);
  lVar17 = 0x1000;
  iVar8 = (*(code *)PTR_mprotect_000c3f38)(PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88,5);
  if (iVar8 != 0) {
    piVar12 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    pcVar5 = (code *)PTR___rust_dealloc_000c3aa0;
    iVar8 = *piVar12;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
        &anon_a096e19ef5e60642f162739f9e865059_6_llvm_12347187141279222813) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar9 = (longlong)iVar8 << 0x20 | 2;
    lVar17 = local_78;
joined_r0x00066b51:
    local_78 = lVar17;
    if (lVar17 != 0) {
      plVar10 = local_80 + 2;
      do {
        if (plVar10[-1] != 0) {
          (*pcVar5)();
        }
        plVar10 = plVar10 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (local_88 == 0) {
      return uVar9;
    }
    (*(code *)PTR___rust_dealloc_000c3aa0)();
    return uVar9;
  }
  *(longlong *)PTR_AGY_ASMCGOCALL_000c3a48 = param_1 + 0x70870e0;
  puVar6 = PTR_mprotect_000c3f38;
  local_98 = local_80 + local_78 * 4;
  local_b0 = local_80;
  local_a8 = local_80;
  local_a0 = (undefined1 *)local_88;
  plVar10 = local_80;
  local_90 = local_98;
  if (local_78 != 0) {
    do {
      plVar15 = plVar10 + 4;
      lVar18 = plVar10[1];
      if (lVar18 == -1) goto LAB_00066d97;
      iVar8 = (*(code *)puVar6)(lVar18,3);
      if (iVar8 != 0) {
        local_a8 = plVar15;
        puVar13 = (uint *)(*(code *)PTR___errno_location_000c3cf0)();
        uVar9 = (ulonglong)*puVar13;
        if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
            &anon_a096e19ef5e60642f162739f9e865059_6_llvm_12347187141279222813) {
          (*(code *)PTR_set_functions_inner_000c3d08)();
        }
LAB_00066d65:
        lVar17 = 0x1000;
        if (lVar18 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)();
          lVar17 = lVar18;
        }
        <alloc[12e961f32105355]::vec::into_iter::IntoIter<(usize,alloc[12e961f32105355]::vec::Vec<u8>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_b0,lVar17);
        return uVar9 << 0x20 | 2;
      }
      (*(code *)PTR_memcpy_000c3aa8)();
      iVar8 = (*(code *)puVar6)();
      if (iVar8 != 0) {
        local_a8 = plVar15;
        puVar13 = (uint *)(*(code *)PTR___errno_location_000c3cf0)();
        uVar9 = (ulonglong)*puVar13;
        if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
            &anon_a096e19ef5e60642f162739f9e865059_6_llvm_12347187141279222813) {
          (*(code *)PTR_set_functions_inner_000c3d08)();
        }
        goto LAB_00066d65;
      }
      if (lVar18 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)();
      }
      lVar17 = lVar18;
      plVar10 = plVar15;
    } while (plVar15 != local_90);
    plVar15 = local_90;
LAB_00066d97:
    local_a8 = plVar15;
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<(usize,alloc[12e961f32105355]::vec::Vec<u8>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_b0,lVar17);
  return 0;
}


