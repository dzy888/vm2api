// 0071e080 <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::insert_entry::{closure#0}>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[12e961f32105355]::alloc::Global,
   <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::insert_entry::{closure#0}> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_recursing::
<alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::insert_entry::_closure_0_>
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
          longlong *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  short sVar24;
  int iVar25;
  longlong lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  bool bVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar26 = *param_2;
  uVar3 = *(ushort *)(lVar26 + 0x272);
  uVar33 = (ulonglong)uVar3;
  if (uVar33 < 0xb) {
    local_1a0 = param_2[2];
    puVar34 = (undefined8 *)(local_1a0 * 0x18 + 0x168 + lVar26);
    if (uVar33 < local_1a0 + 1) {
      puVar34[2] = param_3[2];
      uVar27 = param_3[1];
      *puVar34 = *param_3;
      puVar34[1] = uVar27;
      local_108 = *param_4;
      uStack_100 = param_4[1];
      local_f8 = param_4[2];
      uStack_f0 = param_4[3];
    }
    else {
      (*(code *)PTR_memmove_00799258)((local_1a0 + 1) * 3,(uVar33 - local_1a0) * 0x18);
      uVar27 = param_3[1];
      *puVar34 = *param_3;
      puVar34[1] = uVar27;
      puVar34[2] = param_3[2];
      local_108 = *param_4;
      uStack_100 = param_4[1];
      local_f8 = param_4[2];
      uStack_f0 = param_4[3];
      (*(code *)PTR_memmove_00799258)(*(undefined4 *)param_4,(uVar33 - local_1a0) * 0x20);
    }
    puVar34 = (undefined8 *)(lVar26 + 0x10 + local_1a0 * 0x20);
    *puVar34 = local_f8;
    puVar34[1] = uStack_f0;
    puVar34 = (undefined8 *)(lVar26 + local_1a0 * 0x20);
    *puVar34 = local_108;
    puVar34[1] = uStack_100;
    *(ushort *)(lVar26 + 0x272) = uVar3 + 1;
    lVar20 = param_2[1];
LAB_0071ea8b:
    *param_1 = lVar26;
    param_1[1] = lVar20;
    param_1[2] = local_1a0;
    return;
  }
  local_1a0 = param_2[2];
  if (local_1a0 < 5) {
    uVar33 = 4;
    bVar36 = false;
  }
  else if (local_1a0 == 5) {
    bVar36 = false;
    uVar33 = 5;
  }
  else if (local_1a0 == 6) {
    uVar33 = 5;
    bVar36 = true;
    local_1a0 = 0;
  }
  else {
    local_1a0 = local_1a0 - 7;
    uVar33 = 6;
    bVar36 = true;
  }
  local_180 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar19 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar19 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *(undefined8 *)(lVar19 + 0x160) = 0;
    uVar30 = ~uVar33 + (ulonglong)*(ushort *)(lVar26 + 0x272);
    *(short *)(lVar19 + 0x272) = (short)uVar30;
    lVar32 = *(longlong *)(lVar26 + 0x168 + uVar33 * 0x18);
    uVar27 = *(undefined8 *)(lVar26 + 0x170 + uVar33 * 0x18);
    uVar35 = *(undefined8 *)(lVar26 + 0x178 + uVar33 * 0x18);
    if (uVar30 < 0xc) {
      puVar34 = (undefined8 *)(uVar33 * 0x20 + lVar26);
      uVar37 = (*(code *)PTR_memcpy_00799008)((uVar33 + 1) * 3,uVar30 * 0x18);
      (*(code *)PTR_memcpy_00799008)(uVar37,uVar30 * 0x20);
      *(short *)(lVar26 + 0x272) = (short)uVar33;
      uVar28 = *puVar34;
      uVar15 = puVar34[1];
      uVar16 = puVar34[2];
      uVar17 = puVar34[3];
      lVar20 = 0;
      lVar14 = lVar19;
      if (!bVar36) {
        lVar20 = local_180;
        lVar14 = lVar26;
      }
      uVar3 = *(ushort *)(lVar14 + 0x272);
      lVar31 = lVar14 + local_1a0 * 0x18;
      if (local_1a0 < uVar3) {
        iVar25 = (uint)uVar3 - (int)local_1a0;
        (*(code *)PTR_memmove_00799258)((local_1a0 + 1) * 3,(ulonglong)(uint)(iVar25 * 8) * 3);
        uVar13 = param_3[1];
        *(undefined8 *)(lVar31 + 0x168) = *param_3;
        *(undefined8 *)(lVar31 + 0x170) = uVar13;
        *(undefined8 *)(lVar31 + 0x178) = param_3[2];
        local_108 = *param_4;
        uStack_100 = param_4[1];
        local_f8 = param_4[2];
        uStack_f0 = param_4[3];
        (*(code *)PTR_memmove_00799258)(*(undefined4 *)param_4,iVar25 * 0x20);
      }
      else {
        *(undefined8 *)(lVar31 + 0x178) = param_3[2];
        uVar13 = param_3[1];
        *(undefined8 *)(lVar31 + 0x168) = *param_3;
        *(undefined8 *)(lVar31 + 0x170) = uVar13;
        local_108 = *param_4;
        uStack_100 = param_4[1];
        local_f8 = param_4[2];
        uStack_f0 = param_4[3];
      }
      puVar34 = (undefined8 *)(lVar14 + 0x10 + local_1a0 * 0x20);
      *puVar34 = local_f8;
      puVar34[1] = uStack_f0;
      puVar34 = (undefined8 *)(lVar14 + local_1a0 * 0x20);
      *puVar34 = local_108;
      puVar34[1] = uStack_100;
      *(ushort *)(lVar14 + 0x272) = uVar3 + 1;
      if (lVar32 == -1) {
        lVar26 = lVar14;
        goto LAB_0071ea8b;
      }
      local_88 = (undefined4)uVar28;
      uStack_84 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uStack_80 = (undefined4)uVar15;
      uStack_7c = (undefined4)((ulonglong)uVar15 >> 0x20);
      local_78 = (undefined4)uVar16;
      uStack_74 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uStack_70 = (undefined4)uVar17;
      uStack_6c = (undefined4)((ulonglong)uVar17 >> 0x20);
      local_138 = local_78;
      uStack_134 = uStack_74;
      uStack_130 = uStack_70;
      uStack_12c = uStack_6c;
      local_148 = local_88;
      uStack_144 = uStack_84;
      uStack_140 = uStack_80;
      uStack_13c = uStack_7c;
      if (*(longlong *)(lVar26 + 0x160) != 0) {
        bVar36 = local_180 == 0;
        lVar31 = *(longlong *)(lVar26 + 0x160);
        uVar28 = uVar35;
        lVar23 = lVar19;
        local_1a8 = lVar32;
        local_178 = uVar27;
        while( true ) {
          lVar21 = lVar31;
          puVar18 = PTR_memmove_00799258;
          if (!bVar36) {
            (*(code *)PTR_panic_00799338)
                      (0,&
                         PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c20
                      );
            goto LAB_0071ef40;
          }
          uVar3 = *(ushort *)(lVar26 + 0x270);
          local_1b0 = (ulonglong)uVar3;
          uVar4 = *(ushort *)(lVar21 + 0x272);
          uVar33 = (ulonglong)uVar4;
          if (uVar33 < 0xb) break;
          if (uVar3 < 5) {
            local_198 = 4;
            bVar36 = false;
          }
          else if (local_1b0 == 5) {
            bVar36 = false;
            local_198 = 5;
          }
          else if (uVar3 == 6) {
            bVar36 = true;
            local_198 = 5;
            local_1b0 = 0;
          }
          else {
            local_1b0 = local_1b0 - 7;
            bVar36 = true;
            local_198 = 6;
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar19 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar19 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
            goto LAB_0071ef40;
          }
          *(undefined8 *)(lVar19 + 0x160) = 0;
          *(undefined2 *)(lVar19 + 0x272) = 0;
          uVar30 = ~local_198 + (ulonglong)*(ushort *)(lVar21 + 0x272);
          *(short *)(lVar19 + 0x272) = (short)uVar30;
          lVar32 = *(longlong *)(lVar21 + 0x168 + local_198 * 0x18);
          uVar27 = *(undefined8 *)(lVar21 + 0x170 + local_198 * 0x18);
          uVar35 = *(undefined8 *)(lVar21 + 0x178 + local_198 * 0x18);
          uVar33 = (ulonglong)(uint)((int)local_198 << 5);
          puVar2 = (undefined4 *)(lVar21 + uVar33);
          uVar37 = *puVar2;
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar2 = (undefined4 *)(lVar21 + 0x10 + uVar33);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          if (0xb < uVar30) {
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c80
                       ,0xb);
            goto LAB_0071ef40;
          }
          uVar38 = (*(code *)PTR_memcpy_00799008)((local_198 + 1) * 3,uVar30 * 0x18);
          (*(code *)PTR_memcpy_00799008)(uVar38,uVar30 * 0x20);
          *(short *)(lVar21 + 0x272) = (short)local_198;
          uVar33 = (ulonglong)*(ushort *)(lVar19 + 0x272);
          iVar25 = *(ushort *)(lVar19 + 0x272) + 1;
          if (0xb < uVar33) {
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c38
                       ,0xc);
            goto LAB_0071ef40;
          }
          if ((uint)uVar4 - (int)local_198 != iVar25) {
            (*(code *)PTR_panic_00799338)
                      (local_198,
                       &
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c50
                      );
            goto LAB_0071ef40;
          }
          local_180 = local_180 + 1;
          (*(code *)PTR_memcpy_00799008)(local_198,iVar25 * 8);
          uVar30 = 0;
          do {
            uVar22 = uVar30 + (uVar30 < uVar33);
            lVar26 = *(longlong *)(lVar19 + 0x278 + uVar30 * 8);
            *(longlong *)(lVar26 + 0x160) = lVar19;
            *(short *)(lVar26 + 0x270) = (short)uVar30;
            if (uVar33 <= uVar30) break;
            uVar30 = uVar22;
          } while (uVar22 <= uVar33);
          lVar26 = lVar19;
          if (!bVar36) {
            lVar26 = lVar21;
          }
          uVar3 = *(ushort *)(lVar26 + 0x272);
          uVar33 = (ulonglong)uVar3;
          lVar31 = local_1b0 + 1;
          lVar1 = lVar26 + local_1b0 * 0x18;
          if (uVar33 < local_1b0 || uVar33 - local_1b0 == 0) {
            *(longlong *)(lVar1 + 0x168) = local_1a8;
            *(undefined8 *)(lVar1 + 0x170) = local_178;
            *(undefined8 *)(lVar1 + 0x178) = uVar28;
            puVar34 = (undefined8 *)(lVar26 + 0x10 + local_1b0 * 0x20);
            *puVar34 = CONCAT44(uStack_134,local_138);
            puVar34[1] = CONCAT44(uStack_12c,uStack_130);
            puVar34 = (undefined8 *)(lVar26 + local_1b0 * 0x20);
            *puVar34 = CONCAT44(uStack_144,local_148);
            puVar34[1] = CONCAT44(uStack_13c,uStack_140);
          }
          else {
            iVar25 = (uint)uVar3 - (int)local_1b0;
            uVar30 = (ulonglong)(uint)(iVar25 * 8);
            uVar38 = (*(code *)PTR_memmove_00799258)(lVar31 * 3,uVar30 * 3);
            *(longlong *)(lVar1 + 0x168) = local_1a8;
            *(undefined8 *)(lVar1 + 0x170) = local_178;
            *(undefined8 *)(lVar1 + 0x178) = uVar28;
            puVar18 = PTR_memmove_00799258;
            (*(code *)PTR_memmove_00799258)(uVar38,iVar25 * 0x20);
            puVar2 = (undefined4 *)(lVar26 + local_1b0 * 0x20);
            *puVar2 = local_148;
            puVar2[1] = uStack_144;
            puVar2[2] = uStack_140;
            puVar2[3] = uStack_13c;
            puVar2 = (undefined4 *)(lVar26 + 0x10 + local_1b0 * 0x20);
            *puVar2 = local_138;
            puVar2[1] = uStack_134;
            puVar2[2] = uStack_130;
            puVar2[3] = uStack_12c;
            (*(code *)puVar18)(local_148,uVar30);
          }
          *(longlong *)(lVar26 + 0x280 + local_1b0 * 8) = lVar23;
          *(ushort *)(lVar26 + 0x272) = uVar3 + 1;
          if ((uint)lVar31 < (uint)(uVar33 + 2)) {
            uVar29 = ((uint)uVar3 - (int)local_1b0) + 1 & 3;
            if (uVar29 != 0) {
              uVar30 = 0;
              do {
                lVar23 = *(longlong *)(lVar26 + local_1b0 * 8 + 0x280 + uVar30 * 8);
                *(longlong *)(lVar23 + 0x160) = lVar26;
                *(short *)(lVar23 + 0x270) = (short)uVar30 + (short)lVar31;
                uVar30 = uVar30 + 1;
              } while (uVar29 != uVar30);
              lVar31 = lVar31 + uVar30;
            }
            if (2 < (uint)(uVar33 - local_1b0)) {
              do {
                lVar23 = *(longlong *)(lVar26 + 0x278 + lVar31 * 8);
                *(longlong *)(lVar23 + 0x160) = lVar26;
                sVar24 = (short)lVar31;
                *(short *)(lVar23 + 0x270) = sVar24;
                lVar23 = *(longlong *)(lVar26 + 0x280 + lVar31 * 8);
                *(longlong *)(lVar23 + 0x160) = lVar26;
                *(short *)(lVar23 + 0x270) = sVar24 + 1;
                lVar23 = *(longlong *)(lVar26 + 0x288 + lVar31 * 8);
                *(longlong *)(lVar23 + 0x160) = lVar26;
                *(short *)(lVar23 + 0x270) = sVar24 + 2;
                lVar23 = *(longlong *)(lVar26 + 0x290 + lVar31 * 8);
                *(longlong *)(lVar23 + 0x160) = lVar26;
                *(short *)(lVar23 + 0x270) = sVar24 + 3;
                lVar31 = lVar31 + 4;
              } while (lVar31 != uVar33 + 2);
            }
          }
          if (lVar32 == -1) goto LAB_0071ee0a;
          bVar36 = true;
          lVar31 = *(longlong *)(lVar21 + 0x160);
          lVar26 = lVar21;
          uVar28 = uVar35;
          lVar23 = lVar19;
          local_1a8 = lVar32;
          local_178 = uVar27;
          local_148 = uVar37;
          uStack_144 = uVar6;
          uStack_140 = uVar7;
          uStack_13c = uVar8;
          local_138 = uVar9;
          uStack_134 = uVar10;
          uStack_130 = uVar11;
          uStack_12c = uVar12;
          if (*(longlong *)(lVar21 + 0x160) == 0) goto LAB_0071eaae;
        }
        lVar26 = local_1b0 + 1;
        lVar19 = lVar21 + local_1b0 * 0x18;
        if (uVar3 < uVar4) {
          lVar32 = uVar33 - local_1b0;
          uVar37 = (*(code *)PTR_memmove_00799258)(lVar26 * 3,lVar32 * 0x18);
          *(longlong *)(lVar19 + 0x168) = local_1a8;
          *(undefined8 *)(lVar19 + 0x170) = local_178;
          *(undefined8 *)(lVar19 + 0x178) = uVar28;
          (*(code *)puVar18)(uVar37,lVar32 * 0x20);
          puVar2 = (undefined4 *)(lVar21 + (ulonglong)uVar3 * 0x20);
          *puVar2 = local_148;
          puVar2[1] = uStack_144;
          puVar2[2] = uStack_140;
          puVar2[3] = uStack_13c;
          puVar2 = (undefined4 *)(lVar21 + 0x10 + (ulonglong)uVar3 * 0x20);
          *puVar2 = local_138;
          puVar2[1] = uStack_134;
          puVar2[2] = uStack_130;
          puVar2[3] = uStack_12c;
          (*(code *)puVar18)(local_148,lVar32 * 8);
        }
        else {
          *(longlong *)(lVar19 + 0x168) = local_1a8;
          *(undefined8 *)(lVar19 + 0x170) = local_178;
          *(undefined8 *)(lVar19 + 0x178) = uVar28;
          puVar34 = (undefined8 *)(lVar21 + 0x10 + (ulonglong)uVar3 * 0x20);
          *puVar34 = CONCAT44(uStack_134,local_138);
          puVar34[1] = CONCAT44(uStack_12c,uStack_130);
          puVar34 = (undefined8 *)(lVar21 + (ulonglong)uVar3 * 0x20);
          *puVar34 = CONCAT44(uStack_144,local_148);
          puVar34[1] = CONCAT44(uStack_13c,uStack_140);
        }
        *(longlong *)(lVar21 + 0x280 + local_1b0 * 8) = lVar23;
        *(ushort *)(lVar21 + 0x272) = uVar4 + 1;
        if ((uint)lVar26 < (uint)(uVar33 + 2)) {
          uVar29 = ((uint)uVar4 - (uint)uVar3) + 1 & 3;
          if (uVar29 != 0) {
            uVar30 = 0;
            do {
              lVar19 = *(longlong *)(lVar21 + local_1b0 * 8 + 0x280 + uVar30 * 8);
              *(longlong *)(lVar19 + 0x160) = lVar21;
              *(short *)(lVar19 + 0x270) = (short)uVar30 + (short)lVar26;
              uVar30 = uVar30 + 1;
            } while (uVar29 != uVar30);
            lVar26 = lVar26 + uVar30;
          }
          if (2 < (uint)uVar4 - (uint)uVar3) {
            do {
              lVar19 = *(longlong *)(lVar21 + 0x278 + lVar26 * 8);
              *(longlong *)(lVar19 + 0x160) = lVar21;
              sVar24 = (short)lVar26;
              *(short *)(lVar19 + 0x270) = sVar24;
              lVar19 = *(longlong *)(lVar21 + 0x280 + lVar26 * 8);
              *(longlong *)(lVar19 + 0x160) = lVar21;
              *(short *)(lVar19 + 0x270) = sVar24 + 1;
              lVar19 = *(longlong *)(lVar21 + 0x288 + lVar26 * 8);
              *(longlong *)(lVar19 + 0x160) = lVar21;
              *(short *)(lVar19 + 0x270) = sVar24 + 2;
              lVar19 = *(longlong *)(lVar21 + 0x290 + lVar26 * 8);
              *(longlong *)(lVar19 + 0x160) = lVar21;
              *(short *)(lVar19 + 0x270) = sVar24 + 3;
              lVar26 = lVar26 + 4;
            } while (lVar26 != uVar33 + 2);
          }
        }
LAB_0071ee0a:
        *param_1 = lVar14;
        param_1[1] = lVar20;
LAB_0071ee28:
        param_1[2] = local_1a0;
        return;
      }
      local_180 = 0;
LAB_0071eaae:
      param_5 = (longlong *)*param_5;
      lVar26 = *param_5;
      if (lVar26 == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
      }
      else {
        lVar31 = param_5[1];
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar34 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar34 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
        }
        else {
          puVar34[0x2c] = 0;
          *(undefined2 *)((longlong)puVar34 + 0x272) = 0;
          puVar34[0x4f] = lVar26;
          lVar23 = lVar31 + 1;
          if (lVar23 == 0) {
            (*(code *)PTR_unwrap_failed_00799278)();
          }
          else {
            *(undefined8 **)(lVar26 + 0x160) = puVar34;
            *(undefined2 *)(lVar26 + 0x270) = 0;
            *param_5 = (longlong)puVar34;
            param_5[1] = lVar23;
            if (local_180 == lVar31) {
              *(undefined2 *)((longlong)puVar34 + 0x272) = 1;
              puVar34[0x2d] = lVar32;
              puVar34[0x2e] = uVar27;
              puVar34[0x2f] = uVar35;
              *puVar34 = CONCAT44(uStack_144,local_148);
              puVar34[1] = CONCAT44(uStack_13c,uStack_140);
              puVar34[2] = CONCAT44(uStack_134,local_138);
              puVar34[3] = CONCAT44(uStack_12c,uStack_130);
              puVar34[0x50] = lVar19;
              *(undefined8 **)(lVar19 + 0x160) = puVar34;
              *(undefined2 *)(lVar19 + 0x270) = 1;
              *param_1 = lVar14;
              param_1[1] = lVar20;
              goto LAB_0071ee28;
            }
            (*(code *)PTR_panic_00799338)
                      (local_1a0,
                       &
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c98
                      );
          }
        }
      }
    }
    else {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00795c80,0xb
                );
    }
  }
LAB_0071ef40:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


