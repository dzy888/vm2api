// 006c7a60 from

/* <http[56314f485c23ccf6]::header::name::HeaderName as
   core[c0acaeba6ab4c2e0]::convert::From<http[56314f485c23ccf6]::header::name::HdrName>>::from */

undefined8 * __rustcall
<http[56314f485c23ccf6]::header::name::HeaderName_as_core[c0acaeba6ab4c2e0]::convert::From<http[56314f485c23ccf6]::header::name::HdrName>>
::from(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined *local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  ulonglong *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  if (*(byte *)(param_2 + 2) == 2) {
    lVar5 = *param_2;
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)lVar5;
    return param_1;
  }
  lVar5 = *param_2;
  uVar1 = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    (*(code *)PTR_copy_from_slice_0079a118)(param_4,uVar1);
    return param_1;
  }
  uVar8 = uVar1 == 0;
  if (-1 < (longlong)uVar1) goto LAB_006c7ace;
  puVar4 = (undefined8 *)0x0;
  while( true ) {
    param_1 = puVar4;
    uVar8 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006c7ace:
    if ((bool)uVar8) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_40 = (*(code *)PTR___rust_alloc_00799000)();
    puVar4 = (undefined8 *)0x1;
    if (local_40 != 0) {
LAB_006c7b00:
      puVar3 = PTR_put_slice_00799c88;
      uVar7 = 0x3f;
      if (uVar1 >> 10 != 0) {
        for (; (uVar1 >> 10) >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      uVar6 = (uVar7 ^ 0xffffffffffffffc0) + 0x41;
      uVar7 = 7;
      if (uVar6 < 7) {
        uVar7 = uVar6;
      }
      uVar7 = (uVar7 & 0xffffffff) * 4 + 1;
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          local_68 = (ulonglong *)CONCAT71(local_68._1_7_,""[*(byte *)(lVar5 + uVar6)]);
          (*(code *)puVar3)("",1);
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
      if ((uVar7 & 1) == 0) {
        lVar5 = 0;
        local_98 = PTR_SHARED_VTABLE_00799a60;
        local_80 = uVar7;
      }
      else {
        uVar7 = uVar7 >> 5;
        local_48 = uVar1 + uVar7;
        local_40 = local_40 - uVar7;
        local_38 = uVar7;
        (*(code *)PTR_from_00799a68)();
        lVar5 = local_88 - uVar7;
        if (local_88 < uVar7) {
          local_68 = &local_78;
          local_60 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_58 = local_70;
          local_50 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_78 = uVar7;
          (*(code *)PTR_panic_fmt_007991a8)
                    (local_58,&
                              PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00793208
                    );
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_40 = uVar7 + local_90;
      }
      *param_1 = local_98;
      param_1[1] = local_40;
      param_1[2] = lVar5;
      param_1[3] = local_80;
      return param_1;
    }
  }
  local_40 = 1;
  goto LAB_006c7b00;
}


