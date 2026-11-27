// 0017b390 default

/* <craggemini[b21da2d71f2da7a3]::Context as core[c0acaeba6ab4c2e0]::default::Default>::default */

undefined8 * __rustcall
<craggemini[b21da2d71f2da7a3]::Context_as_core[c0acaeba6ab4c2e0]::default::Default>::default
          (undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00219c78)();
  }
  else {
    *puVar6 = 0x6f6c61646e617473;
    *(undefined2 *)(puVar6 + 1) = 0x656e;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00219c88)();
    uVar4 = anon_b04ad85f475f72582d80b81ac363002b_85_llvm_18301838290376532492._12_4_;
    uVar3 = anon_b04ad85f475f72582d80b81ac363002b_85_llvm_18301838290376532492._8_4_;
    uVar2 = anon_b04ad85f475f72582d80b81ac363002b_85_llvm_18301838290376532492._4_4_;
    if (pcVar7 != (char *)0x0) {
      *(undefined4 *)pcVar7 =
           anon_b04ad85f475f72582d80b81ac363002b_85_llvm_18301838290376532492._0_4_;
      *(undefined4 *)(pcVar7 + 4) = uVar2;
      *(undefined4 *)(pcVar7 + 8) = uVar3;
      *(undefined4 *)(pcVar7 + 0xc) = uVar4;
      pcVar7[0xd] = '-';
      pcVar7[0xe] = 'l';
      pcVar7[0xf] = 'i';
      pcVar7[0x10] = 'c';
      pcVar7[0x11] = 'e';
      pcVar7[0x12] = 'n';
      pcVar7[0x13] = 's';
      pcVar7[0x14] = 'e';
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00219c88)();
      uVar5 = anon_b04ad85f475f72582d80b81ac363002b_86_llvm_18301838290376532492._8_8_;
      if (pcVar8 != (char *)0x0) {
        *(undefined8 *)pcVar8 =
             anon_b04ad85f475f72582d80b81ac363002b_86_llvm_18301838290376532492._0_8_;
        *(undefined8 *)(pcVar8 + 8) = uVar5;
        pcVar8[0x10] = 's';
        pcVar8[0x11] = 't';
        *param_1 = 10;
        param_1[1] = puVar6;
        param_1[2] = 10;
        param_1[3] = 0x15;
        param_1[4] = pcVar7;
        param_1[5] = 0x15;
        param_1[6] = 0x12;
        param_1[7] = pcVar8;
        param_1[8] = 0x12;
        param_1[9] = 0;
        param_1[10] = 8;
        param_1[0xb] = 0;
        return param_1;
      }
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_0017b4c4;
    }
  }
  (*(code *)PTR_handle_error_00219c78)();
LAB_0017b4c4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


