// 006d1f30 _impl_from

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint as
   <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint as
   core[c0acaeba6ab4c2e0]::convert::From<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint>>::from::__Impl_from__>::_impl_from
    */

undefined1 (*) [32] __rustcall
<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint_as<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint_as_core[c0acaeba6ab4c2e0]::convert::From<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint>>::from::__Impl_from__>
::_impl_from(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  
  auVar1 = *(undefined1 (*) [16])*param_2;
  auVar2 = *(undefined1 (*) [16])param_2[1];
  auVar3 = *(undefined1 (*) [16])param_2[2];
  auVar4 = *(undefined1 (*) [16])param_2[3];
  auVar6 = vpshufd_avx(auVar1,0xb1);
  auVar7 = vpshufd_avx(auVar2,0xb1);
  auVar8 = vpshufd_avx(auVar3,0xb1);
  auVar9 = vpshufd_avx(auVar4,0xb1);
  auVar5 = *(undefined1 (*) [16])param_2[4];
  auVar10 = vpshufd_avx(auVar5,0xb1);
  auVar11 = vpsubd_avx(_DAT_001841f0,auVar1);
  auVar11 = vpblendd_avx2(auVar11,auVar1,10);
  auVar1 = vpsubd_avx(_DAT_00183e30,auVar2);
  auVar2 = vpblendd_avx2(auVar1,auVar2,10);
  auVar1 = vpsubd_avx(_DAT_00183e30,auVar3);
  auVar3 = vpblendd_avx2(auVar1,auVar3,10);
  auVar1 = vpsubd_avx(_DAT_00183e30,auVar4);
  auVar4 = vpblendd_avx2(auVar1,auVar4,10);
  auVar1 = vpsubd_avx(_DAT_00183e30,auVar5);
  auVar1 = vpblendd_avx2(auVar1,auVar5,10);
  auVar24 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar11._12_4_ + auVar6._12_4_,
                                             CONCAT48(auVar11._8_4_ + auVar6._8_4_,
                                                      CONCAT44(auVar11._4_4_ + auVar6._4_4_,
                                                               auVar11._0_4_ + auVar6._0_4_)))),
                          *param_2,0xf0);
  auVar23 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar2._12_4_ + auVar7._12_4_,
                                             CONCAT48(auVar2._8_4_ + auVar7._8_4_,
                                                      CONCAT44(auVar2._4_4_ + auVar7._4_4_,
                                                               auVar2._0_4_ + auVar7._0_4_)))),
                          param_2[1],0xf0);
  auVar32 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar3._12_4_ + auVar8._12_4_,
                                             CONCAT48(auVar3._8_4_ + auVar8._8_4_,
                                                      CONCAT44(auVar3._4_4_ + auVar8._4_4_,
                                                               auVar3._0_4_ + auVar8._0_4_)))),
                          param_2[2],0xf0);
  auVar22 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar4._12_4_ + auVar9._12_4_,
                                             CONCAT48(auVar4._8_4_ + auVar9._8_4_,
                                                      CONCAT44(auVar4._4_4_ + auVar9._4_4_,
                                                               auVar4._0_4_ + auVar9._0_4_)))),
                          param_2[3],0xf0);
  auVar37 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar10._12_4_ + auVar1._12_4_,
                                             CONCAT48(auVar10._8_4_ + auVar1._8_4_,
                                                      CONCAT44(auVar10._4_4_ + auVar1._4_4_,
                                                               auVar10._0_4_ + auVar1._0_4_)))),
                          param_2[4],0xf0);
  auVar15 = vpshufd_avx2(auVar24,0xd4);
  auVar16 = vpshufd_avx2(auVar24,0xf6);
  auVar26 = vpshufd_avx2(auVar23,0xd4);
  auVar17 = vpshufd_avx2(auVar23,0xf6);
  auVar33 = vpshufd_avx2(auVar32,0xd4);
  auVar32 = vpshufd_avx2(auVar32,0xf6);
  auVar18 = vpshufd_avx2(auVar22,0xd4);
  auVar19 = vpshufd_avx2(auVar22,0xf6);
  auVar20 = vpshufd_avx2(auVar37,0xd4);
  auVar21 = vpshufd_avx2(auVar37,0xf6);
  auVar24 = vpmuludq_avx2(_DAT_0018d3a0,auVar15);
  auVar16 = vpmuludq_avx2(_DAT_0018d3a0,auVar16);
  auVar23 = vpmuludq_avx2(_DAT_0018d3a0,auVar26);
  auVar17 = vpmuludq_avx2(_DAT_0018d3a0,auVar17);
  auVar26 = vpmuludq_avx2(_DAT_0018d3a0,auVar33);
  auVar33 = vpmuludq_avx2(_DAT_0018d3a0,auVar32);
  auVar22 = vpmuludq_avx2(auVar18,_DAT_0018d3a0);
  auVar37 = vpmuludq_avx2(_DAT_0018d3a0,auVar19);
  auVar13 = vpmuludq_avx2(auVar20,_DAT_0018d3a0);
  auVar14 = vpmuludq_avx2(_DAT_0018d3a0,auVar21);
  auVar32 = vpsrlq_avx2(auVar24,0x1a);
  auVar34._8_8_ = DAT_00185528;
  auVar34._0_8_ = DAT_00185528;
  auVar34._16_8_ = DAT_00185528;
  auVar34._24_8_ = DAT_00185528;
  auVar15._0_8_ = auVar32._0_8_ + auVar16._0_8_;
  auVar15._8_8_ = auVar32._8_8_ + auVar16._8_8_;
  auVar15._16_8_ = auVar32._16_8_ + auVar16._16_8_;
  auVar15._24_8_ = auVar32._24_8_ + auVar16._24_8_;
  auVar16 = vpand_avx2(auVar34,auVar24);
  auVar32 = vpsrlq_avx2(auVar26,0x1a);
  auVar24._0_8_ = auVar32._0_8_ + auVar33._0_8_;
  auVar24._8_8_ = auVar32._8_8_ + auVar33._8_8_;
  auVar24._16_8_ = auVar32._16_8_ + auVar33._16_8_;
  auVar24._24_8_ = auVar32._24_8_ + auVar33._24_8_;
  auVar26 = vpand_avx2(auVar34,auVar26);
  auVar33 = vpsrlq_avx2(auVar15,0x19);
  auVar35._8_8_ = DAT_00185520;
  auVar35._0_8_ = DAT_00185520;
  auVar35._16_8_ = DAT_00185520;
  auVar35._24_8_ = DAT_00185520;
  auVar32._0_8_ = auVar33._0_8_ + auVar23._0_8_;
  auVar32._8_8_ = auVar33._8_8_ + auVar23._8_8_;
  auVar32._16_8_ = auVar33._16_8_ + auVar23._16_8_;
  auVar32._24_8_ = auVar33._24_8_ + auVar23._24_8_;
  auVar15 = vpand_avx2(auVar35,auVar15);
  auVar23 = vpsrlq_avx2(auVar24,0x19);
  auVar18._0_8_ = auVar22._0_8_ + auVar23._0_8_;
  auVar18._8_8_ = auVar22._8_8_ + auVar23._8_8_;
  auVar18._16_8_ = auVar22._16_8_ + auVar23._16_8_;
  auVar18._24_8_ = auVar22._24_8_ + auVar23._24_8_;
  auVar24 = vpand_avx2(auVar35,auVar24);
  auVar23 = vpsrlq_avx2(auVar32,0x1a);
  auVar22._0_8_ = auVar23._0_8_ + auVar17._0_8_;
  auVar22._8_8_ = auVar23._8_8_ + auVar17._8_8_;
  auVar22._16_8_ = auVar23._16_8_ + auVar17._16_8_;
  auVar22._24_8_ = auVar23._24_8_ + auVar17._24_8_;
  auVar23 = vpsrlq_avx2(auVar18,0x1a);
  auVar19._0_8_ = auVar23._0_8_ + auVar37._0_8_;
  auVar19._8_8_ = auVar23._8_8_ + auVar37._8_8_;
  auVar19._16_8_ = auVar23._16_8_ + auVar37._16_8_;
  auVar19._24_8_ = auVar23._24_8_ + auVar37._24_8_;
  auVar23 = vpsrlq_avx2(auVar22,0x19);
  auVar37._0_8_ = auVar23._0_8_ + auVar26._0_8_;
  auVar37._8_8_ = auVar23._8_8_ + auVar26._8_8_;
  auVar37._16_8_ = auVar23._16_8_ + auVar26._16_8_;
  auVar37._24_8_ = auVar23._24_8_ + auVar26._24_8_;
  auVar26 = vpsrlq_avx2(auVar19,0x19);
  auVar20._0_8_ = auVar13._0_8_ + auVar26._0_8_;
  auVar20._8_8_ = auVar13._8_8_ + auVar26._8_8_;
  auVar20._16_8_ = auVar13._16_8_ + auVar26._16_8_;
  auVar20._24_8_ = auVar13._24_8_ + auVar26._24_8_;
  auVar26 = vpsrlq_avx2(auVar37,0x1a);
  auVar13._0_8_ = auVar26._0_8_ + auVar24._0_8_;
  auVar13._8_8_ = auVar26._8_8_ + auVar24._8_8_;
  auVar13._16_8_ = auVar26._16_8_ + auVar24._16_8_;
  auVar13._24_8_ = auVar26._24_8_ + auVar24._24_8_;
  auVar24 = vpsrlq_avx2(auVar20,0x1a);
  auVar21._0_8_ = auVar24._0_8_ + auVar14._0_8_;
  auVar21._8_8_ = auVar24._8_8_ + auVar14._8_8_;
  auVar21._16_8_ = auVar24._16_8_ + auVar14._16_8_;
  auVar21._24_8_ = auVar24._24_8_ + auVar14._24_8_;
  auVar24 = vpsrlq_avx2(auVar21,0x19);
  auVar25._8_8_ = DAT_00185320;
  auVar25._0_8_ = DAT_00185320;
  auVar25._16_8_ = DAT_00185320;
  auVar25._24_8_ = DAT_00185320;
  auVar24 = vpmuldq_avx2(auVar24,auVar25);
  auVar14._0_8_ = auVar24._0_8_ + auVar16._0_8_;
  auVar14._8_8_ = auVar24._8_8_ + auVar16._8_8_;
  auVar14._16_8_ = auVar24._16_8_ + auVar16._16_8_;
  auVar14._24_8_ = auVar24._24_8_ + auVar16._24_8_;
  auVar24 = vpsrlq_avx2(auVar14,0x1a);
  auVar12._0_8_ = auVar15._0_8_ + auVar24._0_8_;
  auVar12._8_8_ = auVar15._8_8_ + auVar24._8_8_;
  auVar12._16_8_ = auVar15._16_8_ + auVar24._16_8_;
  auVar12._24_8_ = auVar15._24_8_ + auVar24._24_8_;
  auVar29._4_4_ = DAT_0018e0b4;
  auVar29._0_4_ = DAT_0018e0b4;
  auVar29._8_4_ = DAT_0018e0b4;
  auVar29._12_4_ = DAT_0018e0b4;
  auVar29._16_4_ = DAT_0018e0b4;
  auVar29._20_4_ = DAT_0018e0b4;
  auVar29._24_4_ = DAT_0018e0b4;
  auVar29._28_4_ = DAT_0018e0b4;
  auVar15 = vpand_avx2(auVar14,auVar29);
  auVar15 = vshufps_avx(auVar15,auVar12,0x88);
  auVar24 = vshufps_avx(auVar32,auVar22,0x88);
  auVar27._0_4_ = auVar24._0_4_ & _DAT_0018cf80;
  auVar27._4_4_ = auVar24._4_4_ & _UNK_0018cf84;
  auVar27._8_4_ = auVar24._8_4_ & _UNK_0018cf88;
  auVar27._12_4_ = auVar24._12_4_ & _UNK_0018cf8c;
  auVar27._16_4_ = auVar24._16_4_ & _UNK_0018cf90;
  auVar27._20_4_ = auVar24._20_4_ & _UNK_0018cf94;
  auVar27._24_4_ = auVar24._24_4_ & _UNK_0018cf98;
  auVar27._28_4_ = auVar24._28_4_ & _UNK_0018cf9c;
  auVar24 = vpand_avx2(auVar37,auVar29);
  auVar24 = vshufps_avx(auVar24,auVar13,0x88);
  auVar16 = vshufps_avx(auVar18,auVar19,0x88);
  auVar28._0_4_ = auVar16._0_4_ & _DAT_0018cf80;
  auVar28._4_4_ = auVar16._4_4_ & _UNK_0018cf84;
  auVar28._8_4_ = auVar16._8_4_ & _UNK_0018cf88;
  auVar28._12_4_ = auVar16._12_4_ & _UNK_0018cf8c;
  auVar28._16_4_ = auVar16._16_4_ & _UNK_0018cf90;
  auVar28._20_4_ = auVar16._20_4_ & _UNK_0018cf94;
  auVar28._24_4_ = auVar16._24_4_ & _UNK_0018cf98;
  auVar28._28_4_ = auVar16._28_4_ & _UNK_0018cf9c;
  auVar16 = vshufps_avx(auVar20,auVar21,0x88);
  auVar30._0_4_ = auVar16._0_4_ & _DAT_0018cf80;
  auVar30._4_4_ = auVar16._4_4_ & _UNK_0018cf84;
  auVar30._8_4_ = auVar16._8_4_ & _UNK_0018cf88;
  auVar30._12_4_ = auVar16._12_4_ & _UNK_0018cf8c;
  auVar30._16_4_ = auVar16._16_4_ & _UNK_0018cf90;
  auVar30._20_4_ = auVar16._20_4_ & _UNK_0018cf94;
  auVar30._24_4_ = auVar16._24_4_ & _UNK_0018cf98;
  auVar30._28_4_ = auVar16._28_4_ & _UNK_0018cf9c;
  auVar31._16_16_ = _DAT_00184620;
  auVar31._0_16_ = _DAT_00184620;
  auVar16 = vpsubd_avx2(_DAT_0018d160,auVar15);
  auVar23 = vpsubd_avx2(auVar31,auVar27);
  auVar17 = vpsubd_avx2(auVar31,auVar24);
  auVar33 = vpsubd_avx2(auVar31,auVar28);
  auVar18 = vpsubd_avx2(auVar31,auVar30);
  auVar36._16_16_ = _DAT_00184710;
  auVar36._0_16_ = _DAT_00184710;
  auVar26 = vpsrlvd_avx2(auVar16,auVar36);
  auVar37 = vpslldq_avx2(auVar26,8);
  auVar38._16_16_ = _DAT_00182c10;
  auVar38._0_16_ = _DAT_00182c10;
  auVar32 = vpand_avx2(auVar38,auVar16);
  auVar22 = vpsrlvd_avx2(auVar23,auVar36);
  auVar26 = vpalignr_avx2(auVar22,auVar26,8);
  auVar23 = vpand_avx2(auVar23,auVar38);
  auVar16._0_4_ = auVar26._0_4_ + auVar23._0_4_;
  auVar16._4_4_ = auVar26._4_4_ + auVar23._4_4_;
  auVar16._8_4_ = auVar26._8_4_ + auVar23._8_4_;
  auVar16._12_4_ = auVar26._12_4_ + auVar23._12_4_;
  auVar16._16_4_ = auVar26._16_4_ + auVar23._16_4_;
  auVar16._20_4_ = auVar26._20_4_ + auVar23._20_4_;
  auVar16._24_4_ = auVar26._24_4_ + auVar23._24_4_;
  auVar16._28_4_ = auVar26._28_4_ + auVar23._28_4_;
  auVar19 = vpsrlvd_avx2(auVar17,auVar36);
  auVar23 = vpalignr_avx2(auVar19,auVar22,8);
  auVar17 = vpand_avx2(auVar17,auVar38);
  auVar26._0_4_ = auVar23._0_4_ + auVar17._0_4_;
  auVar26._4_4_ = auVar23._4_4_ + auVar17._4_4_;
  auVar26._8_4_ = auVar23._8_4_ + auVar17._8_4_;
  auVar26._12_4_ = auVar23._12_4_ + auVar17._12_4_;
  auVar26._16_4_ = auVar23._16_4_ + auVar17._16_4_;
  auVar26._20_4_ = auVar23._20_4_ + auVar17._20_4_;
  auVar26._24_4_ = auVar23._24_4_ + auVar17._24_4_;
  auVar26._28_4_ = auVar23._28_4_ + auVar17._28_4_;
  auVar22 = vpsrlvd_avx2(auVar33,auVar36);
  auVar17 = vpalignr_avx2(auVar22,auVar19,8);
  auVar33 = vpand_avx2(auVar33,auVar38);
  auVar23._0_4_ = auVar17._0_4_ + auVar33._0_4_;
  auVar23._4_4_ = auVar17._4_4_ + auVar33._4_4_;
  auVar23._8_4_ = auVar17._8_4_ + auVar33._8_4_;
  auVar23._12_4_ = auVar17._12_4_ + auVar33._12_4_;
  auVar23._16_4_ = auVar17._16_4_ + auVar33._16_4_;
  auVar23._20_4_ = auVar17._20_4_ + auVar33._20_4_;
  auVar23._24_4_ = auVar17._24_4_ + auVar33._24_4_;
  auVar23._28_4_ = auVar17._28_4_ + auVar33._28_4_;
  auVar19 = vpsrlvd_avx2(auVar18,auVar36);
  auVar33 = vpalignr_avx2(auVar19,auVar22,8);
  auVar18 = vpand_avx2(auVar38,auVar18);
  auVar17._0_4_ = auVar33._0_4_ + auVar18._0_4_;
  auVar17._4_4_ = auVar33._4_4_ + auVar18._4_4_;
  auVar17._8_4_ = auVar33._8_4_ + auVar18._8_4_;
  auVar17._12_4_ = auVar33._12_4_ + auVar18._12_4_;
  auVar17._16_4_ = auVar33._16_4_ + auVar18._16_4_;
  auVar17._20_4_ = auVar33._20_4_ + auVar18._20_4_;
  auVar17._24_4_ = auVar33._24_4_ + auVar18._24_4_;
  auVar17._28_4_ = auVar33._28_4_ + auVar18._28_4_;
  auVar33 = vpshufd_avx2(auVar19,0x74);
  auVar33 = vpmuludq_avx2(auVar33,auVar25);
  auVar18 = vpshufd_avx2(auVar33,0xe8);
  auVar33._0_4_ = auVar37._0_4_ + auVar32._0_4_ + auVar18._0_4_;
  auVar33._4_4_ = auVar37._4_4_ + auVar32._4_4_ + auVar18._4_4_;
  auVar33._8_4_ = auVar37._8_4_ + auVar32._8_4_ + auVar18._8_4_;
  auVar33._12_4_ = auVar37._12_4_ + auVar32._12_4_ + auVar18._12_4_;
  auVar33._16_4_ = auVar37._16_4_ + auVar32._16_4_ + auVar18._16_4_;
  auVar33._20_4_ = auVar37._20_4_ + auVar32._20_4_ + auVar18._20_4_;
  auVar33._24_4_ = auVar37._24_4_ + auVar32._24_4_ + auVar18._24_4_;
  auVar33._28_4_ = auVar37._28_4_ + auVar32._28_4_ + auVar18._28_4_;
  auVar15 = vpblendd_avx2(auVar15,auVar33,0xa0);
  auVar16 = vpblendd_avx2(auVar27,auVar16,0xa0);
  auVar24 = vpblendd_avx2(auVar24,auVar26,0xa0);
  auVar26 = vpblendd_avx2(auVar28,auVar23,0xa0);
  auVar23 = vpblendd_avx2(auVar30,auVar17,0xa0);
  *param_1 = auVar15;
  param_1[1] = auVar16;
  param_1[2] = auVar24;
  param_1[3] = auVar26;
  param_1[4] = auVar23;
  return param_1;
}


