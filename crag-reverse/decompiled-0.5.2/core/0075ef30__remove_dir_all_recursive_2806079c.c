// 0075ef30 remove_dir_all_recursive

/* WARNING: Removing unreachable block (ram,0x0075f29d) */
/* WARNING: Removing unreachable block (ram,0x0075f2a7) */
/* WARNING: Removing unreachable block (ram,0x0075f2b1) */
/* WARNING: Removing unreachable block (ram,0x0075f2df) */
/* WARNING: Removing unreachable block (ram,0x0075f367) */
/* WARNING: Removing unreachable block (ram,0x0075f2fe) */
/* WARNING: Removing unreachable block (ram,0x0075f328) */
/* WARNING: Removing unreachable block (ram,0x0075f32c) */
/* WARNING: Removing unreachable block (ram,0x0075f2c8) */
/* WARNING: Removing unreachable block (ram,0x0075f2cc) */
/* WARNING: Removing unreachable block (ram,0x0075f2dd) */
/* std[6c98fd8553dbae28]::sys::fs::unix::remove_dir_impl::remove_dir_all_recursive */

ulonglong __rustcall
std[6c98fd8553dbae28]::sys::fs::unix::remove_dir_impl::remove_dir_all_recursive
          (undefined4 param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar11;
  char local_88;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38;
  
  puVar3 = PTR_openat64_0079ad20;
  puVar2 = PTR_get_os_functions_007992e0;
  local_50 = param_2;
  local_4c = param_3;
  local_48 = param_4;
  while (iVar5 = (*(code *)puVar3)(param_1,0xb0000), iVar5 == -1) {
    piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar5 = *piVar8;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar9 = (*(code *)puVar2)();
    cVar4 = (**(code **)(lVar9 + 0x10))();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') {
      uVar10 = (longlong)iVar5 << 0x20 | 2;
      if (((iVar5 == 0x28) || (iVar5 == 0x14)) && ((local_50 & 1) != 0)) {
        uVar10 = 0;
        iVar5 = (*(code *)PTR_unlinkat_0079b0d0)(extraout_XMM0_Da,0);
        if (iVar5 == -1) {
          iVar5 = *piVar8;
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
            (*(code *)PTR_set_functions_inner_007990c0)();
          }
          uVar10 = (longlong)iVar5 << 0x20 | 2;
        }
      }
      return uVar10;
    }
  }
  lStack_58 = (*(code *)PTR_fdopendir_0079b0c0)();
  if (lStack_58 == 0) {
    piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar5 = *piVar8;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    (*(code *)PTR_close_00799030)();
    return (longlong)iVar5 << 0x20 | 2;
  }
  lStack_68 = 1;
  local_60 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_40 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (local_40 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_40[4] = local_60;
  local_40[5] = lStack_58;
  local_40[2] = 0;
  local_40[3] = lStack_68;
  *(undefined4 *)local_40 = 1;
  *(undefined4 *)((longlong)local_40 + 4) = 0;
  *(undefined4 *)(local_40 + 1) = 1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  local_38 = 0;
  do {
    (*(code *)PTR_next_0079b0c8)();
    lVar9 = lStack_68;
    local_88 = (char)lStack_58;
    if (local_88 == '\0') {
      uVar10 = remove_dir_all_recursive(1,iVar5,0);
      uVar11 = extraout_XMM0_Da_01;
LAB_0075f0d0:
      if (uVar10 != 0) {
        uVar6 = (uint)uVar10 & 3;
        if (uVar6 < 2) {
LAB_0075f20f:
          LOCK();
          lRam0000000000000001 = lRam0000000000000001 + -1;
          UNLOCK();
          if (lRam0000000000000001 == 0) {
            uVar11 = (*(code *)PTR_drop_slow_007997d0)();
          }
          uRam0000000000000000 = 0;
          if (lVar9 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          LOCK();
          *local_40 = *local_40 + -1;
          UNLOCK();
          if (*local_40 == 0) {
            (*(code *)PTR_drop_slow_007997d0)();
            return uVar10;
          }
          return uVar10;
        }
LAB_0075f0e7:
        if ((uVar6 != 2) || ((int)(uVar10 >> 0x20) != 2)) goto LAB_0075f20f;
      }
    }
    else {
      if (local_88 == '\x04') {
        uVar10 = remove_dir_all_recursive(1,iVar5,0);
        uVar11 = extraout_XMM0_Da_00;
        goto LAB_0075f0d0;
      }
      iVar7 = (*(code *)PTR_unlinkat_0079b0d0)(&lStack_68,0);
      uVar11 = extraout_XMM0_Da_02;
      if (iVar7 == -1) {
        piVar8 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar7 = *piVar8;
        uVar11 = extraout_XMM0_Da_03;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          uVar11 = (*(code *)PTR_set_functions_inner_007990c0)();
        }
        uVar10 = (longlong)iVar7 << 0x20 | 2;
        uVar6 = 2;
        goto LAB_0075f0e7;
      }
    }
    LOCK();
    lRam0000000000000001 = lRam0000000000000001 + -1;
    UNLOCK();
    if (lRam0000000000000001 == 0) {
      uVar11 = (*(code *)PTR_drop_slow_007997d0)();
    }
    uRam0000000000000000 = 0;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
  } while( true );
}


