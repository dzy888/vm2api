// 00744430 bulk_steal_right

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>>::bulk_steal_right */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
::bulk_steal_right(undefined4 param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  code *pcVar14;
  longlong lVar15;
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
  undefined **ppuVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  lVar6 = param_2[3];
  uVar5 = *(ushort *)(lVar6 + 0x21a);
  uVar23 = (ulonglong)uVar5;
  if (0xb < param_3 + uVar23) {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&
                                 PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a50
                        );
LAB_00744805:
    (*(code *)PTR_panic_00799338)
              (param_1,&
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a68
              );
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar7 = param_2[5];
  lVar27 = *(ushort *)(lVar7 + 0x21a) - param_3;
  if (*(ushort *)(lVar7 + 0x21a) < param_3) goto LAB_00744805;
  *(short *)(lVar6 + 0x21a) = (short)(param_3 + uVar23);
  *(short *)(lVar7 + 0x21a) = (short)lVar27;
  lVar1 = param_3 * 0x18 + -0x18;
  lVar15 = param_3 * 0x18;
  uVar8 = *(undefined8 *)(lVar7 + 0x108 + lVar15);
  puVar3 = (undefined8 *)(lVar7 + 0xf8 + lVar15);
  uVar16 = *puVar3;
  uVar17 = puVar3[1];
  lVar9 = *param_2;
  lVar10 = param_2[2];
  uVar11 = *(undefined8 *)(lVar9 + 0x18 + lVar10 * 0x18);
  puVar3 = (undefined8 *)(lVar9 + 8 + lVar10 * 0x18);
  uVar18 = *puVar3;
  uVar19 = puVar3[1];
  uVar12 = *(undefined8 *)(lVar7 + lVar15);
  puVar3 = (undefined8 *)(lVar7 + -0x10 + lVar15);
  uVar20 = puVar3[1];
  puVar2 = (undefined8 *)(lVar9 + 8 + lVar10 * 0x18);
  *puVar2 = *puVar3;
  puVar2[1] = uVar20;
  *(undefined8 *)(lVar9 + 0x18 + lVar10 * 0x18) = uVar12;
  uVar12 = *(undefined8 *)(lVar9 + 0x120 + lVar10 * 0x18);
  puVar3 = (undefined8 *)(lVar9 + 0x110 + lVar10 * 0x18);
  uVar20 = *puVar3;
  uVar21 = puVar3[1];
  *(undefined8 *)(lVar9 + 0x120 + lVar10 * 0x18) = uVar8;
  puVar3 = (undefined8 *)(lVar9 + 0x110 + lVar10 * 0x18);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  local_90 = (undefined4)uVar20;
  uStack_8c = (undefined4)((ulonglong)uVar20 >> 0x20);
  uStack_88 = (undefined4)uVar21;
  uStack_84 = (undefined4)((ulonglong)uVar21 >> 0x20);
  lVar9 = (ulonglong)((uint)uVar5 * 8) * 3;
  *(undefined8 *)(lVar6 + 0x18 + lVar9) = uVar11;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar9);
  *puVar3 = uVar18;
  puVar3[1] = uVar19;
  *(undefined8 *)(lVar6 + 0x120 + lVar9) = uVar12;
  puVar4 = (undefined4 *)(lVar6 + 0x110 + lVar9);
  *puVar4 = local_90;
  puVar4[1] = uStack_8c;
  puVar4[2] = uStack_88;
  puVar4[3] = uStack_84;
  uVar28 = (*(code *)PTR_memcpy_00799008)((ulonglong)((uint)uVar5 * 8),lVar1,lVar7 + 8);
  uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,lVar1);
  puVar22 = PTR_memmove_00799258;
  lVar1 = (ulonglong)((uint)lVar27 * 8) * 3;
  uVar28 = (*(code *)PTR_memmove_00799258)(uVar28,lVar1);
  uVar28 = (*(code *)puVar22)(uVar28,lVar1);
  if (param_2[4] == 0) {
    if (param_2[6] == 0) {
      return;
    }
LAB_00744722:
    ppuVar26 = &PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00796a80;
    uVar23 = (*(code *)PTR_panic_00799338)();
  }
  else {
    if (param_2[6] == 0) goto LAB_00744722;
    uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,param_3 * 8);
    (*(code *)PTR_memmove_00799258)(uVar28,lVar27 * 8 + 8);
    plVar13 = *(longlong **)(lVar6 + 0x228 + uVar23 * 8);
    *plVar13 = lVar6;
    *(ushort *)(plVar13 + 0x43) = uVar5 + 1;
    if (param_3 != 1) {
      plVar13 = *(longlong **)(lVar6 + 0x230 + uVar23 * 8);
      *plVar13 = lVar6;
      *(ushort *)(plVar13 + 0x43) = uVar5 + 2;
      if (param_3 != 2) {
        plVar13 = *(longlong **)(lVar6 + 0x238 + uVar23 * 8);
        *plVar13 = lVar6;
        *(ushort *)(plVar13 + 0x43) = uVar5 + 3;
        if (param_3 != 3) {
          plVar13 = *(longlong **)(lVar6 + 0x240 + uVar23 * 8);
          *plVar13 = lVar6;
          *(ushort *)(plVar13 + 0x43) = uVar5 + 4;
          if (param_3 != 4) {
            plVar13 = *(longlong **)(lVar6 + 0x248 + uVar23 * 8);
            *plVar13 = lVar6;
            *(ushort *)(plVar13 + 0x43) = uVar5 + 5;
          }
        }
      }
    }
    ppuVar26 = (undefined **)(lVar27 + 1);
    uVar23 = (ulonglong)((uint)ppuVar26 & 3);
    if ((uint)lVar27 < 3) {
      uVar25 = 0;
      goto LAB_007447c0;
    }
  }
  uVar25 = 0;
  do {
    plVar13 = *(longlong **)(lVar7 + 0x220 + uVar25 * 8);
    *plVar13 = lVar7;
    sVar24 = (short)uVar25;
    *(short *)(plVar13 + 0x43) = sVar24;
    plVar13 = *(longlong **)(lVar7 + 0x228 + uVar25 * 8);
    *plVar13 = lVar7;
    *(short *)(plVar13 + 0x43) = sVar24 + 1;
    plVar13 = *(longlong **)(lVar7 + 0x230 + uVar25 * 8);
    *plVar13 = lVar7;
    *(short *)(plVar13 + 0x43) = sVar24 + 2;
    plVar13 = *(longlong **)(lVar7 + 0x238 + uVar25 * 8);
    uVar25 = uVar25 + 4;
    *plVar13 = lVar7;
    *(short *)(plVar13 + 0x43) = sVar24 + 3;
  } while (uVar25 != ((ulonglong)ppuVar26 & 0xfffffffffffffffc));
  if (uVar23 == 0) {
    return;
  }
LAB_007447c0:
  do {
    plVar13 = *(longlong **)(lVar7 + 0x220 + uVar25 * 8);
    *plVar13 = lVar7;
    *(short *)(plVar13 + 0x43) = (short)uVar25;
    uVar25 = uVar25 + 1;
    uVar23 = uVar23 - 1;
  } while (uVar23 != 0);
  return;
}


