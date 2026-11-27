// 006d2ea0 _impl_sub

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint as
   <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint as
   core[c0acaeba6ab4c2e0]::ops::arith::Sub<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint>>::sub::__Impl_sub__>::_impl_sub
    */

undefined8 __rustcall
<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint_as<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::ExtendedPoint_as_core[c0acaeba6ab4c2e0]::ops::arith::Sub<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::edwards::CachedPoint>>::sub::__Impl_sub__>
::_impl_sub(undefined8 param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  
  auVar7 = vpsubd_avx2(_DAT_0018d3c0,*param_3);
  auVar25._16_16_ = _DAT_00182660;
  auVar25._0_16_ = _DAT_00182660;
  auVar8 = vpsubd_avx2(auVar25,param_3[1]);
  auVar9 = vpsubd_avx2(auVar25,param_3[2]);
  auVar10 = vpsubd_avx2(auVar25,param_3[3]);
  auVar11 = vpsubd_avx2(auVar25,param_3[4]);
  auVar24 = vpermd_avx2(_DAT_0018cf60,*param_3);
  local_180 = vpblendd_avx2(auVar24,auVar7,0xa0);
  auVar7 = vpermd_avx2(_DAT_0018cf60,param_3[1]);
  local_160 = vpblendd_avx2(auVar7,auVar8,0xa0);
  auVar7 = vpermd_avx2(_DAT_0018cf60,param_3[2]);
  local_140 = vpblendd_avx2(auVar7,auVar9,0xa0);
  auVar7 = vpermd_avx2(_DAT_0018cf60,param_3[3]);
  local_120 = vpblendd_avx2(auVar7,auVar10,0xa0);
  auVar7 = vpermd_avx2(_DAT_0018cf60,param_3[4]);
  local_100 = vpblendd_avx2(auVar7,auVar11,0xa0);
  local_2e0._0_16_ = SUB3216(*param_2,0);
  auVar1 = vpshufd_avx((undefined1  [16])local_2e0._0_16_,0xb1);
  local_2c0._0_16_ = SUB3216(param_2[1],0);
  auVar2 = vpshufd_avx((undefined1  [16])local_2c0._0_16_,0xb1);
  local_2a0._0_16_ = SUB3216(param_2[2],0);
  auVar3 = vpshufd_avx((undefined1  [16])local_2a0._0_16_,0xb1);
  local_280._0_16_ = SUB3216(param_2[3],0);
  auVar4 = vpshufd_avx((undefined1  [16])local_280._0_16_,0xb1);
  local_260._0_16_ = SUB3216(param_2[4],0);
  auVar5 = vpshufd_avx((undefined1  [16])local_260._0_16_,0xb1);
  auVar6 = vpsubd_avx(DAT_0018d360._0_16_,(undefined1  [16])local_2e0._0_16_);
  auVar12 = vpblendd_avx2(auVar6,(undefined1  [16])local_2e0._0_16_,10);
  local_1a0._16_16_ = _DAT_00183e30;
  local_1a0._0_16_ = _DAT_00183e30;
  auVar6 = vpsubd_avx(_DAT_00183e30,(undefined1  [16])local_2c0._0_16_);
  auVar13 = vpblendd_avx2(auVar6,(undefined1  [16])local_2c0._0_16_,10);
  auVar6 = vpsubd_avx(_DAT_00183e30,(undefined1  [16])local_2a0._0_16_);
  auVar14 = vpblendd_avx2(auVar6,(undefined1  [16])local_2a0._0_16_,10);
  auVar6 = vpsubd_avx(_DAT_00183e30,(undefined1  [16])local_280._0_16_);
  auVar15 = vpblendd_avx2(auVar6,(undefined1  [16])local_280._0_16_,10);
  auVar6 = vpsubd_avx(_DAT_00183e30,(undefined1  [16])local_260._0_16_);
  auVar6 = vpblendd_avx2(auVar6,(undefined1  [16])local_260._0_16_,10);
  local_2e0 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar12._12_4_ + auVar1._12_4_,
                                               CONCAT48(auVar12._8_4_ + auVar1._8_4_,
                                                        CONCAT44(auVar12._4_4_ + auVar1._4_4_,
                                                                 auVar12._0_4_ + auVar1._0_4_)))),
                            *param_2,0xf0);
  local_2c0 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar13._12_4_ + auVar2._12_4_,
                                               CONCAT48(auVar13._8_4_ + auVar2._8_4_,
                                                        CONCAT44(auVar13._4_4_ + auVar2._4_4_,
                                                                 auVar13._0_4_ + auVar2._0_4_)))),
                            param_2[1],0xf0);
  local_2a0 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar14._12_4_ + auVar3._12_4_,
                                               CONCAT48(auVar14._8_4_ + auVar3._8_4_,
                                                        CONCAT44(auVar14._4_4_ + auVar3._4_4_,
                                                                 auVar14._0_4_ + auVar3._0_4_)))),
                            param_2[2],0xf0);
  local_280 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar15._12_4_ + auVar4._12_4_,
                                               CONCAT48(auVar15._8_4_ + auVar4._8_4_,
                                                        CONCAT44(auVar15._4_4_ + auVar4._4_4_,
                                                                 auVar15._0_4_ + auVar4._0_4_)))),
                            param_2[3],0xf0);
  local_260 = vpblendd_avx2(ZEXT1632(CONCAT412(auVar5._12_4_ + auVar6._12_4_,
                                               CONCAT48(auVar5._8_4_ + auVar6._8_4_,
                                                        CONCAT44(auVar5._4_4_ + auVar6._4_4_,
                                                                 auVar5._0_4_ + auVar6._0_4_)))),
                            param_2[4],0xf0);
  <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as_core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul::__Impl_mul__>
  ::_impl_mul(local_240,local_2e0,local_180);
  auVar24 = vpermd_avx2(_DAT_0018d180,local_240);
  auVar25 = vpermd_avx2(_DAT_0018d180,local_220);
  auVar16 = vpermd_avx2(_DAT_0018d180,local_200);
  auVar17 = vpermd_avx2(_DAT_0018d180,local_1e0);
  auVar18 = vpermd_avx2(_DAT_0018d180,local_1c0);
  auVar19 = vpermd_avx2(_DAT_0018d500,local_240);
  auVar20 = vpermd_avx2(_DAT_0018d500,local_220);
  auVar21 = vpermd_avx2(_DAT_0018d500,local_200);
  auVar22 = vpermd_avx2(_DAT_0018d500,local_1e0);
  auVar23 = vpermd_avx2(_DAT_0018d500,local_1c0);
  auVar7 = vpsubd_avx2(_DAT_0018d360,auVar24);
  auVar8 = vpsubd_avx2(local_1a0,auVar25);
  auVar9 = vpsubd_avx2(local_1a0,auVar16);
  auVar10 = vpsubd_avx2(local_1a0,auVar17);
  auVar11 = vpsubd_avx2(local_1a0,auVar18);
  auVar24 = vpblendd_avx2(auVar7,auVar24,0xaa);
  auVar7._0_4_ = auVar24._0_4_ + auVar19._0_4_;
  auVar7._4_4_ = auVar24._4_4_ + auVar19._4_4_;
  auVar7._8_4_ = auVar24._8_4_ + auVar19._8_4_;
  auVar7._12_4_ = auVar24._12_4_ + auVar19._12_4_;
  auVar7._16_4_ = auVar24._16_4_ + auVar19._16_4_;
  auVar7._20_4_ = auVar24._20_4_ + auVar19._20_4_;
  auVar7._24_4_ = auVar24._24_4_ + auVar19._24_4_;
  auVar7._28_4_ = auVar24._28_4_ + auVar19._28_4_;
  auVar24 = vpblendd_avx2(auVar8,auVar25,0xaa);
  auVar8._0_4_ = auVar24._0_4_ + auVar20._0_4_;
  auVar8._4_4_ = auVar24._4_4_ + auVar20._4_4_;
  auVar8._8_4_ = auVar24._8_4_ + auVar20._8_4_;
  auVar8._12_4_ = auVar24._12_4_ + auVar20._12_4_;
  auVar8._16_4_ = auVar24._16_4_ + auVar20._16_4_;
  auVar8._20_4_ = auVar24._20_4_ + auVar20._20_4_;
  auVar8._24_4_ = auVar24._24_4_ + auVar20._24_4_;
  auVar8._28_4_ = auVar24._28_4_ + auVar20._28_4_;
  auVar24 = vpblendd_avx2(auVar9,auVar16,0xaa);
  auVar9._0_4_ = auVar24._0_4_ + auVar21._0_4_;
  auVar9._4_4_ = auVar24._4_4_ + auVar21._4_4_;
  auVar9._8_4_ = auVar24._8_4_ + auVar21._8_4_;
  auVar9._12_4_ = auVar24._12_4_ + auVar21._12_4_;
  auVar9._16_4_ = auVar24._16_4_ + auVar21._16_4_;
  auVar9._20_4_ = auVar24._20_4_ + auVar21._20_4_;
  auVar9._24_4_ = auVar24._24_4_ + auVar21._24_4_;
  auVar9._28_4_ = auVar24._28_4_ + auVar21._28_4_;
  auVar24 = vpblendd_avx2(auVar10,auVar17,0xaa);
  auVar10._0_4_ = auVar24._0_4_ + auVar22._0_4_;
  auVar10._4_4_ = auVar24._4_4_ + auVar22._4_4_;
  auVar10._8_4_ = auVar24._8_4_ + auVar22._8_4_;
  auVar10._12_4_ = auVar24._12_4_ + auVar22._12_4_;
  auVar10._16_4_ = auVar24._16_4_ + auVar22._16_4_;
  auVar10._20_4_ = auVar24._20_4_ + auVar22._20_4_;
  auVar10._24_4_ = auVar24._24_4_ + auVar22._24_4_;
  auVar10._28_4_ = auVar24._28_4_ + auVar22._28_4_;
  auVar24 = vpblendd_avx2(auVar11,auVar18,0xaa);
  auVar11._0_4_ = auVar23._0_4_ + auVar24._0_4_;
  auVar11._4_4_ = auVar23._4_4_ + auVar24._4_4_;
  auVar11._8_4_ = auVar23._8_4_ + auVar24._8_4_;
  auVar11._12_4_ = auVar23._12_4_ + auVar24._12_4_;
  auVar11._16_4_ = auVar23._16_4_ + auVar24._16_4_;
  auVar11._20_4_ = auVar23._20_4_ + auVar24._20_4_;
  auVar11._24_4_ = auVar23._24_4_ + auVar24._24_4_;
  auVar11._28_4_ = auVar23._28_4_ + auVar24._28_4_;
  local_e0 = vpermd_avx2(_DAT_0018d440,auVar7);
  local_c0 = vpermd_avx2(_DAT_0018d440,auVar8);
  local_a0 = vpermd_avx2(_DAT_0018d440,auVar9);
  local_80 = vpermd_avx2(_DAT_0018d440,auVar10);
  local_60 = vpermd_avx2(_DAT_0018d440,auVar11);
  auVar24._16_16_ = _DAT_00182650;
  auVar24._0_16_ = _DAT_00182650;
  local_240 = vpermd_avx2(auVar24,auVar7);
  local_220 = vpermd_avx2(auVar24,auVar8);
  local_200 = vpermd_avx2(auVar24,auVar9);
  local_1e0 = vpermd_avx2(auVar24,auVar10);
  local_1c0 = vpermd_avx2(auVar24,auVar11);
  <&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as<&curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as_core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul::__Impl_mul__>
  ::_impl_mul(param_1,local_e0,local_240);
  return param_1;
}


