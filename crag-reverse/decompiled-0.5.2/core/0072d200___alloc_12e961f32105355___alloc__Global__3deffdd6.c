// 0072d200 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,
   std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
          (undefined4 param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
          ulonglong param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short sVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  
  lVar5 = param_3[3];
  uVar29 = (ulonglong)*(ushort *)(lVar5 + 0x21a);
  uVar22 = uVar29;
  if (param_4 == 1) {
    uVar22 = (ulonglong)*(ushort *)(param_3[5] + 0x21a);
  }
  if (uVar22 < param_5) {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796080
                        );
  }
  else {
    uVar3 = *(ushort *)(param_3[5] + 0x21a);
    uVar22 = (ulonglong)uVar3;
    uVar27 = uVar29 + uVar22 + 1;
    if (uVar27 < 0xc) {
      lVar6 = *param_3;
      uVar7 = param_3[1];
      uVar4 = *(ushort *)(lVar6 + 0x21a);
      uVar25 = (ulonglong)uVar4;
      lVar8 = param_3[4];
      uVar9 = param_3[2];
      *(short *)(lVar5 + 0x21a) = (short)uVar27;
      uVar10 = *(undefined8 *)(lVar6 + 8 + uVar9 * 8);
      lVar28 = (~uVar9 + uVar25) * 8;
      (*(code *)PTR_memmove_00799258)(uVar25,lVar28);
      *(undefined8 *)(lVar5 + 8 + uVar29 * 8) = uVar10;
      puVar20 = PTR_memcpy_00799008;
      (*(code *)PTR_memcpy_00799008)();
      uVar10 = *(undefined8 *)(lVar6 + 0x80 + uVar9 * 0x28);
      puVar2 = (undefined4 *)(lVar6 + 0x60 + uVar9 * 0x28);
      uVar30 = *puVar2;
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar2 = (undefined4 *)(lVar6 + 0x70 + uVar9 * 0x28);
      uVar16 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      (*(code *)PTR_memmove_00799258)(uVar10,(~uVar9 + uVar25) * 0x28);
      puVar2 = (undefined4 *)(lVar5 + 0x60 + uVar29 * 0x28);
      *puVar2 = uVar30;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar2 = (undefined4 *)(lVar5 + 0x70 + uVar29 * 0x28);
      *puVar2 = uVar16;
      puVar2[1] = uVar17;
      puVar2[2] = uVar18;
      puVar2[3] = uVar19;
      *(undefined8 *)(lVar5 + 0x80 + uVar29 * 0x28) = uVar10;
      uVar30 = (*(code *)puVar20)(uVar10,(uint)uVar3 * 0x28);
      uVar27 = uVar9 + 1;
      uVar30 = (*(code *)PTR_memmove_00799258)(uVar30,lVar28);
      if (uVar27 < uVar25) {
        uVar24 = (uint)uVar4 + ~(uint)uVar9 & 3;
        if (uVar24 != 0) {
          uVar26 = 0;
          do {
            plVar11 = *(longlong **)(lVar6 + uVar9 * 8 + 0x228 + uVar26 * 8);
            *plVar11 = lVar6;
            *(short *)(plVar11 + 0x43) = (short)uVar27 + (short)uVar26;
            uVar26 = uVar26 + 1;
          } while (uVar24 != uVar26);
          uVar27 = uVar27 + uVar26;
        }
        if (2 < (uVar25 - uVar9) - 2) {
          do {
            plVar11 = *(longlong **)(lVar6 + 0x220 + uVar27 * 8);
            *plVar11 = lVar6;
            sVar21 = (short)uVar27;
            *(short *)(plVar11 + 0x43) = sVar21;
            plVar11 = *(longlong **)(lVar6 + 0x228 + uVar27 * 8);
            *plVar11 = lVar6;
            *(short *)(plVar11 + 0x43) = sVar21 + 1;
            plVar11 = *(longlong **)(lVar6 + 0x230 + uVar27 * 8);
            *plVar11 = lVar6;
            *(short *)(plVar11 + 0x43) = sVar21 + 2;
            plVar11 = *(longlong **)(lVar6 + 0x238 + uVar27 * 8);
            *plVar11 = lVar6;
            *(short *)(plVar11 + 0x43) = sVar21 + 3;
            uVar27 = uVar27 + 4;
          } while (uVar27 != uVar25);
        }
      }
      *(short *)(lVar6 + 0x21a) = *(short *)(lVar6 + 0x21a) + -1;
      lVar6 = uVar29 + 1;
      if (uVar7 < 2) {
LAB_0072d59b:
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
        lVar28 = 0;
        if ((param_4 & 1) != 0) {
          lVar28 = lVar6;
        }
        *param_2 = lVar5;
        param_2[1] = lVar8;
        param_2[2] = lVar28 + param_5;
        return;
      }
      uVar27 = uVar22 + 1;
      lVar28 = uVar29 + uVar22 + 1;
      if (uVar27 == lVar28 - uVar29) {
        uVar30 = (*(code *)PTR_memcpy_00799008)(uVar29,(int)uVar27 * 8);
        lVar23 = lVar6;
        if ((uVar27 & 3) != 0) {
          uVar22 = 0;
          do {
            plVar11 = *(longlong **)(lVar5 + uVar29 * 8 + 0x228 + uVar22 * 8);
            *plVar11 = lVar5;
            *(short *)(plVar11 + 0x43) = (short)lVar6 + (short)uVar22;
            uVar22 = uVar22 + 1;
          } while ((uVar27 & 3) != uVar22);
          lVar23 = uVar22 + lVar6;
        }
        if (2 < uVar3) {
          do {
            plVar11 = *(longlong **)(lVar5 + 0x220 + lVar23 * 8);
            *plVar11 = lVar5;
            sVar21 = (short)lVar23;
            *(short *)(plVar11 + 0x43) = sVar21;
            plVar11 = *(longlong **)(lVar5 + 0x228 + lVar23 * 8);
            *plVar11 = lVar5;
            *(short *)(plVar11 + 0x43) = sVar21 + 1;
            plVar11 = *(longlong **)(lVar5 + 0x230 + lVar23 * 8);
            *plVar11 = lVar5;
            *(short *)(plVar11 + 0x43) = sVar21 + 2;
            plVar11 = *(longlong **)(lVar5 + 0x238 + lVar23 * 8);
            *plVar11 = lVar5;
            lVar1 = lVar23 + 3;
            *(short *)(plVar11 + 0x43) = (short)lVar1;
            lVar23 = lVar23 + 4;
          } while (lVar1 != lVar28);
        }
        goto LAB_0072d59b;
      }
      goto LAB_0072d60e;
    }
  }
  uVar30 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796098
                     );
LAB_0072d60e:
  (*(code *)PTR_panic_00799338)
            (uVar30,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796420)
  ;
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


