// 00183490 <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>

/* base64[729f3f786a952ed7]::engine::Engine::encode::inner::<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
    */

ulonglong * __rustcall
base64[729f3f786a952ed7]::engine::Engine::encode::inner::
<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
          (ulonglong *param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 extraout_XMM0_Da;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar5 = (param_4 / 3) * 4;
  uVar2 = param_4 % 3;
  if (uVar2 != 0) {
    if (*param_2 == '\0') goto LAB_001834ee;
    uVar5 = uVar5 + 4;
  }
joined_r0x001834de:
  if ((longlong)uVar5 < 0) {
LAB_001834e2:
    uVar2 = (*(code *)PTR_handle_error_00219c78)();
LAB_001834ee:
    uVar5 = uVar5 | (ulonglong)(uVar2 == 1) ^ 3;
    goto joined_r0x001834de;
  }
  if (uVar5 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar2 = (*(code *)PTR___rust_alloc_zeroed_00219e90)();
    if (uVar2 != 0) goto LAB_00183538;
    goto LAB_001834e2;
  }
  uVar2 = 1;
LAB_00183538:
  uVar3 = (*(code *)PTR_internal_encode_0021a018)(uVar2,param_4,uVar5);
  if (*param_2 == '\x01') {
    if (uVar5 < uVar3) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&anon_975675005b359c1256e7ac2c4f26c58c_4_llvm_12506637008296765792,uVar5);
      goto LAB_0018363a;
    }
    uVar4 = -(int)uVar3 & 3;
    if (uVar4 != 0) {
      if (uVar5 == uVar3) {
LAB_0018362a:
        (*(code *)PTR_panic_bounds_check_0021a020)
                  (uVar4,&anon_975675005b359c1256e7ac2c4f26c58c_3_llvm_12506637008296765792);
        goto LAB_0018363a;
      }
      *(undefined1 *)(uVar2 + uVar3) = 0x3d;
      if (uVar4 != 1) {
        if (uVar5 - uVar3 == 1) goto LAB_0018362a;
        *(undefined1 *)(uVar2 + 1 + uVar3) = 0x3d;
        if (uVar4 != 2) {
          if (uVar5 - uVar3 == 2) goto LAB_0018362a;
          *(undefined1 *)(uVar2 + 2 + uVar3) = 0x3d;
        }
      }
    }
  }
  (*(code *)PTR_from_utf8_00219d78)(extraout_XMM0_Da,uVar5);
  if ((int)local_58 != 1) {
    *param_1 = uVar5;
    param_1[1] = uVar2;
    param_1[2] = uVar5;
    return param_1;
  }
  local_40 = (undefined4)local_50;
  uStack_3c = local_50._4_4_;
  uStack_38 = (undefined4)uStack_48;
  uStack_34 = uStack_48._4_4_;
  local_58 = uVar5;
  local_50 = uVar2;
  uStack_48 = uVar5;
  (*(code *)PTR_unwrap_failed_00219ec0)
            (&PTR_<alloc[12e961f32105355]::string::FromUtf8Error>_00215b58,&local_58,
             &PTR_anon_16a3b356826a16bc04f9b830aca94c66_4_llvm_11779858384484307972_00215b40);
LAB_0018363a:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


