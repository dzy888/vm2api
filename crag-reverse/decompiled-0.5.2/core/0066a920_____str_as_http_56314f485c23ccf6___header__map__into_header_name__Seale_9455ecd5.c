// 0066a920 <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>

/* <http[56314f485c23ccf6]::header::name::HdrName>::from_static::<<&str as
   http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,
   http[56314f485c23ccf6]::header::map::MaxSizeReached>> */

undefined8 * __rustcall
<http[56314f485c23ccf6]::header::name::HdrName>::from_static::
<<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined1 local_169;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  uint local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined8 *local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_70 [64];
  
  (*(code *)PTR_parse_hdr_0079a378)(local_70,param_3,"");
  if ((byte)local_f8 != 0xff) {
    local_98 = (undefined4)local_108;
    uStack_94 = local_108._4_4_;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    local_150 = (longlong *)*param_4;
    lVar6 = param_4[1];
    local_160 = param_4[2];
    local_158 = param_4[3];
    local_168 = param_4[4];
    local_a0 = param_4[5];
    local_88 = (byte)local_f8;
    cVar8 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one();
    plVar17 = local_150;
    if (cVar8 != '\0') {
      *(undefined1 *)(param_1 + 4) = 0xff;
      (**(code **)(lVar6 + 0x20))(extraout_XMM0_Da,local_158);
      return param_1;
    }
    local_78 = param_4;
    uVar9 = http[56314f485c23ccf6]::header::map::hash_elem_using::
            <http[56314f485c23ccf6]::header::name::HdrName>(local_150,&local_98);
    local_144 = (uint)uVar9;
    uVar4 = *(ushort *)(plVar17 + 0xb);
    uVar22 = (ulonglong)(uVar9 & uVar4);
    lVar18 = CONCAT44(uStack_94,local_98);
    local_120 = CONCAT44(uStack_8c,uStack_90);
    uVar21 = plVar17[10];
    local_118 = param_1;
    if (local_120 == 0) {
      if (local_88 != 2) {
        uVar11 = 0;
        uVar19 = 0;
        do {
          bVar23 = uVar21 <= uVar22;
          if (bVar23) {
            uVar22 = 0;
          }
          if (bVar23 && uVar21 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar15 = (ulonglong)*(ushort *)(plVar17[9] + uVar22 * 4);
          if (uVar15 == 0xffff) goto LAB_0066ad42;
          uVar5 = *(ushort *)(plVar17[9] + 2 + uVar22 * 4);
          if (((int)uVar22 - (uint)(uVar5 & uVar4) & (uint)uVar4) < uVar19) goto LAB_0066ad96;
          if (uVar5 == uVar9) {
            if ((ulonglong)plVar17[5] <= uVar15) goto LAB_0066b0fa;
            if ((*(longlong *)(plVar17[4] + 0x40 + uVar15 * 0x68) != 0) &&
               (*(longlong *)(plVar17[4] + uVar15 * 0x68 + 0x50) == 0)) goto LAB_0066ab9c;
          }
          uVar19 = uVar19 + 1;
          uVar22 = uVar22 + 1;
        } while( true );
      }
      uVar11 = 0;
      uVar19 = 0;
      do {
        bVar23 = uVar21 <= uVar22;
        if (bVar23) {
          uVar22 = 0;
        }
        if (bVar23 && uVar21 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar15 = (ulonglong)*(ushort *)(plVar17[9] + uVar22 * 4);
        if (uVar15 == 0xffff) goto LAB_0066ad42;
        uVar5 = *(ushort *)(plVar17[9] + 2 + uVar22 * 4);
        if (((int)uVar22 - (uint)(uVar5 & uVar4) & (uint)uVar4) < uVar19) goto LAB_0066ad96;
        if (uVar5 == uVar9) {
          if ((ulonglong)plVar17[5] <= uVar15) goto LAB_0066b0fa;
          if ((*(longlong *)(plVar17[4] + 0x40 + uVar15 * 0x68) == 0) &&
             (*(char *)(plVar17[4] + uVar15 * 0x68 + 0x48) == (char)local_98)) goto LAB_0066ab9c;
        }
        uVar19 = uVar19 + 1;
        uVar22 = uVar22 + 1;
      } while( true );
    }
    lVar13 = plVar17[9];
    local_10c = (uint)local_88;
    uVar19 = 0;
    do {
      bVar23 = uVar21 <= uVar22;
      if (bVar23) {
        uVar22 = 0;
      }
      if (bVar23 && uVar21 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar15 = (ulonglong)*(ushort *)(lVar13 + uVar22 * 4);
      if (uVar15 == 0xffff) goto LAB_0066ad42;
      uVar5 = *(ushort *)(lVar13 + 2 + uVar22 * 4);
      uVar11 = (uint)(uVar5 & uVar4);
      if (((int)uVar22 - uVar11 & (uint)uVar4) < uVar19) goto LAB_0066ad96;
      if (uVar5 == uVar9) {
        if ((ulonglong)plVar17[5] <= uVar15) goto LAB_0066b0fa;
        lVar1 = plVar17[4] + uVar15 * 0x68;
        if (*(longlong *)(plVar17[4] + 0x40 + uVar15 * 0x68) == 0) {
          if ((local_88 == 2) && (*(char *)(lVar1 + 0x48) == (char)lVar18)) {
LAB_0066ab9c:
            <http[56314f485c23ccf6]::header::map::HeaderMap>::insert_occupied
                      (&local_108,plVar17,uVar15,local_78 + 1);
            local_118[2] = CONCAT44(uStack_f4,local_f8);
            local_118[3] = uStack_f0;
            *local_118 = local_108;
            local_118[1] = CONCAT44(uStack_fc,uStack_100);
            *(undefined4 *)((longlong)local_118 + 0x21) = local_e8._1_4_;
            *(undefined4 *)((longlong)local_118 + 0x24) = local_e8._4_4_;
            *(undefined1 *)(local_118 + 4) = (undefined1)local_e8;
            return local_118;
          }
        }
        else if (local_88 == 0) {
          if (*(longlong *)(lVar1 + 0x50) == local_120) {
            lVar12 = 0;
            while (*(char *)(*(longlong *)(lVar1 + 0x48) + lVar12) == ""[*(byte *)(lVar18 + lVar12)]
                  ) {
              lVar12 = lVar12 + 1;
              if (local_120 == lVar12) goto LAB_0066ab9c;
            }
          }
        }
        else if (((local_10c != 2) && (*(longlong *)(lVar1 + 0x50) == local_120)) &&
                (local_80 = lVar18, iVar10 = (*(code *)PTR_bcmp_00799020)(local_120,local_120),
                plVar17 = local_150, lVar18 = local_80, iVar10 == 0)) goto LAB_0066ab9c;
      }
      uVar19 = uVar19 + 1;
      uVar22 = uVar22 + 1;
    } while( true );
  }
  (*(code *)PTR_unwrap_failed_00799028)
            (&DAT_00791378,&local_169,&PTR_s__vendor_http_1_5_0_src_header_na_007909d8);
LAB_0066b10f:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_0066ad96:
  lVar18 = *plVar17;
  uVar24 = (*(code *)PTR_from_0079a380)();
  puVar20 = local_118;
  uVar11 = local_144;
  uVar21 = local_150[5];
  if (uVar21 < 0x8000) {
    local_a8 = (undefined2)local_144;
    local_b8 = local_130;
    uStack_b4 = uStack_12c;
    uStack_b0 = uStack_128;
    uStack_ac = uStack_124;
    local_c8 = local_140;
    uStack_c4 = uStack_13c;
    uStack_c0 = uStack_138;
    uStack_bc = uStack_134;
    local_e8 = local_160;
    uStack_e0 = local_158;
    local_d8 = local_168;
    uStack_d0 = local_a0;
    local_108 = 0;
    uStack_f0 = lVar6;
    if (uVar21 == local_150[3]) {
      (*(code *)PTR_grow_one_0079a2e8)();
    }
    lVar6 = local_150[4];
    lVar13 = uVar21 * 0x68;
    *(ulonglong *)(lVar6 + 0x60 + lVar13) = CONCAT62(uStack_a6,local_a8);
    puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar13);
    *puVar3 = CONCAT44(uStack_b4,local_b8);
    puVar3[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar3 = (undefined8 *)(lVar6 + 0x40 + lVar13);
    *puVar3 = CONCAT44(uStack_c4,local_c8);
    puVar3[1] = CONCAT44(uStack_bc,uStack_c0);
    puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar13);
    *puVar3 = local_d8;
    puVar3[1] = uStack_d0;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar13);
    *puVar3 = local_e8;
    puVar3[1] = uStack_e0;
    puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13);
    *puVar3 = CONCAT44(uStack_f4,local_f8);
    puVar3[1] = uStack_f0;
    *(undefined8 *)(lVar6 + lVar13) = local_108;
    ((undefined8 *)(lVar6 + lVar13))[1] = CONCAT44(uStack_fc,uStack_100);
    local_150[5] = uVar21 + 1;
    lVar6 = local_150[9];
    uVar15 = local_150[10];
    uVar16 = 0;
    while( true ) {
      bVar23 = uVar15 <= uVar22;
      if (bVar23) {
        uVar22 = 0;
      }
      if (bVar23 && uVar15 == 0) break;
      uVar4 = *(ushort *)(lVar6 + uVar22 * 4);
      if (uVar4 == 0xffff) {
        *(short *)(lVar6 + uVar22 * 4) = (short)uVar21;
        *(short *)(lVar6 + 2 + uVar22 * 4) = (short)uVar11;
        if ((0x1ff < uVar19 && lVar18 != 2 || 0x7f < uVar16) && (*local_150 == 0)) {
          *local_150 = 1;
        }
        *(undefined1 *)(puVar20 + 4) = 2;
        return puVar20;
      }
      uVar16 = uVar16 + 1;
      uVar9 = *(ushort *)(lVar6 + 2 + uVar22 * 4);
      *(short *)(lVar6 + uVar22 * 4) = (short)uVar21;
      *(short *)(lVar6 + 2 + uVar22 * 4) = (short)uVar11;
      uVar22 = uVar22 + 1;
      uVar11 = (uint)uVar9;
      uVar21 = (ulonglong)uVar4;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar24 = (**(code **)(lVar6 + 0x20))(uVar24,local_158);
  goto LAB_0066adf7;
LAB_0066b0fa:
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar11,&PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790960)
  ;
  goto LAB_0066b10f;
LAB_0066ad42:
  lVar18 = plVar17[5];
  uVar24 = (*(code *)PTR_from_0079a380)();
  puVar20 = local_118;
  uVar21 = local_150[5];
  if (uVar21 < 0x8000) {
    uVar14 = (undefined2)local_144;
    local_b8 = local_130;
    uStack_b4 = uStack_12c;
    uStack_b0 = uStack_128;
    uStack_ac = uStack_124;
    local_c8 = local_140;
    uStack_c4 = uStack_13c;
    uStack_c0 = uStack_138;
    uStack_bc = uStack_134;
    local_e8 = local_160;
    uStack_e0 = local_158;
    local_d8 = local_168;
    uStack_d0 = local_a0;
    local_108 = 0;
    uStack_f0 = lVar6;
    local_a8 = uVar14;
    if (uVar21 == local_150[3]) {
      (*(code *)PTR_grow_one_0079a2e8)();
    }
    lVar6 = local_150[4];
    lVar13 = uVar21 * 0x68;
    *(ulonglong *)(lVar6 + 0x60 + lVar13) = CONCAT62(uStack_a6,local_a8);
    puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar13);
    *puVar3 = CONCAT44(uStack_b4,local_b8);
    puVar3[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar3 = (undefined8 *)(lVar6 + 0x40 + lVar13);
    *puVar3 = CONCAT44(uStack_c4,local_c8);
    puVar3[1] = CONCAT44(uStack_bc,uStack_c0);
    puVar2 = (undefined4 *)(lVar6 + 0x30 + lVar13);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = (undefined4)uStack_d0;
    puVar2[3] = uStack_d0._4_4_;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar13);
    *puVar2 = (undefined4)local_e8;
    puVar2[1] = local_e8._4_4_;
    puVar2[2] = (undefined4)uStack_e0;
    puVar2[3] = uStack_e0._4_4_;
    puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar13);
    *puVar2 = local_f8;
    puVar2[1] = uStack_f4;
    puVar2[2] = (undefined4)uStack_f0;
    puVar2[3] = uStack_f0._4_4_;
    puVar2 = (undefined4 *)(lVar6 + lVar13);
    *puVar2 = (undefined4)local_108;
    puVar2[1] = local_108._4_4_;
    puVar2[2] = uStack_100;
    puVar2[3] = uStack_fc;
    local_150[5] = uVar21 + 1;
    if ((ulonglong)local_150[10] <= uVar22) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (lVar13,&
                        PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790978
                );
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>
                (&local_108);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    lVar6 = local_150[9];
    *(short *)(lVar6 + uVar22 * 4) = (short)lVar18;
    *(undefined2 *)(lVar6 + 2 + uVar22 * 4) = uVar14;
    *(undefined1 *)(puVar20 + 4) = 2;
    return puVar20;
  }
  uVar24 = (**(code **)(lVar6 + 0x20))(uVar24,local_158);
LAB_0066adf7:
  if (CONCAT44(uStack_13c,local_140) != 0) {
    (**(code **)(CONCAT44(uStack_13c,local_140) + 0x20))(uVar24,CONCAT44(uStack_12c,local_130));
  }
  *(undefined1 *)(puVar20 + 4) = 0xff;
  return puVar20;
}


