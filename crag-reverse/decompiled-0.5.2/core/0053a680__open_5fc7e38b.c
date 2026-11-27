// 0053a680 open

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::open */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::open
          (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong in_FS_OFFSET;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong local_250;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [48];
  undefined1 local_1d8 [48];
  int local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  
  (*(code *)PTR__join_00799210)(&DAT_0019ba6b,param_3,0x17);
  if (local_240 < 0) {
LAB_0053a6c3:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_240 == 0) {
    lVar9 = 1;
    cVar1 = *(char *)(in_FS_OFFSET + -0x28);
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) goto LAB_0053a6c3;
    param_3 = local_240;
    (*(code *)PTR_memcpy_00799008)();
    cVar1 = *(char *)(in_FS_OFFSET + -0x28);
  }
  if (cVar1 == '\x01') {
    local_c8 = *(longlong *)(in_FS_OFFSET + -0x38);
    param_3 = *(longlong *)(in_FS_OFFSET + -0x30);
  }
  else {
    local_c8 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_c8;
    *(longlong *)(in_FS_OFFSET + -0x30) = param_3;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  uVar8 = _UNK_0078d79c;
  uVar7 = _UNK_0078d798;
  uVar6 = _UNK_0078d794;
  uVar5 = _DAT_0078d790;
  uVar15 = _UNK_0078d78c;
  uVar4 = _UNK_0078d788;
  uVar3 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780._4_4_;
  uVar16 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780._0_4_;
  local_178 = local_c8 + 1;
  local_218 = local_c8 + 2;
  local_188 = _DAT_0078d790;
  uStack_184 = _UNK_0078d794;
  uStack_180 = _UNK_0078d798;
  uStack_17c = _UNK_0078d79c;
  local_198 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780._0_4_;
  uStack_194 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780._4_4_
  ;
  uStack_190 = _UNK_0078d788;
  uStack_18c = _UNK_0078d78c;
  *(longlong *)(in_FS_OFFSET + -0x38) = local_c8 + 3;
  local_238._0_4_ = uVar16;
  local_238._4_4_ = uVar3;
  uStack_230._0_4_ = uVar4;
  uStack_230._4_4_ = uVar15;
  local_228._0_4_ = uVar5;
  local_228._4_4_ = uVar6;
  uStack_220._0_4_ = uVar7;
  uStack_220._4_4_ = uVar8;
  uStack_210 = param_3;
  lStack_170 = param_3;
  (*(code *)PTR_now_00799478)();
  iVar14 = (int)(uint)local_100 >> 0xd;
  iVar13 = iVar14 + -1;
  iVar11 = 0;
  if (iVar14 < 1) {
    iVar11 = (1U - iVar14) / 400 + 1;
    iVar13 = iVar13 + iVar11 * 400;
    iVar11 = iVar11 * -0x23ab1;
  }
  lVar12 = (local_f8 & 0xffffffff) / 1000000 +
           ((longlong)
            (int)(((((uint)local_100 >> 4 & 0x1ff) + iVar11) - iVar13 / 100) + (iVar13 * 0x5b5 >> 2)
                  + (iVar13 / 100 >> 2) + -0xaf93b) * 0x15180 + (local_100 >> 0x20)) * 1000;
  local_40 = 0;
  if (0 < lVar12) {
    local_40 = lVar12;
  }
  local_58 = 0x1000;
  local_50 = 0x1000;
  local_48 = 0x1000;
  local_e8 = CONCAT44(uVar3,uVar16);
  uStack_e0 = CONCAT44(uVar15,uVar4);
  local_d8 = CONCAT44(uVar6,uVar5);
  uStack_d0 = CONCAT44(uVar8,uVar7);
  local_b8 = CONCAT44(uStack_194,local_198);
  uStack_b0 = CONCAT44(uStack_18c,uStack_190);
  local_a8 = CONCAT44(uStack_184,local_188);
  uStack_a0 = CONCAT44(uStack_17c,uStack_180);
  local_98 = local_178;
  uStack_90 = lStack_170;
  local_68 = (undefined4)local_218;
  uStack_64 = local_218._4_4_;
  uStack_60 = (undefined4)uStack_210;
  uStack_5c = uStack_210._4_4_;
  local_78 = (undefined4)local_228;
  uStack_74 = local_228._4_4_;
  uStack_70 = (undefined4)uStack_220;
  uStack_6c = uStack_220._4_4_;
  local_88 = (undefined4)local_238;
  uStack_84 = local_238._4_4_;
  uStack_80 = (uint)uStack_230;
  uStack_7c = uStack_230._4_4_;
  local_38 = 0;
  local_f8 = lVar9;
  lStack_c0 = param_3;
  (*(code *)PTR_inner_00799760)(lVar12,local_240);
  if (CONCAT44(uVar3,uVar16) == -1) {
                    /* WARNING: Could not recover jumptable at 0x0053aa8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)((longlong)&switchD_0053aa8b::switchdataD_0019aea0 +
                       (longlong)(int)(&switchD_0053aa8b::switchdataD_0019aea0)[uVar4 & 3]))
                       ((code *)((longlong)&switchD_0053aa8b::switchdataD_0019aea0 +
                                (longlong)(int)(&switchD_0053aa8b::switchdataD_0019aea0)[uVar4 & 3])
                       );
    return uVar10;
  }
  uStack_230 = CONCAT44(uVar6,uVar5);
  local_228 = 0;
  uStack_220 = 0;
  local_238 = CONCAT44(uVar15,uVar4);
  uVar15 = serde_json[dc3825464c436029]::de::from_trait::
           <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache>
                     (&local_198,&local_238);
  if (CONCAT44(uStack_194,local_198) == 0) {
    uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                       (&uStack_190);
  }
  else {
    (*(code *)PTR_memcpy_00799008)(uVar15,0x98);
    if (local_1a8 == 1) {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_e8,&local_198);
      local_c8 = local_178;
      lStack_c0 = lStack_170;
      local_d8 = CONCAT44(uStack_184,local_188);
      uStack_d0 = CONCAT44(uStack_17c,uStack_180);
      local_e8 = CONCAT44(uStack_194,local_198);
      uStack_e0 = CONCAT44(uStack_18c,uStack_190);
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_b8);
      local_98 = CONCAT44(uStack_144,local_148);
      uStack_90 = CONCAT44(uStack_13c,uStack_140);
      local_a8 = CONCAT44(uStack_154,local_158);
      uStack_a0 = CONCAT44(uStack_14c,uStack_150);
      local_b8 = CONCAT44(uStack_164,local_168);
      uStack_b0 = CONCAT44(uStack_15c,uStack_160);
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_88);
      local_68 = local_118;
      uStack_64 = uStack_114;
      uStack_60 = uStack_110;
      uStack_5c = uStack_10c;
      local_78 = local_128;
      uStack_74 = uStack_124;
      uStack_70 = uStack_120;
      uStack_6c = uStack_11c;
      local_88 = local_138;
      uStack_84 = uStack_134;
      uStack_80 = uStack_130;
      uStack_7c = uStack_12c;
      uVar15 = prune_to_bounds(&local_100);
    }
    else {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_198,&local_198);
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(local_208);
      uVar15 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(local_1d8);
    }
  }
  if (CONCAT44(uVar3,uVar16) != 0) {
    uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
  }
  uVar16 = (*(code *)PTR_memcpy_00799008)(uVar15,0xd0);
  if (local_250 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
  }
  return param_1;
}


