// 0070de30 shared_to_mut_impl

/* bytes[e9829e187354639b]::bytes::shared_to_mut_impl */

void __rustcall
bytes[e9829e187354639b]::bytes::shared_to_mut_impl
          (ulonglong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined1 local_51;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong *local_38;
  
  if (param_2[2] == 1) {
    uVar4 = *param_2;
    uVar6 = param_2[1];
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    uVar8 = 0x3f;
    if (uVar6 >> 10 != 0) {
      for (; (uVar6 >> 10) >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar7 = (uVar8 ^ 0xffffffffffffffc0) + 0x41;
    uVar8 = 7;
    if (uVar7 < 7) {
      uVar8 = uVar7;
    }
    uVar7 = param_3 - uVar4;
    param_4 = uVar7 + param_4;
    puVar3 = (ulonglong *)((uVar8 & 0xffffffff) * 4 + 1);
    local_50 = uVar4;
    local_48 = param_4;
    local_40 = uVar6;
    local_38 = puVar3;
    if (uVar7 != 0) {
      if (uVar7 >> 0x3b == 0) {
        puVar5 = puVar3 + uVar7 * 4;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar5 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar5 == (ulonglong *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          goto LAB_0070e085;
        }
        *puVar5 = uVar6;
        puVar5[1] = uVar4;
        puVar5[2] = param_4;
        puVar5[3] = (ulonglong)((uint)((ulonglong)puVar3 >> 2) & 7);
        puVar5[4] = 1;
      }
      local_50 = uVar4 + uVar7;
      local_48 = 0;
      if (uVar7 <= param_4) {
        local_48 = param_4 - uVar7;
      }
      local_40 = uVar6 - uVar7;
      local_38 = puVar5;
    }
    param_1[2] = local_40;
    param_1[3] = (ulonglong)local_38;
    *param_1 = local_50;
    param_1[1] = local_48;
  }
  else {
    puVar3 = param_2 + 2;
    uVar9 = param_4 == 0;
    if (-1 < (longlong)param_4) goto LAB_0070def2;
    do {
      uVar9 = 1;
      puVar3 = (ulonglong *)(*(code *)PTR_handle_error_00798ff0)();
LAB_0070def2:
      if ((bool)uVar9) {
        uVar4 = 1;
        LOCK();
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if (*puVar3 != 0) goto LAB_0070e001;
        goto LAB_0070dfcd;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar4 = (*(code *)PTR___rust_alloc_00799000)();
    } while (uVar4 == 0);
    (*(code *)PTR_memcpy_00799008)();
    puVar3 = param_2 + 2;
    LOCK();
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if (*puVar3 == 0) {
LAB_0070dfcd:
      puVar2 = PTR___rust_dealloc_00798fc8;
      if ((longlong)param_2[1] < 0) {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&DAT_00795858,&local_51,
                   &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795968);
LAB_0070e085:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
      (*(code *)puVar2)();
    }
LAB_0070e001:
    uVar6 = 0x3f;
    if (param_4 >> 10 != 0) {
      for (; (param_4 >> 10) >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar8 = (uVar6 ^ 0xffffffffffffffc0) + 0x41;
    uVar6 = 7;
    if (uVar8 < 7) {
      uVar6 = uVar8;
    }
    *param_1 = uVar4;
    param_1[1] = param_4;
    param_1[2] = param_4;
    param_1[3] = (uVar6 & 0xffffffff) * 4 + 1;
  }
  return;
}


