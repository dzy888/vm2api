// 006d2220 _impl_mul

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4 as
   <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4 as
   core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul::__Impl_mul__>::_impl_mul */

void __rustcall
<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as_core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul::__Impl_mul__>
::_impl_mul(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32])

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
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  uint uVar127;
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 local_428 [32];
  
  auVar118 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar91 = vpunpckldq_avx2(*param_2,auVar118);
  auVar81 = vpunpckhdq_avx2(*param_2,auVar118);
  auVar92 = vpunpckldq_avx2(param_2[1],auVar118);
  auVar82 = vpunpckhdq_avx2(param_2[1],auVar118);
  auVar93 = vpunpckldq_avx2(param_2[2],auVar118);
  auVar83 = vpunpckhdq_avx2(param_2[2],auVar118);
  auVar94 = vpunpckldq_avx2(param_2[3],auVar118);
  auVar84 = vpunpckhdq_avx2(param_2[3],auVar118);
  auVar95 = vpunpckldq_avx2(param_2[4],auVar118);
  auVar85 = vpunpckhdq_avx2(param_2[4],auVar118);
  auVar96 = vpunpckldq_avx2(*param_3,auVar118);
  auVar86 = vpunpckhdq_avx2(*param_3,auVar118);
  auVar97 = vpunpckldq_avx2(param_3[1],auVar118);
  auVar87 = vpunpckhdq_avx2(param_3[1],auVar118);
  auVar98 = vpunpckldq_avx2(param_3[2],auVar118);
  auVar88 = vpunpckhdq_avx2(param_3[2],auVar118);
  auVar99 = vpunpckldq_avx2(param_3[3],auVar118);
  auVar89 = vpunpckhdq_avx2(param_3[3],auVar118);
  auVar100 = vpunpckldq_avx2(param_3[4],auVar118);
  auVar132._8_8_ = DAT_00185320;
  auVar132._0_8_ = DAT_00185320;
  auVar132._16_8_ = DAT_00185320;
  auVar132._24_8_ = DAT_00185320;
  auVar90 = vpunpckhdq_avx2(param_3[4],auVar118);
  auVar131 = vpmuludq_avx2(auVar132,auVar99);
  auVar2 = vpmuludq_avx2(auVar132,auVar90);
  auVar118._4_4_ = auVar81._4_4_ * 2;
  auVar118._0_4_ = auVar81._0_4_ * 2;
  auVar118._8_4_ = auVar81._8_4_ * 2;
  auVar118._12_4_ = auVar81._12_4_ * 2;
  auVar118._16_4_ = auVar81._16_4_ * 2;
  auVar118._20_4_ = auVar81._20_4_ * 2;
  auVar118._24_4_ = auVar81._24_4_ * 2;
  auVar118._28_4_ = auVar81._28_4_ * 2;
  auVar3 = vpmuludq_avx2(auVar2,auVar118);
  auVar4 = vpmuludq_avx2(auVar93,auVar131);
  auVar5 = vpmuludq_avx2(auVar132,auVar100);
  auVar6 = vpmuludq_avx2(auVar92,auVar5);
  auVar7 = vpmuludq_avx2(auVar98,auVar132);
  auVar8 = vpmuludq_avx2(auVar88,auVar132);
  auVar119._4_4_ = auVar83._4_4_ * 2;
  auVar119._0_4_ = auVar83._0_4_ * 2;
  auVar119._8_4_ = auVar83._8_4_ * 2;
  auVar119._12_4_ = auVar83._12_4_ * 2;
  auVar119._16_4_ = auVar83._16_4_ * 2;
  auVar119._20_4_ = auVar83._20_4_ * 2;
  auVar119._24_4_ = auVar83._24_4_ * 2;
  auVar119._28_4_ = auVar83._28_4_ * 2;
  auVar9 = vpmuludq_avx2(auVar8,auVar119);
  auVar10 = vpmuludq_avx2(auVar94,auVar7);
  auVar11 = vpmuludq_avx2(auVar132,auVar89);
  auVar120._4_4_ = auVar82._4_4_ * 2;
  auVar120._0_4_ = auVar82._0_4_ * 2;
  auVar120._8_4_ = auVar82._8_4_ * 2;
  auVar120._12_4_ = auVar82._12_4_ * 2;
  auVar120._16_4_ = auVar82._16_4_ * 2;
  auVar120._20_4_ = auVar82._20_4_ * 2;
  auVar120._24_4_ = auVar82._24_4_ * 2;
  auVar120._28_4_ = auVar82._28_4_ * 2;
  auVar12 = vpmuludq_avx2(auVar11,auVar120);
  auVar129 = vpmuludq_avx2(auVar132,auVar97);
  auVar130 = vpmuludq_avx2(auVar87,auVar132);
  auVar1._4_4_ = auVar84._4_4_ * 2;
  auVar1._0_4_ = auVar84._0_4_ * 2;
  auVar1._8_4_ = auVar84._8_4_ * 2;
  auVar1._12_4_ = auVar84._12_4_ * 2;
  auVar1._16_4_ = auVar84._16_4_ * 2;
  auVar1._20_4_ = auVar84._20_4_ * 2;
  auVar1._24_4_ = auVar84._24_4_ * 2;
  auVar1._28_4_ = auVar84._28_4_ * 2;
  auVar128 = vpmuludq_avx2(auVar130,auVar1);
  auVar13 = vpmuludq_avx2(auVar95,auVar129);
  auVar14 = vpmuludq_avx2(auVar132,auVar86);
  auVar80._4_4_ = auVar85._4_4_ * 2;
  auVar80._0_4_ = auVar85._0_4_ * 2;
  auVar80._8_4_ = auVar85._8_4_ * 2;
  auVar80._12_4_ = auVar85._12_4_ * 2;
  auVar80._16_4_ = auVar85._16_4_ * 2;
  auVar80._20_4_ = auVar85._20_4_ * 2;
  auVar80._24_4_ = auVar85._24_4_ * 2;
  auVar80._28_4_ = auVar85._28_4_ * 2;
  auVar14 = vpmuludq_avx2(auVar14,auVar80);
  auVar15 = vpmuludq_avx2(auVar96,auVar91);
  auVar16 = vpmuludq_avx2(auVar86,auVar91);
  auVar17 = vpmuludq_avx2(auVar96,auVar81);
  auVar18 = vpmuludq_avx2(auVar92,auVar2);
  auVar19 = vpmuludq_avx2(auVar5,auVar82);
  auVar20 = vpmuludq_avx2(auVar11,auVar93);
  auVar21 = vpmuludq_avx2(auVar7,auVar84);
  auVar22 = vpmuludq_avx2(auVar131,auVar83);
  auVar23 = vpmuludq_avx2(auVar130,auVar95);
  auVar129 = vpmuludq_avx2(auVar85,auVar129);
  auVar24 = vpmuludq_avx2(auVar8,auVar94);
  auVar25 = vpmuludq_avx2(auVar97,auVar91);
  auVar26 = vpmuludq_avx2(auVar96,auVar92);
  auVar27 = vpmuludq_avx2(auVar118,auVar86);
  auVar28 = vpmuludq_avx2(auVar11,auVar119);
  auVar29 = vpmuludq_avx2(auVar131,auVar94);
  auVar30 = vpmuludq_avx2(auVar120,auVar2);
  auVar31 = vpmuludq_avx2(auVar8,auVar1);
  auVar32 = vpmuludq_avx2(auVar7,auVar95);
  auVar130 = vpmuludq_avx2(auVar130,auVar80);
  auVar33 = vpmuludq_avx2(auVar93,auVar5);
  auVar34 = vpmuludq_avx2(auVar87,auVar91);
  auVar35 = vpmuludq_avx2(auVar97,auVar81);
  auVar36 = vpmuludq_avx2(auVar86,auVar92);
  auVar37 = vpmuludq_avx2(auVar96,auVar82);
  auVar38 = vpmuludq_avx2(auVar93,auVar2);
  auVar39 = vpmuludq_avx2(auVar131,auVar84);
  auVar40 = vpmuludq_avx2(auVar83,auVar5);
  auVar41 = vpmuludq_avx2(auVar95,auVar8);
  auVar7 = vpmuludq_avx2(auVar7,auVar85);
  auVar42 = vpmuludq_avx2(auVar94,auVar11);
  auVar43 = vpmuludq_avx2(auVar87,auVar118);
  auVar44 = vpmuludq_avx2(auVar97,auVar92);
  auVar45 = vpmuludq_avx2(auVar86,auVar120);
  auVar46 = vpmuludq_avx2(auVar96,auVar93);
  auVar47 = vpmuludq_avx2(auVar91,auVar98);
  auVar48 = vpmuludq_avx2(auVar119,auVar2);
  auVar49 = vpmuludq_avx2(auVar94,auVar5);
  auVar50 = vpmuludq_avx2(auVar11,auVar1);
  auVar51 = vpmuludq_avx2(auVar131,auVar95);
  auVar8 = vpmuludq_avx2(auVar80,auVar8);
  local_428._8_8_ =
       auVar46._8_8_ + auVar45._8_8_ + auVar43._8_8_ + auVar44._8_8_ + auVar47._8_8_ + auVar8._8_8_
       + auVar50._8_8_ + auVar51._8_8_ + auVar48._8_8_ + auVar49._8_8_;
  local_428._0_8_ =
       auVar46._0_8_ + auVar45._0_8_ + auVar43._0_8_ + auVar44._0_8_ + auVar47._0_8_ + auVar8._0_8_
       + auVar50._0_8_ + auVar51._0_8_ + auVar48._0_8_ + auVar49._0_8_;
  local_428._16_8_ =
       auVar46._16_8_ + auVar45._16_8_ + auVar43._16_8_ + auVar44._16_8_ + auVar47._16_8_ +
       auVar8._16_8_ + auVar50._16_8_ + auVar51._16_8_ + auVar48._16_8_ + auVar49._16_8_;
  local_428._24_8_ =
       auVar46._24_8_ + auVar45._24_8_ + auVar43._24_8_ + auVar44._24_8_ + auVar47._24_8_ +
       auVar8._24_8_ + auVar50._24_8_ + auVar51._24_8_ + auVar48._24_8_ + auVar49._24_8_;
  auVar8 = vpmuludq_avx2(auVar88,auVar91);
  auVar43 = vpmuludq_avx2(auVar98,auVar81);
  auVar44 = vpmuludq_avx2(auVar92,auVar87);
  auVar45 = vpmuludq_avx2(auVar97,auVar82);
  auVar46 = vpmuludq_avx2(auVar86,auVar93);
  auVar47 = vpmuludq_avx2(auVar96,auVar83);
  auVar48 = vpmuludq_avx2(auVar11,auVar95);
  auVar49 = vpmuludq_avx2(auVar131,auVar85);
  auVar50 = vpmuludq_avx2(auVar2,auVar94);
  auVar51 = vpmuludq_avx2(auVar5,auVar84);
  auVar52 = vpmuludq_avx2(auVar88,auVar118);
  auVar53 = vpmuludq_avx2(auVar98,auVar92);
  auVar54 = vpmuludq_avx2(auVar91,auVar99);
  auVar55 = vpmuludq_avx2(auVar87,auVar120);
  auVar56 = vpmuludq_avx2(auVar97,auVar93);
  auVar57 = vpmuludq_avx2(auVar86,auVar119);
  auVar58 = vpmuludq_avx2(auVar94,auVar96);
  auVar59 = vpmuludq_avx2(auVar2,auVar1);
  auVar60 = vpmuludq_avx2(auVar95,auVar5);
  auVar11 = vpmuludq_avx2(auVar11,auVar80);
  auVar61 = vpmuludq_avx2(auVar88,auVar92);
  auVar62 = vpmuludq_avx2(auVar98,auVar82);
  auVar63 = vpmuludq_avx2(auVar89,auVar91);
  auVar64 = vpmuludq_avx2(auVar87,auVar93);
  auVar65 = vpmuludq_avx2(auVar97,auVar83);
  auVar66 = vpmuludq_avx2(auVar94,auVar86);
  auVar67 = vpmuludq_avx2(auVar96,auVar84);
  auVar68 = vpmuludq_avx2(auVar81,auVar99);
  auVar69 = vpmuludq_avx2(auVar2,auVar95);
  auVar70 = vpmuludq_avx2(auVar5,auVar85);
  auVar71 = vpmuludq_avx2(auVar91,auVar100);
  auVar72 = vpmuludq_avx2(auVar99,auVar92);
  auVar73 = vpmuludq_avx2(auVar88,auVar120);
  auVar74 = vpmuludq_avx2(auVar93,auVar98);
  auVar75 = vpmuludq_avx2(auVar89,auVar118);
  auVar76 = vpmuludq_avx2(auVar87,auVar119);
  auVar77 = vpmuludq_avx2(auVar94,auVar97);
  auVar78 = vpmuludq_avx2(auVar86,auVar1);
  auVar79 = vpmuludq_avx2(auVar96,auVar95);
  auVar80 = vpmuludq_avx2(auVar2,auVar80);
  auVar90 = vpmuludq_avx2(auVar91,auVar90);
  auVar81 = vpmuludq_avx2(auVar81,auVar100);
  auVar89 = vpmuludq_avx2(auVar89,auVar92);
  auVar82 = vpmuludq_avx2(auVar99,auVar82);
  auVar88 = vpmuludq_avx2(auVar93,auVar88);
  auVar83 = vpmuludq_avx2(auVar98,auVar83);
  auVar87 = vpmuludq_avx2(auVar87,auVar94);
  auVar84 = vpmuludq_avx2(auVar97,auVar84);
  auVar86 = vpmuludq_avx2(auVar86,auVar95);
  auVar85 = vpmuludq_avx2(auVar96,auVar85);
  auVar91._8_8_ =
       auVar12._8_8_ + auVar9._8_8_ + auVar10._8_8_ +
       auVar14._8_8_ + auVar15._8_8_ + auVar13._8_8_ + auVar128._8_8_ +
       auVar4._8_8_ + auVar3._8_8_ + auVar6._8_8_;
  auVar91._0_8_ =
       auVar12._0_8_ + auVar9._0_8_ + auVar10._0_8_ +
       auVar14._0_8_ + auVar15._0_8_ + auVar13._0_8_ + auVar128._0_8_ +
       auVar4._0_8_ + auVar3._0_8_ + auVar6._0_8_;
  auVar91._16_8_ =
       auVar12._16_8_ + auVar9._16_8_ + auVar10._16_8_ +
       auVar14._16_8_ + auVar15._16_8_ + auVar13._16_8_ + auVar128._16_8_ +
       auVar4._16_8_ + auVar3._16_8_ + auVar6._16_8_;
  auVar91._24_8_ =
       auVar12._24_8_ + auVar9._24_8_ + auVar10._24_8_ +
       auVar14._24_8_ + auVar15._24_8_ + auVar13._24_8_ + auVar128._24_8_ +
       auVar4._24_8_ + auVar3._24_8_ + auVar6._24_8_;
  auVar118 = vpsrlq_avx2(auVar91,0x1a);
  auVar128._8_8_ = DAT_001851a0;
  auVar128._0_8_ = DAT_001851a0;
  auVar128._16_8_ = DAT_001851a0;
  auVar128._24_8_ = DAT_001851a0;
  auVar131._0_8_ =
       auVar118._0_8_ +
       auVar18._0_8_ + auVar19._0_8_ +
       auVar21._0_8_ + auVar20._0_8_ + auVar22._0_8_ +
       auVar23._0_8_ + auVar17._0_8_ + auVar16._0_8_ + auVar24._0_8_ + auVar129._0_8_;
  auVar131._8_8_ =
       auVar118._8_8_ +
       auVar18._8_8_ + auVar19._8_8_ +
       auVar21._8_8_ + auVar20._8_8_ + auVar22._8_8_ +
       auVar23._8_8_ + auVar17._8_8_ + auVar16._8_8_ + auVar24._8_8_ + auVar129._8_8_;
  auVar131._16_8_ =
       auVar118._16_8_ +
       auVar18._16_8_ + auVar19._16_8_ +
       auVar21._16_8_ + auVar20._16_8_ + auVar22._16_8_ +
       auVar23._16_8_ + auVar17._16_8_ + auVar16._16_8_ + auVar24._16_8_ + auVar129._16_8_;
  auVar131._24_8_ =
       auVar118._24_8_ +
       auVar18._24_8_ + auVar19._24_8_ +
       auVar21._24_8_ + auVar20._24_8_ + auVar22._24_8_ +
       auVar23._24_8_ + auVar17._24_8_ + auVar16._24_8_ + auVar24._24_8_ + auVar129._24_8_;
  auVar118 = vpand_avx2(auVar91,auVar128);
  auVar119 = vpsrlq_avx2(local_428,0x1a);
  auVar2._0_8_ = auVar119._0_8_ +
                 auVar47._0_8_ + auVar46._0_8_ + auVar44._0_8_ + auVar45._0_8_ +
                 auVar8._0_8_ + auVar43._0_8_ + auVar48._0_8_ + auVar49._0_8_ + auVar50._0_8_ +
                 auVar51._0_8_;
  auVar2._8_8_ = auVar119._8_8_ +
                 auVar47._8_8_ + auVar46._8_8_ + auVar44._8_8_ + auVar45._8_8_ +
                 auVar8._8_8_ + auVar43._8_8_ + auVar48._8_8_ + auVar49._8_8_ + auVar50._8_8_ +
                 auVar51._8_8_;
  auVar2._16_8_ =
       auVar119._16_8_ +
       auVar47._16_8_ + auVar46._16_8_ + auVar44._16_8_ + auVar45._16_8_ +
       auVar8._16_8_ + auVar43._16_8_ + auVar48._16_8_ + auVar49._16_8_ + auVar50._16_8_ +
       auVar51._16_8_;
  auVar2._24_8_ =
       auVar119._24_8_ +
       auVar47._24_8_ + auVar46._24_8_ + auVar44._24_8_ + auVar45._24_8_ +
       auVar8._24_8_ + auVar43._24_8_ + auVar48._24_8_ + auVar49._24_8_ + auVar50._24_8_ +
       auVar51._24_8_;
  auVar119 = vpand_avx2(local_428,auVar128);
  auVar120 = vpsrlq_avx2(auVar131,0x19);
  auVar3._0_8_ = auVar120._0_8_ +
                 auVar31._0_8_ + auVar32._0_8_ +
                 auVar26._0_8_ + auVar25._0_8_ + auVar27._0_8_ + auVar130._0_8_ +
                 auVar30._0_8_ + auVar29._0_8_ + auVar28._0_8_ + auVar33._0_8_;
  auVar3._8_8_ = auVar120._8_8_ +
                 auVar31._8_8_ + auVar32._8_8_ +
                 auVar26._8_8_ + auVar25._8_8_ + auVar27._8_8_ + auVar130._8_8_ +
                 auVar30._8_8_ + auVar29._8_8_ + auVar28._8_8_ + auVar33._8_8_;
  auVar3._16_8_ =
       auVar120._16_8_ +
       auVar31._16_8_ + auVar32._16_8_ +
       auVar26._16_8_ + auVar25._16_8_ + auVar27._16_8_ + auVar130._16_8_ +
       auVar30._16_8_ + auVar29._16_8_ + auVar28._16_8_ + auVar33._16_8_;
  auVar3._24_8_ =
       auVar120._24_8_ +
       auVar31._24_8_ + auVar32._24_8_ +
       auVar26._24_8_ + auVar25._24_8_ + auVar27._24_8_ + auVar130._24_8_ +
       auVar30._24_8_ + auVar29._24_8_ + auVar28._24_8_ + auVar33._24_8_;
  auVar120 = vpsrlq_avx2(auVar2,0x19);
  auVar4._0_8_ = auVar120._0_8_ +
                 auVar58._0_8_ + auVar57._0_8_ + auVar55._0_8_ + auVar56._0_8_ +
                 auVar52._0_8_ + auVar53._0_8_ + auVar54._0_8_ + auVar11._0_8_ +
                 auVar59._0_8_ + auVar60._0_8_;
  auVar4._8_8_ = auVar120._8_8_ +
                 auVar58._8_8_ + auVar57._8_8_ + auVar55._8_8_ + auVar56._8_8_ +
                 auVar52._8_8_ + auVar53._8_8_ + auVar54._8_8_ + auVar11._8_8_ +
                 auVar59._8_8_ + auVar60._8_8_;
  auVar4._16_8_ =
       auVar120._16_8_ +
       auVar58._16_8_ + auVar57._16_8_ + auVar55._16_8_ + auVar56._16_8_ +
       auVar52._16_8_ + auVar53._16_8_ + auVar54._16_8_ + auVar11._16_8_ +
       auVar59._16_8_ + auVar60._16_8_;
  auVar4._24_8_ =
       auVar120._24_8_ +
       auVar58._24_8_ + auVar57._24_8_ + auVar55._24_8_ + auVar56._24_8_ +
       auVar52._24_8_ + auVar53._24_8_ + auVar54._24_8_ + auVar11._24_8_ +
       auVar59._24_8_ + auVar60._24_8_;
  auVar130._8_8_ = DAT_00185520;
  auVar130._0_8_ = DAT_00185520;
  auVar130._16_8_ = DAT_00185520;
  auVar130._24_8_ = DAT_00185520;
  auVar120 = vpand_avx2(auVar130,auVar131);
  auVar1 = vpand_avx2(auVar130,auVar2);
  auVar131 = vpsrlq_avx2(auVar3,0x1a);
  auVar5._0_8_ = auVar131._0_8_ +
                 auVar37._0_8_ + auVar36._0_8_ + auVar34._0_8_ + auVar35._0_8_ + auVar41._0_8_ +
                 auVar7._0_8_ + auVar42._0_8_ + auVar39._0_8_ + auVar38._0_8_ + auVar40._0_8_;
  auVar5._8_8_ = auVar131._8_8_ +
                 auVar37._8_8_ + auVar36._8_8_ + auVar34._8_8_ + auVar35._8_8_ + auVar41._8_8_ +
                 auVar7._8_8_ + auVar42._8_8_ + auVar39._8_8_ + auVar38._8_8_ + auVar40._8_8_;
  auVar5._16_8_ =
       auVar131._16_8_ +
       auVar37._16_8_ + auVar36._16_8_ + auVar34._16_8_ + auVar35._16_8_ + auVar41._16_8_ +
       auVar7._16_8_ + auVar42._16_8_ + auVar39._16_8_ + auVar38._16_8_ + auVar40._16_8_;
  auVar5._24_8_ =
       auVar131._24_8_ +
       auVar37._24_8_ + auVar36._24_8_ + auVar34._24_8_ + auVar35._24_8_ + auVar41._24_8_ +
       auVar7._24_8_ + auVar42._24_8_ + auVar39._24_8_ + auVar38._24_8_ + auVar40._24_8_;
  auVar131 = vpsrlq_avx2(auVar4,0x1a);
  auVar6._0_8_ = auVar131._0_8_ +
                 auVar67._0_8_ + auVar66._0_8_ + auVar64._0_8_ + auVar65._0_8_ +
                 auVar61._0_8_ + auVar62._0_8_ + auVar63._0_8_ + auVar68._0_8_ + auVar69._0_8_ +
                 auVar70._0_8_;
  auVar6._8_8_ = auVar131._8_8_ +
                 auVar67._8_8_ + auVar66._8_8_ + auVar64._8_8_ + auVar65._8_8_ +
                 auVar61._8_8_ + auVar62._8_8_ + auVar63._8_8_ + auVar68._8_8_ + auVar69._8_8_ +
                 auVar70._8_8_;
  auVar6._16_8_ =
       auVar131._16_8_ +
       auVar67._16_8_ + auVar66._16_8_ + auVar64._16_8_ + auVar65._16_8_ +
       auVar61._16_8_ + auVar62._16_8_ + auVar63._16_8_ + auVar68._16_8_ + auVar69._16_8_ +
       auVar70._16_8_;
  auVar6._24_8_ =
       auVar131._24_8_ +
       auVar67._24_8_ + auVar66._24_8_ + auVar64._24_8_ + auVar65._24_8_ +
       auVar61._24_8_ + auVar62._24_8_ + auVar63._24_8_ + auVar68._24_8_ + auVar69._24_8_ +
       auVar70._24_8_;
  auVar131 = vpsrlq_avx2(auVar5,0x19);
  auVar7._0_8_ = auVar131._0_8_ + auVar119._0_8_;
  auVar7._8_8_ = auVar131._8_8_ + auVar119._8_8_;
  auVar7._16_8_ = auVar131._16_8_ + auVar119._16_8_;
  auVar7._24_8_ = auVar131._24_8_ + auVar119._24_8_;
  auVar119 = vpsrlq_avx2(auVar6,0x19);
  auVar8._0_8_ = auVar119._0_8_ +
                 auVar79._0_8_ + auVar78._0_8_ + auVar76._0_8_ + auVar77._0_8_ +
                 auVar73._0_8_ + auVar74._0_8_ + auVar75._0_8_ + auVar72._0_8_ + auVar71._0_8_ +
                 auVar80._0_8_;
  auVar8._8_8_ = auVar119._8_8_ +
                 auVar79._8_8_ + auVar78._8_8_ + auVar76._8_8_ + auVar77._8_8_ +
                 auVar73._8_8_ + auVar74._8_8_ + auVar75._8_8_ + auVar72._8_8_ + auVar71._8_8_ +
                 auVar80._8_8_;
  auVar8._16_8_ =
       auVar119._16_8_ +
       auVar79._16_8_ + auVar78._16_8_ + auVar76._16_8_ + auVar77._16_8_ +
       auVar73._16_8_ + auVar74._16_8_ + auVar75._16_8_ + auVar72._16_8_ + auVar71._16_8_ +
       auVar80._16_8_;
  auVar8._24_8_ =
       auVar119._24_8_ +
       auVar79._24_8_ + auVar78._24_8_ + auVar76._24_8_ + auVar77._24_8_ +
       auVar73._24_8_ + auVar74._24_8_ + auVar75._24_8_ + auVar72._24_8_ + auVar71._24_8_ +
       auVar80._24_8_;
  auVar119 = vpsrlq_avx2(auVar7,0x1a);
  auVar9._0_8_ = auVar119._0_8_ + auVar1._0_8_;
  auVar9._8_8_ = auVar119._8_8_ + auVar1._8_8_;
  auVar9._16_8_ = auVar119._16_8_ + auVar1._16_8_;
  auVar9._24_8_ = auVar119._24_8_ + auVar1._24_8_;
  auVar119 = vpsrlq_avx2(auVar8,0x1a);
  auVar10._0_8_ =
       auVar119._0_8_ +
       auVar85._0_8_ + auVar86._0_8_ + auVar87._0_8_ + auVar84._0_8_ +
       auVar88._0_8_ + auVar83._0_8_ + auVar89._0_8_ + auVar82._0_8_ + auVar90._0_8_ + auVar81._0_8_
  ;
  auVar10._8_8_ =
       auVar119._8_8_ +
       auVar85._8_8_ + auVar86._8_8_ + auVar87._8_8_ + auVar84._8_8_ +
       auVar88._8_8_ + auVar83._8_8_ + auVar89._8_8_ + auVar82._8_8_ + auVar90._8_8_ + auVar81._8_8_
  ;
  auVar10._16_8_ =
       auVar119._16_8_ +
       auVar85._16_8_ + auVar86._16_8_ + auVar87._16_8_ + auVar84._16_8_ +
       auVar88._16_8_ + auVar83._16_8_ + auVar89._16_8_ +
       auVar82._16_8_ + auVar90._16_8_ + auVar81._16_8_;
  auVar10._24_8_ =
       auVar119._24_8_ +
       auVar85._24_8_ + auVar86._24_8_ + auVar87._24_8_ + auVar84._24_8_ +
       auVar88._24_8_ + auVar83._24_8_ + auVar89._24_8_ +
       auVar82._24_8_ + auVar90._24_8_ + auVar81._24_8_;
  auVar119 = vpsrlq_avx2(auVar10,0x19);
  auVar119 = vpand_avx2(auVar119,auVar128);
  auVar119 = vpmuldq_avx2(auVar119,auVar132);
  auVar11._0_8_ = auVar118._0_8_ + auVar119._0_8_;
  auVar11._8_8_ = auVar118._8_8_ + auVar119._8_8_;
  auVar11._16_8_ = auVar118._16_8_ + auVar119._16_8_;
  auVar11._24_8_ = auVar118._24_8_ + auVar119._24_8_;
  auVar118 = vpsrlq_avx2(auVar10,0x33);
  auVar118 = vpmuldq_avx2(auVar118,auVar132);
  auVar119 = vpsrlq_avx2(auVar11,0x1a);
  auVar12._0_8_ = auVar119._0_8_ + auVar118._0_8_ + auVar120._0_8_;
  auVar12._8_8_ = auVar119._8_8_ + auVar118._8_8_ + auVar120._8_8_;
  auVar12._16_8_ = auVar119._16_8_ + auVar118._16_8_ + auVar120._16_8_;
  auVar12._24_8_ = auVar119._24_8_ + auVar118._24_8_ + auVar120._24_8_;
  auVar129._4_4_ = DAT_0018e0b4;
  auVar129._0_4_ = DAT_0018e0b4;
  auVar129._8_4_ = DAT_0018e0b4;
  auVar129._12_4_ = DAT_0018e0b4;
  auVar129._16_4_ = DAT_0018e0b4;
  auVar129._20_4_ = DAT_0018e0b4;
  auVar129._24_4_ = DAT_0018e0b4;
  auVar129._28_4_ = DAT_0018e0b4;
  auVar118 = vpand_avx2(auVar129,auVar11);
  auVar118 = vshufps_avx(auVar118,auVar12,0x88);
  auVar119 = vshufps_avx(auVar3,auVar5,0x88);
  auVar120 = vpand_avx2(auVar7,auVar129);
  auVar120 = vshufps_avx(auVar120,auVar9,0x88);
  auVar1 = vshufps_avx(auVar4,auVar6,0x88);
  auVar80 = vshufps_avx(auVar8,auVar10,0x88);
  uVar117 = auVar119._0_4_ & _DAT_0018cf80;
  uVar121 = auVar119._4_4_ & _UNK_0018cf84;
  uVar122 = auVar119._8_4_ & _UNK_0018cf88;
  uVar123 = auVar119._12_4_ & _UNK_0018cf8c;
  uVar124 = auVar119._16_4_ & _UNK_0018cf90;
  uVar125 = auVar119._20_4_ & _UNK_0018cf94;
  uVar126 = auVar119._24_4_ & _UNK_0018cf98;
  uVar127 = auVar119._28_4_ & _UNK_0018cf9c;
  uVar101 = auVar1._0_4_ & _DAT_0018cf80;
  uVar102 = auVar1._4_4_ & _UNK_0018cf84;
  uVar103 = auVar1._8_4_ & _UNK_0018cf88;
  uVar104 = auVar1._12_4_ & _UNK_0018cf8c;
  uVar105 = auVar1._16_4_ & _UNK_0018cf90;
  uVar106 = auVar1._20_4_ & _UNK_0018cf94;
  uVar107 = auVar1._24_4_ & _UNK_0018cf98;
  uVar108 = auVar1._28_4_ & _UNK_0018cf9c;
  uVar109 = auVar80._0_4_ & _DAT_0018cf80;
  uVar110 = auVar80._4_4_ & _UNK_0018cf84;
  uVar111 = auVar80._8_4_ & _UNK_0018cf88;
  uVar112 = auVar80._12_4_ & _UNK_0018cf8c;
  uVar113 = auVar80._16_4_ & _UNK_0018cf90;
  uVar114 = auVar80._20_4_ & _UNK_0018cf94;
  uVar115 = auVar80._24_4_ & _UNK_0018cf98;
  uVar116 = auVar80._28_4_ & _UNK_0018cf9c;
  *param_1 = auVar118;
  *(uint *)param_1[1] = uVar117;
  *(uint *)(param_1[1] + 4) = uVar121;
  *(uint *)(param_1[1] + 8) = uVar122;
  *(uint *)(param_1[1] + 0xc) = uVar123;
  *(uint *)(param_1[1] + 0x10) = uVar124;
  *(uint *)(param_1[1] + 0x14) = uVar125;
  *(uint *)(param_1[1] + 0x18) = uVar126;
  *(uint *)(param_1[1] + 0x1c) = uVar127;
  param_1[2] = auVar120;
  *(uint *)param_1[3] = uVar101;
  *(uint *)(param_1[3] + 4) = uVar102;
  *(uint *)(param_1[3] + 8) = uVar103;
  *(uint *)(param_1[3] + 0xc) = uVar104;
  *(uint *)(param_1[3] + 0x10) = uVar105;
  *(uint *)(param_1[3] + 0x14) = uVar106;
  *(uint *)(param_1[3] + 0x18) = uVar107;
  *(uint *)(param_1[3] + 0x1c) = uVar108;
  *(uint *)param_1[4] = uVar109;
  *(uint *)(param_1[4] + 4) = uVar110;
  *(uint *)(param_1[4] + 8) = uVar111;
  *(uint *)(param_1[4] + 0xc) = uVar112;
  *(uint *)(param_1[4] + 0x10) = uVar113;
  *(uint *)(param_1[4] + 0x14) = uVar114;
  *(uint *)(param_1[4] + 0x18) = uVar115;
  *(uint *)(param_1[4] + 0x1c) = uVar116;
  return;
}


