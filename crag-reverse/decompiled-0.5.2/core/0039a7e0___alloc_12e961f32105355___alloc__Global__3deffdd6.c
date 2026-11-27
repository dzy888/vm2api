// 0039a7e0 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>::fix_node_and_affected_ancestors::<alloc[12e961f32105355]::alloc::Global>
    */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
::fix_node_and_affected_ancestors::<alloc[12e961f32105355]::alloc::Global>
          (undefined4 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  short sVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  ulonglong local_108;
  longlong local_f8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar20 = *(ushort *)(param_2 + 0x272);
  if (uVar20 < 5) {
    do {
      uVar19 = (ulonglong)uVar20;
      lVar4 = *(longlong *)(param_2 + 0x160);
      if (lVar4 == 0) {
        if (uVar19 == 0) {
          return 0;
        }
        return 1;
      }
      uVar1 = param_3 + 1;
      uVar26 = (ulonglong)*(ushort *)(param_2 + 0x270);
      if (uVar26 != 0) {
        local_88 = *(longlong *)(lVar4 + 0x270 + uVar26 * 8);
        uVar26 = uVar26 - 1;
        uVar3 = *(ushort *)(local_88 + 0x272);
        local_a0 = lVar4;
        local_98 = uVar1;
        local_90 = uVar26;
        local_80 = param_3;
        local_78 = param_2;
        local_70 = param_3;
        if (0xb < (uint)uVar20 + (uint)uVar3 + 1) {
          <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::bulk_steal_left(&local_a0,5 - uVar19);
          return 1;
        }
        uVar24 = uVar3 + uVar19 + 1;
        if (uVar24 < 0xc) {
          uVar20 = *(ushort *)(lVar4 + 0x272);
          uVar25 = (ulonglong)uVar3;
          param_2 = local_88;
          local_108 = uVar19;
          goto LAB_0039a977;
        }
        uVar27 = (*(code *)PTR_panic_00799338)
                           (param_2,&
                                    PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787af0
                           );
LAB_0039ad36:
        param_1 = (*(code *)PTR_panic_00799338)
                            (uVar27,&
                                    PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787c18
                            );
LAB_0039ad4f:
        (*(code *)PTR_panic_fmt_007991a8)
                  (param_1,&
                           PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ee8
                  );
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return uVar16;
      }
      uVar20 = *(ushort *)(lVar4 + 0x272);
      if (uVar20 == 0) goto LAB_0039ad4f;
      local_40 = *(longlong *)(lVar4 + 0x280);
      local_58 = 0;
      local_108 = (ulonglong)*(ushort *)(local_40 + 0x272);
      uVar24 = uVar19 + local_108 + 1;
      local_68 = lVar4;
      local_60 = uVar1;
      local_50 = param_2;
      local_48 = param_3;
      local_38 = param_3;
      if (0xb < uVar24) {
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::bulk_steal_right(&local_68,5 - uVar19);
        return 1;
      }
      uVar26 = 0;
      uVar25 = uVar19;
LAB_0039a977:
      local_f8 = uVar25 + 1;
      uVar21 = (ulonglong)uVar20;
      *(short *)(param_2 + 0x272) = (short)uVar24;
      uVar16 = *(undefined8 *)(lVar4 + 0x178 + uVar26 * 0x18);
      puVar2 = (undefined4 *)(lVar4 + 0x168 + uVar26 * 0x18);
      uVar27 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      lVar23 = ~uVar26 + uVar21;
      (*(code *)PTR_memmove_00799258)(uVar16,lVar23 * 0x18);
      puVar2 = (undefined4 *)(param_2 + 0x168 + uVar25 * 0x18);
      *puVar2 = uVar27;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(undefined8 *)(param_2 + 0x178 + uVar25 * 0x18) = uVar16;
      (*(code *)PTR_memcpy_00799008)(uVar16,(int)local_108 * 0x18);
      puVar2 = (undefined4 *)(lVar4 + uVar26 * 0x20);
      uVar27 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(lVar4 + 0x10 + uVar26 * 0x20);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      (*(code *)PTR_memmove_00799258)(uVar27,lVar23 * 0x20);
      uVar19 = (ulonglong)(uint)((int)uVar25 << 5);
      puVar2 = (undefined4 *)(param_2 + uVar19);
      *puVar2 = uVar27;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar2 = (undefined4 *)(param_2 + 0x10 + uVar19);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      uVar27 = (*(code *)PTR_memcpy_00799008)(uVar27,(int)local_108 << 5);
      uVar19 = uVar26 + 1;
      uVar27 = (*(code *)PTR_memmove_00799258)(uVar27,lVar23 * 8);
      if (uVar19 < uVar21) {
        uVar17 = (uint)uVar20 - (int)uVar19 & 3;
        uVar18 = (ulonglong)uVar17;
        if (uVar17 == 0) {
          iVar22 = (uint)uVar20 - (int)uVar26;
          uVar15 = uVar19;
        }
        else {
          do {
            uVar15 = uVar19 + 1;
            lVar23 = *(longlong *)(lVar4 + 0x278 + uVar19 * 8);
            *(longlong *)(lVar23 + 0x160) = lVar4;
            *(short *)(lVar23 + 0x270) = (short)uVar19;
            uVar18 = uVar18 - 1;
            uVar19 = uVar15;
          } while (uVar18 != 0);
          iVar22 = (uint)uVar20 - (int)uVar26;
        }
        if (2 < iVar22 - 2U) {
          do {
            lVar23 = *(longlong *)(lVar4 + 0x278 + uVar15 * 8);
            *(longlong *)(lVar23 + 0x160) = lVar4;
            sVar14 = (short)uVar15;
            *(short *)(lVar23 + 0x270) = sVar14;
            lVar23 = *(longlong *)(lVar4 + 0x280 + uVar15 * 8);
            *(longlong *)(lVar23 + 0x160) = lVar4;
            *(short *)(lVar23 + 0x270) = sVar14 + 1;
            lVar23 = *(longlong *)(lVar4 + 0x288 + uVar15 * 8);
            *(longlong *)(lVar23 + 0x160) = lVar4;
            *(short *)(lVar23 + 0x270) = sVar14 + 2;
            lVar23 = *(longlong *)(lVar4 + 0x290 + uVar15 * 8);
            *(longlong *)(lVar23 + 0x160) = lVar4;
            *(short *)(lVar23 + 0x270) = sVar14 + 3;
            uVar15 = uVar15 + 4;
          } while (uVar15 != uVar21);
        }
      }
      *(short *)(lVar4 + 0x272) = *(short *)(lVar4 + 0x272) + -1;
      if (1 < uVar1) {
        if (local_108 + 1 != uVar24 - uVar25) goto LAB_0039ad36;
        uVar27 = (*(code *)PTR_memcpy_00799008)(uVar27,(int)(local_108 + 1) << 3);
        iVar22 = (int)local_f8;
        uVar17 = ((int)uVar24 - iVar22) + 1U & 3;
        uVar19 = (ulonglong)uVar17;
        if (uVar17 != 0) {
          lVar23 = local_f8;
          do {
            local_f8 = lVar23 + 1;
            lVar5 = *(longlong *)(param_2 + 0x278 + lVar23 * 8);
            *(longlong *)(lVar5 + 0x160) = param_2;
            *(short *)(lVar5 + 0x270) = (short)lVar23;
            uVar19 = uVar19 - 1;
            lVar23 = local_f8;
          } while (uVar19 != 0);
        }
        if (2 < (uint)((int)uVar24 - iVar22)) {
          do {
            lVar23 = *(longlong *)(param_2 + 0x278 + local_f8 * 8);
            *(longlong *)(lVar23 + 0x160) = param_2;
            sVar14 = (short)local_f8;
            *(short *)(lVar23 + 0x270) = sVar14;
            lVar23 = *(longlong *)(param_2 + 0x280 + local_f8 * 8);
            *(longlong *)(lVar23 + 0x160) = param_2;
            *(short *)(lVar23 + 0x270) = sVar14 + 1;
            lVar23 = *(longlong *)(param_2 + 0x288 + local_f8 * 8);
            *(longlong *)(lVar23 + 0x160) = param_2;
            *(short *)(lVar23 + 0x270) = sVar14 + 2;
            lVar23 = *(longlong *)(param_2 + 0x290 + local_f8 * 8);
            *(longlong *)(lVar23 + 0x160) = param_2;
            uVar19 = local_f8 + 3;
            *(short *)(lVar23 + 0x270) = (short)uVar19;
            local_f8 = local_f8 + 4;
          } while (uVar19 != uVar24);
        }
      }
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,8);
      uVar20 = *(ushort *)(lVar4 + 0x272);
      param_2 = lVar4;
      param_3 = uVar1;
    } while (uVar20 < 5);
  }
  return 1;
}


