// 003b09f0 bulk_steal_right

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::bulk_steal_right */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::bulk_steal_right(undefined4 param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulonglong uVar22;
  short sVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined **ppuVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar4 = param_2[3];
  uVar3 = *(ushort *)(lVar4 + 0x272);
  uVar22 = (ulonglong)uVar3;
  if (0xb < param_3 + uVar22) {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787e88
                        );
LAB_003b0de9:
    (*(code *)PTR_panic_00799338)
              (param_1,&
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ea0
              );
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = param_2[5];
  lVar27 = *(ushort *)(lVar5 + 0x272) - param_3;
  if (*(ushort *)(lVar5 + 0x272) < param_3) goto LAB_003b0de9;
  *(short *)(lVar4 + 0x272) = (short)(param_3 + uVar22);
  *(short *)(lVar5 + 0x272) = (short)lVar27;
  lVar28 = param_3 * 0x20;
  puVar1 = (undefined8 *)(lVar5 + -0x20 + lVar28);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + -0x10 + lVar28);
  uVar13 = *puVar1;
  uVar14 = puVar1[1];
  lVar6 = *param_2;
  lVar24 = param_2[2];
  uVar7 = *(undefined8 *)(lVar6 + 0x178 + lVar24 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + 0x168 + lVar24 * 0x18);
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  lVar9 = param_3 * 0x18;
  puVar1 = (undefined8 *)(lVar5 + 0x150 + lVar9);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  *(undefined8 *)(lVar6 + 0x178 + lVar24 * 0x18) = *(undefined8 *)(lVar5 + 0x160 + lVar9);
  puVar1 = (undefined8 *)(lVar6 + 0x168 + lVar24 * 0x18);
  *puVar1 = uVar17;
  puVar1[1] = uVar18;
  lVar24 = lVar24 * 0x20;
  uVar17 = *(undefined8 *)(lVar6 + lVar24);
  uVar18 = ((undefined8 *)(lVar6 + lVar24))[1];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar24);
  uVar19 = *puVar1;
  uVar20 = puVar1[1];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar24);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  *(undefined8 *)(lVar6 + lVar24) = uVar11;
  ((undefined8 *)(lVar6 + lVar24))[1] = uVar12;
  *(undefined8 *)(lVar4 + 0x178 + uVar22 * 0x18) = uVar7;
  puVar1 = (undefined8 *)(lVar4 + 0x168 + uVar22 * 0x18);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  local_68 = (undefined4)uVar17;
  uStack_64 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uStack_60 = (undefined4)uVar18;
  uStack_5c = (undefined4)((ulonglong)uVar18 >> 0x20);
  local_58 = (undefined4)uVar19;
  uStack_54 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uStack_50 = (undefined4)uVar20;
  uStack_4c = (undefined4)((ulonglong)uVar20 >> 0x20);
  puVar2 = (undefined4 *)(lVar4 + 0x10 + (ulonglong)uVar3 * 0x20);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  puVar2 = (undefined4 *)(lVar4 + (ulonglong)uVar3 * 0x20);
  *puVar2 = local_68;
  puVar2[1] = uStack_64;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_5c;
  puVar21 = PTR_memcpy_00799008;
  uVar29 = (*(code *)PTR_memcpy_00799008)
                     (uVar22 * 3,param_3 * 0x18 + -0x18,param_3 * 8,lVar5 + 0x168,lVar27,lVar9);
  uVar29 = (*(code *)puVar21)(uVar29,lVar28 + -0x20);
  puVar21 = PTR_memmove_00799258;
  uVar10 = (uint)lVar27;
  uVar29 = (*(code *)PTR_memmove_00799258)(uVar29,(ulonglong)(uVar10 * 8) * 3);
  uVar29 = (*(code *)puVar21)(uVar29,uVar10 << 5);
  if (param_2[4] == 0) {
    if (param_2[6] == 0) {
      return;
    }
LAB_003b0cf9:
    ppuVar26 = &PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787eb8;
    uVar22 = (*(code *)PTR_panic_00799338)();
  }
  else {
    if (param_2[6] == 0) goto LAB_003b0cf9;
    uVar29 = (*(code *)PTR_memcpy_00799008)(uVar29,param_3 * 8);
    (*(code *)PTR_memmove_00799258)(uVar29,lVar27 * 8 + 8);
    lVar6 = *(longlong *)(lVar4 + 0x280 + uVar22 * 8);
    *(longlong *)(lVar6 + 0x160) = lVar4;
    *(ushort *)(lVar6 + 0x270) = uVar3 + 1;
    if (param_3 != 1) {
      lVar6 = *(longlong *)(lVar4 + 0x288 + uVar22 * 8);
      *(longlong *)(lVar6 + 0x160) = lVar4;
      *(ushort *)(lVar6 + 0x270) = uVar3 + 2;
      if (param_3 != 2) {
        lVar6 = *(longlong *)(lVar4 + 0x290 + uVar22 * 8);
        *(longlong *)(lVar6 + 0x160) = lVar4;
        *(ushort *)(lVar6 + 0x270) = uVar3 + 3;
        if (param_3 != 3) {
          lVar6 = *(longlong *)(lVar4 + 0x298 + uVar22 * 8);
          *(longlong *)(lVar6 + 0x160) = lVar4;
          *(ushort *)(lVar6 + 0x270) = uVar3 + 4;
          if (param_3 != 4) {
            lVar6 = *(longlong *)(lVar4 + 0x2a0 + uVar22 * 8);
            *(longlong *)(lVar6 + 0x160) = lVar4;
            *(ushort *)(lVar6 + 0x270) = uVar3 + 5;
          }
        }
      }
    }
    ppuVar26 = (undefined **)(lVar27 + 1);
    uVar22 = (ulonglong)((uint)ppuVar26 & 3);
    if (uVar10 < 3) {
      uVar25 = 0;
      goto LAB_003b0da0;
    }
  }
  uVar25 = 0;
  do {
    lVar4 = *(longlong *)(lVar5 + 0x278 + uVar25 * 8);
    *(longlong *)(lVar4 + 0x160) = lVar5;
    sVar23 = (short)uVar25;
    *(short *)(lVar4 + 0x270) = sVar23;
    lVar4 = *(longlong *)(lVar5 + 0x280 + uVar25 * 8);
    *(longlong *)(lVar4 + 0x160) = lVar5;
    *(short *)(lVar4 + 0x270) = sVar23 + 1;
    lVar4 = *(longlong *)(lVar5 + 0x288 + uVar25 * 8);
    *(longlong *)(lVar4 + 0x160) = lVar5;
    *(short *)(lVar4 + 0x270) = sVar23 + 2;
    lVar4 = *(longlong *)(lVar5 + 0x290 + uVar25 * 8);
    uVar25 = uVar25 + 4;
    *(longlong *)(lVar4 + 0x160) = lVar5;
    *(short *)(lVar4 + 0x270) = sVar23 + 3;
  } while (uVar25 != ((ulonglong)ppuVar26 & 0xfffffffffffffffc));
  if (uVar22 == 0) {
    return;
  }
LAB_003b0da0:
  do {
    lVar4 = *(longlong *)(lVar5 + 0x278 + uVar25 * 8);
    *(longlong *)(lVar4 + 0x160) = lVar5;
    *(short *)(lVar4 + 0x270) = (short)uVar25;
    uVar25 = uVar25 + 1;
    uVar22 = uVar22 - 1;
  } while (uVar22 != 0);
  return;
}


