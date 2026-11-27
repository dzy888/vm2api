// 0016ffa0 run_internal_mcp_args

/* WARNING: Removing unreachable block (ram,0x001c4266) */
/* WARNING: Switch with 1 destination removed at 0x001701d5 */
/* WARNING: Switch with 1 destination removed at 0x001c42b1 */
/* craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_args */

longlong __rustcall
craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_args
          (longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38;
  
  if (param_2 == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      (*(code *)PTR___rust_dealloc_00219c40)();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00219c60)();
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar3 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *puVar3 = 0x25;
    puVar3[1] = lVar2;
    puVar3[2] = 0x25;
    lVar2 = (*(code *)PTR_custom_owner_from_box_0021a170)();
    return lVar2 + 1;
  }
  uVar6 = 0;
  lVar2 = -1;
  do {
    (*(code *)PTR_from_utf8_lossy_00219e60)
              (param_4,*(undefined8 *)(param_1 + 0x10 + uVar6 * 0x18),PTR_from_utf8_lossy_00219e60,
               &local_50);
    if (local_40 != 8) {
      if ((8 < local_40) && ((char)local_48[1] == '=' && *local_48 == 0x6769666e6f632d2d)) {
        lVar4 = local_40 - 9;
        if (lVar4 != 0) {
          if (lVar4 < 0) {
LAB_001701f3:
            (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)(0,0x39);
          param_4 = (*(code *)PTR___rust_alloc_00219c88)();
          if (param_4 == 0) goto LAB_001701f3;
          (*(code *)PTR_memcpy_00219c60)();
          lVar5 = 1;
          local_38 = param_4;
          goto joined_r0x001701b2;
        }
      }
LAB_00170222:
      lVar5 = (*(code *)PTR_<&str>_00219e50)();
      if (0 < local_50) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      if (lVar2 < 1) {
        return lVar5;
      }
      goto LAB_0017025c;
    }
    if ((*local_48 != 0x6769666e6f632d2d) || (param_2 <= uVar6 + 1)) goto LAB_00170222;
    lVar4 = *(longlong *)(param_1 + 0x10 + (uVar6 + 1) * 0x18);
    if (lVar4 < 0) goto LAB_001701f3;
    if (lVar4 == 0) {
      param_4 = 1;
      lVar5 = 2;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      param_4 = (*(code *)PTR___rust_alloc_00219c88)();
      if (param_4 == 0) goto LAB_001701f3;
      (*(code *)PTR_memcpy_00219c60)();
      lVar5 = 2;
    }
joined_r0x001701b2:
    if (0 < lVar2) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    if (local_50 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    uVar6 = uVar6 + lVar5;
    lVar2 = lVar4;
  } while (uVar6 < param_2);
  lVar5 = run_internal_mcp_stdio(param_4,lVar4);
  if (lVar4 != 0) {
LAB_0017025c:
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
  return lVar5;
}


