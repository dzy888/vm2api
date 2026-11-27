// 006565b0 ensure_private_dir

/* WARNING: Switch with 1 destination removed at 0x00656631 */
/* WARNING: Switch with 1 destination removed at 0x00656687 */
/* WARNING: Switch with 1 destination removed at 0x007257d1 */
/* WARNING: Type propagation algorithm not settling */
/* craggemini_core[66f3c71560d70857]::binding::ensure_private_dir */

undefined1 * __rustcall
craggemini_core[66f3c71560d70857]::binding::ensure_private_dir(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_1d8 [248];
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d4;
  undefined1 *local_d0;
  uint local_a0;
  int local_9c;
  char cStack_58;
  undefined4 *puStack_40;
  undefined4 uStack_34;
  code *pcStack_30;
  
  uStack_e0 = 0x6565cb;
  cVar3 = (*(code *)PTR_is_absolute_00799b58)();
  if (cVar3 == '\0') {
    lVar9 = 0x1f;
    goto LAB_00656622;
  }
  uStack_e0 = 0x6565de;
  (*(code *)PTR_symlink_metadata_007992d0)();
  if (local_d8 == 2) {
    uVar10 = (uint)local_d0 & 3;
    switch(uVar10) {
    case 0:
      cVar3 = local_d0[0x10];
      break;
    case 1:
      cVar3 = local_d0[0x1f];
      break;
    case 2:
      uStack_e0 = 0x6566a6;
      lVar9 = (*(code *)PTR_get_os_functions_007992e0)();
      uStack_e0 = 0x6566b0;
      cVar3 = (**(code **)(lVar9 + 8))();
      break;
    case 3:
      cVar3 = (char)((ulonglong)local_d0 >> 0x20);
    }
    if (cVar3 != '\0') {
      return local_d0;
    }
    local_d8 = 0x1ff;
    local_d4 = 1;
    uStack_e0 = 0x6566e2;
    puVar5 = (undefined1 *)(*(code *)PTR__create_00799410)();
    if (puVar5 == (undefined1 *)0x0) {
      uStack_e0 = 0x6566f8;
      puVar5 = (undefined1 *)(*(code *)PTR_set_permissions_007992e8)();
      if (puVar5 == (undefined1 *)0x0) {
        uStack_e0 = 0x65675a;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (local_d0,param_2);
        goto LAB_0065675a;
      }
    }
    if ((1 < uVar10 - 2) && (((ulonglong)local_d0 & 3) != 0)) {
      local_d0 = local_d0 + -1;
      local_d8 = CONCAT31(local_d8._1_3_,3);
      uStack_e0 = 0x656726;
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    if ((local_a0 & 0xf000) != 0x4000) {
      lVar9 = 0x2a;
LAB_00656622:
      if (lVar9 == 0) {
        lVar6 = 1;
      }
      else {
        pcStack_30 = (code *)0x72575f;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcStack_30 = (code *)0x72576d;
        lVar6 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar6 == 0) {
          pcStack_30 = (code *)0x7257f7;
          (*(code *)PTR_handle_error_00798ff0)();
          if (lVar9 != 0) {
            pcStack_30 = (code *)0x725810;
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
                    /* WARNING: Subroutine does not return */
          pcStack_30 = <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
                       ::initialize::
                       <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::_closure_0_>::_closure_0_,_>
          ;
          _Unwind_Resume();
        }
        pcStack_30 = (code *)0x725784;
        (*(code *)PTR_memcpy_00799008)();
      }
      pcStack_30 = (code *)0x725792;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcStack_30 = (code *)0x7257a2;
      plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar7 == (longlong *)0x0) {
        pcStack_30 = (code *)0x7257e7;
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *plVar7 = lVar9;
      plVar7[1] = lVar6;
      plVar7[2] = lVar9;
      pcStack_30 = (code *)0x7257c6;
      lVar9 = (*(code *)PTR_custom_owner_from_box_00799f90)();
      return (undefined1 *)(lVar9 + 1);
    }
    uStack_e0 = 0x656653;
    iVar4 = (*(code *)PTR_geteuid_007992d8)();
    if (local_9c != iVar4) {
      lVar9 = 0x2d;
      goto LAB_00656622;
    }
    if ((local_a0 & 0xfff) != 0x1c0) {
      uStack_34 = 0x1c0;
      puStack_40 = &uStack_34;
      if (param_2 < 0x180) {
        (*(code *)PTR_memcpy_00799008)();
        auStack_1d8[param_2] = 0;
        (*(code *)PTR_from_bytes_with_nul_0079abd0)();
        puVar2 = PTR_get_os_functions_007992e0;
        if (cStack_58 == '\0') {
          do {
            iVar4 = (*(code *)PTR_chmod_0079ad58)();
            if (iVar4 != -1) {
              return (undefined1 *)0x0;
            }
            piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
            iVar4 = *piVar8;
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
              (*(code *)PTR_set_functions_inner_007990c0)();
            }
            lVar9 = (*(code *)puVar2)();
            cVar3 = (**(code **)(lVar9 + 0x10))();
          } while (cVar3 != '\0');
          puVar5 = (undefined1 *)((longlong)iVar4 << 0x20 | 2);
        }
        else {
          puVar5 = &DAT_00796450;
        }
      }
      else {
        puVar5 = (undefined1 *)
                 std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<()>
                           (param_1,param_2,&puStack_40,
                            std[6c98fd8553dbae28]::sys::fs::set_permissions::_closure_0_);
      }
      return puVar5;
    }
LAB_0065675a:
    puVar5 = (undefined1 *)0x0;
  }
  return puVar5;
}


