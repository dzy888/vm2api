// 006b9670 clone_box

/* <hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap as
   http[56314f485c23ccf6]::extensions::AnyClone>::clone_box */

void __rustcall
<hyper[c4782d5b5c5e3493]::ext::HeaderCaseMap_as_http[56314f485c23ccf6]::extensions::AnyClone>::
clone_box(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar3 = *(ulonglong *)(param_1 + 0x14);
  uVar1 = uVar3 * 4;
  if (uVar1 < 0x7fffffffffffffff && uVar3 >> 0x3e == 0) goto LAB_006b96ba;
  puVar5 = (undefined4 *)0x0;
  while( true ) {
    param_1 = puVar5;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006b96ba:
    uVar2 = *(undefined2 *)(param_1 + 0x16);
    if (uVar1 == 0) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar6 = (*(code *)PTR___rust_alloc_00799000)();
    puVar5 = (undefined4 *)0x2;
    if (lVar6 != 0) {
      if (uVar3 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,uVar1);
      }
LAB_006b9710:
      <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_90,param_1 + 6);
      <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_f8,param_1 + 0xc);
      local_50 = local_80;
      local_60 = local_90;
      uStack_58 = uStack_88;
      local_48 = local_f8;
      uStack_44 = uStack_f4;
      uStack_40 = uStack_f0;
      uStack_3c = uStack_ec;
      local_38 = local_e8;
      local_68 = *(undefined8 *)(param_1 + 4);
      local_78 = *param_1;
      uStack_74 = param_1[1];
      uStack_70 = param_1[2];
      uStack_6c = param_1[3];
      local_d8 = uStack_88;
      uStack_d0 = local_80;
      local_c8 = local_f8;
      uStack_c4 = uStack_f4;
      uStack_c0 = uStack_f0;
      uStack_bc = uStack_ec;
      local_b8 = local_e8;
      uStack_e0 = local_90;
      local_f8 = local_78;
      uStack_f4 = uStack_74;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      local_e8 = local_68;
      lStack_b0 = lVar6;
      local_a8 = uVar3;
      uStack_a0 = uVar2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar7[10] = local_a8;
      puVar7[0xb] = CONCAT62(uStack_9e,uStack_a0);
      puVar7[8] = local_b8;
      puVar7[9] = lStack_b0;
      puVar7[6] = CONCAT44(uStack_c4,local_c8);
      puVar7[7] = CONCAT44(uStack_bc,uStack_c0);
      puVar7[4] = local_d8;
      puVar7[5] = uStack_d0;
      puVar7[2] = local_e8;
      puVar7[3] = uStack_e0;
      *puVar7 = CONCAT44(uStack_f4,local_f8);
      puVar7[1] = CONCAT44(uStack_ec,uStack_f0);
      return;
    }
  }
  lVar6 = 2;
  goto LAB_006b9710;
}


