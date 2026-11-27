// 003b0640 bulk_steal_left

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::bulk_steal_left */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::bulk_steal_left(undefined4 param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ulonglong uVar23;
  short sVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar5 = param_2[5];
  uVar4 = *(ushort *)(lVar5 + 0x272);
  uVar25 = param_3 + uVar4;
  if (uVar25 < 0xc) {
    lVar6 = param_2[3];
    uVar23 = (ulonglong)*(ushort *)(lVar6 + 0x272);
    lVar28 = uVar23 - param_3;
    if (param_3 <= uVar23) {
      *(short *)(lVar6 + 0x272) = (short)lVar28;
      *(short *)(lVar5 + 0x272) = (short)uVar25;
      puVar22 = PTR_memmove_00799258;
      uVar31 = (*(code *)PTR_memmove_00799258)(lVar5 + 0x168,(uint)uVar4 * 0x18);
      uVar31 = (*(code *)puVar22)(uVar31,(ulonglong)uVar4 << 5);
      puVar22 = PTR_memcpy_00799008;
      lVar29 = uVar23 - (lVar28 + 1);
      if (lVar29 != param_3 - 1) goto LAB_003b09d2;
      iVar11 = (int)lVar29;
      lVar12 = (ulonglong)(uint)(iVar11 * 8) * 3;
      uVar31 = (*(code *)PTR_memcpy_00799008)();
      uVar30 = (ulonglong)(uint)(iVar11 << 5);
      (*(code *)puVar22)(uVar31,uVar30);
      uVar23 = (ulonglong)(uint)((int)lVar28 << 5);
      puVar2 = (undefined8 *)(lVar6 + uVar23);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar23);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      lVar29 = *param_2;
      lVar7 = param_2[2];
      lVar27 = lVar7 * 0x20;
      uVar8 = *(undefined8 *)(lVar29 + 0x178 + lVar7 * 0x18);
      puVar2 = (undefined8 *)(lVar29 + 0x168 + lVar7 * 0x18);
      uVar17 = *puVar2;
      uVar18 = puVar2[1];
      uVar9 = *(undefined8 *)(lVar6 + 0x178 + lVar28 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + 0x168 + lVar28 * 0x18);
      uVar19 = puVar2[1];
      puVar3 = (undefined8 *)(lVar29 + 0x168 + lVar7 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar19;
      *(undefined8 *)(lVar29 + 0x178 + lVar7 * 0x18) = uVar9;
      uVar9 = *(undefined8 *)(lVar29 + lVar27);
      uVar19 = ((undefined8 *)(lVar29 + lVar27))[1];
      puVar2 = (undefined8 *)(lVar29 + 0x10 + lVar27);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      puVar2 = (undefined8 *)(lVar29 + 0x10 + lVar27);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      *(undefined8 *)(lVar29 + lVar27) = uVar13;
      ((undefined8 *)(lVar29 + lVar27))[1] = uVar14;
      *(undefined8 *)(lVar5 + 0x178 + lVar12) = uVar8;
      puVar2 = (undefined8 *)(lVar5 + 0x168 + lVar12);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = (undefined4)uVar19;
      uStack_5c = (undefined4)((ulonglong)uVar19 >> 0x20);
      local_58 = (undefined4)uVar20;
      uStack_54 = (undefined4)((ulonglong)uVar20 >> 0x20);
      uStack_50 = (undefined4)uVar21;
      uStack_4c = (undefined4)((ulonglong)uVar21 >> 0x20);
      puVar1 = (undefined4 *)(lVar5 + 0x10 + uVar30);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      puVar1 = (undefined4 *)(lVar5 + uVar30);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      if (param_2[4] == 0) {
        if (param_2[6] == 0) {
          return;
        }
LAB_003b08d0:
        uVar26 = 0x787e70;
        uVar23 = (*(code *)PTR_panic_00799338)();
      }
      else {
        if (param_2[6] == 0) goto LAB_003b08d0;
        uVar31 = (*(code *)PTR_memmove_00799258)(lVar5 + 0x168,(ulonglong)uVar4 * 8 + 8);
        (*(code *)PTR_memcpy_00799008)(uVar31,param_3 * 8);
        uVar26 = (int)param_3 + (uint)uVar4 + 1;
        uVar23 = (ulonglong)(uVar26 & 3);
        if (uVar25 < 3) {
          uVar25 = 0;
          goto LAB_003b0970;
        }
      }
      uVar25 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + 0x278 + uVar25 * 8);
        *(longlong *)(lVar6 + 0x160) = lVar5;
        sVar24 = (short)uVar25;
        *(short *)(lVar6 + 0x270) = sVar24;
        lVar6 = *(longlong *)(lVar5 + 0x280 + uVar25 * 8);
        *(longlong *)(lVar6 + 0x160) = lVar5;
        *(short *)(lVar6 + 0x270) = sVar24 + 1;
        lVar6 = *(longlong *)(lVar5 + 0x288 + uVar25 * 8);
        *(longlong *)(lVar6 + 0x160) = lVar5;
        *(short *)(lVar6 + 0x270) = sVar24 + 2;
        lVar6 = *(longlong *)(lVar5 + 0x290 + uVar25 * 8);
        uVar25 = uVar25 + 4;
        *(longlong *)(lVar6 + 0x160) = lVar5;
        *(short *)(lVar6 + 0x270) = sVar24 + 3;
      } while (uVar25 != (uVar26 & 0x3c));
      if (uVar23 == 0) {
        return;
      }
LAB_003b0970:
      do {
        lVar6 = *(longlong *)(lVar5 + 0x278 + uVar25 * 8);
        *(longlong *)(lVar6 + 0x160) = lVar5;
        *(short *)(lVar6 + 0x270) = (short)uVar25;
        uVar25 = uVar25 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      return;
    }
  }
  else {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787e40
                        );
  }
  uVar31 = (*(code *)PTR_panic_00799338)
                     (param_1,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787e58
                     );
LAB_003b09d2:
  (*(code *)PTR_panic_00799338)
            (uVar31,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787c18)
  ;
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


