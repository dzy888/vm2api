// 005001b0 models_compatible_for_single_slot

/* craggemini_core[66f3c71560d70857]::models::models_compatible_for_single_slot */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::models::models_compatible_for_single_slot
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar23 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_50;
  
  auVar23 = ::<str>::trim_matches::<<char>::is_whitespace>();
  uVar20 = auVar23._8_8_;
  lVar17 = auVar23._0_8_;
  auVar23 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
  lVar18 = auVar23._0_8_;
  if (uVar20 == auVar23._8_8_) {
    uVar21 = (undefined7)(param_4 >> 8);
    if (uVar20 < 0x10) {
      uVar19 = 0;
      do {
        if (uVar20 == uVar19) {
          param_4 = CONCAT71(uVar21,1);
          goto LAB_005004fa;
        }
        pbVar1 = (byte *)(lVar17 + uVar19);
        pbVar2 = (byte *)(lVar18 + uVar19);
        uVar19 = uVar19 + 1;
      } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
               (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
    }
    else {
      cVar15 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(lVar17,uVar20,lVar18,uVar20);
      param_4 = CONCAT71(uVar21,1);
      if (cVar15 != '\0') goto LAB_005004fa;
    }
  }
  parse_model_spec(&local_98,lVar17,uVar20);
  lVar17 = lStack_50;
  uVar14 = uStack_64;
  uVar13 = local_68;
  uVar12 = uStack_6c;
  uVar11 = uStack_70;
  uVar10 = uStack_74;
  uVar9 = local_78;
  uVar8 = uStack_7c;
  uVar7 = uStack_80;
  uVar6 = uStack_94;
  uVar5 = local_98;
  if (CONCAT44(uStack_94,local_98) != -1) {
    uVar22 = parse_model_spec(&local_98,lVar18,auVar23._8_8_);
    if (CONCAT44(uStack_94,local_98) != -1) {
      uVar20 = CONCAT44(uStack_6c,uStack_70);
      if (CONCAT44(uVar12,uVar11) == uVar20) {
        if (uVar20 < 0x10) {
          uVar19 = 0;
          do {
            param_4 = CONCAT71((int7)(param_4 >> 8),uVar20 == uVar19);
            if (uVar20 == uVar19) break;
            bVar3 = *(byte *)(CONCAT44(uVar10,uVar9) + uVar19);
            bVar4 = *(byte *)(CONCAT44(uStack_74,local_78) + uVar19);
            uVar19 = uVar19 + 1;
          } while ((byte)(((byte)(bVar3 + 0xbf) < 0x1a) << 5 | bVar3) ==
                   (byte)(((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4));
        }
        else {
          uVar16 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                             (CONCAT44(uVar10,uVar9),uVar20,CONCAT44(uStack_74,local_78),uVar20,
                              CONCAT44(uStack_8c,uStack_90));
          param_4 = (ulonglong)uVar16;
          uVar22 = extraout_XMM0_Da;
        }
      }
      else {
        param_4 = 0;
      }
      if (CONCAT44(uStack_94,local_98) != 0) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1,CONCAT44(uStack_8c,uStack_90));
      }
      if (CONCAT44(uStack_7c,uStack_80) != 0) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      if (CONCAT44(uStack_64,local_68) - 1U < 0xfffffffffffffffe) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      if (lStack_50 - 1U < 0xfffffffffffffffe) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      if (CONCAT44(uVar6,uVar5) != 0) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      if (CONCAT44(uVar8,uVar7) != 0) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      lVar18 = CONCAT44(uVar14,uVar13);
      if ((lVar18 != -1) && (lVar18 != 0)) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      if ((lVar17 != -1) && (lVar17 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      goto LAB_005004fa;
    }
    if (CONCAT44(uVar6,uVar5) != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if (CONCAT44(uVar8,uVar7) != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    lVar18 = CONCAT44(uVar14,uVar13);
    if ((lVar18 != -1) && (lVar18 != 0)) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if ((lVar17 != -1) && (lVar17 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
  }
  param_4 = 0;
LAB_005004fa:
  return param_4 & 0xffffffff;
}


