// 00744080 bulk_steal_left

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>>::bulk_steal_left */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
::bulk_steal_left(undefined4 param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulonglong uVar21;
  short sVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  lVar5 = param_2[5];
  uVar4 = *(ushort *)(lVar5 + 0x21a);
  uVar23 = param_3 + uVar4;
  if (uVar23 < 0xc) {
    lVar6 = param_2[3];
    uVar21 = (ulonglong)*(ushort *)(lVar6 + 0x21a);
    lVar26 = uVar21 - param_3;
    if (param_3 <= uVar21) {
      *(short *)(lVar6 + 0x21a) = (short)lVar26;
      *(short *)(lVar5 + 0x21a) = (short)uVar23;
      uVar27 = (*(code *)PTR_memmove_00799258)(lVar6,(uint)uVar4 * 0x18,lVar5 + 8);
      uVar27 = (*(code *)PTR_memmove_00799258)(uVar27,(uint)uVar4 * 0x18);
      puVar20 = PTR_memcpy_00799008;
      lVar25 = uVar21 - (lVar26 + 1);
      if (lVar25 != param_3 - 1) goto LAB_0074440e;
      lVar12 = (ulonglong)(uint)((int)lVar25 << 3) * 3;
      uVar27 = (*(code *)PTR_memcpy_00799008)(lVar26 + 1,lVar12);
      (*(code *)puVar20)(uVar27,lVar12);
      lVar13 = (ulonglong)(uint)((int)lVar26 << 3) * 3;
      uVar7 = *(undefined8 *)(lVar6 + 0x120 + lVar13);
      puVar3 = (undefined8 *)(lVar6 + 0x110 + lVar13);
      uVar14 = *puVar3;
      uVar15 = puVar3[1];
      lVar26 = *param_2;
      lVar25 = param_2[2];
      uVar8 = *(undefined8 *)(lVar26 + 0x18 + lVar25 * 0x18);
      puVar3 = (undefined8 *)(lVar26 + 8 + lVar25 * 0x18);
      uVar16 = *puVar3;
      uVar17 = puVar3[1];
      uVar9 = *(undefined8 *)(lVar6 + 0x18 + lVar13);
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar13);
      uVar18 = puVar3[1];
      puVar2 = (undefined8 *)(lVar26 + 8 + lVar25 * 0x18);
      *puVar2 = *puVar3;
      puVar2[1] = uVar18;
      *(undefined8 *)(lVar26 + 0x18 + lVar25 * 0x18) = uVar9;
      uVar9 = *(undefined8 *)(lVar26 + 0x120 + lVar25 * 0x18);
      puVar3 = (undefined8 *)(lVar26 + 0x110 + lVar25 * 0x18);
      uVar18 = *puVar3;
      uVar19 = puVar3[1];
      *(undefined8 *)(lVar26 + 0x120 + lVar25 * 0x18) = uVar7;
      puVar3 = (undefined8 *)(lVar26 + 0x110 + lVar25 * 0x18);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      local_a0 = (undefined4)uVar18;
      uStack_9c = (undefined4)((ulonglong)uVar18 >> 0x20);
      uStack_98 = (undefined4)uVar19;
      uStack_94 = (undefined4)((ulonglong)uVar19 >> 0x20);
      *(undefined8 *)(lVar5 + 0x18 + lVar12) = uVar8;
      puVar3 = (undefined8 *)(lVar5 + 8 + lVar12);
      *puVar3 = uVar16;
      puVar3[1] = uVar17;
      *(undefined8 *)(lVar5 + 0x120 + lVar12) = uVar9;
      puVar1 = (undefined4 *)(lVar5 + 0x110 + lVar12);
      *puVar1 = local_a0;
      puVar1[1] = uStack_9c;
      puVar1[2] = uStack_98;
      puVar1[3] = uStack_94;
      if (param_2[4] == 0) {
        if (param_2[6] == 0) {
          return;
        }
LAB_0074431f:
        uVar24 = 0x796a38;
        uVar21 = (*(code *)PTR_panic_00799338)();
      }
      else {
        if (param_2[6] == 0) goto LAB_0074431f;
        uVar27 = (*(code *)PTR_memmove_00799258)(lVar5 + 0x110,(ulonglong)uVar4 * 8 + 8);
        (*(code *)PTR_memcpy_00799008)(uVar27,param_3 * 8);
        uVar24 = (int)param_3 + (uint)uVar4 + 1;
        uVar21 = (ulonglong)(uVar24 & 3);
        if (uVar23 < 3) {
          uVar23 = 0;
          goto LAB_007443b0;
        }
      }
      uVar23 = 0;
      do {
        plVar10 = *(longlong **)(lVar5 + 0x220 + uVar23 * 8);
        *plVar10 = lVar5;
        sVar22 = (short)uVar23;
        *(short *)(plVar10 + 0x43) = sVar22;
        plVar10 = *(longlong **)(lVar5 + 0x228 + uVar23 * 8);
        *plVar10 = lVar5;
        *(short *)(plVar10 + 0x43) = sVar22 + 1;
        plVar10 = *(longlong **)(lVar5 + 0x230 + uVar23 * 8);
        *plVar10 = lVar5;
        *(short *)(plVar10 + 0x43) = sVar22 + 2;
        plVar10 = *(longlong **)(lVar5 + 0x238 + uVar23 * 8);
        uVar23 = uVar23 + 4;
        *plVar10 = lVar5;
        *(short *)(plVar10 + 0x43) = sVar22 + 3;
      } while (uVar23 != (uVar24 & 0x3c));
      if (uVar21 == 0) {
        return;
      }
LAB_007443b0:
      do {
        plVar10 = *(longlong **)(lVar5 + 0x220 + uVar23 * 8);
        *plVar10 = lVar5;
        *(short *)(plVar10 + 0x43) = (short)uVar23;
        uVar23 = uVar23 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      return;
    }
  }
  else {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a08
                        );
  }
  uVar27 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a20
                     );
LAB_0074440e:
  (*(code *)PTR_panic_00799338)
            (uVar27,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796420)
  ;
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


