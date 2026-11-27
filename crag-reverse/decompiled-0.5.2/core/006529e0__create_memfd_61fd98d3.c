// 006529e0 create_memfd

/* <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::create_memfd */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::create_memfd
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (param_2 < 0x10001) {
    param_2 = 0x10000;
  }
  if (0x3ffffff < param_2) {
    param_2 = 0x4000000;
  }
  lVar10 = 0x3f;
  if (param_2 - 1 != 0) {
    for (; param_2 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar11 = 0xffffffffffffffff >> (~(byte)lVar10 & 0x3f);
  uVar6 = 0x10000;
  if (0x10000 < param_3) {
    uVar6 = param_3;
  }
  if (0x3ffffff < uVar6) {
    uVar6 = 0x4000000;
  }
  lVar10 = 0x3f;
  if (uVar6 - 1 != 0) {
    for (; uVar6 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar6 = 0xffffffffffffffff >> (~(byte)lVar10 & 0x3f);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    (*(code *)PTR_close_00799030)();
    (*(code *)PTR_close_00799030)();
    (*(code *)PTR_close_00799030)();
    (*(code *)PTR_close_00799030)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *(undefined8 *)((longlong)puVar7 + 7) = 0x676e69725f696e69;
  *puVar7 = 0x696d656767617263;
  (*(code *)PTR_grow_one_007993d0)();
  *(undefined1 *)((longlong)puVar7 + 0xf) = 0;
  iVar1 = (*(code *)PTR_memfd_create_0079a238)();
  if (iVar1 < 0) {
    puVar8 = (uint *)(*(code *)PTR___errno_location_007990a0)();
    uVar6 = (ulonglong)*puVar8;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
  }
  else {
    iVar2 = (*(code *)PTR_ftruncate_0079a240)();
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fcntl_00799e68)();
      if (iVar2 == 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
        iVar2 = (*(code *)PTR_eventfd_0079a248)();
        if (iVar2 < 0) {
          piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
          iVar1 = *piVar9;
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
              &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
            (*(code *)PTR_set_functions_inner_007990c0)();
          }
          param_1[1] = (longlong)iVar1 << 0x20 | 2;
          *param_1 = 0;
        }
        else {
          iVar3 = (*(code *)PTR_eventfd_0079a248)();
          if (iVar3 < 0) {
            piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
            iVar1 = *piVar9;
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
                &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
              (*(code *)PTR_set_functions_inner_007990c0)();
            }
            param_1[1] = (longlong)iVar1 << 0x20 | 2;
            *param_1 = 0;
          }
          else {
            iVar4 = (*(code *)PTR_eventfd_0079a248)();
            if (iVar4 < 0) {
              piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
              iVar1 = *piVar9;
              if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
                  &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
                (*(code *)PTR_set_functions_inner_007990c0)();
              }
              param_1[1] = (longlong)iVar1 << 0x20 | 2;
              *param_1 = 0;
            }
            else {
              iVar5 = (*(code *)PTR_eventfd_0079a248)();
              if (iVar5 < 0) {
                piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
                iVar1 = *piVar9;
                if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
                    &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
                  (*(code *)PTR_set_functions_inner_007990c0)();
                }
                param_1[1] = (longlong)iVar1 << 0x20 | 2;
                *param_1 = 0;
              }
              else {
                puVar7 = (undefined8 *)(*(code *)PTR_mmap_0079a250)(1,3,iVar1,0);
                if (puVar7 == (undefined8 *)0x0) {
                  uVar6 = (*(code *)PTR_<&str>_007991e8)();
                }
                else {
                  if (puVar7 != (undefined8 *)0xffffffffffffffff) {
                    lVar10 = uVar6 + 1;
                    (*(code *)PTR_memset_00799090)();
                    *puVar7 = 0x32304d4853594741;
                    puVar7[1] = 2;
                    *(undefined4 *)(puVar7 + 2) = 0x1000;
                    *(int *)((longlong)puVar7 + 0x14) = (int)(uVar11 + 1);
                    *(int *)(puVar7 + 3) = (int)(uVar11 + 0x1001);
                    *(int *)((longlong)puVar7 + 0x1c) = (int)lVar10;
                    puVar7[0x30] = 0;
                    (*(code *)PTR_memset_00799090)();
                    *param_1 = puVar7;
                    param_1[1] = uVar6 + uVar11 + 0x1002;
                    param_1[2] = 0x1000;
                    param_1[3] = uVar11 + 1;
                    param_1[4] = uVar11 + 0x1001;
                    param_1[5] = lVar10;
                    *(int *)(param_1 + 6) = iVar1;
                    *(int *)((longlong)param_1 + 0x34) = iVar2;
                    *(int *)(param_1 + 7) = iVar3;
                    *(int *)((longlong)param_1 + 0x3c) = iVar4;
                    *(int *)(param_1 + 8) = iVar5;
                    return param_1;
                  }
                  piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
                  iVar1 = *piVar9;
                  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
                      &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
                    (*(code *)PTR_set_functions_inner_007990c0)();
                  }
                  uVar6 = (longlong)iVar1 << 0x20 | 2;
                }
                param_1[1] = uVar6;
                *param_1 = 0;
                (*(code *)PTR_close_00799030)();
              }
              (*(code *)PTR_close_00799030)();
            }
            (*(code *)PTR_close_00799030)();
          }
          (*(code *)PTR_close_00799030)();
        }
        (*(code *)PTR_close_00799030)();
        return param_1;
      }
      puVar8 = (uint *)(*(code *)PTR___errno_location_007990a0)();
      uVar6 = (ulonglong)*puVar8;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
    }
    else {
      puVar8 = (uint *)(*(code *)PTR___errno_location_007990a0)();
      uVar6 = (ulonglong)*puVar8;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
    }
    (*(code *)PTR_close_00799030)();
  }
  (*(code *)PTR___rust_dealloc_00798fc8)();
  param_1[1] = uVar6 << 0x20 | 2;
  *param_1 = 0;
  return param_1;
}


