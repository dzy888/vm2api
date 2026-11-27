// 001b4c80 _impl_square_and_negate_D

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4 as
   <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4>::square_and_negate_D::__Impl_square_and_negate_D__>::_impl_square_and_negate_D
    */

undefined1 (*) [32] __rustcall
<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4>::square_and_negate_D::__Impl_square_and_negate_D__>
::_impl_square_and_negate_D(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  uint uVar38;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auVar39 [32];
  uint uVar46;
  uint uVar47;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 local_208 [32];
  
  auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar71 = vpunpckldq_avx2(*param_2,auVar48);
  auVar32 = vpunpckhdq_avx2(*param_2,auVar48);
  auVar70 = vpunpckldq_avx2(param_2[1],auVar48);
  auVar33 = vpunpckhdq_avx2(param_2[1],auVar48);
  auVar35 = vpunpckldq_avx2(param_2[2],auVar48);
  auVar66 = vpunpckhdq_avx2(param_2[2],auVar48);
  auVar36 = vpunpckldq_avx2(param_2[3],auVar48);
  auVar69 = vpunpckhdq_avx2(param_2[3],auVar48);
  auVar37 = vpunpckldq_avx2(param_2[4],auVar48);
  auVar34 = vpunpckhdq_avx2(param_2[4],auVar48);
  auVar48._4_4_ = auVar70._4_4_ * 2;
  auVar48._0_4_ = auVar70._0_4_ * 2;
  auVar48._8_4_ = auVar70._8_4_ * 2;
  auVar48._12_4_ = auVar70._12_4_ * 2;
  auVar48._16_4_ = auVar70._16_4_ * 2;
  auVar48._20_4_ = auVar70._20_4_ * 2;
  auVar48._24_4_ = auVar70._24_4_ * 2;
  auVar48._28_4_ = auVar70._28_4_ * 2;
  auVar49._4_4_ = auVar35._4_4_ * 2;
  auVar49._0_4_ = auVar35._0_4_ * 2;
  auVar49._8_4_ = auVar35._8_4_ * 2;
  auVar49._12_4_ = auVar35._12_4_ * 2;
  auVar49._16_4_ = auVar35._16_4_ * 2;
  auVar49._20_4_ = auVar35._20_4_ * 2;
  auVar49._24_4_ = auVar35._24_4_ * 2;
  auVar49._28_4_ = auVar35._28_4_ * 2;
  auVar72._8_8_ = DAT_00114328;
  auVar72._0_8_ = DAT_00114328;
  auVar72._16_8_ = DAT_00114328;
  auVar72._24_8_ = DAT_00114328;
  auVar1 = vpmuludq_avx2(auVar72,auVar36);
  auVar2 = vpmuludq_avx2(auVar71,auVar71);
  auVar3 = vpmuludq_avx2(auVar1,auVar49);
  auVar4 = vpmuludq_avx2(auVar37,auVar72);
  auVar5 = vpmuludq_avx2(auVar48,auVar4);
  auVar39 = vpmuludq_avx2(auVar72,auVar66);
  auVar6 = vpmuludq_avx2(auVar39,auVar66);
  auVar39._4_4_ = auVar33._4_4_ * 2;
  auVar39._0_4_ = auVar33._0_4_ * 2;
  auVar39._8_4_ = auVar33._8_4_ * 2;
  auVar39._12_4_ = auVar33._12_4_ * 2;
  auVar39._16_4_ = auVar33._16_4_ * 2;
  auVar39._20_4_ = auVar33._20_4_ * 2;
  auVar39._24_4_ = auVar33._24_4_ * 2;
  auVar39._28_4_ = auVar33._28_4_ * 2;
  auVar7 = vpmuludq_avx2(auVar69,auVar72);
  auVar8 = vpmuludq_avx2(auVar39,auVar7);
  auVar31._4_4_ = auVar32._4_4_ * 2;
  auVar31._0_4_ = auVar32._0_4_ * 2;
  auVar31._8_4_ = auVar32._8_4_ * 2;
  auVar31._12_4_ = auVar32._12_4_ * 2;
  auVar31._16_4_ = auVar32._16_4_ * 2;
  auVar31._20_4_ = auVar32._20_4_ * 2;
  auVar31._24_4_ = auVar32._24_4_ * 2;
  auVar31._28_4_ = auVar32._28_4_ * 2;
  auVar9 = vpmuludq_avx2(auVar34,auVar72);
  auVar10 = vpmuludq_avx2(auVar9,auVar31);
  auVar73._4_4_ = auVar71._4_4_ * 2;
  auVar73._0_4_ = auVar71._0_4_ * 2;
  auVar73._8_4_ = auVar71._8_4_ * 2;
  auVar73._12_4_ = auVar71._12_4_ * 2;
  auVar73._16_4_ = auVar71._16_4_ * 2;
  auVar73._20_4_ = auVar71._20_4_ * 2;
  auVar73._24_4_ = auVar71._24_4_ * 2;
  auVar73._28_4_ = auVar71._28_4_ * 2;
  auVar71._4_4_ = auVar66._4_4_ * 2;
  auVar71._0_4_ = auVar66._0_4_ * 2;
  auVar71._8_4_ = auVar66._8_4_ * 2;
  auVar71._12_4_ = auVar66._12_4_ * 2;
  auVar71._16_4_ = auVar66._16_4_ * 2;
  auVar71._20_4_ = auVar66._20_4_ * 2;
  auVar71._24_4_ = auVar66._24_4_ * 2;
  auVar71._28_4_ = auVar66._28_4_ * 2;
  auVar11 = vpmuludq_avx2(auVar73,auVar32);
  auVar12 = vpmuludq_avx2(auVar71,auVar1);
  auVar13 = vpmuludq_avx2(auVar39,auVar4);
  auVar14 = vpmuludq_avx2(auVar9,auVar70);
  auVar15 = vpmuludq_avx2(auVar35,auVar7);
  auVar32 = vpmuludq_avx2(auVar31,auVar32);
  auVar16 = vpmuludq_avx2(auVar73,auVar70);
  auVar1 = vpmuludq_avx2(auVar1,auVar36);
  auVar17 = vpmuludq_avx2(auVar4,auVar49);
  auVar18 = vpmuludq_avx2(auVar9,auVar39);
  auVar19 = vpmuludq_avx2(auVar71,auVar7);
  local_208._8_8_ =
       auVar16._8_8_ + auVar32._8_8_ + auVar1._8_8_ + auVar17._8_8_ +
       (auVar19._8_8_ + auVar18._8_8_) * 2;
  local_208._0_8_ =
       auVar16._0_8_ + auVar32._0_8_ + auVar1._0_8_ + auVar17._0_8_ +
       (auVar19._0_8_ + auVar18._0_8_) * 2;
  local_208._16_8_ =
       auVar16._16_8_ + auVar32._16_8_ + auVar1._16_8_ + auVar17._16_8_ +
       (auVar19._16_8_ + auVar18._16_8_) * 2;
  local_208._24_8_ =
       auVar16._24_8_ + auVar32._24_8_ + auVar1._24_8_ + auVar17._24_8_ +
       (auVar19._24_8_ + auVar18._24_8_) * 2;
  auVar17 = vpmuludq_avx2(auVar73,auVar33);
  auVar18 = vpmuludq_avx2(auVar31,auVar70);
  auVar19 = vpmuludq_avx2(auVar71,auVar4);
  auVar67 = vpmuludq_avx2(auVar9,auVar35);
  auVar68 = vpmuludq_avx2(auVar7,auVar36);
  auVar70 = vpmuludq_avx2(auVar70,auVar70);
  auVar20 = vpmuludq_avx2(auVar35,auVar73);
  auVar21 = vpmuludq_avx2(auVar39,auVar31);
  auVar1._4_4_ = auVar36._4_4_ * 2;
  auVar1._0_4_ = auVar36._0_4_ * 2;
  auVar1._8_4_ = auVar36._8_4_ * 2;
  auVar1._12_4_ = auVar36._12_4_ * 2;
  auVar1._16_4_ = auVar36._16_4_ * 2;
  auVar1._20_4_ = auVar36._20_4_ * 2;
  auVar1._24_4_ = auVar36._24_4_ * 2;
  auVar1._28_4_ = auVar36._28_4_ * 2;
  auVar1 = vpmuludq_avx2(auVar4,auVar1);
  auVar22 = vpmuludq_avx2(auVar69,auVar7);
  auVar23 = vpmuludq_avx2(auVar9,auVar71);
  auVar24 = vpmuludq_avx2(auVar73,auVar66);
  auVar25 = vpmuludq_avx2(auVar35,auVar31);
  auVar26 = vpmuludq_avx2(auVar33,auVar48);
  auVar7._4_4_ = auVar69._4_4_ * 2;
  auVar7._0_4_ = auVar69._0_4_ * 2;
  auVar7._8_4_ = auVar69._8_4_ * 2;
  auVar7._12_4_ = auVar69._12_4_ * 2;
  auVar7._16_4_ = auVar69._16_4_ * 2;
  auVar7._20_4_ = auVar69._20_4_ * 2;
  auVar7._24_4_ = auVar69._24_4_ * 2;
  auVar7._28_4_ = auVar69._28_4_ * 2;
  auVar27 = vpmuludq_avx2(auVar4,auVar7);
  auVar28 = vpmuludq_avx2(auVar9,auVar36);
  auVar32 = vpmuludq_avx2(auVar36,auVar73);
  auVar16 = vpmuludq_avx2(auVar71,auVar31);
  auVar33 = vpmuludq_avx2(auVar39,auVar33);
  auVar29 = vpmuludq_avx2(auVar35,auVar48);
  auVar30 = vpmuludq_avx2(auVar4,auVar37);
  auVar65 = vpmuludq_avx2(auVar9,auVar7);
  auVar4._0_8_ = auVar29._0_8_ + auVar33._0_8_ + auVar32._0_8_ + auVar16._0_8_ + auVar30._0_8_ +
                 auVar65._0_8_ * 2;
  auVar4._8_8_ = auVar29._8_8_ + auVar33._8_8_ + auVar32._8_8_ + auVar16._8_8_ + auVar30._8_8_ +
                 auVar65._8_8_ * 2;
  auVar4._16_8_ =
       auVar29._16_8_ + auVar33._16_8_ + auVar32._16_8_ + auVar16._16_8_ + auVar30._16_8_ +
       auVar65._16_8_ * 2;
  auVar4._24_8_ =
       auVar29._24_8_ + auVar33._24_8_ + auVar32._24_8_ + auVar16._24_8_ + auVar30._24_8_ +
       auVar65._24_8_ * 2;
  auVar16 = vpmuludq_avx2(auVar73,auVar69);
  auVar33 = vpmuludq_avx2(auVar36,auVar31);
  auVar29 = vpmuludq_avx2(auVar66,auVar48);
  auVar30 = vpmuludq_avx2(auVar35,auVar39);
  auVar65 = vpmuludq_avx2(auVar9,auVar37);
  auVar32._0_8_ = auVar30._0_8_ + auVar29._0_8_ + auVar16._0_8_ + auVar33._0_8_ + auVar65._0_8_ * 2;
  auVar32._8_8_ = auVar30._8_8_ + auVar29._8_8_ + auVar16._8_8_ + auVar33._8_8_ + auVar65._8_8_ * 2;
  auVar32._16_8_ =
       auVar30._16_8_ + auVar29._16_8_ + auVar16._16_8_ + auVar33._16_8_ + auVar65._16_8_ * 2;
  auVar32._24_8_ =
       auVar30._24_8_ + auVar29._24_8_ + auVar16._24_8_ + auVar33._24_8_ + auVar65._24_8_ * 2;
  auVar71 = vpmuludq_avx2(auVar71,auVar39);
  auVar16 = vpmuludq_avx2(auVar73,auVar37);
  auVar33 = vpmuludq_avx2(auVar35,auVar35);
  auVar29 = vpmuludq_avx2(auVar36,auVar48);
  auVar7 = vpmuludq_avx2(auVar31,auVar7);
  auVar30 = vpmuludq_avx2(auVar9,auVar34);
  auVar9._0_8_ = auVar29._0_8_ + auVar33._0_8_ + auVar71._0_8_ + auVar16._0_8_ + auVar7._0_8_ +
                 auVar30._0_8_ * 2;
  auVar9._8_8_ = auVar29._8_8_ + auVar33._8_8_ + auVar71._8_8_ + auVar16._8_8_ + auVar7._8_8_ +
                 auVar30._8_8_ * 2;
  auVar9._16_8_ =
       auVar29._16_8_ + auVar33._16_8_ + auVar71._16_8_ + auVar16._16_8_ + auVar7._16_8_ +
       auVar30._16_8_ * 2;
  auVar9._24_8_ =
       auVar29._24_8_ + auVar33._24_8_ + auVar71._24_8_ + auVar16._24_8_ + auVar7._24_8_ +
       auVar30._24_8_ * 2;
  auVar73 = vpmuludq_avx2(auVar73,auVar34);
  auVar31 = vpmuludq_avx2(auVar31,auVar37);
  auVar48 = vpmuludq_avx2(auVar69,auVar48);
  auVar39 = vpmuludq_avx2(auVar36,auVar39);
  auVar49 = vpmuludq_avx2(auVar66,auVar49);
  auVar16._0_8_ = auVar39._0_8_ + auVar48._0_8_ + auVar49._0_8_ + auVar73._0_8_ + auVar31._0_8_;
  auVar16._8_8_ = auVar39._8_8_ + auVar48._8_8_ + auVar49._8_8_ + auVar73._8_8_ + auVar31._8_8_;
  auVar16._16_8_ =
       auVar39._16_8_ + auVar48._16_8_ + auVar49._16_8_ + auVar73._16_8_ + auVar31._16_8_;
  auVar16._24_8_ =
       auVar39._24_8_ + auVar48._24_8_ + auVar49._24_8_ + auVar73._24_8_ + auVar31._24_8_;
  auVar65._8_8_ = _s__00114370;
  auVar65._0_8_ = _s__00114370;
  auVar65._16_8_ = _s__00114370;
  auVar65._24_8_ = _s__00114370;
  auVar30._8_8_ =
       auVar5._8_8_ + auVar3._8_8_ + auVar2._8_8_ +
       (auVar10._8_8_ + auVar8._8_8_ + auVar6._8_8_) * 2;
  auVar30._0_8_ =
       auVar5._0_8_ + auVar3._0_8_ + auVar2._0_8_ +
       (auVar10._0_8_ + auVar8._0_8_ + auVar6._0_8_) * 2;
  auVar30._16_8_ =
       auVar5._16_8_ + auVar3._16_8_ + auVar2._16_8_ +
       (auVar10._16_8_ + auVar8._16_8_ + auVar6._16_8_) * 2;
  auVar30._24_8_ =
       auVar5._24_8_ + auVar3._24_8_ + auVar2._24_8_ +
       (auVar10._24_8_ + auVar8._24_8_ + auVar6._24_8_) * 2;
  auVar48 = vpsubq_avx2(auVar65,auVar30);
  auVar49 = vpblendd_avx2(auVar30,auVar48,0xc0);
  auVar66._8_8_ = _s__00114388;
  auVar66._0_8_ = _s__00114388;
  auVar66._16_8_ = _s__00114388;
  auVar66._24_8_ = _s__00114388;
  auVar29._8_8_ =
       (auVar14._8_8_ + auVar15._8_8_) * 2 + auVar13._8_8_ + auVar12._8_8_ + auVar11._8_8_;
  auVar29._0_8_ =
       (auVar14._0_8_ + auVar15._0_8_) * 2 + auVar13._0_8_ + auVar12._0_8_ + auVar11._0_8_;
  auVar29._16_8_ =
       (auVar14._16_8_ + auVar15._16_8_) * 2 + auVar13._16_8_ + auVar12._16_8_ + auVar11._16_8_;
  auVar29._24_8_ =
       (auVar14._24_8_ + auVar15._24_8_) * 2 + auVar13._24_8_ + auVar12._24_8_ + auVar11._24_8_;
  auVar48 = vpsubq_avx2(auVar66,auVar29);
  auVar39 = vpblendd_avx2(auVar29,auVar48,0xc0);
  auVar69._8_8_ = _s__00114340;
  auVar69._0_8_ = _s__00114340;
  auVar69._16_8_ = _s__00114340;
  auVar69._24_8_ = _s__00114340;
  auVar48 = vpsubq_avx2(auVar69,local_208);
  auVar31 = vpblendd_avx2(local_208,auVar48,0xc0);
  auVar33._8_8_ =
       auVar18._8_8_ + auVar17._8_8_ + auVar19._8_8_ + (auVar68._8_8_ + auVar67._8_8_) * 2;
  auVar33._0_8_ =
       auVar18._0_8_ + auVar17._0_8_ + auVar19._0_8_ + (auVar68._0_8_ + auVar67._0_8_) * 2;
  auVar33._16_8_ =
       auVar18._16_8_ + auVar17._16_8_ + auVar19._16_8_ + (auVar68._16_8_ + auVar67._16_8_) * 2;
  auVar33._24_8_ =
       auVar18._24_8_ + auVar17._24_8_ + auVar19._24_8_ + (auVar68._24_8_ + auVar67._24_8_) * 2;
  auVar48 = vpsubq_avx2(auVar66,auVar33);
  auVar73 = vpblendd_avx2(auVar33,auVar48,0xc0);
  auVar19._8_8_ =
       auVar20._8_8_ + auVar70._8_8_ + auVar21._8_8_ + auVar1._8_8_ +
       (auVar23._8_8_ + auVar22._8_8_) * 2;
  auVar19._0_8_ =
       auVar20._0_8_ + auVar70._0_8_ + auVar21._0_8_ + auVar1._0_8_ +
       (auVar23._0_8_ + auVar22._0_8_) * 2;
  auVar19._16_8_ =
       auVar20._16_8_ + auVar70._16_8_ + auVar21._16_8_ + auVar1._16_8_ +
       (auVar23._16_8_ + auVar22._16_8_) * 2;
  auVar19._24_8_ =
       auVar20._24_8_ + auVar70._24_8_ + auVar21._24_8_ + auVar1._24_8_ +
       (auVar23._24_8_ + auVar22._24_8_) * 2;
  auVar48 = vpsubq_avx2(auVar69,auVar19);
  auVar71 = vpblendd_avx2(auVar19,auVar48,0xc0);
  auVar18._8_8_ = auVar25._8_8_ + auVar24._8_8_ + auVar26._8_8_ + auVar27._8_8_ + auVar28._8_8_ * 2;
  auVar18._0_8_ = auVar25._0_8_ + auVar24._0_8_ + auVar26._0_8_ + auVar27._0_8_ + auVar28._0_8_ * 2;
  auVar18._16_8_ =
       auVar25._16_8_ + auVar24._16_8_ + auVar26._16_8_ + auVar27._16_8_ + auVar28._16_8_ * 2;
  auVar18._24_8_ =
       auVar25._24_8_ + auVar24._24_8_ + auVar26._24_8_ + auVar27._24_8_ + auVar28._24_8_ * 2;
  auVar48 = vpsubq_avx2(auVar66,auVar18);
  auVar1 = vpblendd_avx2(auVar18,auVar48,0xc0);
  auVar48 = vpsubq_avx2(auVar69,auVar4);
  auVar7 = vpblendd_avx2(auVar4,auVar48,0xc0);
  auVar48 = vpsubq_avx2(auVar66,auVar32);
  auVar4 = vpblendd_avx2(auVar32,auVar48,0xc0);
  auVar48 = vpsubq_avx2(auVar69,auVar9);
  auVar32 = vpblendd_avx2(auVar9,auVar48,0xc0);
  auVar48 = vpsubq_avx2(auVar66,auVar16);
  auVar9 = vpblendd_avx2(auVar16,auVar48,0xc0);
  auVar48 = vpsrlq_avx2(auVar49,0x1a);
  auVar2._0_8_ = auVar48._0_8_ + auVar39._0_8_;
  auVar2._8_8_ = auVar48._8_8_ + auVar39._8_8_;
  auVar2._16_8_ = auVar48._16_8_ + auVar39._16_8_;
  auVar2._24_8_ = auVar48._24_8_ + auVar39._24_8_;
  auVar67._8_8_ = DAT_001142f0;
  auVar67._0_8_ = DAT_001142f0;
  auVar67._16_8_ = DAT_001142f0;
  auVar67._24_8_ = DAT_001142f0;
  auVar48 = vpand_avx2(auVar49,auVar67);
  auVar49 = vpsrlq_avx2(auVar71,0x1a);
  auVar3._0_8_ = auVar49._0_8_ + auVar1._0_8_;
  auVar3._8_8_ = auVar49._8_8_ + auVar1._8_8_;
  auVar3._16_8_ = auVar49._16_8_ + auVar1._16_8_;
  auVar3._24_8_ = auVar49._24_8_ + auVar1._24_8_;
  auVar49 = vpand_avx2(auVar71,auVar67);
  auVar39 = vpsrlq_avx2(auVar2,0x19);
  auVar5._0_8_ = auVar31._0_8_ + auVar39._0_8_;
  auVar5._8_8_ = auVar31._8_8_ + auVar39._8_8_;
  auVar5._16_8_ = auVar31._16_8_ + auVar39._16_8_;
  auVar5._24_8_ = auVar31._24_8_ + auVar39._24_8_;
  auVar39 = vpsrlq_avx2(auVar3,0x19);
  auVar6._0_8_ = auVar7._0_8_ + auVar39._0_8_;
  auVar6._8_8_ = auVar7._8_8_ + auVar39._8_8_;
  auVar6._16_8_ = auVar7._16_8_ + auVar39._16_8_;
  auVar6._24_8_ = auVar7._24_8_ + auVar39._24_8_;
  auVar70._8_8_ = DAT_00114390;
  auVar70._0_8_ = DAT_00114390;
  auVar70._16_8_ = DAT_00114390;
  auVar70._24_8_ = DAT_00114390;
  auVar39 = vpand_avx2(auVar70,auVar2);
  auVar31 = vpand_avx2(auVar3,auVar70);
  auVar71 = vpsrlq_avx2(auVar5,0x1a);
  auVar8._0_8_ = auVar71._0_8_ + auVar73._0_8_;
  auVar8._8_8_ = auVar71._8_8_ + auVar73._8_8_;
  auVar8._16_8_ = auVar71._16_8_ + auVar73._16_8_;
  auVar8._24_8_ = auVar71._24_8_ + auVar73._24_8_;
  auVar73 = vpsrlq_avx2(auVar6,0x1a);
  auVar10._0_8_ = auVar73._0_8_ + auVar4._0_8_;
  auVar10._8_8_ = auVar73._8_8_ + auVar4._8_8_;
  auVar10._16_8_ = auVar73._16_8_ + auVar4._16_8_;
  auVar10._24_8_ = auVar73._24_8_ + auVar4._24_8_;
  auVar73 = vpsrlq_avx2(auVar8,0x19);
  auVar11._0_8_ = auVar73._0_8_ + auVar49._0_8_;
  auVar11._8_8_ = auVar73._8_8_ + auVar49._8_8_;
  auVar11._16_8_ = auVar73._16_8_ + auVar49._16_8_;
  auVar11._24_8_ = auVar73._24_8_ + auVar49._24_8_;
  auVar49 = vpsrlq_avx2(auVar10,0x19);
  auVar12._0_8_ = auVar49._0_8_ + auVar32._0_8_;
  auVar12._8_8_ = auVar49._8_8_ + auVar32._8_8_;
  auVar12._16_8_ = auVar49._16_8_ + auVar32._16_8_;
  auVar12._24_8_ = auVar49._24_8_ + auVar32._24_8_;
  auVar49 = vpsrlq_avx2(auVar11,0x1a);
  auVar13._0_8_ = auVar49._0_8_ + auVar31._0_8_;
  auVar13._8_8_ = auVar49._8_8_ + auVar31._8_8_;
  auVar13._16_8_ = auVar49._16_8_ + auVar31._16_8_;
  auVar13._24_8_ = auVar49._24_8_ + auVar31._24_8_;
  auVar49 = vpsrlq_avx2(auVar12,0x1a);
  auVar14._0_8_ = auVar49._0_8_ + auVar9._0_8_;
  auVar14._8_8_ = auVar49._8_8_ + auVar9._8_8_;
  auVar14._16_8_ = auVar49._16_8_ + auVar9._16_8_;
  auVar14._24_8_ = auVar49._24_8_ + auVar9._24_8_;
  auVar49 = vpsrlq_avx2(auVar14,0x19);
  auVar49 = vpand_avx2(auVar49,auVar67);
  auVar49 = vpmuldq_avx2(auVar49,auVar72);
  auVar15._0_8_ = auVar49._0_8_ + auVar48._0_8_;
  auVar15._8_8_ = auVar49._8_8_ + auVar48._8_8_;
  auVar15._16_8_ = auVar49._16_8_ + auVar48._16_8_;
  auVar15._24_8_ = auVar49._24_8_ + auVar48._24_8_;
  auVar48 = vpsrlq_avx2(auVar14,0x33);
  auVar48 = vpmuldq_avx2(auVar48,auVar72);
  auVar49 = vpsrlq_avx2(auVar15,0x1a);
  auVar17._0_8_ = auVar48._0_8_ + auVar39._0_8_ + auVar49._0_8_;
  auVar17._8_8_ = auVar48._8_8_ + auVar39._8_8_ + auVar49._8_8_;
  auVar17._16_8_ = auVar48._16_8_ + auVar39._16_8_ + auVar49._16_8_;
  auVar17._24_8_ = auVar48._24_8_ + auVar39._24_8_ + auVar49._24_8_;
  auVar68._4_4_ = DAT_00114668;
  auVar68._0_4_ = DAT_00114668;
  auVar68._8_4_ = DAT_00114668;
  auVar68._12_4_ = DAT_00114668;
  auVar68._16_4_ = DAT_00114668;
  auVar68._20_4_ = DAT_00114668;
  auVar68._24_4_ = DAT_00114668;
  auVar68._28_4_ = DAT_00114668;
  auVar48 = vpand_avx2(auVar15,auVar68);
  auVar48 = vshufps_avx(auVar48,auVar17,0x88);
  auVar49 = vshufps_avx(auVar5,auVar8,0x88);
  auVar39 = vpand_avx2(auVar11,auVar68);
  auVar39 = vshufps_avx(auVar39,auVar13,0x88);
  auVar31 = vshufps_avx(auVar6,auVar10,0x88);
  auVar73 = vshufps_avx(auVar12,auVar14,0x88);
  uVar47 = auVar49._0_4_ & _DAT_001147a0;
  uVar50 = auVar49._4_4_ & _UNK_001147a4;
  uVar51 = auVar49._8_4_ & _UNK_001147a8;
  uVar52 = auVar49._12_4_ & _UNK_001147ac;
  uVar53 = auVar49._16_4_ & _UNK_001147b0;
  uVar54 = auVar49._20_4_ & _UNK_001147b4;
  uVar55 = auVar49._24_4_ & _UNK_001147b8;
  uVar56 = auVar49._28_4_ & _UNK_001147bc;
  uVar38 = auVar31._0_4_ & _DAT_001147a0;
  uVar40 = auVar31._4_4_ & _UNK_001147a4;
  uVar41 = auVar31._8_4_ & _UNK_001147a8;
  uVar42 = auVar31._12_4_ & _UNK_001147ac;
  uVar43 = auVar31._16_4_ & _UNK_001147b0;
  uVar44 = auVar31._20_4_ & _UNK_001147b4;
  uVar45 = auVar31._24_4_ & _UNK_001147b8;
  uVar46 = auVar31._28_4_ & _UNK_001147bc;
  uVar57 = auVar73._0_4_ & _DAT_001147a0;
  uVar58 = auVar73._4_4_ & _UNK_001147a4;
  uVar59 = auVar73._8_4_ & _UNK_001147a8;
  uVar60 = auVar73._12_4_ & _UNK_001147ac;
  uVar61 = auVar73._16_4_ & _UNK_001147b0;
  uVar62 = auVar73._20_4_ & _UNK_001147b4;
  uVar63 = auVar73._24_4_ & _UNK_001147b8;
  uVar64 = auVar73._28_4_ & _UNK_001147bc;
  *param_1 = auVar48;
  *(uint *)param_1[1] = uVar47;
  *(uint *)(param_1[1] + 4) = uVar50;
  *(uint *)(param_1[1] + 8) = uVar51;
  *(uint *)(param_1[1] + 0xc) = uVar52;
  *(uint *)(param_1[1] + 0x10) = uVar53;
  *(uint *)(param_1[1] + 0x14) = uVar54;
  *(uint *)(param_1[1] + 0x18) = uVar55;
  *(uint *)(param_1[1] + 0x1c) = uVar56;
  param_1[2] = auVar39;
  *(uint *)param_1[3] = uVar38;
  *(uint *)(param_1[3] + 4) = uVar40;
  *(uint *)(param_1[3] + 8) = uVar41;
  *(uint *)(param_1[3] + 0xc) = uVar42;
  *(uint *)(param_1[3] + 0x10) = uVar43;
  *(uint *)(param_1[3] + 0x14) = uVar44;
  *(uint *)(param_1[3] + 0x18) = uVar45;
  *(uint *)(param_1[3] + 0x1c) = uVar46;
  *(uint *)param_1[4] = uVar57;
  *(uint *)(param_1[4] + 4) = uVar58;
  *(uint *)(param_1[4] + 8) = uVar59;
  *(uint *)(param_1[4] + 0xc) = uVar60;
  *(uint *)(param_1[4] + 0x10) = uVar61;
  *(uint *)(param_1[4] + 0x14) = uVar62;
  *(uint *)(param_1[4] + 0x18) = uVar63;
  *(uint *)(param_1[4] + 0x1c) = uVar64;
  return param_1;
}


