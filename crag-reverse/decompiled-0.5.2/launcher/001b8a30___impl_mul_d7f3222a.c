// 001b8a30 _impl_mul

/* curve25519_dalek[8828c522c30c513]::backend::vector::scalar_mul::vartime_double_base::spec_avx2::mul::_impl_mul
    */

void __rustcall
curve25519_dalek[8828c522c30c513]::backend::vector::scalar_mul::vartime_double_base::spec_avx2::mul
::_impl_mul(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,ulonglong *param_4)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  ulonglong local_940;
  ulonglong uStack_938;
  ulonglong uStack_930;
  ulonglong uStack_928;
  ulonglong local_920;
  ulonglong uStack_918;
  ulonglong uStack_910;
  ulonglong uStack_908;
  ulonglong local_900;
  ulonglong uStack_8f8;
  ulonglong uStack_8f0;
  ulonglong uStack_8e8;
  ulonglong local_8e0;
  ulonglong uStack_8d8;
  ulonglong uStack_8d0;
  ulonglong uStack_8c8;
  ulonglong local_8c0;
  ulonglong uStack_8b8;
  ulonglong uStack_8b0;
  ulonglong uStack_8a8;
  ulonglong local_8a0;
  ulonglong uStack_898;
  ulonglong uStack_890;
  ulonglong uStack_888;
  ulonglong local_880;
  ulonglong uStack_878;
  ulonglong uStack_870;
  ulonglong uStack_868;
  ulonglong local_860;
  ulonglong uStack_858;
  ulonglong uStack_850;
  ulonglong uStack_848;
  ulonglong local_840;
  ulonglong uStack_838;
  ulonglong uStack_830;
  ulonglong uStack_828;
  ulonglong local_820;
  ulonglong uStack_818;
  ulonglong uStack_810;
  ulonglong uStack_808;
  ulonglong local_800;
  ulonglong uStack_7f8;
  ulonglong uStack_7f0;
  ulonglong uStack_7e8;
  ulonglong local_7e0;
  ulonglong uStack_7d8;
  ulonglong uStack_7d0;
  ulonglong uStack_7c8;
  ulonglong local_7c0;
  ulonglong uStack_7b8;
  ulonglong uStack_7b0;
  ulonglong uStack_7a8;
  ulonglong local_7a0;
  ulonglong uStack_798;
  ulonglong uStack_790;
  ulonglong uStack_788;
  ulonglong local_780;
  ulonglong uStack_778;
  ulonglong uStack_770;
  ulonglong uStack_768;
  undefined1 local_760 [32];
  undefined1 local_740 [32];
  undefined1 local_720 [32];
  undefined1 local_700 [32];
  undefined1 local_6e0 [32];
  undefined1 local_6c0 [32];
  undefined1 local_6a0 [32];
  undefined1 local_680 [32];
  undefined1 local_660 [32];
  undefined1 local_640 [32];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [32];
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
  ulonglong local_560 [4];
  undefined8 local_540;
  
  auVar4 = ZEXT812(0);
  local_680 = ZEXT1232(auVar4) << 0x20;
  local_6a0 = ZEXT1232(auVar4) << 0x20;
  local_6c0 = ZEXT1232(auVar4) << 0x20;
  local_6e0 = local_6c0;
  local_700 = local_6c0;
  local_720 = local_6c0;
  local_740 = ZEXT1232(auVar4) << 0x20;
  local_760 = ZEXT1232(auVar4) << 0x20;
  local_540 = 0;
  local_560[0] = *param_2;
  local_560[1] = param_2[1];
  local_560[2] = param_2[2];
  local_560[3] = param_2[3];
  uVar9 = 0;
  uVar7 = 0;
  do {
    lVar8 = -uVar9;
    while( true ) {
      uVar6 = (uint)uVar9 & 0x3f;
      uVar12 = (uint)(local_560[uVar9 >> 6] >> (sbyte)uVar6);
      if (0x3a < uVar6) {
        uVar12 = uVar12 | (uint)(local_560[(uVar9 >> 6) + 1] << ((byte)lVar8 & 0x3f));
      }
      uVar6 = (uVar12 & 0x1f) + uVar7;
      if ((uVar6 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + -1;
      if (uVar9 == 0x100) goto LAB_001b8b3f;
    }
    uVar7 = (uint)(uVar6 >= 0x10);
    local_760[uVar9] = (uVar6 < 0x10) * ' ' + (char)uVar6 + -0x20;
    bVar14 = uVar9 < 0xfb;
    uVar9 = uVar9 + 5;
  } while (bVar14);
LAB_001b8b3f:
  auVar5 = ZEXT816(0);
  local_580 = ZEXT1632(auVar5);
  local_5a0 = ZEXT1632(auVar5);
  local_5c0 = ZEXT1632(auVar5);
  local_5e0 = local_5c0;
  local_600 = local_5c0;
  local_620 = local_5c0;
  local_640 = ZEXT1632(auVar5);
  local_660 = ZEXT1632(auVar5);
  local_540 = 0;
  local_560[0] = *param_4;
  local_560[1] = param_4[1];
  local_560[2] = param_4[2];
  local_560[3] = param_4[3];
  uVar9 = 0;
  uVar10 = 0;
  do {
    lVar8 = -uVar9;
    while( true ) {
      uVar7 = (uint)uVar9 & 0x3f;
      uVar11 = local_560[uVar9 >> 6] >> (sbyte)uVar7;
      if (0x37 < uVar7) {
        uVar11 = uVar11 | local_560[(uVar9 >> 6) + 1] << ((byte)lVar8 & 0x3f);
      }
      uVar11 = (uVar11 & 0xff) + uVar10;
      if ((uVar11 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + -1;
      if (uVar9 == 0x100) goto LAB_001b8c1e;
    }
    uVar10 = (ulonglong)(0x7f < uVar11);
    local_660[uVar9] = (char)uVar11;
    bVar14 = uVar9 < 0xf8;
    uVar9 = uVar9 + 8;
  } while (bVar14);
LAB_001b8c1e:
  lVar8 = 0xff;
  do {
    lVar13 = lVar8;
    if ((local_760[lVar13] != '\0') || (lVar13 == 0)) break;
    lVar8 = lVar13 + -1;
  } while (local_660[lVar13] == '\0');
  (*(code *)PTR__impl_from_0021a5a8)();
  do {
    (*(code *)PTR__impl_double_0021a5b0)();
    local_8c0 = local_820;
    uStack_8b8 = uStack_818;
    uStack_8b0 = uStack_810;
    uStack_8a8 = uStack_808;
    local_8e0 = local_840;
    uStack_8d8 = uStack_838;
    uStack_8d0 = uStack_830;
    uStack_8c8 = uStack_828;
    local_900 = local_860;
    uStack_8f8 = uStack_858;
    uStack_8f0 = uStack_850;
    uStack_8e8 = uStack_848;
    local_920 = local_880;
    uStack_918 = uStack_878;
    uStack_910 = uStack_870;
    uStack_908 = uStack_868;
    local_940 = local_8a0;
    uStack_938 = uStack_898;
    uStack_930 = uStack_890;
    uStack_928 = uStack_888;
    bVar1 = local_760[lVar13];
    bVar14 = (char)bVar1 < '\0';
    if ('\0' < (char)bVar1 != bVar14) {
      if ((char)(('\0' < (char)bVar1) - bVar14) == '\x01') {
        uVar9 = (ulonglong)(longlong)(char)bVar1 >> 1;
        if (0xf < bVar1) goto LAB_001b9139;
        local_820 = local_560[uVar9 * 0x14 + 0x10];
        uStack_818 = local_560[uVar9 * 0x14 + 0x11];
        uStack_810 = local_560[uVar9 * 0x14 + 0x12];
        uStack_808 = local_560[uVar9 * 0x14 + 0x13];
        local_8a0 = local_560[uVar9 * 0x14];
        uStack_898 = local_560[uVar9 * 0x14 + 1];
        uStack_890 = local_560[uVar9 * 0x14 + 2];
        uStack_888 = local_560[uVar9 * 0x14 + 3];
        local_880 = local_560[uVar9 * 0x14 + 4];
        uStack_878 = local_560[uVar9 * 0x14 + 5];
        uStack_870 = local_560[uVar9 * 0x14 + 6];
        uStack_868 = local_560[uVar9 * 0x14 + 7];
        local_860 = local_560[uVar9 * 0x14 + 8];
        uStack_858 = local_560[uVar9 * 0x14 + 9];
        uStack_850 = local_560[uVar9 * 0x14 + 10];
        uStack_848 = local_560[uVar9 * 0x14 + 0xb];
        local_840 = local_560[uVar9 * 0x14 + 0xc];
        uStack_838 = local_560[uVar9 * 0x14 + 0xd];
        uStack_830 = local_560[uVar9 * 0x14 + 0xe];
        uStack_828 = local_560[uVar9 * 0x14 + 0xf];
        (*(code *)PTR__impl_add_0021a5a0)(bVar14,&local_8a0);
      }
      else {
        uVar9 = (ulonglong)(longlong)(char)-bVar1 >> 1;
        if (0xf < (byte)-bVar1) goto LAB_001b9139;
        local_820 = local_560[uVar9 * 0x14 + 0x10];
        uStack_818 = local_560[uVar9 * 0x14 + 0x11];
        uStack_810 = local_560[uVar9 * 0x14 + 0x12];
        uStack_808 = local_560[uVar9 * 0x14 + 0x13];
        local_8a0 = local_560[uVar9 * 0x14];
        uStack_898 = local_560[uVar9 * 0x14 + 1];
        uStack_890 = local_560[uVar9 * 0x14 + 2];
        uStack_888 = local_560[uVar9 * 0x14 + 3];
        local_880 = local_560[uVar9 * 0x14 + 4];
        uStack_878 = local_560[uVar9 * 0x14 + 5];
        uStack_870 = local_560[uVar9 * 0x14 + 6];
        uStack_868 = local_560[uVar9 * 0x14 + 7];
        local_860 = local_560[uVar9 * 0x14 + 8];
        uStack_858 = local_560[uVar9 * 0x14 + 9];
        uStack_850 = local_560[uVar9 * 0x14 + 10];
        uStack_848 = local_560[uVar9 * 0x14 + 0xb];
        local_840 = local_560[uVar9 * 0x14 + 0xc];
        uStack_838 = local_560[uVar9 * 0x14 + 0xd];
        uStack_830 = local_560[uVar9 * 0x14 + 0xe];
        uStack_828 = local_560[uVar9 * 0x14 + 0xf];
        (*(code *)PTR__impl_sub_0021a5f8)(bVar14,&local_8a0);
      }
      local_8c0 = local_780;
      uStack_8b8 = uStack_778;
      uStack_8b0 = uStack_770;
      uStack_8a8 = uStack_768;
      local_8e0 = local_7a0;
      uStack_8d8 = uStack_798;
      uStack_8d0 = uStack_790;
      uStack_8c8 = uStack_788;
      local_900 = local_7c0;
      uStack_8f8 = uStack_7b8;
      uStack_8f0 = uStack_7b0;
      uStack_8e8 = uStack_7a8;
      local_920 = local_7e0;
      uStack_918 = uStack_7d8;
      uStack_910 = uStack_7d0;
      uStack_908 = uStack_7c8;
      local_940 = local_800;
      uStack_938 = uStack_7f8;
      uStack_930 = uStack_7f0;
      uStack_928 = uStack_7e8;
    }
    cVar2 = local_660[lVar13];
    bVar14 = cVar2 < '\0';
    if ('\0' < cVar2 != bVar14) {
      if ((char)(('\0' < cVar2) - bVar14) == '\x01') {
        if (cVar2 < '\0') {
LAB_001b9124:
          (*(code *)PTR_panic_bounds_check_0021a020)
                    (bVar14,&PTR_s__vendor_curve25519_dalek_4_1_3_s_00216dd8);
LAB_001b9139:
          (*(code *)PTR_panic_bounds_check_0021a020)();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = ((ulonglong)(longlong)cVar2 >> 1) * 0xa0;
        local_820 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x80);
        uStack_818 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x88);
        uStack_810 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x90);
        uStack_808 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x98);
        local_8a0 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8);
        uStack_898 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 8);
        uStack_890 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x10);
        uStack_888 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x18);
        local_880 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x20);
        uStack_878 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x28);
        uStack_870 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x30);
        uStack_868 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x38);
        local_860 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x40);
        uStack_858 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x48);
        uStack_850 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x50);
        uStack_848 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x58);
        local_840 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x60);
        uStack_838 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x68);
        uStack_830 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x70);
        uStack_828 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x78);
        (*(code *)PTR__impl_add_0021a5a0)(bVar14,&local_8a0);
      }
      else {
        if (-cVar2 < '\0') goto LAB_001b9124;
        lVar8 = ((ulonglong)(longlong)-cVar2 >> 1) * 0xa0;
        local_820 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x80);
        uStack_818 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x88);
        uStack_810 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x90);
        uStack_808 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x98);
        local_8a0 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8);
        uStack_898 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 8);
        uStack_890 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x10);
        uStack_888 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x18);
        local_880 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x20);
        uStack_878 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x28);
        uStack_870 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x30);
        uStack_868 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x38);
        local_860 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x40);
        uStack_858 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x48);
        uStack_850 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x50);
        uStack_848 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x58);
        local_840 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x60);
        uStack_838 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x68);
        uStack_830 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x70);
        uStack_828 = *(ulonglong *)(avx2::constants::BASEPOINT_ODD_LOOKUP_TABLE + lVar8 + 0x78);
        (*(code *)PTR__impl_sub_0021a5f8)(bVar14,&local_8a0);
      }
      local_8c0 = local_780;
      uStack_8b8 = uStack_778;
      uStack_8b0 = uStack_770;
      uStack_8a8 = uStack_768;
      local_8e0 = local_7a0;
      uStack_8d8 = uStack_798;
      uStack_8d0 = uStack_790;
      uStack_8c8 = uStack_788;
      local_900 = local_7c0;
      uStack_8f8 = uStack_7b8;
      uStack_8f0 = uStack_7b0;
      uStack_8e8 = uStack_7a8;
      local_920 = local_7e0;
      uStack_918 = uStack_7d8;
      uStack_910 = uStack_7d0;
      uStack_908 = uStack_7c8;
      local_940 = local_800;
      uStack_938 = uStack_7f8;
      uStack_930 = uStack_7f0;
      uStack_928 = uStack_7e8;
    }
    bVar14 = lVar13 == 0;
    lVar13 = lVar13 + -1;
    if (bVar14) {
      local_780 = local_8c0;
      uStack_778 = uStack_8b8;
      uStack_770 = uStack_8b0;
      uStack_768 = uStack_8a8;
      local_7a0 = local_8e0;
      uStack_798 = uStack_8d8;
      uStack_790 = uStack_8d0;
      uStack_788 = uStack_8c8;
      local_7c0 = local_900;
      uStack_7b8 = uStack_8f8;
      uStack_7b0 = uStack_8f0;
      uStack_7a8 = uStack_8e8;
      local_7e0 = local_920;
      uStack_7d8 = uStack_918;
      uStack_7d0 = uStack_910;
      uStack_7c8 = uStack_908;
      local_800 = local_940;
      uStack_7f8 = uStack_938;
      uStack_7f0 = uStack_930;
      uStack_7e8 = uStack_928;
      (*(code *)PTR__impl_split_0021a590)();
      param_1[4] = local_880;
      *param_1 = local_8a0;
      param_1[1] = uStack_898;
      param_1[2] = uStack_890;
      param_1[3] = uStack_888;
      param_1[9] = uStack_858;
      param_1[5] = uStack_878;
      param_1[6] = uStack_870;
      param_1[7] = uStack_868;
      param_1[8] = local_860;
      param_1[10] = uStack_850;
      param_1[0xb] = uStack_848;
      param_1[0xc] = local_840;
      param_1[0xd] = uStack_838;
      param_1[0xe] = uStack_830;
      param_1[0xf] = uStack_828;
      param_1[0x10] = local_820;
      param_1[0x11] = uStack_818;
      param_1[0x12] = uStack_810;
      param_1[0x13] = uStack_808;
      return;
    }
  } while( true );
}


