// 0017af30 option

/* WARNING: Switch with 1 destination removed at 0x0017b214 */
/* craggemini[b21da2d71f2da7a3]::option */

void __rustcall
craggemini[b21da2d71f2da7a3]::option
          (ulonglong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_R14;
  ulonglong uVar7;
  bool bVar8;
  ulonglong local_98;
  ulonglong local_80;
  int local_68;
  undefined4 uStack_64;
  short *local_60;
  ulonglong local_58;
  
  if (param_3 == 0) {
    uVar4 = 0xffffffffffffffff;
    local_98 = unaff_R14;
  }
  else {
    uVar7 = 1;
    lVar5 = 0;
    uVar6 = 0xffffffffffffffff;
    do {
      if ((*(ulonglong *)(param_2 + 0x10 + lVar5) == param_5) &&
         (uVar3 = param_5, iVar2 = (*(code *)PTR_bcmp_00219d38)(), iVar2 == 0)) {
        if ((uVar7 < param_3) && (uVar4 = *(ulonglong *)(param_2 + 0x28 + lVar5), uVar4 != 0)) {
          uVar3 = uVar4;
          (*(code *)PTR_from_utf8_lossy_00219e60)();
          if (local_58 < 2) {
            bVar8 = false;
          }
          else {
            bVar8 = *local_60 == 0x2d2d;
          }
          if (0 < CONCAT44(uStack_64,local_68)) {
            uVar3 = 1;
            (*(code *)PTR___rust_dealloc_00219c40)();
          }
          if (!bVar8) {
            if (-1 < (longlong)uVar4) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              local_98 = (*(code *)PTR___rust_alloc_00219c88)();
              if (local_98 != 0) {
                uVar3 = uVar4;
                (*(code *)PTR_memcpy_00219c60)();
                local_80 = uVar4;
                if (uVar6 != 0xffffffffffffffff) goto LAB_0017b222;
                goto LAB_0017af97;
              }
            }
            (*(code *)PTR_handle_error_00219c78)();
            goto LAB_0017b1cd;
          }
        }
        uVar4 = (*(code *)PTR_from_00219f00)();
        param_1[1] = uVar4;
        param_1[2] = uVar3;
        *param_1 = 0xfffffffffffffffe;
        goto LAB_0017b1f5;
      }
      (*(code *)PTR_from_utf8_00219d78)();
      uVar4 = uVar6;
      if (local_68 == 1) {
      }
      else {
        if (((param_5 <= local_58) &&
            (uVar3 = param_5, iVar2 = (*(code *)PTR_bcmp_00219d38)(),
            local_58 != param_5 && iVar2 == 0)) && (*(char *)((longlong)local_60 + param_5) == '='))
        {
          uVar4 = local_58 + ~param_5;
          if ((longlong)uVar4 < 0) {
LAB_0017b1c7:
            (*(code *)PTR_handle_error_00219c78)();
LAB_0017b1cd:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
            local_98 = (*(code *)PTR___rust_alloc_00219c88)();
            if (local_98 == 0) goto LAB_0017b1c7;
            uVar3 = uVar4;
            (*(code *)PTR_memcpy_00219c60)();
            local_80 = uVar4;
            if (uVar6 == 0xffffffffffffffff) goto LAB_0017af97;
          }
LAB_0017b222:
          uVar7 = (*(code *)PTR_from_00219f00)();
          param_1[1] = uVar7;
          param_1[2] = uVar3;
          *param_1 = 0xfffffffffffffffe;
          if (uVar4 != 0) {
            (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
          }
LAB_0017b1f5:
          if ((longlong)uVar6 < 1) {
            return;
          }
          (*(code *)PTR_free_0021a8b8)();
          return;
        }
      }
LAB_0017af97:
      lVar5 = lVar5 + 0x18;
      uVar7 = uVar7 + 1;
      uVar6 = uVar4;
    } while (param_3 * 0x18 != lVar5);
  }
  *param_1 = uVar4;
  param_1[1] = local_98;
  param_1[2] = local_80;
  return;
}


