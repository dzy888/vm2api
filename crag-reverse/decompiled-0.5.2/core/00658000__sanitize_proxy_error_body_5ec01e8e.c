// 00658000 sanitize_proxy_error_body

/* WARNING: Switch with 1 destination removed at 0x0065851e */
/* craggemini_core[66f3c71560d70857]::binding::sanitize_proxy_error_body */

void __rustcall
craggemini_core[66f3c71560d70857]::binding::sanitize_proxy_error_body
          (undefined4 param_1,ulonglong *param_2,byte *param_3,byte *param_4,longlong param_5,
          ulonglong param_6)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar20 [16];
  byte *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  byte *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  byte *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_110 = 0;
  uStack_108 = 1;
  local_100 = 0;
  pbVar1 = param_3 + (longlong)param_4;
  local_148 = (byte *)0x0;
  local_128 = param_5;
  local_120 = param_6;
  local_118 = param_3;
  local_a8 = param_2;
  local_a0 = param_4;
LAB_0065806b:
  pbVar7 = local_a0;
  pbVar9 = param_3;
  pbVar8 = local_148;
  while (pbVar15 = pbVar8, pbVar9 != pbVar1) {
    bVar2 = *pbVar9;
    uVar14 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar11 = bVar2 & 0x1f;
      if (bVar2 < 0xe0) {
        param_3 = pbVar9 + 2;
        uVar14 = uVar11 << 6 | pbVar9[1] & 0x3f;
      }
      else {
        uVar14 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          param_3 = pbVar9 + 3;
          uVar14 = uVar14 | uVar11 << 0xc;
        }
        else {
          param_3 = pbVar9 + 4;
          uVar14 = pbVar9[3] & 0x3f | uVar14 << 6 | (bVar2 & 7) << 0x12;
        }
      }
    }
    else {
      param_3 = pbVar9 + 1;
    }
    lVar10 = (longlong)pbVar15 - (longlong)pbVar9;
    if ((uVar14 == 10) || (pbVar9 = param_3, pbVar8 = param_3 + lVar10, uVar14 == 0xd))
    goto LAB_0065810a;
  }
  uVar18 = (longlong)local_a0 - (longlong)local_148;
  lVar10 = uStack_108;
  lVar12 = local_128;
  uVar16 = local_120;
  lVar17 = local_100;
  if ((ulonglong)(local_110 - local_100) < uVar18) {
    param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_110,local_100,uVar18,1,1);
    lVar10 = uStack_108;
    lVar12 = local_128;
    uVar16 = local_120;
    lVar17 = local_100;
  }
  local_128 = lVar12;
  local_120 = uVar16;
  uStack_108 = lVar10;
  local_100 = lVar17;
  if (pbVar7 != local_148) {
    (*(code *)PTR_memcpy_00799008)(param_1,uVar18);
  }
  lVar4 = local_110;
  lVar17 = lVar17 + uVar18;
  if ((lVar12 == 0) || (uVar16 == 0)) {
    lVar12 = local_110;
    goto LAB_00658458;
  }
  lVar10 = 0;
  if (uVar16 < 0xb) {
    lVar10 = lVar17;
  }
  if (lVar10 < 0) goto LAB_00658550;
  if (lVar10 == 0) {
    lVar10 = 1;
    local_140 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar10 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar10 == 0) goto LAB_00658550;
    local_140 = lVar17;
  }
  local_130 = 0;
  local_138 = lVar10;
  (*(code *)PTR_new_00799a18)(lVar12,lVar17,uVar16);
  local_38 = local_b0;
  local_48 = local_c0;
  uStack_40 = uStack_b8;
  local_58 = local_d0;
  uStack_50 = uStack_c8;
  local_68 = local_e0;
  uStack_60 = uStack_d8;
  local_78 = local_f0;
  uStack_70 = uStack_e8;
  local_88 = local_100;
  uStack_80 = uStack_f8;
  local_98 = (undefined4)local_110;
  uStack_94 = local_110._4_4_;
  uStack_90 = (undefined4)uStack_108;
  uStack_8c = uStack_108._4_4_;
  lVar13 = 0;
  lVar12 = 0;
  while( true ) {
    uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_110,&local_98);
    lVar6 = local_100;
    lVar5 = uStack_108;
    if ((char)local_110 == '\0') break;
    uVar16 = uStack_108 - lVar12;
    if ((ulonglong)(local_140 - lVar13) < uVar16) {
      uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(&local_140,lVar13,uVar16,1,1);
      lVar13 = local_130;
    }
    if (lVar5 != lVar12) {
      (*(code *)PTR_memcpy_00799008)(uVar19,uVar16);
    }
    local_130 = lVar13 + uVar16;
    if ((ulonglong)(local_140 - local_130) < 10) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_140,local_130,10,1,1);
    }
    *(undefined8 *)(local_138 + local_130) = 0x657463616465725b;
    *(undefined2 *)(local_138 + 8 + local_130) = 0x5d64;
    lVar13 = local_130 + 10;
    lVar10 = local_138;
    lVar12 = lVar6;
    local_130 = lVar13;
  }
  uVar16 = lVar17 - lVar12;
  if ((ulonglong)(local_140 - lVar13) < uVar16) {
    uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(&local_140,lVar13,uVar16,1,1);
    lVar10 = local_138;
    lVar13 = local_130;
  }
  if (lVar17 != lVar12) {
    uVar19 = (*(code *)PTR_memcpy_00799008)(uVar19,uVar16);
  }
  lVar12 = local_140;
  lVar17 = lVar13 + uVar16;
  if (lVar4 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
  }
LAB_00658458:
  auVar20 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar10,lVar17);
  uVar16 = auVar20._8_8_;
  lVar10 = auVar20._0_8_;
  uVar19 = extraout_XMM0_Da;
  if (uVar16 < 0x201) {
    if (uVar16 == 0) {
      uVar18 = 1;
      goto LAB_006584ea;
    }
  }
  else {
    uVar16 = 0x200;
    while (*(char *)(lVar10 + uVar16) < -0x40) {
      if (-0x41 < *(char *)(lVar10 + -1 + uVar16)) {
        uVar16 = uVar16 - 1;
        break;
      }
      if (-0x41 < *(char *)(lVar10 + -2 + uVar16)) {
        uVar16 = uVar16 - 2;
        break;
      }
      if (-0x41 < *(char *)(lVar10 + -3 + uVar16)) {
        uVar16 = uVar16 - 3;
        break;
      }
      uVar16 = uVar16 - 4;
      if (uVar16 == 0) {
        uVar18 = 1;
        uVar16 = 0;
        goto LAB_006584ea;
      }
    }
    if ((longlong)uVar16 < 0) goto LAB_00658550;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar18 = (*(code *)PTR___rust_alloc_00799000)();
  if (uVar18 != 0) {
    uVar19 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,uVar16);
LAB_006584ea:
    *local_a8 = uVar16;
    local_a8[1] = uVar18;
    local_a8[2] = uVar16;
    if (lVar12 == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(uVar19,1);
    return;
  }
LAB_00658550:
  (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_0065810a:
  uVar16 = (longlong)pbVar15 - (longlong)local_148;
  lVar12 = local_100;
  if ((ulonglong)(local_110 - local_100) < uVar16) {
    param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_110,local_100,uVar16,1,1);
    lVar12 = local_100;
  }
  if (pbVar15 != local_148) {
    local_100 = lVar12;
    param_1 = (*(code *)PTR_memcpy_00799008)(param_1,uVar16);
  }
  local_100 = lVar12 + uVar16;
  if (local_110 == local_100) {
    param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_110,local_100,1,1,1);
  }
  *(undefined1 *)(uStack_108 + local_100) = 0x20;
  local_100 = local_100 + 1;
  local_148 = param_3 + lVar10;
  goto LAB_0065806b;
}


