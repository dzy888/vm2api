// 00744820 bulk_steal_left

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,
   std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::bulk_steal_left
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
::bulk_steal_left(undefined4 param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  short sVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  lVar4 = param_2[5];
  uVar3 = *(ushort *)(lVar4 + 0x21a);
  uVar21 = (ulonglong)uVar3;
  uVar23 = param_3 + uVar21;
  if (uVar23 < 0xc) {
    lVar5 = param_2[3];
    uVar26 = (ulonglong)*(ushort *)(lVar5 + 0x21a);
    lVar28 = uVar26 - param_3;
    if (param_3 <= uVar26) {
      *(short *)(lVar5 + 0x21a) = (short)lVar28;
      *(short *)(lVar4 + 0x21a) = (short)uVar23;
      iVar25 = (uint)uVar3 * 8;
      uVar29 = (*(code *)PTR_memmove_00799258)(uVar21,iVar25);
      uVar29 = (*(code *)PTR_memmove_00799258)(uVar29,(uint)uVar3 * 0x28);
      lVar27 = uVar26 - (lVar28 + 1);
      if (lVar27 != param_3 - 1) goto LAB_00744b4e;
      uVar21 = (ulonglong)(uint)((int)lVar27 << 3);
      uVar29 = (*(code *)PTR_memcpy_00799008)(lVar28 + 1,uVar21);
      lVar12 = uVar21 * 5;
      (*(code *)PTR_memcpy_00799008)(uVar29,lVar12);
      uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar28 * 0x28);
      puVar1 = (undefined8 *)(lVar5 + 0x60 + lVar28 * 0x28);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + 0x70 + lVar28 * 0x28);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      lVar27 = *param_2;
      lVar7 = param_2[2];
      uVar8 = *(undefined8 *)(lVar27 + 8 + lVar7 * 8);
      *(undefined8 *)(lVar27 + 8 + lVar7 * 8) = *(undefined8 *)(lVar5 + 8 + lVar28 * 8);
      uVar9 = *(undefined8 *)(lVar27 + 0x80 + lVar7 * 0x28);
      puVar1 = (undefined8 *)(lVar27 + 0x60 + lVar7 * 0x28);
      uVar17 = *puVar1;
      uVar18 = puVar1[1];
      puVar1 = (undefined8 *)(lVar27 + 0x70 + lVar7 * 0x28);
      uVar19 = *puVar1;
      uVar20 = puVar1[1];
      puVar1 = (undefined8 *)(lVar27 + 0x60 + lVar7 * 0x28);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      puVar1 = (undefined8 *)(lVar27 + 0x70 + lVar7 * 0x28);
      *puVar1 = uVar15;
      puVar1[1] = uVar16;
      *(undefined8 *)(lVar27 + 0x80 + lVar7 * 0x28) = uVar6;
      *(undefined8 *)(lVar4 + param_3 * 8) = uVar8;
      *(undefined8 *)(lVar4 + 0x80 + lVar12) = uVar9;
      local_b8 = (undefined4)uVar17;
      uStack_b4 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uStack_b0 = (undefined4)uVar18;
      uStack_ac = (undefined4)((ulonglong)uVar18 >> 0x20);
      local_a8 = (undefined4)uVar19;
      uStack_a4 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uStack_a0 = (undefined4)uVar20;
      uStack_9c = (undefined4)((ulonglong)uVar20 >> 0x20);
      puVar2 = (undefined4 *)(lVar4 + 0x70 + lVar12);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      puVar2 = (undefined4 *)(lVar4 + 0x60 + lVar12);
      *puVar2 = local_b8;
      puVar2[1] = uStack_b4;
      puVar2[2] = uStack_b0;
      puVar2[3] = uStack_ac;
      if (param_2[4] == 0) {
        if (param_2[6] == 0) {
          return;
        }
LAB_00744a57:
        uVar24 = 0x796a38;
        uVar21 = (*(code *)PTR_panic_00799338)();
      }
      else {
        if (param_2[6] == 0) goto LAB_00744a57;
        uVar29 = (*(code *)PTR_memmove_00799258)(lVar4 + 0x60,iVar25 + 8);
        (*(code *)PTR_memcpy_00799008)(uVar29,param_3 * 8);
        uVar24 = (int)param_3 + (uint)uVar3 + 1;
        uVar21 = (ulonglong)(uVar24 & 3);
        if (uVar23 < 3) {
          uVar23 = 0;
          goto LAB_00744af0;
        }
      }
      uVar23 = 0;
      do {
        plVar10 = *(longlong **)(lVar4 + 0x220 + uVar23 * 8);
        *plVar10 = lVar4;
        sVar22 = (short)uVar23;
        *(short *)(plVar10 + 0x43) = sVar22;
        plVar10 = *(longlong **)(lVar4 + 0x228 + uVar23 * 8);
        *plVar10 = lVar4;
        *(short *)(plVar10 + 0x43) = sVar22 + 1;
        plVar10 = *(longlong **)(lVar4 + 0x230 + uVar23 * 8);
        *plVar10 = lVar4;
        *(short *)(plVar10 + 0x43) = sVar22 + 2;
        plVar10 = *(longlong **)(lVar4 + 0x238 + uVar23 * 8);
        uVar23 = uVar23 + 4;
        *plVar10 = lVar4;
        *(short *)(plVar10 + 0x43) = sVar22 + 3;
      } while (uVar23 != (uVar24 & 0x3c));
      if (uVar21 == 0) {
        return;
      }
LAB_00744af0:
      do {
        plVar10 = *(longlong **)(lVar4 + 0x220 + uVar23 * 8);
        *plVar10 = lVar4;
        *(short *)(plVar10 + 0x43) = (short)uVar23;
        uVar23 = uVar23 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      return;
    }
  }
  else {
    param_1 = (*(code *)PTR_panic_00799338)
                        (uVar21,&
                                PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a08
                        );
  }
  uVar29 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a20
                     );
LAB_00744b4e:
  (*(code *)PTR_panic_00799338)
            (uVar29,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796420)
  ;
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


