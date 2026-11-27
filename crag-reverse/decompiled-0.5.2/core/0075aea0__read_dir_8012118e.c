// 0075aea0 read_dir

/* std[6c98fd8553dbae28]::sys::fs::read_dir */

undefined8 * __rustcall
std[6c98fd8553dbae28]::sys::fs::read_dir
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  longlong lStack_1b0;
  ulonglong local_1a8;
  undefined8 *puStack_1a0;
  char local_48;
  
  if (param_3 < 0x180) {
    uVar7 = (*(code *)PTR_memcpy_00799008)(param_4,param_3);
    *(undefined1 *)((longlong)&local_1c8 + param_3) = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)(uVar7,param_3 + 1);
    if (local_48 != '\0') {
      puVar3 = (undefined8 *)&DAT_00796450;
      uVar6 = 2;
      goto LAB_0075b015;
    }
    puVar3 = (undefined8 *)(*(code *)PTR_opendir_0079ac80)();
  }
  else {
    auVar8 = helpers::small_c_string::run_with_cstr_allocating::
             <*mut_libc[bd0ec16757d687cc]::unix::DIR>(param_2,param_3);
    puVar3 = auVar8._8_8_;
    uVar6 = 2;
    if ((auVar8._0_8_ & 1) != 0) goto LAB_0075b015;
  }
  uVar6 = 2;
  if (puVar3 == (undefined8 *)0x0) {
    piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    puVar3 = (undefined8 *)((longlong)iVar1 << 0x20 | 2);
  }
  else {
    if (param_3 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sys::fs::unix::InnerReadDir>>
                  (&local_1c8,param_3);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
    }
    local_1c8 = 1;
    uStack_1c0 = 1;
    local_1b8 = param_3;
    lStack_1b0 = lVar4;
    local_1a8 = param_3;
    puStack_1a0 = puVar3;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar3[4] = local_1a8;
    puVar3[5] = puStack_1a0;
    puVar3[2] = local_1b8;
    puVar3[3] = lStack_1b0;
    *puVar3 = local_1c8;
    puVar3[1] = uStack_1c0;
    uVar6 = 0;
  }
LAB_0075b015:
  *param_1 = puVar3;
  *(undefined1 *)(param_1 + 1) = uVar6;
  return param_1;
}


