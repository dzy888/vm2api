// 006a75b0 remove_all_extra_values

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::remove_all_extra_values */

void __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::remove_all_extra_values
          (undefined4 param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar29 = *(ulonglong *)(param_2 + 0x40);
  if (param_3 < uVar29) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar4 = *(ulonglong *)(param_2 + 0x28);
    lVar5 = *(longlong *)(param_2 + 0x38);
    local_48 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791b08;
    puVar13 = (undefined4 *)(lVar5 + uVar29 * 0x48);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 8 + param_3 * 0x48);
      cVar2 = *(char *)(lVar5 + 0x10 + param_3 * 0x48);
      uVar7 = *(ulonglong *)(lVar5 + 0x18 + param_3 * 0x48);
      if (*(char *)(lVar5 + param_3 * 0x48) == '\0') {
        if (cVar2 == '\0') {
          if (uVar6 < uVar4) {
            *(undefined8 *)(lVar3 + uVar6 * 0x68) = 0;
            goto LAB_006a7707;
          }
LAB_006a78e9:
          param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                              (param_1,&
                                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791a30
                              );
LAB_006a78fb:
          param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                              (param_1,&
                                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791a90
                              );
        }
        else if (uVar6 < uVar4) {
          if (*(char *)(lVar3 + uVar6 * 0x68) == '\0') {
LAB_006a7896:
            (*(code *)PTR_unwrap_failed_00799278)();
LAB_006a78b3:
            (*(code *)PTR_unwrap_failed_00799278)();
            goto LAB_006a798a;
          }
          *(ulonglong *)(uVar6 * 0x68 + lVar3 + 8) = uVar7;
          if (uVar7 < uVar29) {
            *(undefined8 *)(lVar5 + uVar7 * 0x48) = 0;
            *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
            goto LAB_006a7707;
          }
LAB_006a7955:
          uVar30 = (*(code *)PTR_panic_bounds_check_00799520)
                             (param_1,&
                                      PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791a78
                             );
LAB_006a7968:
          local_48 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791b68
          ;
          goto LAB_006a797c;
        }
        uVar30 = (*(code *)PTR_panic_bounds_check_00799520)
                           (param_1,&
                                    PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791a48
                           );
LAB_006a7922:
        local_48 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791b50;
        goto LAB_006a797c;
      }
      if (cVar2 != '\0') {
        if (uVar6 < uVar29) {
          *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
          if (uVar7 < uVar29) {
            *(undefined8 *)(lVar5 + uVar7 * 0x48) = 1;
            *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
            goto LAB_006a7707;
          }
        }
        else {
          param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                              (param_3 * 9,
                               &
                               PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791ad8
                              );
        }
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_1,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791af0
                            );
        goto LAB_006a78e9;
      }
      if (uVar4 <= uVar7) goto LAB_006a78fb;
      if (*(char *)(lVar3 + uVar7 * 0x68) == '\0') {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_006a7896;
      }
      *(ulonglong *)(uVar7 * 0x68 + lVar3 + 0x10) = uVar6;
      if (uVar29 <= uVar6) {
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_3 * 9,
                             &
                             PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791ac0
                            );
        goto LAB_006a7955;
      }
      *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 0;
      *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
LAB_006a7707:
      pcVar1 = (char *)(lVar5 + param_3 * 0x48);
      uVar6 = *(ulonglong *)(pcVar1 + 0x10);
      uVar7 = *(ulonglong *)(pcVar1 + 0x18);
      local_38 = *(longlong *)(pcVar1 + 0x20);
      local_40 = *(undefined8 *)(pcVar1 + 0x30);
      uVar29 = uVar29 - 1;
      uVar8 = *(undefined8 *)(puVar13 + -2);
      uVar30 = puVar13[-0x12];
      uVar14 = puVar13[-0x11];
      uVar15 = puVar13[-0x10];
      uVar16 = puVar13[-0xf];
      uVar17 = puVar13[-0xe];
      uVar18 = puVar13[-0xd];
      uVar19 = puVar13[-0xc];
      uVar20 = puVar13[-0xb];
      uVar21 = puVar13[-10];
      uVar22 = puVar13[-9];
      uVar23 = puVar13[-8];
      uVar24 = puVar13[-7];
      uVar25 = puVar13[-6];
      uVar26 = puVar13[-5];
      uVar27 = puVar13[-4];
      uVar28 = puVar13[-3];
      *(undefined4 *)pcVar1 = uVar30;
      *(undefined4 *)(pcVar1 + 4) = uVar14;
      *(undefined4 *)(pcVar1 + 8) = uVar15;
      *(undefined4 *)(pcVar1 + 0xc) = uVar16;
      *(undefined4 *)(pcVar1 + 0x10) = uVar17;
      *(undefined4 *)(pcVar1 + 0x14) = uVar18;
      *(undefined4 *)(pcVar1 + 0x18) = uVar19;
      *(undefined4 *)(pcVar1 + 0x1c) = uVar20;
      *(undefined4 *)(pcVar1 + 0x20) = uVar21;
      *(undefined4 *)(pcVar1 + 0x24) = uVar22;
      *(undefined4 *)(pcVar1 + 0x28) = uVar23;
      *(undefined4 *)(pcVar1 + 0x2c) = uVar24;
      *(undefined4 *)(pcVar1 + 0x30) = uVar25;
      *(undefined4 *)(pcVar1 + 0x34) = uVar26;
      *(undefined4 *)(pcVar1 + 0x38) = uVar27;
      *(undefined4 *)(pcVar1 + 0x3c) = uVar28;
      *(undefined8 *)(pcVar1 + 0x40) = uVar8;
      *(ulonglong *)(param_2 + 0x40) = uVar29;
      if (uVar29 == param_3) goto LAB_006a7807;
      if (uVar29 <= param_3) {
LAB_006a797c:
        (*(code *)PTR_panic_bounds_check_00799520)(uVar30,local_48);
LAB_006a798a:
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar9 = *(ulonglong *)(pcVar1 + 8);
      lVar10 = *(longlong *)(pcVar1 + 0x10);
      uVar11 = *(ulonglong *)(pcVar1 + 0x18);
      if (*pcVar1 == '\0') {
        if (uVar9 < uVar4) {
          if (*(int *)(lVar3 + uVar9 * 0x68) != 1) goto LAB_006a78b3;
          *(ulonglong *)(uVar9 * 0x68 + lVar3 + 8) = param_3;
          goto joined_r0x006a77e4;
        }
        local_48 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791b20;
        goto LAB_006a797c;
      }
      if (uVar29 <= uVar9) goto LAB_006a7922;
      *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x48) = 1;
      *(ulonglong *)(lVar5 + 0x18 + uVar9 * 0x48) = param_3;
joined_r0x006a77e4:
      if (lVar10 == 0) {
        if (uVar4 <= uVar11) goto LAB_006a7968;
        if (*(int *)(lVar3 + uVar11 * 0x68) != 1) goto LAB_006a78b3;
        *(ulonglong *)(uVar11 * 0x68 + lVar3 + 0x10) = param_3;
      }
      else {
        if (uVar29 <= uVar11) {
          local_48 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791b98
          ;
          goto LAB_006a797c;
        }
        *(undefined8 *)(lVar5 + uVar11 * 0x48) = 1;
        *(ulonglong *)(lVar5 + 8 + uVar11 * 0x48) = param_3;
      }
LAB_006a7807:
      if ((uVar6 & 1) == 0 && (uVar29 != uVar7 || uVar6 == 0)) goto LAB_006a7865;
      if (uVar29 != uVar7) {
        param_3 = uVar7;
      }
      param_1 = (**(code **)(local_38 + 0x20))
                          (CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | (uVar29 == uVar7 && uVar6 != 0)
                                   ),local_40);
      puVar13 = puVar13 + -0x12;
    } while (param_3 < uVar29);
  }
  uVar30 = (*(code *)PTR_panic_bounds_check_00799520)
                     (param_1,&
                              PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791a18
                     );
LAB_006a7865:
                    /* WARNING: Could not recover jumptable at 0x006a7887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_38 + 0x20))(uVar30,local_40);
  return;
}


