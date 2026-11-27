// 006b3b20 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::remove::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

undefined4 * __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::remove::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (undefined4 param_1,undefined4 *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *pcVar13;
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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ushort uVar34;
  int iVar35;
  longlong lVar36;
  int *piVar37;
  undefined **ppuVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined8 uVar48;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar49;
  undefined **local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int *local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar40 = *(ulonglong *)(param_3 + 0x28);
  if (uVar40 != 0) {
    uVar34 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_3,param_4);
    uVar5 = *(ushort *)(param_3 + 0x58);
    uVar45 = (ulonglong)(uVar34 & uVar5);
    uVar44 = *(ulonglong *)(param_3 + 0x50);
    lVar43 = *(longlong *)(param_3 + 0x20);
    lVar9 = *(longlong *)(param_3 + 0x48);
    lVar39 = *param_4;
    lVar36 = param_4[1];
    lVar10 = param_4[2];
    local_108 = &anon_9036e64db263aa0aa2a972d6d60b9936_1_llvm_9907365231172608471;
    uVar47 = 0;
    param_1 = extraout_XMM0_Da;
    do {
      uVar46 = uVar45;
      if (uVar44 <= uVar45) {
        uVar46 = 0;
      }
      if (uVar44 <= uVar45 && uVar44 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar6 = *(ushort *)(lVar9 + uVar46 * 4);
      uVar45 = (ulonglong)uVar6;
      if ((uVar45 == 0xffff) ||
         (uVar7 = *(ushort *)(lVar9 + 2 + uVar46 * 4),
         ((int)uVar46 - (uint)(uVar7 & uVar5) & (uint)uVar5) < uVar47)) goto LAB_006b3d66;
      if (uVar7 == uVar34) {
        if (uVar40 <= uVar45) goto LAB_006b4052;
        lVar41 = uVar45 * 0x68;
        lVar11 = *(longlong *)(lVar43 + 0x40 + lVar41);
        if ((lVar39 == 0) != (lVar11 != 0)) {
          piVar37 = (int *)(lVar43 + lVar41);
          if (lVar11 == 0) {
            if ((char)piVar37[0x12] == (char)lVar36) goto LAB_006b3cca;
          }
          else if (*(longlong *)(piVar37 + 0x14) == lVar10) {
            local_90 = piVar37;
            local_88 = lVar43;
            local_80 = uVar44;
            iVar35 = (*(code *)PTR_bcmp_00799020)(piVar37,lVar10);
            piVar37 = local_90;
            lVar43 = local_88;
            uVar44 = local_80;
            param_1 = extraout_XMM0_Da_00;
            if (iVar35 == 0) goto LAB_006b3cca;
          }
        }
      }
      uVar47 = uVar47 + 1;
      uVar45 = uVar46 + 1;
    } while( true );
  }
  lVar39 = *param_4;
LAB_006b3d66:
  *(undefined1 *)(param_2 + 8) = 2;
  goto LAB_006b3d6c;
LAB_006b3cca:
  if (*piVar37 == 1) {
    uVar48 = *(undefined8 *)(piVar37 + 2);
    while( true ) {
      uVar49 = http[56314f485c23ccf6]::header::map::remove_extra_value::
               <http[56314f485c23ccf6]::header::value::HeaderValue>
                         (&local_f8,lVar43,uVar40,param_3 + 0x30,uVar48);
      uVar48 = uStack_e0;
      if ((int)local_e8 != 1) break;
      (**(code **)(local_d8 + 0x20))(uVar49,local_c8);
      lVar43 = *(longlong *)(param_3 + 0x20);
      uVar40 = *(ulonglong *)(param_3 + 0x28);
    }
    param_1 = (**(code **)(local_d8 + 0x20))(uVar49,local_c8);
    uVar44 = *(ulonglong *)(param_3 + 0x50);
  }
  if (uVar44 <= uVar46) {
    local_108 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007924d0;
LAB_006b4052:
    (*(code *)PTR_panic_bounds_check_00799520)(param_1,local_108);
    goto LAB_006b4074;
  }
  lVar9 = *(longlong *)(param_3 + 0x48);
  *(undefined4 *)(lVar9 + uVar46 * 4) = 0xffff;
  if (*(ulonglong *)(param_3 + 0x28) <= uVar45) {
    (*(code *)PTR_assert_failed_0079a108)();
    goto LAB_006b4074;
  }
  lVar10 = *(longlong *)(param_3 + 0x20);
  local_98 = *(undefined8 *)(lVar10 + 0x60 + lVar41);
  puVar1 = (undefined8 *)(lVar10 + 0x50 + lVar41);
  local_a8 = *puVar1;
  uStack_a0 = puVar1[1];
  plVar2 = (longlong *)(lVar10 + 0x40 + lVar41);
  local_b8 = *plVar2;
  lStack_b0 = plVar2[1];
  local_f8 = *(undefined8 *)(lVar10 + lVar41);
  uStack_f0 = ((undefined8 *)(lVar10 + lVar41))[1];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar41);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  plVar2 = (longlong *)(lVar10 + 0x20 + lVar41);
  local_d8 = *plVar2;
  lVar43 = plVar2[1];
  puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar41);
  uVar28 = *puVar1;
  uVar29 = puVar1[1];
  uVar40 = *(ulonglong *)(param_3 + 0x28) - 1;
  lVar36 = uVar40 * 0x68;
  uVar48 = *(undefined8 *)(lVar10 + 0x60 + lVar36);
  puVar3 = (undefined4 *)(lVar10 + 0x50 + lVar36);
  uVar49 = *puVar3;
  uVar14 = puVar3[1];
  uVar15 = puVar3[2];
  uVar16 = puVar3[3];
  puVar3 = (undefined4 *)(lVar10 + 0x40 + lVar36);
  uVar17 = *puVar3;
  uVar18 = puVar3[1];
  uVar19 = puVar3[2];
  uVar20 = puVar3[3];
  puVar3 = (undefined4 *)(lVar10 + lVar36);
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar4 = (undefined4 *)(lVar10 + 0x10 + lVar36);
  uVar24 = *puVar4;
  uVar25 = puVar4[1];
  uVar26 = puVar4[2];
  uVar27 = puVar4[3];
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar36);
  uVar30 = *puVar1;
  uVar31 = puVar1[1];
  puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar36);
  uVar32 = *puVar1;
  uVar33 = puVar1[1];
  puVar4 = (undefined4 *)(lVar10 + lVar41);
  *puVar4 = *puVar3;
  puVar4[1] = uVar21;
  puVar4[2] = uVar22;
  puVar4[3] = uVar23;
  puVar3 = (undefined4 *)(lVar10 + 0x10 + lVar41);
  *puVar3 = uVar24;
  puVar3[1] = uVar25;
  puVar3[2] = uVar26;
  puVar3[3] = uVar27;
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar41);
  *puVar1 = uVar30;
  puVar1[1] = uVar31;
  puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar41);
  *puVar1 = uVar32;
  puVar1[1] = uVar33;
  puVar3 = (undefined4 *)(lVar10 + 0x40 + lVar41);
  *puVar3 = uVar17;
  puVar3[1] = uVar18;
  puVar3[2] = uVar19;
  puVar3[3] = uVar20;
  puVar3 = (undefined4 *)(lVar10 + 0x50 + lVar41);
  *puVar3 = uVar49;
  puVar3[1] = uVar14;
  puVar3[2] = uVar15;
  puVar3[3] = uVar16;
  *(undefined8 *)(lVar10 + 0x60 + lVar41) = uVar48;
  *(ulonglong *)(param_3 + 0x28) = uVar40;
  uStack_d0 = lVar43;
  local_c8 = uVar28;
  uStack_c0 = uVar29;
  if (uVar45 < uVar40) {
    piVar37 = (int *)(lVar10 + lVar41);
    uVar5 = *(ushort *)(piVar37 + 0x18);
    uVar47 = (ulonglong)(*(ushort *)(param_3 + 0x58) & uVar5);
    while( true ) {
      do {
        uVar42 = uVar47;
        uVar47 = 0;
      } while (uVar44 <= uVar42);
      uVar34 = *(ushort *)(lVar9 + uVar42 * 4);
      if (uVar40 <= uVar34 && uVar34 != 0xffff) break;
      uVar47 = uVar42 + 1;
    }
    *(ushort *)(lVar9 + uVar42 * 4) = uVar6;
    *(ushort *)(lVar9 + 2 + uVar42 * 4) = uVar5;
    if (*piVar37 != 1) goto LAB_006b3f48;
    uVar47 = *(ulonglong *)(piVar37 + 2);
    uVar42 = *(ulonglong *)(param_3 + 0x40);
    if (uVar47 < uVar42) {
      uVar12 = *(ulonglong *)(piVar37 + 4);
      lVar10 = *(longlong *)(param_3 + 0x38);
      *(undefined8 *)(lVar10 + uVar47 * 0x48) = 0;
      *(ulonglong *)(lVar10 + 8 + uVar47 * 0x48) = uVar45;
      if (uVar12 < uVar42) {
        *(undefined8 *)(lVar10 + 0x10 + uVar12 * 0x48) = 0;
        *(ulonglong *)(lVar10 + 0x18 + uVar12 * 0x48) = uVar45;
        goto LAB_006b3f48;
      }
      ppuVar38 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792500;
    }
    else {
      ppuVar38 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007924e8;
    }
  }
  else {
LAB_006b3f48:
    if (uVar40 == 0) {
LAB_006b3fb1:
      local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
      local_d8._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
      uStack_d0._0_4_ = (undefined4)lVar43;
      uStack_d0._4_4_ = (undefined4)((ulonglong)lVar43 >> 0x20);
      local_c8._0_4_ = (undefined4)uVar28;
      local_c8._4_4_ = (undefined4)((ulonglong)uVar28 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uVar29;
      uStack_c0._4_4_ = (undefined4)((ulonglong)uVar29 >> 0x20);
      local_48 = (undefined4)local_c8;
      uStack_44 = local_c8._4_4_;
      uStack_40 = (undefined4)uStack_c0;
      uStack_3c = uStack_c0._4_4_;
      local_58 = (undefined4)local_d8;
      uStack_54 = local_d8._4_4_;
      uStack_50 = (undefined4)uStack_d0;
      uStack_4c = uStack_d0._4_4_;
      local_68 = (int)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      *(undefined8 *)(param_2 + 8) = uVar29;
      *(longlong *)(param_2 + 4) = lVar43;
      *(undefined8 *)(param_2 + 6) = uVar28;
      *param_2 = (undefined4)uStack_e0;
      param_2[1] = uStack_e0._4_4_;
      param_2[2] = (undefined4)local_d8;
      param_2[3] = local_d8._4_4_;
      param_1 = (undefined4)uStack_e0;
      local_78 = local_f8;
      uStack_70 = uStack_f0;
      if (local_b8 != 0) {
        param_1 = (**(code **)(local_b8 + 0x20))(uVar29,local_a8);
      }
LAB_006b3d6c:
      if (lVar39 != 0) {
        (**(code **)(lVar39 + 0x20))(param_1,param_4[2]);
      }
      return param_2;
    }
    uVar5 = *(ushort *)(param_3 + 0x58);
    ppuVar38 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792518;
    while( true ) {
      uVar40 = uVar46 + 1;
      if (uVar44 <= uVar40) {
        uVar40 = 0;
      }
      sVar8 = *(short *)(lVar9 + uVar40 * 4);
      if ((sVar8 == -1) ||
         (uVar34 = *(ushort *)(lVar9 + 2 + uVar40 * 4),
         ((int)uVar40 - (uint)(uVar34 & uVar5) & (uint)uVar5) == 0)) goto LAB_006b3fb1;
      if (uVar44 <= uVar46) break;
      *(short *)(lVar9 + uVar46 * 4) = sVar8;
      *(ushort *)(lVar9 + 2 + uVar46 * 4) = uVar34;
      *(undefined4 *)(lVar9 + uVar40 * 4) = 0xffff;
      uVar46 = uVar40;
    }
  }
  (*(code *)PTR_panic_bounds_check_00799520)(lVar9,ppuVar38);
LAB_006b4074:
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}


