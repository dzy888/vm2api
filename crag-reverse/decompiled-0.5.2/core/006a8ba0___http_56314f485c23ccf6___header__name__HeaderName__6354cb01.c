// 006a8ba0 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_append2::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

ulonglong __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_append2::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  code *pcVar16;
  ushort uVar17;
  longlong lVar18;
  char cVar19;
  ushort uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int *unaff_RBP;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined6 uStack_3e;
  
  cVar19 = try_reserve_one();
  if (cVar19 == '\0') {
    uVar20 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_1,param_2);
    uVar4 = *(ushort *)(param_1 + 0xb);
    uVar28 = (ulonglong)(uVar20 & uVar4);
    uVar24 = param_1[10];
    lVar6 = param_1[9];
    lVar25 = param_1[4];
    uVar27 = param_1[5];
    lVar7 = *param_2;
    lVar8 = param_2[1];
    lVar18 = param_2[1];
    lVar9 = param_2[2];
    uVar26 = 0;
    uVar31 = extraout_XMM0_Da_00;
LAB_006a8c86:
    uVar29 = uVar28;
    if (uVar24 <= uVar28) {
      uVar29 = 0;
    }
    if (uVar24 <= uVar28 && uVar24 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar28 = (ulonglong)*(ushort *)(lVar6 + uVar29 * 4);
    if (uVar28 == 0xffff) {
      lVar6 = param_2[3];
      lVar18 = *param_3;
      lVar10 = param_3[1];
      lVar13 = param_3[2];
      lVar15 = param_3[3];
      if (0x7fff < uVar27) {
        uVar31 = (**(code **)(lVar18 + 0x20))();
LAB_006a8ebc:
        uVar24 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x20))(uVar31,lVar9);
        }
        goto LAB_006a8fe9;
      }
      lVar14 = param_3[4];
      if (uVar27 == param_1[3]) {
        (*(code *)PTR_grow_one_0079a448)();
        lVar25 = param_1[4];
      }
      lVar22 = uVar27 * 0x68;
      *(ulonglong *)(lVar25 + 0x60 + lVar22) = CONCAT62(uStack_3e,uVar20);
      plVar2 = (longlong *)(lVar25 + 0x50 + lVar22);
      *plVar2 = lVar9;
      plVar2[1] = lVar6;
      plVar2 = (longlong *)(lVar25 + 0x40 + lVar22);
      *plVar2 = lVar7;
      plVar2[1] = lVar8;
      uStack_88 = (undefined4)lVar18;
      uStack_84 = (undefined4)((ulonglong)lVar18 >> 0x20);
      local_80 = (undefined4)lVar10;
      uStack_7c = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_78 = (undefined4)lVar13;
      uStack_74 = (undefined4)((ulonglong)lVar13 >> 0x20);
      local_70 = (undefined4)lVar15;
      uStack_6c = (undefined4)((ulonglong)lVar15 >> 0x20);
      uStack_68 = (undefined4)lVar14;
      uStack_64 = (undefined4)((ulonglong)lVar14 >> 0x20);
      puVar1 = (undefined4 *)(lVar25 + 0x30 + lVar22);
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
      puVar1 = (undefined4 *)(lVar25 + 0x20 + lVar22);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      puVar1 = (undefined4 *)(lVar25 + 0x10 + lVar22);
      *puVar1 = local_90;
      puVar1[1] = uStack_8c;
      puVar1[2] = uStack_88;
      puVar1[3] = uStack_84;
      puVar1 = (undefined4 *)(lVar25 + lVar22);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uStack_98;
      puVar1[3] = uStack_94;
      param_1[5] = uVar27 + 1;
      if ((ulonglong)param_1[10] <= uVar29) {
        uVar31 = (*(code *)PTR_panic_bounds_check_00799520)
                           (CONCAT62(uStack_3e,uVar20),
                            &
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c38
                           );
        goto LAB_006a924b;
      }
      lVar6 = param_1[9];
      *(short *)(lVar6 + uVar29 * 4) = (short)uVar27;
      *(ushort *)(lVar6 + 2 + uVar29 * 4) = uVar20;
      goto LAB_006a8fe7;
    }
    uVar5 = *(ushort *)(lVar6 + 2 + uVar29 * 4);
    uVar17 = uVar5 & uVar4;
    if (uVar26 <= ((int)uVar29 - (uint)uVar17 & (uint)uVar4)) {
      if (uVar5 == uVar20) {
        if (uVar27 <= uVar28) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    ((uint)uVar17,
                     &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c20
                    );
          goto LAB_006a925b;
        }
        unaff_RBP = (int *)(uVar28 * 0x68);
        lVar10 = *(longlong *)(lVar25 + 0x40 + (longlong)unaff_RBP);
        if ((lVar7 == 0) != (lVar10 != 0)) {
          unaff_RBP = (int *)((longlong)unaff_RBP + lVar25);
          if (lVar10 == 0) {
            if ((char)unaff_RBP[0x12] == (char)lVar18) goto LAB_006a8d5f;
          }
          else if (*(longlong *)(unaff_RBP + 0x14) == lVar9) {
            iVar21 = (*(code *)PTR_bcmp_00799020)(CONCAT11((char)(uVar17 >> 8),lVar7 == 0),lVar9);
            uVar31 = extraout_XMM0_Da_01;
            if (iVar21 == 0) goto LAB_006a8d5f;
          }
        }
      }
      uVar26 = uVar26 + 1;
      uVar28 = uVar29 + 1;
      goto LAB_006a8c86;
    }
    lVar6 = *param_1;
    lVar18 = param_2[3];
    lVar10 = *param_3;
    lVar13 = param_3[1];
    lVar15 = param_3[2];
    lVar14 = param_3[3];
    if (0x7fff < uVar27) {
      uVar31 = (**(code **)(lVar10 + 0x20))();
      goto LAB_006a8ebc;
    }
    lVar22 = param_3[4];
    if (uVar27 == param_1[3]) {
      (*(code *)PTR_grow_one_0079a448)();
      lVar25 = param_1[4];
    }
    lVar23 = uVar27 * 0x68;
    *(ulonglong *)(lVar25 + 0x60 + lVar23) = CONCAT62(uStack_3e,uVar20);
    plVar2 = (longlong *)(lVar25 + 0x50 + lVar23);
    *plVar2 = lVar9;
    plVar2[1] = lVar18;
    plVar2 = (longlong *)(lVar25 + 0x40 + lVar23);
    *plVar2 = lVar7;
    plVar2[1] = lVar8;
    plVar2 = (longlong *)(lVar25 + 0x30 + lVar23);
    *plVar2 = lVar14;
    plVar2[1] = lVar22;
    plVar2 = (longlong *)(lVar25 + 0x20 + lVar23);
    *plVar2 = lVar13;
    plVar2[1] = lVar15;
    puVar3 = (undefined8 *)(lVar25 + 0x10 + lVar23);
    *puVar3 = CONCAT44(uStack_8c,local_90);
    puVar3[1] = lVar10;
    *(undefined8 *)(lVar25 + lVar23) = 0;
    ((undefined8 *)(lVar25 + lVar23))[1] = CONCAT44(uStack_94,uStack_98);
    param_1[5] = uVar27 + 1;
    lVar25 = param_1[9];
    uVar24 = param_1[10];
    uVar28 = 0;
    while( true ) {
      bVar30 = uVar24 <= uVar29;
      if (bVar30) {
        uVar29 = 0;
      }
      if (bVar30 && uVar24 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar4 = *(ushort *)(lVar25 + uVar29 * 4);
      if (uVar4 == 0xffff) break;
      uVar28 = uVar28 + 1;
      uVar5 = *(ushort *)(lVar25 + 2 + uVar29 * 4);
      *(short *)(lVar25 + uVar29 * 4) = (short)uVar27;
      *(ushort *)(lVar25 + 2 + uVar29 * 4) = uVar20;
      uVar29 = uVar29 + 1;
      uVar27 = (ulonglong)uVar4;
      uVar20 = uVar5;
    }
    *(short *)(lVar25 + uVar29 * 4) = (short)uVar27;
    *(ushort *)(lVar25 + 2 + uVar29 * 4) = uVar20;
    uVar24 = 0;
    if ((0x1ff < uVar26 && lVar6 != 2 || 0x7f < uVar28) && (*param_1 == 0)) {
      *param_1 = 1;
LAB_006a8fe7:
      uVar24 = 0;
    }
  }
  else {
    uVar31 = (**(code **)(*param_3 + 0x20))(extraout_XMM0_Da,param_3[2]);
    uVar24 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
    if (*param_2 != 0) {
      (**(code **)(*param_2 + 0x20))(uVar31,param_2[2]);
    }
  }
LAB_006a8fe9:
  return uVar24 & 0xffffffff;
LAB_006a8d5f:
  lVar6 = *param_3;
  lVar25 = param_3[1];
  lVar8 = param_3[2];
  lVar18 = param_3[3];
  lVar10 = param_3[4];
  if (*unaff_RBP == 1) {
    piVar11 = *(int **)(unaff_RBP + 4);
    piVar12 = (int *)param_1[8];
    if (piVar12 == (int *)param_1[6]) {
      uVar31 = (*(code *)PTR_grow_one_0079a440)();
    }
    lVar13 = param_1[7];
    *(undefined8 *)(lVar13 + (longlong)piVar12 * 0x48) = 1;
    *(int **)(lVar13 + 8 + (longlong)piVar12 * 0x48) = piVar11;
    *(undefined8 *)(lVar13 + 0x10 + (longlong)piVar12 * 0x48) = 0;
    *(ulonglong *)(lVar13 + 0x18 + (longlong)piVar12 * 0x48) = uVar28;
    *(longlong *)(lVar13 + 0x20 + (longlong)piVar12 * 0x48) = lVar6;
    *(longlong *)(lVar13 + 0x28 + (longlong)piVar12 * 0x48) = lVar25;
    *(longlong *)(lVar13 + 0x30 + (longlong)piVar12 * 0x48) = lVar8;
    *(longlong *)(lVar13 + 0x38 + (longlong)piVar12 * 0x48) = lVar18;
    *(longlong *)(lVar13 + 0x40 + (longlong)piVar12 * 0x48) = lVar10;
    param_1[8] = (longlong)piVar12 + 1;
    if (piVar12 < piVar11) {
LAB_006a924b:
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar31,&
                        PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c68
                );
LAB_006a925b:
                    /* WARNING: Does not return */
      pcVar16 = (code *)invalidInstructionException();
      (*pcVar16)();
    }
    lVar6 = param_1[7];
    *(undefined8 *)(lVar6 + 0x10 + (longlong)piVar11 * 0x48) = 1;
    *(int **)(lVar6 + 0x18 + (longlong)piVar11 * 0x48) = piVar12;
    unaff_RBP[0] = 1;
    unaff_RBP[1] = 0;
    *(int **)(unaff_RBP + 4) = piVar12;
    unaff_RBP = piVar11;
  }
  else {
    lVar13 = param_1[8];
    if (lVar13 == param_1[6]) {
      (*(code *)PTR_grow_one_0079a440)();
    }
    lVar15 = param_1[7];
    *(undefined8 *)(lVar15 + lVar13 * 0x48) = 0;
    *(ulonglong *)(lVar15 + 8 + lVar13 * 0x48) = uVar28;
    *(undefined8 *)(lVar15 + 0x10 + lVar13 * 0x48) = 0;
    *(ulonglong *)(lVar15 + 0x18 + lVar13 * 0x48) = uVar28;
    *(longlong *)(lVar15 + 0x20 + lVar13 * 0x48) = lVar6;
    *(longlong *)(lVar15 + 0x28 + lVar13 * 0x48) = lVar25;
    *(longlong *)(lVar15 + 0x30 + lVar13 * 0x48) = lVar8;
    *(longlong *)(lVar15 + 0x38 + lVar13 * 0x48) = lVar18;
    *(longlong *)(lVar15 + 0x40 + lVar13 * 0x48) = lVar10;
    param_1[8] = lVar13 + 1;
    unaff_RBP[0] = 1;
    unaff_RBP[1] = 0;
    *(longlong *)(unaff_RBP + 2) = lVar13;
    *(longlong *)(unaff_RBP + 4) = lVar13;
  }
  uVar24 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x20))(lVar7,lVar9);
  }
  goto LAB_006a8fe9;
}


