// 006b4650 <http[56314f485c23ccf6]::header::value::HeaderValue>

/* http[56314f485c23ccf6]::header::map::remove_extra_value::<http[56314f485c23ccf6]::header::value::HeaderValue>
    */

void __rustcall
http[56314f485c23ccf6]::header::map::remove_extra_value::
<http[56314f485c23ccf6]::header::value::HeaderValue>
          (undefined4 param_1,longlong *param_2,longlong param_3,ulonglong param_4,longlong param_5,
          ulonglong param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined **ppuVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined4 uVar32;
  
  uVar27 = *(ulonglong *)(param_5 + 0x10);
  if (param_6 < uVar27) {
    lVar5 = *(longlong *)(param_5 + 8);
    uVar29 = *(ulonglong *)(lVar5 + 8 + param_6 * 0x48);
    cVar4 = *(char *)(lVar5 + 0x10 + param_6 * 0x48);
    uVar30 = *(ulonglong *)(lVar5 + 0x18 + param_6 * 0x48);
    if (*(char *)(lVar5 + param_6 * 0x48) == '\0') {
      if (cVar4 == '\0') {
        if (param_4 <= uVar29) goto LAB_006b49a3;
        *(undefined8 *)(param_3 + uVar29 * 0x68) = 0;
      }
      else {
        if (param_4 <= uVar29) goto LAB_006b4977;
        if (*(char *)(param_3 + uVar29 * 0x68) == '\0') {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_006b4919;
        }
        *(ulonglong *)(uVar29 * 0x68 + param_3 + 8) = uVar30;
        if (uVar27 <= uVar30) {
          param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                              (param_5,&
                                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792380
                              );
          goto LAB_006b49f2;
        }
        *(undefined8 *)(lVar5 + uVar30 * 0x48) = 0;
        *(ulonglong *)(lVar5 + 8 + uVar30 * 0x48) = uVar29;
      }
LAB_006b4766:
      plVar1 = (longlong *)(lVar5 + param_6 * 0x48);
      lVar28 = *plVar1;
      uVar29 = plVar1[1];
      lVar31 = plVar1[2];
      uVar30 = plVar1[3];
      lVar24 = plVar1[4];
      uVar13 = *(undefined4 *)((longlong)plVar1 + 0x24);
      lVar25 = plVar1[5];
      uVar14 = *(undefined4 *)((longlong)plVar1 + 0x2c);
      lVar6 = plVar1[6];
      lVar7 = plVar1[7];
      lVar8 = plVar1[8];
      uVar27 = uVar27 - 1;
      lVar9 = *(longlong *)(lVar5 + 0x40 + uVar27 * 0x48);
      puVar2 = (undefined4 *)(lVar5 + uVar27 * 0x48);
      uVar32 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      plVar3 = (longlong *)(lVar5 + 0x10 + uVar27 * 0x48);
      lVar18 = *plVar3;
      lVar19 = plVar3[1];
      plVar3 = (longlong *)(lVar5 + 0x20 + uVar27 * 0x48);
      lVar20 = *plVar3;
      lVar21 = plVar3[1];
      plVar3 = (longlong *)(lVar5 + 0x30 + uVar27 * 0x48);
      lVar22 = *plVar3;
      lVar23 = plVar3[1];
      *(undefined4 *)plVar1 = uVar32;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar15;
      *(undefined4 *)(plVar1 + 1) = uVar16;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar17;
      plVar1[2] = lVar18;
      plVar1[3] = lVar19;
      plVar1[4] = lVar20;
      plVar1[5] = lVar21;
      plVar1[6] = lVar22;
      plVar1[7] = lVar23;
      plVar1[8] = lVar9;
      *(ulonglong *)(param_5 + 0x10) = uVar27;
      if (param_6 == uVar27) goto LAB_006b48aa;
      if (uVar27 <= param_6) goto LAB_006b495b;
      uVar10 = plVar1[1];
      lVar9 = plVar1[2];
      uVar11 = plVar1[3];
      if ((char)*plVar1 == '\0') {
        if (param_4 <= uVar10) {
          ppuVar26 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792428
          ;
          goto LAB_006b4a1d;
        }
        if (*(int *)(param_3 + uVar10 * 0x68) != 1) goto LAB_006b4936;
        *(ulonglong *)(uVar10 * 0x68 + param_3 + 8) = param_6;
      }
      else {
        if (uVar27 <= uVar10) goto LAB_006b49c8;
        *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x48) = 1;
        *(ulonglong *)(lVar5 + 0x18 + uVar10 * 0x48) = param_6;
      }
      if (lVar9 != 0) {
        if (uVar11 < uVar27) {
          *(undefined8 *)(lVar5 + uVar11 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 8 + uVar11 * 0x48) = param_6;
LAB_006b48aa:
          if (lVar31 != 0 && uVar30 == uVar27) {
            lVar31 = 1;
            uVar30 = param_6;
          }
          if (lVar28 != 0 && uVar29 == uVar27) {
            lVar28 = 1;
            uVar29 = param_6;
          }
          *param_2 = lVar28;
          param_2[1] = uVar29;
          param_2[2] = lVar31;
          param_2[3] = uVar30;
          *(int *)(param_2 + 4) = (int)lVar24;
          *(undefined4 *)((longlong)param_2 + 0x24) = uVar13;
          *(int *)(param_2 + 5) = (int)lVar25;
          *(undefined4 *)((longlong)param_2 + 0x2c) = uVar14;
          param_2[6] = lVar6;
          param_2[7] = lVar7;
          param_2[8] = lVar8;
          return;
        }
        goto LAB_006b4a02;
      }
      if (uVar11 < param_4) {
        if (*(int *)(param_3 + uVar11 * 0x68) == 1) {
          *(ulonglong *)(param_3 + uVar11 * 0x68 + 0x10) = param_6;
          goto LAB_006b48aa;
        }
        goto LAB_006b4936;
      }
      ppuVar26 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792470;
    }
    else if (cVar4 == '\0') {
      if (param_4 <= uVar30) goto LAB_006b498d;
      if (*(char *)(param_3 + uVar30 * 0x68) == '\0') {
LAB_006b4919:
        (*(code *)PTR_unwrap_failed_00799278)();
LAB_006b4936:
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_006b4a34;
      }
      *(ulonglong *)(uVar30 * 0x68 + param_3 + 0x10) = uVar29;
      if (uVar29 < uVar27) {
        *(undefined8 *)(lVar5 + 0x10 + uVar29 * 0x48) = 0;
        *(ulonglong *)(lVar5 + 0x18 + uVar29 * 0x48) = uVar30;
        goto LAB_006b4766;
      }
LAB_006b49f2:
      uVar32 = (*(code *)PTR_panic_bounds_check_00799520)
                         (param_1,&
                                  PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007923c8
                         );
LAB_006b4a02:
      ppuVar26 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007924a0;
    }
    else {
      if (uVar29 < uVar27) {
        *(undefined8 *)(lVar5 + 0x10 + uVar29 * 0x48) = 1;
        *(ulonglong *)(lVar5 + 0x18 + uVar29 * 0x48) = uVar30;
        if (uVar30 < uVar27) {
          *(undefined8 *)(lVar5 + uVar30 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 8 + uVar30 * 0x48) = uVar29;
          goto LAB_006b4766;
        }
      }
      else {
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_5,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007923e0
                            );
LAB_006b4977:
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_1,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792350
                            );
LAB_006b498d:
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_1,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792398
                            );
LAB_006b49a3:
        param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                            (param_1,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792338
                            );
      }
      uVar32 = (*(code *)PTR_panic_bounds_check_00799520)
                         (param_1,&
                                  PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007923f8
                         );
LAB_006b49c8:
      ppuVar26 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792458;
    }
  }
  else {
    uVar32 = (*(code *)PTR_panic_bounds_check_00799520)
                       (param_5,&
                                PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792320
                       );
LAB_006b495b:
    ppuVar26 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792410;
  }
LAB_006b4a1d:
  (*(code *)PTR_panic_bounds_check_00799520)(uVar32,ppuVar26);
LAB_006b4a34:
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}


