// 004f2b10 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_map::<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_map::
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined3 local_140;
  undefined3 uStack_13c;
  longlong local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 uStack_121;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0 [3];
  char local_c8;
  undefined4 local_c7;
  undefined4 uStack_c3;
  undefined4 uStack_bf;
  undefined4 uStack_bb;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_50;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_158 = 0;
  lStack_150 = 8;
  local_148 = 0;
  local_138 = param_2;
  local_130 = param_3;
  while (uVar13 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                  ::next_key_seed::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
                            (&local_50,&local_138), cVar6 = local_50, local_50 != -1) {
    if (local_50 == -2) {
      uVar8 = CONCAT35((undefined3)uStack_43,CONCAT41(uStack_47,uStack_4b._3_1_));
      goto LAB_004f2dc6;
    }
    local_c8 = local_50;
    uStack_b4 = uStack_3c;
    uStack_b0 = uStack_38;
    uStack_ac = uStack_34;
    local_c7 = local_4f;
    uStack_c3 = uStack_4b;
    uStack_bf = uStack_47;
    uStack_bb = uStack_43;
    uVar7 = *(ulonglong *)(local_138 + 0x28);
    if (*(ulonglong *)(local_138 + 0x20) <= uVar7) {
LAB_004f2d47:
      local_e0[0] = 3;
      uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(local_138,local_e0);
LAB_004f2d66:
LAB_004f2d69:
      uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <serde_core[48776c27239fa21f]::private::content::Content>(&local_c8);
LAB_004f2dc6:
      *(undefined8 *)(param_1 + 8) = uVar8;
      *param_1 = 0xff;
      lVar9 = local_148;
      lVar11 = lStack_150;
      while (bVar12 = lVar9 != 0, lVar9 = lVar9 + -1, bVar12) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <serde_core[48776c27239fa21f]::private::content::Content>(lVar11);
        lVar1 = lVar11 + 0x20;
        lVar11 = lVar11 + 0x40;
        uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
      }
      if (local_158 == 0) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
      return param_1;
    }
    while( true ) {
      uVar7 = uVar7 + 1;
      uVar10 = (ulonglong)*(byte *)(*(longlong *)(local_138 + 0x18) + -1 + uVar7);
      if (0x3a < uVar10) goto LAB_004f2e43;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(local_138 + 0x28) = uVar7;
      if (uVar7 == *(ulonglong *)(local_138 + 0x20)) goto LAB_004f2d47;
    }
    if (uVar10 != 0x3a) {
LAB_004f2e43:
      local_e0[0] = 6;
      uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(local_138,local_e0);
      goto LAB_004f2d66;
    }
    *(ulonglong *)(local_138 + 0x28) = uVar7;
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
    ::__deserialize_content_v1::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
              (&local_a8);
    lVar11 = local_148;
    if (local_a8 == -1) {
      uVar8 = uStack_a0;
      goto LAB_004f2d69;
    }
    local_108 = local_98;
    uStack_100 = uStack_90;
    uStack_118 = (undefined4)CONCAT71(uStack_a7,local_a8);
    uStack_114 = (undefined4)((uint7)uStack_a7 >> 0x18);
    uStack_110 = (undefined4)uStack_a0;
    uStack_10c = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_140 = (undefined3)local_4f;
    uStack_13c = (undefined3)uStack_4b;
    uVar8 = CONCAT35((undefined3)uStack_bb,CONCAT41(uStack_bf,uStack_c3._3_1_));
    uVar3 = CONCAT31(uStack_3f,uStack_43._3_1_);
    local_88 = CONCAT44(uStack_3c,uVar3);
    local_68 = local_98;
    uVar4 = local_68;
    uStack_60 = uStack_90;
    uVar5 = uStack_60;
    local_78 = uStack_118;
    uStack_74 = uStack_114;
    uStack_70 = uStack_110;
    uStack_6c = uStack_10c;
    if (cVar6 == -1) break;
    uVar13 = uStack_118;
    if (cVar6 == -2) goto LAB_004f2dc6;
    uStack_123 = (undefined2)(uStack_4b & 0xffffff);
    uStack_121 = (undefined1)((uStack_4b & 0xffffff) >> 0x10);
    local_128 = CONCAT31(local_140,cVar6);
    uStack_120 = (undefined4)CONCAT41(uStack_bf,uStack_c3._3_1_);
    uStack_11c = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_68._0_4_ = (undefined4)local_98;
    local_68._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_60._0_4_ = (undefined4)uStack_90;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_f8 = (undefined4)local_68;
    uStack_f4 = local_68._4_4_;
    uStack_f0 = (undefined4)uStack_60;
    uStack_ec = uStack_60._4_4_;
    local_108 = CONCAT44(uStack_114,uStack_118);
    uStack_100 = uStack_a0;
    uStack_114 = uStack_3c;
    uStack_110 = uStack_38;
    uStack_10c = uStack_34;
    uStack_124 = local_4f._3_1_;
    uStack_118 = uVar3;
    local_68 = uVar4;
    uStack_60 = uVar5;
    if (local_148 == local_158) {
      <alloc[12e961f32105355]::raw_vec::RawVec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
      ::grow_one(&local_158);
    }
    lVar9 = lVar11 * 0x40;
    puVar2 = (undefined4 *)(lStack_150 + 0x30 + lVar9);
    *puVar2 = local_f8;
    puVar2[1] = uStack_f4;
    puVar2[2] = uStack_f0;
    puVar2[3] = uStack_ec;
    puVar2 = (undefined4 *)(lStack_150 + 0x20 + lVar9);
    *puVar2 = (undefined4)local_108;
    puVar2[1] = local_108._4_4_;
    puVar2[2] = (undefined4)uStack_100;
    puVar2[3] = uStack_100._4_4_;
    puVar2 = (undefined4 *)(lStack_150 + 0x10 + lVar9);
    *puVar2 = uStack_118;
    puVar2[1] = uStack_114;
    puVar2[2] = uStack_110;
    puVar2[3] = uStack_10c;
    puVar2 = (undefined4 *)(lStack_150 + lVar9);
    *puVar2 = local_128;
    puVar2[1] = CONCAT13(uStack_121,CONCAT21(uStack_123,uStack_124));
    puVar2[2] = uStack_120;
    puVar2[3] = uStack_11c;
    local_148 = lVar11 + 1;
  }
  uStack_121 = (undefined1)local_158;
  uStack_120 = (undefined4)((ulonglong)local_158 >> 8);
  uStack_11c._0_3_ = (undefined3)((ulonglong)local_158 >> 0x28);
  uStack_11c._3_1_ = (undefined1)lStack_150;
  *param_1 = 0x15;
  *(ulonglong *)(param_1 + 1) =
       CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT14(uStack_124,local_128)));
  *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_11c,uStack_120);
  *(longlong *)(param_1 + 0x10) = lStack_150;
  *(longlong *)(param_1 + 0x18) = local_148;
  return param_1;
}


