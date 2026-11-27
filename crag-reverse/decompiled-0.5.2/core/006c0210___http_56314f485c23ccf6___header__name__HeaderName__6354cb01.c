// 006c0210 <http[56314f485c23ccf6]::header::name::HeaderName>

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

void __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  int iVar22;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar23;
  uint uVar24;
  byte *******pppppppbVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  char *pcVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ushort uVar36;
  uint uVar37;
  bool bVar38;
  bool bVar39;
  undefined8 extraout_XMM0_Qa;
  longlong lVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  longlong local_128;
  ulonglong local_100;
  byte *******local_f8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ushort local_68;
  undefined6 uStack_66;
  byte *******local_58;
  longlong local_50;
  char *local_48;
  longlong local_40;
  ulonglong local_38;
  
  cVar21 = try_reserve_one();
  if (cVar21 == '\0') {
    local_50 = *param_2;
    if (local_50 == 2) {
      local_a8 = *(undefined1 (*) [16])(param_2 + 1);
      auVar42._0_8_ = local_a8._0_8_;
      auVar42._8_4_ = local_a8._0_4_;
      auVar42._12_4_ = local_a8._4_4_;
      local_c8 = auVar42 ^ _DAT_00183170;
      auVar43._0_8_ = local_a8._8_8_;
      auVar43._8_4_ = local_a8._8_4_;
      auVar43._12_4_ = local_a8._12_4_;
      local_b8 = auVar43 ^ _DAT_00182bf0;
      local_98 = (undefined1  [16])0x0;
      local_88 = 0;
      local_128 = *param_3;
      local_58 = (byte *******)(ulonglong)(local_128 != 0);
      <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::
      write(local_c8,&local_58,8);
      if (local_128 == 0) {
        local_f8 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
        pppppppbVar25 = (byte *******)&local_58;
        lVar30 = 8;
        local_58 = local_f8;
      }
      else {
        pppppppbVar25 = (byte *******)param_3[1];
        lVar30 = param_3[2];
        local_f8 = pppppppbVar25;
      }
      <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::
      write(local_c8,pppppppbVar25,lVar30);
      uVar33 = local_98._0_8_ << 0x38 | local_98._8_8_;
      uVar26 = local_b8._8_8_ ^ uVar33;
      uVar32 = local_c8._0_8_ + local_b8._0_8_;
      uVar23 = (local_b8._0_8_ << 0xd | (ulonglong)local_b8._0_8_ >> 0x33) ^ uVar32;
      uVar27 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ local_c8._8_8_ + uVar26;
      uVar29 = local_c8._8_8_ + uVar26 + uVar23;
      uVar32 = (uVar32 << 0x20 | uVar32 >> 0x20) + uVar27;
      uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar29;
      uVar26 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar32;
      uVar32 = (uVar32 ^ uVar33) + uVar23;
      uVar27 = ((uVar29 << 0x20 | uVar29 >> 0x20) ^ 0xff) + uVar26;
      uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar32;
      uVar26 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ uVar27;
      uVar27 = uVar27 + uVar23;
      uVar29 = (uVar32 << 0x20 | uVar32 >> 0x20) + uVar26;
      uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar27;
      uVar26 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar29;
      uVar29 = uVar29 + uVar23;
      uVar27 = (uVar27 << 0x20 | uVar27 >> 0x20) + uVar26;
      uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29;
      uVar26 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ uVar27;
      uVar27 = uVar27 + uVar23;
      uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar26;
      uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar27;
      uVar26 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar29;
      lVar30 = (uVar27 << 0x20 | uVar27 >> 0x20) + uVar26;
      uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29 + uVar23;
      lVar31 = lVar30 + uVar23;
      uVar37 = (uint)((ulonglong)lVar31 >> 0x20) ^ (uint)lVar31 ^
               ((uint)(uVar26 >> 0x10) ^ (uint)((ulonglong)lVar30 >> 0x20)) >> 0xb ^
               (uint)(uVar23 >> 0x2f);
    }
    else {
      local_128 = *param_3;
      uVar37 = (local_128 != 0 ^ 0x84222325) * 0xaef4a21;
      if (local_128 == 0) {
        local_f8 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
        uVar37 = (*(byte *)(param_3 + 1) ^ 0x281a39c5) * 0xaef4a21;
        local_128 = 0;
      }
      else {
        local_f8 = (byte *******)param_3[1];
        uVar23 = param_3[2];
        if (uVar23 != 0) {
          uVar26 = uVar23 & 7;
          pppppppbVar25 = local_f8;
          if (uVar26 != 0) {
            do {
              bVar11 = *(byte *)pppppppbVar25;
              pppppppbVar25 = (byte *******)((longlong)pppppppbVar25 + 1);
              uVar37 = (bVar11 ^ uVar37) * 0x1b3;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          if (7 < uVar23) {
            do {
              bVar11 = *(byte *)pppppppbVar25;
              pbVar1 = (byte *)((longlong)pppppppbVar25 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar25 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar25 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar25 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar25 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar25 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar25 + 7);
              pppppppbVar25 = pppppppbVar25 + 1;
              uVar37 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar11 ^ uVar37) * 0x1b3) * 0x1b3) * 0x1b3
                       ) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar25 != (byte *******)((longlong)local_f8 + uVar23));
          }
        }
      }
    }
    uVar37 = uVar37 & 0x7fff;
    uVar26 = (ulonglong)*(ushort *)(param_2 + 0xb);
    uVar27 = (ulonglong)(uVar37 & *(ushort *)(param_2 + 0xb));
    uVar23 = param_2[10];
    lVar31 = param_2[9];
    lVar35 = param_2[4];
    local_100 = param_2[5];
    lVar14 = param_3[1];
    lVar30 = param_3[2];
    uVar29 = 0;
    do {
      uVar32 = uVar27;
      if (uVar23 <= uVar27) {
        uVar32 = 0;
      }
      if (uVar23 <= uVar27 && uVar23 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar27 = (ulonglong)*(ushort *)(lVar31 + uVar32 * 4);
      uVar36 = (ushort)uVar37;
      if (uVar27 == 0xffff) {
        lStack_70 = param_3[3];
        if (0x7fff < local_100) {
          uVar41 = (**(code **)(*param_4 + 0x20))();
          if (local_128 != 0) {
            (**(code **)(local_128 + 0x20))(uVar41,lVar30);
          }
LAB_006c089c:
          *(undefined1 *)(param_1 + 4) = 0xff;
          return;
        }
        local_88 = local_128;
        local_b8._8_8_ = *param_4;
        local_98._8_8_ = param_4[4];
        local_98._0_8_ = param_4[3];
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_c8._8_8_;
        local_c8 = auVar19 << 0x40;
        local_a8 = *(undefined1 (*) [16])(param_4 + 1);
        lStack_80 = lVar14;
        local_78 = lVar30;
        local_68 = uVar36;
        if (local_100 == param_2[3]) {
          (*(code *)PTR_grow_one_0079a2e8)();
          lVar35 = param_2[4];
        }
        lVar30 = local_100 * 0x68;
        *(ulonglong *)(lVar35 + 0x60 + lVar30) = CONCAT62(uStack_66,local_68);
        plVar9 = (longlong *)(lVar35 + 0x50 + lVar30);
        *plVar9 = local_78;
        plVar9[1] = lStack_70;
        plVar9 = (longlong *)(lVar35 + 0x40 + lVar30);
        *plVar9 = local_88;
        plVar9[1] = lStack_80;
        puVar10 = (undefined4 *)(lVar35 + 0x30 + lVar30);
        *puVar10 = local_98._0_4_;
        puVar10[1] = local_98._4_4_;
        puVar10[2] = local_98._8_4_;
        puVar10[3] = local_98._12_4_;
        puVar10 = (undefined4 *)(lVar35 + 0x20 + lVar30);
        *puVar10 = local_a8._0_4_;
        puVar10[1] = local_a8._4_4_;
        puVar10[2] = local_a8._8_4_;
        puVar10[3] = local_a8._12_4_;
        puVar8 = (undefined8 *)(lVar35 + 0x10 + lVar30);
        *puVar8 = local_b8._0_8_;
        puVar8[1] = local_b8._8_8_;
        *(undefined8 *)(lVar35 + lVar30) = local_c8._0_8_;
        ((undefined8 *)(lVar35 + lVar30))[1] = local_c8._8_8_;
        param_2[5] = local_100 + 1;
        if ((ulonglong)param_2[10] <= uVar32) {
          lVar31 = (*(code *)PTR_panic_bounds_check_00799520)
                             (CONCAT62(uStack_66,local_68),
                              &
                              PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792f48
                             );
          goto LAB_006c0b78;
        }
        lVar30 = param_2[9];
        *(short *)(lVar30 + uVar32 * 4) = (short)local_100;
        *(ushort *)(lVar30 + 2 + uVar32 * 4) = uVar36;
        goto LAB_006c09ae;
      }
      uVar13 = *(ushort *)(lVar31 + 2 + uVar32 * 4);
      uVar24 = (uint)uVar13 & (uint)uVar26;
      if (((int)uVar32 - uVar24 & (uint)uVar26) < uVar29) {
        bVar39 = (int)local_50 != 2;
        lStack_70 = param_3[3];
        lVar31 = *param_4;
        if (0x7fff < local_100) {
          uVar41 = (**(code **)(lVar31 + 0x20))();
          if (local_128 != 0) {
            (**(code **)(local_128 + 0x20))(uVar41,lVar30);
          }
          goto LAB_006c089c;
        }
        local_98._8_8_ = param_4[4];
        local_88 = local_128;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_c8._8_8_;
        local_c8 = auVar20 << 0x40;
        local_a8 = *(undefined1 (*) [16])(param_4 + 1);
        lStack_80 = lVar14;
        local_78 = lVar30;
        local_68 = uVar36;
        local_b8._8_8_ = lVar31;
        local_98._0_8_ = param_4[3];
        if (local_100 == param_2[3]) {
          (*(code *)PTR_grow_one_0079a2e8)();
          lVar35 = param_2[4];
        }
        lVar30 = local_100 * 0x68;
        *(ulonglong *)(lVar35 + 0x60 + lVar30) = CONCAT62(uStack_66,local_68);
        plVar9 = (longlong *)(lVar35 + 0x50 + lVar30);
        *plVar9 = local_78;
        plVar9[1] = lStack_70;
        plVar9 = (longlong *)(lVar35 + 0x40 + lVar30);
        *plVar9 = local_88;
        plVar9[1] = lStack_80;
        plVar9 = (longlong *)(lVar35 + 0x30 + lVar30);
        *plVar9 = local_98._0_8_;
        plVar9[1] = local_98._8_8_;
        puVar8 = (undefined8 *)(lVar35 + 0x20 + lVar30);
        *puVar8 = local_a8._0_8_;
        puVar8[1] = local_a8._8_8_;
        puVar8 = (undefined8 *)(lVar35 + 0x10 + lVar30);
        *puVar8 = local_b8._0_8_;
        puVar8[1] = local_b8._8_8_;
        *(undefined8 *)(lVar35 + lVar30) = local_c8._0_8_;
        ((undefined8 *)(lVar35 + lVar30))[1] = local_c8._8_8_;
        param_2[5] = local_100 + 1;
        lVar30 = param_2[9];
        uVar23 = param_2[10];
        uVar26 = 0;
        while( true ) {
          bVar38 = uVar23 <= uVar32;
          if (bVar38) {
            uVar32 = 0;
          }
          if (bVar38 && uVar23 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar36 = *(ushort *)(lVar30 + uVar32 * 4);
          if (uVar36 == 0xffff) break;
          uVar26 = uVar26 + 1;
          uVar13 = *(ushort *)(lVar30 + 2 + uVar32 * 4);
          *(short *)(lVar30 + uVar32 * 4) = (short)local_100;
          *(short *)(lVar30 + 2 + uVar32 * 4) = (short)uVar37;
          uVar32 = uVar32 + 1;
          uVar37 = (uint)uVar13;
          local_100 = (ulonglong)uVar36;
        }
        *(short *)(lVar30 + uVar32 * 4) = (short)local_100;
        *(short *)(lVar30 + 2 + uVar32 * 4) = (short)uVar37;
        if ((bVar39 && 0x1ff < uVar29 || 0x7f < uVar26) && (*param_2 == 0)) {
          *param_2 = 1;
        }
LAB_006c09ae:
        *(undefined1 *)(param_1 + 4) = 2;
        return;
      }
      if (uVar13 == uVar36) {
        if (local_100 <= uVar27) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar24,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792f30
                    );
          goto LAB_006c0b92;
        }
        lVar34 = uVar27 * 0x68;
        lVar15 = *(longlong *)(lVar35 + 0x40 + lVar34);
        if ((local_128 == 0) != (lVar15 != 0)) {
          pcVar28 = (char *)(lVar35 + lVar34);
          if (lVar15 == 0) {
            if (pcVar28[0x48] == (char)local_f8) goto LAB_006c06f9;
          }
          else if (*(longlong *)(pcVar28 + 0x50) == lVar30) {
            local_48 = pcVar28;
            local_40 = lVar34;
            local_38 = uVar26;
            iVar22 = (*(code *)PTR_bcmp_00799020)(pcVar28,lVar30);
            pcVar28 = local_48;
            uVar26 = local_38;
            lVar34 = local_40;
            if (iVar22 == 0) goto LAB_006c06f9;
          }
        }
      }
      uVar29 = uVar29 + 1;
      uVar27 = uVar32 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 0xff;
  lVar40 = (**(code **)(*param_4 + 0x20))(extraout_XMM0_Qa,param_4[2]);
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
  lVar30 = param_3[2];
LAB_006c0270:
                    /* WARNING: Could not recover jumptable at 0x006c0281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar40,lVar30);
  return;
LAB_006c06f9:
  lVar40 = *param_4;
  lVar16 = param_4[1];
  lVar35 = param_4[2];
  lVar14 = param_4[3];
  lVar15 = param_4[4];
  lVar31 = lVar40;
  if (*pcVar28 != '\0') {
    lVar31 = remove_all_extra_values(param_2,*(undefined8 *)(pcVar28 + 8));
    local_100 = param_2[5];
  }
  if (local_100 <= uVar27) {
LAB_006c0b78:
    (*(code *)PTR_panic_bounds_check_00799520)
              (lVar31,&
                      PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792fa8
              );
LAB_006c0b92:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar31 = param_2[4];
  puVar8 = (undefined8 *)(lVar31 + 0x18 + lVar34);
  uVar41 = *puVar8;
  uVar17 = puVar8[1];
  puVar8 = (undefined8 *)(lVar31 + 0x28 + lVar34);
  uVar18 = puVar8[1];
  param_1[2] = *puVar8;
  param_1[3] = uVar18;
  *param_1 = uVar41;
  param_1[1] = uVar17;
  uVar12 = *(undefined1 *)(lVar31 + 0x38 + lVar34);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar31 + 0x3c + lVar34);
  *(undefined4 *)((longlong)param_1 + 0x21) = *(undefined4 *)(lVar31 + 0x39 + lVar34);
  plVar9 = (longlong *)(lVar31 + 0x18 + lVar34);
  *plVar9 = lVar40;
  plVar9[1] = lVar16;
  *(longlong *)(lVar31 + 0x28 + lVar34) = lVar35;
  *(longlong *)(lVar31 + 0x30 + lVar34) = lVar14;
  *(longlong *)(lVar31 + 0x38 + lVar34) = lVar15;
  *(undefined1 *)(param_1 + 4) = uVar12;
  if (local_128 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(local_128 + 0x20);
  goto LAB_006c0270;
}


