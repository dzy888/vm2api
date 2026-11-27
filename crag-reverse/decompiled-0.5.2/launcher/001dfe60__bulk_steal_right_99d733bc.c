// 001dfe60 bulk_steal_right

/* <alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,
   std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>::bulk_steal_right
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::BalancingContext<usize,std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::ThreadInfo>>
::bulk_steal_right(undefined4 param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  code *pcVar12;
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
  undefined4 uVar27;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  lVar4 = param_2[3];
  uVar3 = *(ushort *)(lVar4 + 0x21a);
  uVar22 = (ulonglong)uVar3;
  if (0xb < param_3 + uVar22) {
    param_1 = (*(code *)PTR_panic_00219ca8)
                        (param_5,&
                                 PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217a68
                        );
LAB_001e01e2:
    (*(code *)PTR_panic_00219ca8)
              (param_1,&
                       PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217a80
              );
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar5 = param_2[5];
  lVar24 = *(ushort *)(lVar5 + 0x21a) - param_3;
  if (*(ushort *)(lVar5 + 0x21a) < param_3) goto LAB_001e01e2;
  *(short *)(lVar4 + 0x21a) = (short)(param_3 + uVar22);
  *(short *)(lVar5 + 0x21a) = (short)lVar24;
  lVar7 = param_3 * 0x28;
  uVar6 = *(undefined8 *)(lVar5 + 0x58 + lVar7);
  puVar1 = (undefined8 *)(lVar5 + 0x38 + lVar7);
  uVar13 = *puVar1;
  uVar14 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + 0x48 + lVar7);
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  lVar7 = *param_2;
  lVar8 = param_2[2];
  uVar9 = *(undefined8 *)(lVar7 + 8 + lVar8 * 8);
  *(undefined8 *)(lVar7 + 8 + lVar8 * 8) = *(undefined8 *)(lVar5 + param_3 * 8);
  uVar10 = *(undefined8 *)(lVar7 + 0x80 + lVar8 * 0x28);
  puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar8 * 0x28);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar8 * 0x28);
  uVar19 = *puVar1;
  uVar20 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar8 * 0x28);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar8 * 0x28);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  *(undefined8 *)(lVar7 + 0x80 + lVar8 * 0x28) = uVar6;
  *(undefined8 *)(lVar4 + 8 + uVar22 * 8) = uVar9;
  *(undefined8 *)(lVar4 + 0x80 + uVar22 * 0x28) = uVar10;
  local_a8 = (undefined4)uVar17;
  uStack_a4 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uStack_a0 = (undefined4)uVar18;
  uStack_9c = (undefined4)((ulonglong)uVar18 >> 0x20);
  local_98 = (undefined4)uVar19;
  uStack_94 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uStack_90 = (undefined4)uVar20;
  uStack_8c = (undefined4)((ulonglong)uVar20 >> 0x20);
  puVar2 = (undefined4 *)(lVar4 + 0x70 + uVar22 * 0x28);
  *puVar2 = local_98;
  puVar2[1] = uStack_94;
  puVar2[2] = uStack_90;
  puVar2[3] = uStack_8c;
  puVar2 = (undefined4 *)(lVar4 + 0x60 + uVar22 * 0x28);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a4;
  puVar2[2] = uStack_a0;
  puVar2[3] = uStack_9c;
  uVar27 = (*(code *)PTR_memcpy_00219c60)(lVar7,param_3 * 8 + -8);
  uVar27 = (*(code *)PTR_memcpy_00219c60)(uVar27,param_3 * 0x28 + -0x28);
  puVar21 = PTR_memmove_00219fb0;
  uVar25 = (ulonglong)((uint)lVar24 * 8);
  uVar27 = (*(code *)PTR_memmove_00219fb0)(uVar27,uVar25);
  uVar27 = (*(code *)puVar21)(uVar27,uVar25 * 5);
  if (param_2[4] == 0) {
    if (param_2[6] == 0) {
      return;
    }
LAB_001e0110:
    ppuVar26 = &PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217a98;
    uVar22 = (*(code *)PTR_panic_00219ca8)();
  }
  else {
    if (param_2[6] == 0) goto LAB_001e0110;
    uVar27 = (*(code *)PTR_memcpy_00219c60)(uVar27,param_3 * 8);
    (*(code *)PTR_memmove_00219fb0)(uVar27,uVar25 + 8);
    plVar11 = *(longlong **)(lVar4 + 0x228 + uVar22 * 8);
    *plVar11 = lVar4;
    *(ushort *)(plVar11 + 0x43) = uVar3 + 1;
    if (param_3 != 1) {
      plVar11 = *(longlong **)(lVar4 + 0x230 + uVar22 * 8);
      *plVar11 = lVar4;
      *(ushort *)(plVar11 + 0x43) = uVar3 + 2;
      if (param_3 != 2) {
        plVar11 = *(longlong **)(lVar4 + 0x238 + uVar22 * 8);
        *plVar11 = lVar4;
        *(ushort *)(plVar11 + 0x43) = uVar3 + 3;
        if (param_3 != 3) {
          plVar11 = *(longlong **)(lVar4 + 0x240 + uVar22 * 8);
          *plVar11 = lVar4;
          *(ushort *)(plVar11 + 0x43) = uVar3 + 4;
          if (param_3 != 4) {
            plVar11 = *(longlong **)(lVar4 + 0x248 + uVar22 * 8);
            *plVar11 = lVar4;
            *(ushort *)(plVar11 + 0x43) = uVar3 + 5;
          }
        }
      }
    }
    ppuVar26 = (undefined **)(lVar24 + 1);
    uVar22 = (ulonglong)((uint)ppuVar26 & 3);
    if ((uint)lVar24 < 3) {
      uVar25 = 0;
      goto LAB_001e01a0;
    }
  }
  uVar25 = 0;
  do {
    plVar11 = *(longlong **)(lVar5 + 0x220 + uVar25 * 8);
    *plVar11 = lVar5;
    sVar23 = (short)uVar25;
    *(short *)(plVar11 + 0x43) = sVar23;
    plVar11 = *(longlong **)(lVar5 + 0x228 + uVar25 * 8);
    *plVar11 = lVar5;
    *(short *)(plVar11 + 0x43) = sVar23 + 1;
    plVar11 = *(longlong **)(lVar5 + 0x230 + uVar25 * 8);
    *plVar11 = lVar5;
    *(short *)(plVar11 + 0x43) = sVar23 + 2;
    plVar11 = *(longlong **)(lVar5 + 0x238 + uVar25 * 8);
    uVar25 = uVar25 + 4;
    *plVar11 = lVar5;
    *(short *)(plVar11 + 0x43) = sVar23 + 3;
  } while (uVar25 != ((ulonglong)ppuVar26 & 0xfffffffffffffffc));
  if (uVar22 == 0) {
    return;
  }
LAB_001e01a0:
  do {
    plVar11 = *(longlong **)(lVar5 + 0x220 + uVar25 * 8);
    *plVar11 = lVar5;
    *(short *)(plVar11 + 0x43) = (short)uVar25;
    uVar25 = uVar25 + 1;
    uVar22 = uVar22 - 1;
  } while (uVar22 != 0);
  return;
}


