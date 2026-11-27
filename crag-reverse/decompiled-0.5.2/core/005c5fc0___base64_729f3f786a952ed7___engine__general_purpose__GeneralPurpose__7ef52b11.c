// 005c5fc0 <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>

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
    if (*param_2 == '\0') goto LAB_005c601e;
    uVar5 = uVar5 + 4;
  }
joined_r0x005c600e:
  if ((longlong)uVar5 < 0) {
LAB_005c6012:
    uVar2 = (*(code *)PTR_handle_error_00798ff0)();
LAB_005c601e:
    uVar5 = uVar5 | (ulonglong)(uVar2 == 1) ^ 3;
    goto joined_r0x005c600e;
  }
  if (uVar5 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar2 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    if (uVar2 != 0) goto LAB_005c6068;
    goto LAB_005c6012;
  }
  uVar2 = 1;
LAB_005c6068:
  uVar3 = (*(code *)PTR_internal_encode_00799d98)(uVar2,param_4,uVar5);
  if (*param_2 == '\x01') {
    if (uVar5 < uVar3) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&anon_92c4c5dab1af02541b6de8b875afdfcf_26_llvm_8405253652347736786,uVar5);
      goto LAB_005c616a;
    }
    uVar4 = -(int)uVar3 & 3;
    if (uVar4 != 0) {
      if (uVar5 == uVar3) {
LAB_005c615a:
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uVar4,&anon_92c4c5dab1af02541b6de8b875afdfcf_25_llvm_8405253652347736786);
        goto LAB_005c616a;
      }
      *(undefined1 *)(uVar2 + uVar3) = 0x3d;
      if (uVar4 != 1) {
        if (uVar5 - uVar3 == 1) goto LAB_005c615a;
        *(undefined1 *)(uVar2 + 1 + uVar3) = 0x3d;
        if (uVar4 != 2) {
          if (uVar5 - uVar3 == 2) goto LAB_005c615a;
          *(undefined1 *)(uVar2 + 2 + uVar3) = 0x3d;
        }
      }
    }
  }
  (*(code *)PTR_from_utf8_00799468)(extraout_XMM0_Da,uVar5);
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
  (*(code *)PTR_unwrap_failed_00799028)
            (&PTR_<alloc[12e961f32105355]::string::FromUtf8Error>_0078e348,&local_58,
             &PTR_anon_30b5cef53457a6ea696e8d7e9f6273d6_17_llvm_8436237269785592069_0078dfb8);
LAB_005c616a:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


