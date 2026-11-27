// 00396290 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
          (undefined4 param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
          ulonglong param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined *puVar21;
  short sVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined4 uVar31;
  
  lVar5 = param_3[3];
  uVar2 = *(ushort *)(lVar5 + 0x272);
  uVar29 = (ulonglong)uVar2;
  uVar28 = uVar29;
  if (param_4 == 1) {
    uVar28 = (ulonglong)*(ushort *)(param_3[5] + 0x272);
  }
  if (uVar28 < param_5) {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ad8
                        );
  }
  else {
    uVar3 = *(ushort *)(param_3[5] + 0x272);
    uVar23 = (ulonglong)uVar3;
    uVar28 = uVar23 + uVar29 + 1;
    if (uVar28 < 0xc) {
      lVar6 = *param_3;
      uVar7 = param_3[1];
      uVar4 = *(ushort *)(lVar6 + 0x272);
      uVar26 = (ulonglong)uVar4;
      lVar8 = param_3[4];
      uVar9 = param_3[2];
      *(short *)(lVar5 + 0x272) = (short)uVar28;
      uVar10 = *(undefined8 *)(lVar6 + 0x178 + uVar9 * 0x18);
      puVar1 = (undefined4 *)(lVar6 + 0x168 + uVar9 * 0x18);
      uVar31 = *puVar1;
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      (*(code *)PTR_memmove_00799258)(uVar10,(~uVar9 + uVar26) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + 0x168 + uVar29 * 0x18);
      *puVar1 = uVar31;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      *(undefined8 *)(lVar5 + 0x178 + uVar29 * 0x18) = uVar10;
      puVar21 = PTR_memcpy_00799008;
      (*(code *)PTR_memcpy_00799008)(uVar10,(uint)uVar3 * 0x18);
      puVar1 = (undefined4 *)(lVar6 + uVar9 * 0x20);
      uVar31 = *puVar1;
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar1 = (undefined4 *)(lVar6 + 0x10 + uVar9 * 0x20);
      uVar17 = *puVar1;
      uVar18 = puVar1[1];
      uVar19 = puVar1[2];
      uVar20 = puVar1[3];
      (*(code *)PTR_memmove_00799258)(uVar31,(~uVar9 + uVar26) * 0x20);
      lVar30 = (ulonglong)uVar2 * 0x20;
      puVar1 = (undefined4 *)(lVar5 + lVar30);
      *puVar1 = uVar31;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar30);
      *puVar1 = uVar17;
      puVar1[1] = uVar18;
      puVar1[2] = uVar19;
      puVar1[3] = uVar20;
      (*(code *)puVar21)(uVar31,(ulonglong)uVar3 << 5);
      uVar28 = uVar9 + 1;
      uVar31 = (*(code *)PTR_memmove_00799258)();
      if (uVar28 < uVar26) {
        uVar25 = (uint)uVar4 + ~(uint)uVar9 & 3;
        if (uVar25 != 0) {
          uVar27 = 0;
          do {
            lVar30 = *(longlong *)(lVar6 + uVar9 * 8 + 0x280 + uVar27 * 8);
            *(longlong *)(lVar30 + 0x160) = lVar6;
            *(short *)(lVar30 + 0x270) = (short)uVar28 + (short)uVar27;
            uVar27 = uVar27 + 1;
          } while (uVar25 != uVar27);
          uVar28 = uVar28 + uVar27;
        }
        if (2 < (uVar26 - uVar9) - 2) {
          do {
            lVar30 = *(longlong *)(lVar6 + 0x278 + uVar28 * 8);
            *(longlong *)(lVar30 + 0x160) = lVar6;
            sVar22 = (short)uVar28;
            *(short *)(lVar30 + 0x270) = sVar22;
            lVar30 = *(longlong *)(lVar6 + 0x280 + uVar28 * 8);
            *(longlong *)(lVar30 + 0x160) = lVar6;
            *(short *)(lVar30 + 0x270) = sVar22 + 1;
            lVar30 = *(longlong *)(lVar6 + 0x288 + uVar28 * 8);
            *(longlong *)(lVar30 + 0x160) = lVar6;
            *(short *)(lVar30 + 0x270) = sVar22 + 2;
            lVar30 = *(longlong *)(lVar6 + 0x290 + uVar28 * 8);
            *(longlong *)(lVar30 + 0x160) = lVar6;
            *(short *)(lVar30 + 0x270) = sVar22 + 3;
            uVar28 = uVar28 + 4;
          } while (uVar28 != uVar26);
        }
      }
      *(short *)(lVar6 + 0x272) = *(short *)(lVar6 + 0x272) + -1;
      lVar6 = uVar29 + 1;
      if (uVar7 < 2) {
LAB_0039665b:
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,8);
        lVar30 = 0;
        if ((param_4 & 1) != 0) {
          lVar30 = lVar6;
        }
        *param_2 = lVar5;
        param_2[1] = lVar8;
        param_2[2] = lVar30 + param_5;
        return;
      }
      uVar28 = uVar23 + 1;
      lVar30 = uVar29 + uVar23 + 1;
      if (uVar28 == lVar30 - uVar29) {
        uVar31 = (*(code *)PTR_memcpy_00799008)(uVar29,(int)uVar28 * 8);
        lVar24 = lVar6;
        if ((uVar28 & 3) != 0) {
          uVar23 = 0;
          do {
            lVar24 = *(longlong *)(lVar5 + uVar29 * 8 + 0x280 + uVar23 * 8);
            *(longlong *)(lVar24 + 0x160) = lVar5;
            *(short *)(lVar24 + 0x270) = (short)lVar6 + (short)uVar23;
            uVar23 = uVar23 + 1;
          } while ((uVar28 & 3) != uVar23);
          lVar24 = uVar23 + lVar6;
        }
        if (2 < uVar3) {
          do {
            lVar11 = *(longlong *)(lVar5 + 0x278 + lVar24 * 8);
            *(longlong *)(lVar11 + 0x160) = lVar5;
            sVar22 = (short)lVar24;
            *(short *)(lVar11 + 0x270) = sVar22;
            lVar11 = *(longlong *)(lVar5 + 0x280 + lVar24 * 8);
            *(longlong *)(lVar11 + 0x160) = lVar5;
            *(short *)(lVar11 + 0x270) = sVar22 + 1;
            lVar11 = *(longlong *)(lVar5 + 0x288 + lVar24 * 8);
            *(longlong *)(lVar11 + 0x160) = lVar5;
            *(short *)(lVar11 + 0x270) = sVar22 + 2;
            lVar12 = *(longlong *)(lVar5 + 0x290 + lVar24 * 8);
            *(longlong *)(lVar12 + 0x160) = lVar5;
            lVar11 = lVar24 + 3;
            *(short *)(lVar12 + 0x270) = (short)lVar11;
            lVar24 = lVar24 + 4;
          } while (lVar11 != lVar30);
        }
        goto LAB_0039665b;
      }
      goto LAB_003966cf;
    }
  }
  uVar31 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787af0
                     );
LAB_003966cf:
  (*(code *)PTR_panic_00799338)
            (uVar31,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787c18)
  ;
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


