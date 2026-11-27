// 004b01c0 open

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::open */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::open
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_130;
  uint local_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined *puStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  
  uVar2 = craggemini_core[66f3c71560d70857]::binding::ensure_private_dir(param_2,param_3);
  if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
    uStack_110 = uVar2 - 1;
    local_118 = CONCAT71(local_118._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  (*(code *)PTR__join_00799210)("cooldowns.v1.json",param_3,0x11);
  uStack_140 = local_78;
  uVar7 = (*(code *)PTR_inner_00799760)();
  lVar6 = CONCAT44(uStack_124,local_128);
  if (local_130 == -1) {
    uVar5 = local_128 & 3;
    switch(uVar5) {
    case 0:
      cVar1 = *(char *)(lVar6 + 0x10);
      break;
    case 1:
      cVar1 = *(char *)(lVar6 + 0x1f);
      break;
    case 2:
      lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar3 + 8))();
      uVar7 = extraout_XMM0_Da;
      break;
    case 3:
      cVar1 = (char)uStack_124;
    }
    if (cVar1 != '\0') {
      param_1[1] = lVar6;
      *param_1 = 0xffffffffffffffff;
      if (local_88 == 0) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
      return param_1;
    }
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
      local_148 = *(longlong *)(in_FS_OFFSET + -0x38);
      uStack_140 = *(undefined8 *)(in_FS_OFFSET + -0x30);
    }
    else {
      local_148 = (*(code *)PTR_hashmap_random_keys_00799248)();
      *(longlong *)(in_FS_OFFSET + -0x38) = local_148;
      *(undefined8 *)(in_FS_OFFSET + -0x30) = uStack_140;
      *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
    }
    *(longlong *)(in_FS_OFFSET + -0x38) = local_148 + 1;
    local_168 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728;
    uStack_160 = _UNK_0078b730;
    local_158 = CONCAT44(_UNK_0078b73c,_DAT_0078b738);
    uStack_150 = CONCAT44(_UNK_0078b744,_UNK_0078b740);
    if ((1 < uVar5 - 2) && (uVar5 != 0)) {
      uStack_110 = lVar6 + -1;
      local_118 = CONCAT71(local_118._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_004b03a1;
  }
  local_108 = 0;
  puStack_100 = (undefined *)0x0;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::pool::CooldownFileV1>
            (&local_68,&local_118);
  if (CONCAT44(uStack_64,local_68) == 0) {
    local_118 = 0;
LAB_004b033b:
    uStack_110 = CONCAT44(uStack_5c,uStack_60);
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
      local_148 = *(longlong *)(in_FS_OFFSET + -0x38);
      uStack_140 = *(undefined8 *)(in_FS_OFFSET + -0x30);
    }
    else {
      uStack_140 = extraout_RDX;
      local_148 = (*(code *)PTR_hashmap_random_keys_00799248)();
      *(longlong *)(in_FS_OFFSET + -0x38) = local_148;
      *(undefined8 *)(in_FS_OFFSET + -0x30) = uStack_140;
      *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
    }
    *(longlong *)(in_FS_OFFSET + -0x38) = local_148 + 1;
    local_168 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728;
    uStack_160 = _UNK_0078b730;
    local_158 = CONCAT44(_UNK_0078b73c,_DAT_0078b738);
    uStack_150 = CONCAT44(_UNK_0078b744,_UNK_0078b740);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
              (&uStack_110);
  }
  else {
    local_118 = CONCAT44(uStack_64,local_68);
    uStack_110 = CONCAT44(uStack_5c,uStack_60);
    local_f8 = local_48;
    uStack_f0 = uStack_40;
    local_108 = local_58;
    puStack_100 = (undefined *)uStack_50;
    if (local_118 == 0) goto LAB_004b033b;
    local_148 = local_48;
    uStack_140 = uStack_40;
    local_158 = local_58;
    uStack_150 = uStack_50;
    local_168 = (undefined *)CONCAT44(uStack_64,local_68);
    uStack_160 = CONCAT44(uStack_5c,uStack_60);
  }
  if (local_130 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_004b03a1:
  (*(code *)PTR_now_007993f0)();
  uVar4 = 0;
  (*(code *)PTR_duration_since_007993f8)(0);
  if ((char)local_118 == '\0') {
    lVar6 = (local_108 & 0xffffffff) / 1000000 + uStack_110 * 1000;
  }
  else {
    lVar6 = 0;
  }
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_b0 = *(longlong *)(in_FS_OFFSET + -0x38);
    uVar4 = *(undefined8 *)(in_FS_OFFSET + -0x30);
  }
  else {
    local_b0 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_b0;
    *(undefined8 *)(in_FS_OFFSET + -0x30) = uVar4;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_b0 + 1;
  local_118 = local_88;
  uStack_110 = local_80;
  local_108 = local_78;
  puStack_100 = local_168;
  local_f8 = uStack_160;
  uStack_f0 = local_158;
  uStack_e8 = (undefined4)uStack_150;
  uStack_e4 = uStack_150._4_4_;
  local_e0 = (undefined4)local_148;
  uStack_dc = local_148._4_4_;
  uStack_d8 = (undefined4)uStack_140;
  uStack_d4 = uStack_140._4_4_;
  local_d0 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728;
  uStack_c8 = _UNK_0078b730;
  local_c0 = _DAT_0078b738;
  uStack_bc = _UNK_0078b73c;
  uStack_b8 = _UNK_0078b740;
  uStack_b4 = _UNK_0078b744;
  local_98 = 0;
  local_a8 = uVar4;
  local_a0 = lVar6;
  uVar7 = prune_expired(&local_118,lVar6);
  (*(code *)PTR_memcpy_00799008)(uVar7,0x88);
  return param_1;
}


