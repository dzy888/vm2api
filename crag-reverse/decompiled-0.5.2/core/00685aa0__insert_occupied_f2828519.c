// 00685aa0 insert_occupied

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::insert_occupied */

void __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::insert_occupied
          (undefined4 param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
          undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  code *pcVar16;
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
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  char *pcVar33;
  undefined4 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined **local_80;
  undefined **local_78;
  
  uVar3 = *(ulonglong *)(param_3 + 0x28);
  if (param_4 < uVar3) {
    lVar4 = *(longlong *)(param_3 + 0x20);
    lVar1 = lVar4 + param_4 * 0x68;
    if (*(char *)(lVar4 + param_4 * 0x68) == '\0') {
LAB_00685daa:
      param_2[4] = *(undefined8 *)(lVar1 + 0x38);
      uVar9 = *(undefined8 *)(lVar1 + 0x18);
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      uVar11 = *(undefined8 *)(lVar1 + 0x30);
      param_2[2] = *(undefined8 *)(lVar1 + 0x28);
      param_2[3] = uVar11;
      *param_2 = uVar9;
      param_2[1] = uVar10;
      uVar9 = param_5[1];
      uVar10 = param_5[2];
      uVar11 = param_5[3];
      *(undefined8 *)(lVar1 + 0x18) = *param_5;
      *(undefined8 *)(lVar1 + 0x20) = uVar9;
      *(undefined8 *)(lVar1 + 0x28) = uVar10;
      *(undefined8 *)(lVar1 + 0x30) = uVar11;
      *(undefined8 *)(lVar1 + 0x38) = param_5[4];
      return;
    }
    uVar36 = *(ulonglong *)(lVar1 + 8);
    uVar35 = *(ulonglong *)(param_3 + 0x40);
    local_80 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790a50;
    if (uVar36 < uVar35) {
      lVar5 = *(longlong *)(param_3 + 0x38);
      puVar34 = (undefined4 *)(uVar35 * 0x48 + -0x48 + lVar5);
      local_78 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790b40;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 8 + uVar36 * 0x48);
        cVar2 = *(char *)(lVar5 + 0x10 + uVar36 * 0x48);
        uVar7 = *(ulonglong *)(lVar5 + 0x18 + uVar36 * 0x48);
        if (*(char *)(lVar5 + uVar36 * 0x48) == '\0') {
          if (cVar2 == '\0') {
            if (uVar3 <= uVar6) {
              local_80 = &
                         PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790a68
              ;
              break;
            }
            *(undefined8 *)(lVar4 + uVar6 * 0x68) = 0;
          }
          else {
            if (uVar3 <= uVar6) {
              local_80 = &
                         PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790a80
              ;
              break;
            }
            if (*(int *)(lVar4 + uVar6 * 0x68) != 1) goto LAB_00685e01;
            *(ulonglong *)(uVar6 * 0x68 + lVar4 + 8) = uVar7;
            if (uVar35 <= uVar7) {
              local_80 = &
                         PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790ab0
              ;
              break;
            }
            *(undefined8 *)(lVar5 + uVar7 * 0x48) = 0;
            *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
          }
        }
        else if (cVar2 == '\0') {
          if (uVar3 <= uVar7) {
            local_80 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790ac8
            ;
            break;
          }
          if (*(int *)(lVar4 + uVar7 * 0x68) != 1) {
LAB_00685e01:
            (*(code *)PTR_unwrap_failed_00799278)();
            goto LAB_00685f07;
          }
          *(ulonglong *)(uVar7 * 0x68 + lVar4 + 0x10) = uVar6;
          if (uVar35 <= uVar6) {
            local_80 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790af8
            ;
            break;
          }
          *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 0;
          *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
        }
        else {
          if (uVar35 <= uVar6) {
            local_80 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790b10
            ;
            break;
          }
          *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 0x18 + uVar6 * 0x48) = uVar7;
          if (uVar35 <= uVar7) {
            local_80 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790b28
            ;
            break;
          }
          *(undefined8 *)(lVar5 + uVar7 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48) = uVar6;
        }
        pcVar33 = (char *)(uVar36 * 0x48 + lVar5);
        uVar6 = *(ulonglong *)(pcVar33 + 0x10);
        uVar7 = *(ulonglong *)(pcVar33 + 0x18);
        lVar8 = *(longlong *)(pcVar33 + 0x20);
        uVar9 = *(undefined8 *)(pcVar33 + 0x28);
        uVar10 = *(undefined8 *)(pcVar33 + 0x30);
        uVar11 = *(undefined8 *)(pcVar33 + 0x38);
        uVar35 = uVar35 - 1;
        uVar12 = *(undefined8 *)(puVar34 + 0x10);
        uVar17 = *puVar34;
        uVar18 = puVar34[1];
        uVar19 = puVar34[2];
        uVar20 = puVar34[3];
        uVar21 = puVar34[4];
        uVar22 = puVar34[5];
        uVar23 = puVar34[6];
        uVar24 = puVar34[7];
        uVar25 = puVar34[8];
        uVar26 = puVar34[9];
        uVar27 = puVar34[10];
        uVar28 = puVar34[0xb];
        uVar29 = puVar34[0xc];
        uVar30 = puVar34[0xd];
        uVar31 = puVar34[0xe];
        uVar32 = puVar34[0xf];
        *(undefined4 *)pcVar33 = uVar17;
        *(undefined4 *)(pcVar33 + 4) = uVar18;
        *(undefined4 *)(pcVar33 + 8) = uVar19;
        *(undefined4 *)(pcVar33 + 0xc) = uVar20;
        *(undefined4 *)(pcVar33 + 0x10) = uVar21;
        *(undefined4 *)(pcVar33 + 0x14) = uVar22;
        *(undefined4 *)(pcVar33 + 0x18) = uVar23;
        *(undefined4 *)(pcVar33 + 0x1c) = uVar24;
        *(undefined4 *)(pcVar33 + 0x20) = uVar25;
        *(undefined4 *)(pcVar33 + 0x24) = uVar26;
        *(undefined4 *)(pcVar33 + 0x28) = uVar27;
        *(undefined4 *)(pcVar33 + 0x2c) = uVar28;
        *(undefined4 *)(pcVar33 + 0x30) = uVar29;
        *(undefined4 *)(pcVar33 + 0x34) = uVar30;
        *(undefined4 *)(pcVar33 + 0x38) = uVar31;
        *(undefined4 *)(pcVar33 + 0x3c) = uVar32;
        *(undefined8 *)(pcVar33 + 0x40) = uVar12;
        *(ulonglong *)(param_3 + 0x40) = uVar35;
        if (uVar35 == uVar36) goto LAB_00685d4d;
        if (uVar35 <= uVar36) {
LAB_00685ebe:
          (*(code *)PTR_panic_bounds_check_00799520)(uVar17,local_78,uVar25,uVar29,uVar11,uVar9);
          goto LAB_00685f07;
        }
        uVar13 = *(ulonglong *)(pcVar33 + 8);
        lVar14 = *(longlong *)(pcVar33 + 0x10);
        uVar15 = *(ulonglong *)(pcVar33 + 0x18);
        if (*pcVar33 == '\0') {
          if (uVar3 <= uVar13) {
            local_78 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790b58
            ;
            goto LAB_00685ebe;
          }
          if (*(int *)(lVar4 + uVar13 * 0x68) == 1) {
            *(ulonglong *)(uVar13 * 0x68 + lVar4 + 8) = uVar36;
            goto joined_r0x00685d27;
          }
LAB_00685e1c:
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_00685f07;
        }
        if (uVar35 <= uVar13) {
          local_78 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790b88
          ;
          goto LAB_00685ebe;
        }
        *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x48) = 1;
        *(ulonglong *)(lVar5 + 0x18 + uVar13 * 0x48) = uVar36;
joined_r0x00685d27:
        if (lVar14 == 0) {
          if (uVar3 <= uVar15) {
            local_78 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790ba0
            ;
            goto LAB_00685ebe;
          }
          if (*(int *)(lVar4 + uVar15 * 0x68) != 1) goto LAB_00685e1c;
          *(ulonglong *)(uVar15 * 0x68 + lVar4 + 0x10) = uVar36;
        }
        else {
          if (uVar35 <= uVar15) {
            local_78 = &
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790bd0
            ;
            goto LAB_00685ebe;
          }
          *(undefined8 *)(lVar5 + uVar15 * 0x48) = 1;
          *(ulonglong *)(lVar5 + 8 + uVar15 * 0x48) = uVar36;
        }
LAB_00685d4d:
        pcVar16 = *(code **)(lVar8 + 0x20);
        if ((uVar6 & 1) == 0 && (uVar35 != uVar7 || uVar6 == 0)) {
          (*pcVar16)(pcVar16,uVar10);
          goto LAB_00685daa;
        }
        param_1 = (*pcVar16)(pcVar16,uVar10);
        if (uVar35 != uVar7) {
          uVar36 = uVar7;
        }
        puVar34 = puVar34 + -0x12;
      } while (uVar36 < uVar35);
    }
    (*(code *)PTR_panic_bounds_check_00799520)(param_1,local_80);
  }
  else {
    (*(code *)PTR_panic_bounds_check_00799520)
              (param_5,&
                       PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791448
              );
  }
LAB_00685f07:
                    /* WARNING: Does not return */
  pcVar16 = (code *)invalidInstructionException();
  (*pcVar16)();
}


