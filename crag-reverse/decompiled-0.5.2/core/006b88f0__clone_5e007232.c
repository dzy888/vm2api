// 006b88f0 clone

/* <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  int iVar15;
  int extraout_XMM0_Dc;
  int iVar16;
  int extraout_XMM0_Dd;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_90;
  byte bStack_88;
  uint uStack_87;
  uint3 uStack_83;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  lVar5 = uVar4 * 0x60;
  if (uVar4 < 0x155555555555556) goto LAB_006b892d;
  puVar9 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar5;
    param_1 = puVar9;
LAB_006b892d:
    if (lVar5 == 0) {
      local_a8 = 0;
      local_a0 = 8;
      goto LAB_006b8aeb;
    }
    piVar13 = *(int **)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (ulonglong *)&DAT_00000008;
    local_a0 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_a0 == 0);
  local_a8 = uVar4;
  if (uVar4 != 0) {
    piVar12 = piVar13 + 0x14;
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (lVar5 == lVar10) break;
      iVar6 = piVar13[0x16];
      if (*(undefined8 **)(piVar13 + 0xe) == (undefined8 *)0x0) {
        bVar7 = *(byte *)(piVar12 + -4);
        uVar8 = 0;
        local_c0 = 0;
      }
      else {
        (*(code *)**(undefined8 **)(piVar13 + 0xe))
                  (*(undefined8 *)(piVar12 + -2),*(undefined8 *)(piVar12 + -4));
        local_c0 = local_90;
        local_b0 = local_80;
        local_b8 = uStack_78;
        uVar8 = (ulonglong)uStack_87 << 8 | (ulonglong)uStack_83 << 0x28;
        bVar7 = bStack_88;
      }
      uVar14 = (*(code *)**(undefined8 **)(piVar13 + 6))
                         (*(undefined8 *)(piVar13 + 10),*(undefined8 *)(piVar13 + 8));
      iVar3 = *piVar13;
      if (iVar3 != 1) {
        iVar15 = extraout_XMM0_Dc;
        iVar16 = extraout_XMM0_Dd;
      }
      else {
        uVar14 = *(undefined8 *)(piVar12 + -0x12);
        iVar15 = piVar12[-0x10];
        iVar16 = piVar12[-0xf];
      }
      piVar13 = piVar13 + 0x18;
      uVar11 = uVar11 + 1;
      *(ulonglong *)(local_a0 + lVar10) = (ulonglong)(iVar3 == 1);
      puVar1 = (undefined8 *)(local_a0 + 8 + lVar10);
      *puVar1 = uVar14;
      *(int *)(puVar1 + 1) = iVar15;
      *(int *)((longlong)puVar1 + 0xc) = iVar16;
      local_58 = (undefined4)local_90;
      uStack_54 = (undefined4)((ulonglong)local_90 >> 0x20);
      uStack_50 = (undefined4)CONCAT41(uStack_87,bStack_88);
      uStack_4c = (undefined4)(CONCAT35(uStack_83,CONCAT41(uStack_87,bStack_88)) >> 0x20);
      puVar2 = (undefined4 *)(local_a0 + 0x18 + lVar10);
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      puVar1 = (undefined8 *)(local_a0 + 0x28 + lVar10);
      *puVar1 = local_80;
      puVar1[1] = uStack_78;
      *(undefined8 *)(local_a0 + 0x38 + lVar10) = local_c0;
      *(ulonglong *)(local_a0 + 0x40 + lVar10) = bVar7 | uVar8;
      *(undefined8 *)(local_a0 + 0x48 + lVar10) = local_b0;
      *(undefined8 *)(local_a0 + 0x50 + lVar10) = local_b8;
      *(short *)(local_a0 + 0x58 + lVar10) = (short)iVar6;
      piVar12 = piVar12 + 0x18;
      lVar10 = lVar10 + 0x60;
    } while (uVar4 != uVar11);
  }
LAB_006b8aeb:
  param_1[2] = uVar4;
  *param_1 = local_a8;
  param_1[1] = local_a0;
  return;
}


