// 0072cd90 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>>::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
          (undefined4 param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
          ulonglong param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  
  lVar6 = param_3[3];
  uVar3 = *(ushort *)(lVar6 + 0x21a);
  uVar23 = (ulonglong)uVar3;
  uVar22 = uVar23;
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
    uVar4 = *(ushort *)(param_3[5] + 0x21a);
    uVar18 = (ulonglong)uVar4;
    uVar22 = uVar23 + uVar18 + 1;
    if (uVar22 < 0xc) {
      lVar7 = *param_3;
      uVar8 = param_3[1];
      uVar5 = *(ushort *)(lVar7 + 0x21a);
      uVar20 = (ulonglong)uVar5;
      lVar9 = param_3[4];
      uVar10 = param_3[2];
      *(short *)(lVar6 + 0x21a) = (short)uVar22;
      uVar11 = *(undefined8 *)(lVar7 + 0x18 + uVar10 * 0x18);
      puVar2 = (undefined4 *)(lVar7 + 8 + uVar10 * 0x18);
      uVar26 = *puVar2;
      uVar14 = puVar2[1];
      uVar15 = puVar2[2];
      uVar16 = puVar2[3];
      lVar24 = ~uVar10 + uVar20;
      (*(code *)PTR_memmove_00799258)(uVar20,lVar24 * 0x18);
      lVar25 = (ulonglong)((uint)uVar3 * 8) * 3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar25);
      *puVar2 = uVar26;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      *(undefined8 *)(lVar6 + 0x18 + lVar25) = uVar11;
      (*(code *)PTR_memcpy_00799008)();
      uVar11 = *(undefined8 *)(lVar7 + 0x120 + uVar10 * 0x18);
      puVar2 = (undefined4 *)(lVar7 + 0x110 + uVar10 * 0x18);
      uVar26 = *puVar2;
      uVar14 = puVar2[1];
      uVar15 = puVar2[2];
      uVar16 = puVar2[3];
      (*(code *)PTR_memmove_00799258)(uVar26,lVar24 * 0x18);
      puVar2 = (undefined4 *)(lVar6 + 0x110 + lVar25);
      *puVar2 = uVar26;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      *(undefined8 *)(lVar6 + 0x120 + lVar25) = uVar11;
      uVar26 = (*(code *)PTR_memcpy_00799008)(uVar26,(uint)uVar4 * 0x18);
      uVar22 = uVar10 + 1;
      uVar26 = (*(code *)PTR_memmove_00799258)(uVar26,lVar24 * 8);
      if (uVar22 < uVar20) {
        uVar19 = (uint)uVar5 + ~(uint)uVar10 & 3;
        if (uVar19 != 0) {
          uVar21 = 0;
          do {
            plVar12 = *(longlong **)(lVar7 + uVar10 * 8 + 0x228 + uVar21 * 8);
            *plVar12 = lVar7;
            *(short *)(plVar12 + 0x43) = (short)uVar22 + (short)uVar21;
            uVar21 = uVar21 + 1;
          } while (uVar19 != uVar21);
          uVar22 = uVar22 + uVar21;
        }
        if (2 < (uVar20 - uVar10) - 2) {
          do {
            plVar12 = *(longlong **)(lVar7 + 0x220 + uVar22 * 8);
            *plVar12 = lVar7;
            sVar17 = (short)uVar22;
            *(short *)(plVar12 + 0x43) = sVar17;
            plVar12 = *(longlong **)(lVar7 + 0x228 + uVar22 * 8);
            *plVar12 = lVar7;
            *(short *)(plVar12 + 0x43) = sVar17 + 1;
            plVar12 = *(longlong **)(lVar7 + 0x230 + uVar22 * 8);
            *plVar12 = lVar7;
            *(short *)(plVar12 + 0x43) = sVar17 + 2;
            plVar12 = *(longlong **)(lVar7 + 0x238 + uVar22 * 8);
            *plVar12 = lVar7;
            *(short *)(plVar12 + 0x43) = sVar17 + 3;
            uVar22 = uVar22 + 4;
          } while (uVar22 != uVar20);
        }
      }
      *(short *)(lVar7 + 0x21a) = *(short *)(lVar7 + 0x21a) + -1;
      lVar7 = uVar23 + 1;
      if (uVar8 < 2) {
LAB_0072d16b:
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar26,8);
        lVar25 = 0;
        if ((param_4 & 1) != 0) {
          lVar25 = lVar7;
        }
        *param_2 = lVar6;
        param_2[1] = lVar9;
        param_2[2] = lVar25 + param_5;
        return;
      }
      uVar22 = uVar18 + 1;
      lVar25 = uVar23 + uVar18 + 1;
      if (uVar22 == lVar25 - uVar23) {
        uVar26 = (*(code *)PTR_memcpy_00799008)(uVar23,(int)uVar22 * 8);
        lVar24 = lVar7;
        if ((uVar22 & 3) != 0) {
          uVar18 = 0;
          do {
            plVar12 = *(longlong **)(lVar6 + uVar23 * 8 + 0x228 + uVar18 * 8);
            *plVar12 = lVar6;
            *(short *)(plVar12 + 0x43) = (short)lVar7 + (short)uVar18;
            uVar18 = uVar18 + 1;
          } while ((uVar22 & 3) != uVar18);
          lVar24 = uVar18 + lVar7;
        }
        if (2 < uVar4) {
          do {
            plVar12 = *(longlong **)(lVar6 + 0x220 + lVar24 * 8);
            *plVar12 = lVar6;
            sVar17 = (short)lVar24;
            *(short *)(plVar12 + 0x43) = sVar17;
            plVar12 = *(longlong **)(lVar6 + 0x228 + lVar24 * 8);
            *plVar12 = lVar6;
            *(short *)(plVar12 + 0x43) = sVar17 + 1;
            plVar12 = *(longlong **)(lVar6 + 0x230 + lVar24 * 8);
            *plVar12 = lVar6;
            *(short *)(plVar12 + 0x43) = sVar17 + 2;
            plVar12 = *(longlong **)(lVar6 + 0x238 + lVar24 * 8);
            *plVar12 = lVar6;
            lVar1 = lVar24 + 3;
            *(short *)(plVar12 + 0x43) = (short)lVar1;
            lVar24 = lVar24 + 4;
          } while (lVar1 != lVar25);
        }
        goto LAB_0072d16b;
      }
      goto LAB_0072d1e4;
    }
  }
  uVar26 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796098
                     );
LAB_0072d1e4:
  (*(code *)PTR_panic_00799338)
            (uVar26,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796420)
  ;
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


