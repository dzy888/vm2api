// 00669690 <&str>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap>::insert::<&str> */

char * __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::insert::<&str>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong unaff_RBP;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  local_30 = *param_5;
  uStack_2c = param_5[1];
  uStack_28 = param_5[2];
  uStack_24 = param_5[3];
  local_20 = param_5[4];
  uStack_1c = param_5[5];
  uStack_18 = param_5[6];
  uStack_14 = param_5[7];
  local_10 = *(undefined8 *)(param_5 + 8);
  local_38 = param_2;
  <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
  <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
            (&local_60,param_3,param_4,&local_38);
  if (local_40 != -1) {
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_3f,local_40);
    *(undefined8 *)(param_1 + 0x10) = local_50;
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *(undefined8 *)param_1 = local_60;
    *(undefined8 *)(param_1 + 8) = uStack_58;
    return param_1;
  }
  plVar16 = (longlong *)&local_61;
  uVar21 = (*(code *)PTR_unwrap_failed_00799028)
                     (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992);
  uVar7 = _DAT_0000003f;
  if (_DAT_0000003f != 0) {
    uVar11 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(0x17,plVar16);
    uVar10 = uRam000000000000006f;
    uVar9 = uRam0000000000000067;
    lVar8 = lRam000000000000005f;
    lVar6 = _DAT_00000037;
    uVar17 = (ulonglong)(uVar11 & uRam000000000000006f);
    lVar14 = *plVar16;
    lVar5 = plVar16[1];
    lVar2 = plVar16[2];
    uVar20 = 0;
    uVar21 = extraout_XMM0_Da;
    do {
      uVar19 = 0;
      uVar18 = uVar17;
      if (uVar9 <= uVar17) {
        uVar18 = uVar19;
      }
      if (uVar9 <= uVar17 && uVar9 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      unaff_RBP = (ulonglong)*(ushort *)(lVar8 + uVar18 * 4);
      if (unaff_RBP == 0xffff) goto LAB_006698ce;
      uVar1 = *(ushort *)(lVar8 + 2 + uVar18 * 4);
      uVar15 = (uint)(uVar1 & uVar10);
      if (((int)uVar18 - uVar15 & (uint)uVar10) < uVar20) goto LAB_006698ce;
      if (uVar1 == uVar11) {
        if (uVar7 <= unaff_RBP) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar15,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790990
                    );
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar3 = *(longlong *)(lVar6 + 0x40 + unaff_RBP * 0x68);
        if ((lVar14 == 0) != (lVar3 != 0)) {
          lVar13 = unaff_RBP * 0x68 + lVar6;
          if (lVar3 == 0) {
            if (*(char *)(lVar13 + 0x48) == (char)lVar5) {
              ram0x001a47ef = 0x17;
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[0] = '\x01';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[1] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[2] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[3] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[4] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[5] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[6] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992[7] = '\0';
              anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992._8_8_ = unaff_RBP;
              goto LAB_006698ed;
            }
          }
          else if (*(longlong *)(lVar13 + 0x50) == lVar2) {
            iVar12 = (*(code *)PTR_bcmp_00799020)(lVar2,lVar2);
            uVar21 = extraout_XMM0_Da_00;
            if (iVar12 == 0) goto code_r0x00669899;
          }
        }
      }
      uVar20 = uVar20 + 1;
      uVar17 = uVar18 + 1;
    } while( true );
  }
  lVar14 = *plVar16;
  uVar19 = 0;
LAB_006698ce:
  ram0x001a47ef = 0x17;
  anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992._0_8_ = uVar19;
  anon_d3057478e380898db632effa827bd31f_6_llvm_2674179329317868992._8_8_ = unaff_RBP;
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x20))(uVar21,plVar16[2]);
  }
LAB_006698ed:
  return "size overflows MAX_SIZE";
code_r0x00669899:
  uVar19 = 1;
  goto LAB_006698ce;
}


