// 006a81c0 <&http[56314f485c23ccf6]::header::name::HeaderName>

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap<bytes[e9829e187354639b]::bytes::Bytes>>::try_append2::<&http[56314f485c23ccf6]::header::name::HeaderName>
    */

undefined8 __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap<bytes[e9829e187354639b]::bytes::Bytes>>::try_append2
::<&http[56314f485c23ccf6]::header::name::HeaderName>
          (longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  longlong lVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  int iVar19;
  byte *******pppppppbVar20;
  ulonglong uVar21;
  uint uVar22;
  byte *******pppppppbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  int *piVar31;
  undefined8 unaff_RBP;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ushort uVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar39;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong local_100;
  byte *******local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  uint local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 uStack_68;
  ushort uStack_60;
  undefined6 uStack_5e;
  longlong local_58;
  byte *******local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_c8 = param_3;
  cVar18 = try_reserve_one();
  if (cVar18 == '\0') {
    local_58 = *param_1;
    if (local_58 == 2) {
      local_98 = *(undefined1 (*) [16])(param_1 + 1);
      auVar40._0_8_ = local_98._0_8_;
      auVar40._8_4_ = local_98._0_4_;
      auVar40._12_4_ = local_98._4_4_;
      local_b8 = auVar40 ^ _DAT_00183170;
      auVar41._0_8_ = local_98._8_8_;
      auVar41._8_4_ = local_98._8_4_;
      auVar41._12_4_ = local_98._12_4_;
      local_a8 = auVar41 ^ _DAT_00182bf0;
      _local_88 = (undefined1  [16])0x0;
      local_78 = 0;
      lVar34 = *param_2;
      local_e8 = (byte *******)(ulonglong)(lVar34 != 0);
      <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::
      write(local_b8,&local_e8,8);
      if (lVar34 == 0) {
        pppppppbVar20 = (byte *******)(ulonglong)*(byte *)(param_2 + 1);
        pppppppbVar23 = (byte *******)&local_e8;
        lVar28 = 8;
        local_e8 = pppppppbVar20;
      }
      else {
        pppppppbVar20 = (byte *******)param_2[1];
        lVar28 = param_2[2];
        pppppppbVar23 = pppppppbVar20;
      }
      uVar39 = <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>
               ::write(local_b8,pppppppbVar23,lVar28);
      uVar33 = local_88._0_8_ << 0x38 | (ulonglong)stack0xffffffffffffff80;
      uVar24 = local_a8._8_8_ ^ uVar33;
      uVar32 = local_b8._0_8_ + local_a8._0_8_;
      uVar21 = (local_a8._0_8_ << 0xd | (ulonglong)local_a8._0_8_ >> 0x33) ^ uVar32;
      uVar25 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ local_b8._8_8_ + uVar24;
      uVar27 = local_b8._8_8_ + uVar24 + uVar21;
      uVar32 = (uVar32 << 0x20 | uVar32 >> 0x20) + uVar25;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar27;
      uVar24 = (uVar25 << 0x15 | uVar25 >> 0x2b) ^ uVar32;
      uVar32 = (uVar32 ^ uVar33) + uVar21;
      uVar25 = ((uVar27 << 0x20 | uVar27 >> 0x20) ^ 0xff) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar32;
      uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ uVar25;
      uVar25 = uVar25 + uVar21;
      uVar27 = (uVar32 << 0x20 | uVar32 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
      uVar24 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar27;
      uVar27 = uVar27 + uVar21;
      uVar25 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar27;
      uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ uVar25;
      uVar25 = uVar25 + uVar21;
      uVar27 = (uVar27 << 0x20 | uVar27 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
      uVar24 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar27;
      lVar28 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar27 + uVar21;
      lVar29 = lVar28 + uVar21;
      uVar36 = (uint)((ulonglong)lVar29 >> 0x20) ^ (uint)lVar29 ^
               ((uint)(uVar24 >> 0x10) ^ (uint)((ulonglong)lVar28 >> 0x20)) >> 0xb ^
               (uint)(uVar21 >> 0x2f);
      uVar21 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar34 == 0) & 0xffffffff;
    }
    else {
      uVar36 = (*param_2 != 0 ^ 0x84222325) * 0xaef4a21;
      uVar39 = extraout_XMM0_Qa;
      if (*param_2 == 0) {
        pppppppbVar20 = (byte *******)(ulonglong)*(byte *)(param_2 + 1);
        uVar36 = (*(byte *)(param_2 + 1) ^ 0x281a39c5) * 0xaef4a21;
        uVar21 = CONCAT71((int7)((ulonglong)param_5 >> 8),1);
      }
      else {
        pppppppbVar20 = (byte *******)param_2[1];
        uVar21 = param_2[2];
        if (uVar21 != 0) {
          uVar24 = uVar21 & 7;
          pppppppbVar23 = pppppppbVar20;
          if (uVar24 != 0) {
            do {
              bVar11 = *(byte *)pppppppbVar23;
              pppppppbVar23 = (byte *******)((longlong)pppppppbVar23 + 1);
              uVar36 = (bVar11 ^ uVar36) * 0x1b3;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          if (7 < uVar21) {
            do {
              bVar11 = *(byte *)pppppppbVar23;
              pbVar1 = (byte *)((longlong)pppppppbVar23 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar23 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar23 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar23 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar23 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar23 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar23 + 7);
              pppppppbVar23 = pppppppbVar23 + 1;
              uVar36 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar11 ^ uVar36) * 0x1b3) * 0x1b3) * 0x1b3
                       ) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar23 != (byte *******)((longlong)pppppppbVar20 + uVar21));
          }
        }
        uVar21 = 0;
      }
    }
    uVar36 = uVar36 & 0x7fff;
    uVar25 = (ulonglong)*(ushort *)(param_1 + 0xb);
    uVar27 = (ulonglong)(uVar36 & *(ushort *)(param_1 + 0xb));
    uVar24 = param_1[10];
    lVar34 = param_1[9];
    lVar28 = param_1[4];
    local_100 = param_1[5];
    uVar32 = 0;
    while( true ) {
      uVar33 = uVar27;
      if (uVar24 <= uVar27) {
        uVar33 = 0;
      }
      if (uVar24 <= uVar27 && uVar24 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar12 = *(ushort *)(lVar34 + uVar33 * 4);
      uVar27 = (ulonglong)uVar12;
      uVar35 = (ushort)uVar36;
      if (uVar27 == 0xffff) {
        (*(code *)PTR_from_0079a2e0)();
        uVar21 = param_1[5];
        if (0x7fff < uVar21) {
          uVar39 = (**(code **)(*local_c8 + 0x20))();
          if (local_e8 == (byte *******)0x0) goto LAB_006a81fc;
          pppppppbVar20 = local_e8;
          goto LAB_006a81f9;
        }
        lStack_70 = local_d8;
        uStack_68 = uStack_d0;
        local_78 = uStack_e0;
        local_a8._8_8_ = *local_c8;
        stack0xffffffffffffff80 = local_e8;
        local_88._0_8_ = local_c8[3];
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_b8._8_8_;
        local_b8 = auVar16 << 0x40;
        local_98 = *(undefined1 (*) [16])(local_c8 + 1);
        uStack_60 = uVar35;
        if (uVar21 == param_1[3]) {
          (*(code *)PTR_grow_one_0079a438)();
        }
        lVar34 = param_1[4];
        lVar28 = uVar21 * 0x60;
        puVar9 = (undefined8 *)(lVar34 + 0x50 + lVar28);
        *puVar9 = uStack_68;
        puVar9[1] = CONCAT62(uStack_5e,uStack_60);
        puVar9 = (undefined8 *)(lVar34 + 0x40 + lVar28);
        *puVar9 = local_78;
        puVar9[1] = lStack_70;
        puVar8 = (undefined4 *)(lVar34 + 0x30 + lVar28);
        *puVar8 = local_88._0_4_;
        puVar8[1] = local_88._4_4_;
        puVar8[2] = local_88._8_4_;
        puVar8[3] = uStack_7c;
        puVar8 = (undefined4 *)(lVar34 + 0x20 + lVar28);
        *puVar8 = local_98._0_4_;
        puVar8[1] = local_98._4_4_;
        puVar8[2] = local_98._8_4_;
        puVar8[3] = local_98._12_4_;
        puVar9 = (undefined8 *)(lVar34 + 0x10 + lVar28);
        *puVar9 = local_a8._0_8_;
        puVar9[1] = local_a8._8_8_;
        *(undefined8 *)(lVar34 + lVar28) = local_b8._0_8_;
        ((undefined8 *)(lVar34 + lVar28))[1] = local_b8._8_8_;
        param_1[5] = uVar21 + 1;
        if ((ulonglong)param_1[10] <= uVar33) {
          uVar39 = (*(code *)PTR_panic_bounds_check_00799520)
                             (lVar28,&
                                     PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c38
                             );
          goto LAB_006a8aa5;
        }
        lVar34 = param_1[9];
        *(short *)(lVar34 + uVar33 * 4) = (short)local_100;
        *(ushort *)(lVar34 + 2 + uVar33 * 4) = uVar35;
        goto LAB_006a88af;
      }
      uVar13 = *(ushort *)(lVar34 + 2 + uVar33 * 4);
      uVar22 = (uint)uVar13 & (uint)uVar25;
      if (((int)uVar33 - uVar22 & (uint)uVar25) < uVar32) break;
      if (uVar13 == uVar35) {
        if (local_100 <= uVar27) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar22,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c20
                    );
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        uVar30 = (ulonglong)((uint)uVar12 * 0x60);
        lVar29 = *(longlong *)(lVar28 + 0x38 + uVar30);
        if ((bool)(char)uVar21 != (lVar29 != 0)) {
          piVar31 = (int *)(uVar30 + lVar28);
          if (lVar29 == 0) {
            if ((char)piVar31[0x10] == (char)pppppppbVar20) {
LAB_006a8639:
              lVar34 = *local_c8;
              lVar28 = local_c8[1];
              local_100 = local_c8[2];
              lVar29 = local_c8[3];
              if (*piVar31 == 1) {
                uVar24 = *(ulonglong *)(piVar31 + 4);
                uVar21 = param_1[8];
                if (uVar21 == param_1[6]) {
                  uVar39 = (*(code *)PTR_grow_one_0079a430)();
                }
                lVar14 = param_1[7];
                lVar26 = uVar21 * 0x40;
                *(undefined8 *)(lVar14 + lVar26) = 1;
                *(ulonglong *)(lVar14 + 8 + lVar26) = uVar24;
                *(undefined8 *)(lVar14 + 0x10 + lVar26) = 0;
                *(ulonglong *)(lVar14 + 0x18 + lVar26) = uVar27;
                *(longlong *)(lVar14 + 0x20 + lVar26) = lVar34;
                *(longlong *)(lVar14 + 0x28 + lVar26) = lVar28;
                *(ulonglong *)(lVar14 + 0x30 + lVar26) = local_100;
                *(longlong *)(lVar14 + 0x38 + lVar26) = lVar29;
                param_1[8] = uVar21 + 1;
                if (uVar21 < uVar24) {
LAB_006a8aa5:
                  uVar39 = (*(code *)PTR_panic_bounds_check_00799520)
                                     (uVar39,&
                                             PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791c68
                                     );
                  (**(code **)(uVar24 + 0x20))(uVar39,local_100);
                    /* WARNING: Subroutine does not return */
                  _Unwind_Resume();
                }
                lVar34 = param_1[7];
                *(undefined8 *)(lVar34 + 0x10 + uVar24 * 0x40) = 1;
                *(ulonglong *)(lVar34 + 0x18 + uVar24 * 0x40) = uVar21;
                piVar31[0] = 1;
                piVar31[1] = 0;
              }
              else {
                uVar21 = param_1[8];
                if (uVar21 == param_1[6]) {
                  (*(code *)PTR_grow_one_0079a430)();
                }
                lVar14 = param_1[7];
                lVar26 = uVar21 * 0x40;
                *(undefined8 *)(lVar14 + lVar26) = 0;
                *(ulonglong *)(lVar14 + 8 + lVar26) = uVar27;
                *(undefined8 *)(lVar14 + 0x10 + lVar26) = 0;
                *(ulonglong *)(lVar14 + 0x18 + lVar26) = uVar27;
                *(longlong *)(lVar14 + 0x20 + lVar26) = lVar34;
                *(longlong *)(lVar14 + 0x28 + lVar26) = lVar28;
                *(ulonglong *)(lVar14 + 0x30 + lVar26) = local_100;
                *(longlong *)(lVar14 + 0x38 + lVar26) = lVar29;
                param_1[8] = uVar21 + 1;
                piVar31[0] = 1;
                piVar31[1] = 0;
                *(ulonglong *)(piVar31 + 2) = uVar21;
              }
              *(ulonglong *)(piVar31 + 4) = uVar21;
              return 1;
            }
          }
          else if (*(longlong *)(piVar31 + 0x12) == param_2[2]) {
            local_50 = (byte *******)param_2[1];
            local_bc = (uint)uVar21;
            local_48 = lVar28;
            local_40 = lVar34;
            local_38 = uVar25;
            iVar19 = (*(code *)PTR_bcmp_00799020)();
            uVar21 = (ulonglong)local_bc;
            pppppppbVar20 = local_50;
            uVar25 = local_38;
            lVar34 = local_40;
            lVar28 = local_48;
            uVar39 = extraout_XMM0_Qa_00;
            if (iVar19 == 0) goto LAB_006a8639;
          }
        }
      }
      uVar32 = uVar32 + 1;
      uVar27 = uVar33 + 1;
    }
    bVar38 = (int)local_58 != 2;
    (*(code *)PTR_from_0079a2e0)();
    lVar34 = *local_c8;
    uVar21 = param_1[5];
    if (0x7fff < uVar21) {
      (**(code **)(lVar34 + 0x20))();
      if (local_e8 == (byte *******)0x0) {
        return 2;
      }
      (*(code *)local_e8[4])(local_e8,local_d8);
      goto LAB_006a81fc;
    }
    lStack_70 = local_d8;
    uStack_68 = uStack_d0;
    local_78 = uStack_e0;
    stack0xffffffffffffff80 = local_e8;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_b8._8_8_;
    local_b8 = auVar17 << 0x40;
    local_98 = *(undefined1 (*) [16])(local_c8 + 1);
    uStack_60 = uVar35;
    local_a8._8_8_ = lVar34;
    local_88._0_8_ = local_c8[3];
    if (uVar21 == param_1[3]) {
      (*(code *)PTR_grow_one_0079a438)();
    }
    lVar34 = param_1[4];
    lVar28 = uVar21 * 0x60;
    puVar9 = (undefined8 *)(lVar34 + 0x50 + lVar28);
    *puVar9 = uStack_68;
    puVar9[1] = CONCAT62(uStack_5e,uStack_60);
    puVar9 = (undefined8 *)(lVar34 + 0x40 + lVar28);
    *puVar9 = local_78;
    puVar9[1] = lStack_70;
    plVar10 = (longlong *)(lVar34 + 0x30 + lVar28);
    *plVar10 = local_88._0_8_;
    plVar10[1] = (longlong)stack0xffffffffffffff80;
    puVar9 = (undefined8 *)(lVar34 + 0x20 + lVar28);
    *puVar9 = local_98._0_8_;
    puVar9[1] = local_98._8_8_;
    puVar9 = (undefined8 *)(lVar34 + 0x10 + lVar28);
    *puVar9 = local_a8._0_8_;
    puVar9[1] = local_a8._8_8_;
    *(undefined8 *)(lVar34 + lVar28) = local_b8._0_8_;
    ((undefined8 *)(lVar34 + lVar28))[1] = local_b8._8_8_;
    param_1[5] = uVar21 + 1;
    lVar34 = param_1[9];
    uVar24 = param_1[10];
    uVar25 = 0;
    while( true ) {
      bVar37 = uVar24 <= uVar33;
      if (bVar37) {
        uVar33 = 0;
      }
      if (bVar37 && uVar24 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar12 = *(ushort *)(lVar34 + uVar33 * 4);
      if (uVar12 == 0xffff) break;
      uVar25 = uVar25 + 1;
      uVar35 = *(ushort *)(lVar34 + 2 + uVar33 * 4);
      *(short *)(lVar34 + uVar33 * 4) = (short)uVar21;
      *(short *)(lVar34 + 2 + uVar33 * 4) = (short)uVar36;
      uVar33 = uVar33 + 1;
      uVar36 = (uint)uVar35;
      uVar21 = (ulonglong)uVar12;
    }
    *(short *)(lVar34 + uVar33 * 4) = (short)uVar21;
    *(short *)(lVar34 + 2 + uVar33 * 4) = (short)uVar36;
    uVar39 = 0;
    if ((bVar38 && 0x1ff < uVar32 || 0x7f < uVar25) && (*param_1 == 0)) {
      *param_1 = 1;
LAB_006a88af:
      uVar39 = 0;
    }
  }
  else {
    local_d8 = local_c8[2];
    pppppppbVar20 = (byte *******)*local_c8;
    uVar39 = extraout_XMM0_Qa;
LAB_006a81f9:
    (*(code *)pppppppbVar20[4])(uVar39,local_d8);
LAB_006a81fc:
    uVar39 = 2;
  }
  return uVar39;
}


