// 006ba360 from_elem

/* <smallvec[756f1f12a0149816]::SmallVec<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<httparse[622c0e90ae307373]::Header>;
   100usize]>>::from_elem
   <smallvec[756f1f12a0149816]::SmallVec<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderIndices>;
   100usize]>>::from_elem */

undefined8 * __rustcall
<smallvec[756f1f12a0149816]::SmallVec<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<httparse[622c0e90ae307373]::Header>;100:usize]>>
::from_elem(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 local_cb0 [4];
  undefined8 local_ca0 [10];
  undefined4 local_c50 [776];
  ulonglong local_30;
  
  puVar11 = param_3;
  if (100 < param_4) {
    puVar11 = (undefined8 *)(param_4 * 0x20);
    uVar8 = param_4;
    if (puVar11 < (undefined8 *)0x7ffffffffffffff9 && param_4 >> 0x3b == 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (ulonglong)((uint)(param_4 - 1) & 3);
        puVar11 = puVar7;
        if (param_4 - 2 < 3) goto LAB_006ba470;
        uVar9 = param_4 - 1 & 0xfffffffffffffffc;
        do {
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[3];
          puVar11[2] = param_3[2];
          puVar11[3] = uVar6;
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[3];
          puVar11[6] = param_3[2];
          puVar11[7] = uVar6;
          puVar11[4] = uVar4;
          puVar11[5] = uVar5;
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[3];
          puVar11[10] = param_3[2];
          puVar11[0xb] = uVar6;
          puVar11[8] = uVar4;
          puVar11[9] = uVar5;
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          puVar11[0xc] = *param_3;
          puVar11[0xd] = uVar4;
          puVar11[0xe] = uVar5;
          puVar11[0xf] = uVar6;
          puVar11 = puVar11 + 0x10;
          uVar9 = uVar9 - 4;
        } while (uVar9 != 0);
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
LAB_006ba470:
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[3];
          puVar11[2] = param_3[2];
          puVar11[3] = uVar6;
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          puVar11 = puVar11 + 4;
        }
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar6 = param_3[3];
        puVar11[2] = param_3[2];
        puVar11[3] = uVar6;
        *puVar11 = uVar4;
        puVar11[1] = uVar5;
        param_2[0x191] = param_4;
        *param_2 = 1;
        param_2[1] = param_4;
        param_2[2] = puVar7;
        return param_2;
      }
    }
    param_4 = uVar8;
    param_1 = (*(code *)PTR_handle_error_00798ff0)();
  }
  if (param_4 != 0) {
    if (param_4 < 4) {
      uVar8 = 0;
    }
    else {
      puVar10 = local_c50;
      uVar8 = 0;
      do {
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        uVar6 = puVar11[3];
        *(undefined8 *)(puVar10 + -0x14) = puVar11[2];
        *(undefined8 *)(puVar10 + -0x12) = uVar6;
        *(undefined8 *)(puVar10 + -0x18) = uVar4;
        *(undefined8 *)(puVar10 + -0x16) = uVar5;
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        uVar6 = puVar11[3];
        *(undefined8 *)(puVar10 + -0xc) = puVar11[2];
        *(undefined8 *)(puVar10 + -10) = uVar6;
        *(undefined8 *)(puVar10 + -0x10) = uVar4;
        *(undefined8 *)(puVar10 + -0xe) = uVar5;
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        uVar6 = puVar11[3];
        *(undefined8 *)(puVar10 + -4) = puVar11[2];
        *(undefined8 *)(puVar10 + -2) = uVar6;
        *(undefined8 *)(puVar10 + -8) = uVar4;
        *(undefined8 *)(puVar10 + -6) = uVar5;
        uVar8 = uVar8 + 4;
        param_1 = *(undefined4 *)puVar11;
        uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
        uVar2 = *(undefined4 *)(puVar11 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar10 = param_1;
        puVar10[1] = uVar1;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        *(undefined8 *)(puVar10 + 4) = uVar4;
        *(undefined8 *)(puVar10 + 6) = uVar5;
        puVar10 = puVar10 + 0x20;
      } while (((uint)param_4 & 0x7c) != uVar8);
      if ((param_4 & 3) == 0) goto LAB_006ba549;
    }
    uVar9 = 0;
    do {
      param_1 = *(undefined4 *)puVar11;
      uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
      uVar2 = *(undefined4 *)(puVar11 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
      uVar4 = puVar11[3];
      puVar7 = (undefined8 *)((longlong)local_ca0 + uVar9 + uVar8 * 0x20);
      *puVar7 = puVar11[2];
      puVar7[1] = uVar4;
      puVar10 = (undefined4 *)((longlong)local_cb0 + uVar9 + uVar8 * 0x20);
      *puVar10 = param_1;
      puVar10[1] = uVar1;
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
      uVar9 = uVar9 + 0x20;
    } while (((uint)param_4 & 3) << 5 != uVar9);
  }
LAB_006ba549:
  local_30 = param_4;
  (*(code *)PTR_memcpy_00799008)(param_1,0xc90);
  return param_2;
}


