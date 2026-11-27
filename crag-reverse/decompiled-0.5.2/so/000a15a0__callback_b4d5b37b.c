// 000a15a0 callback

/* std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::libs_dl_iterate_phdr::callback */

undefined8 __rustcall
std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::libs_dl_iterate_phdr::callback
          (ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 local_78;
  undefined4 uStack_74;
  ulonglong uStack_70;
  longlong local_68;
  
  uVar2 = *param_1;
  uVar11 = param_1[2];
  uVar7 = (ulonglong)(ushort)param_1[3];
  if ((char *)param_1[1] == (char *)0x0) {
    if (uVar2 == 0) goto LAB_000a169b;
    if (param_3[2] == 0) goto LAB_000a1640;
LAB_000a1726:
    uStack_70 = 1;
    local_68 = 0;
    lVar8 = 0;
  }
  else {
    if (uVar2 == 0) {
LAB_000a169b:
      (*(code *)PTR_current_exe_000c4408)();
      if (CONCAT44(uStack_74,local_78) == -1) {
        if ((1 < ((uint)uStack_70 & 3) - 2) && ((uStack_70 & 3) != 0)) {
          (*(code *)PTR_drop_000c3ae0)();
        }
        goto LAB_000a1726;
      }
    }
    else {
      if ((param_3[2] != 0) || (*(char *)param_1[1] != '\0')) {
        lVar8 = (*(code *)PTR_strlen_000c4260)();
        if (lVar8 == 0) goto LAB_000a1726;
LAB_000a15fb:
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        uStack_70 = (*(code *)PTR___rust_alloc_000c3a90)();
        if (uStack_70 == 0) {
          (*(code *)PTR_handle_error_000c3a98)();
          goto LAB_000a18a9;
        }
        (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,lVar8);
        local_68 = lVar8;
        goto LAB_000a1731;
      }
LAB_000a1640:
      if ((param_3[3] != -1) && (param_3[5] != 0)) {
        lVar9 = param_3[4];
        lVar10 = 0;
        do {
          if (((*(ulonglong *)(lVar9 + 0x18 + lVar10) <= uVar2) &&
              (uVar2 < *(ulonglong *)(lVar9 + 0x20 + lVar10))) &&
             (lVar8 = *(longlong *)(lVar9 + 0x10 + lVar10), lVar8 != 0)) goto LAB_000a15fb;
          lVar10 = lVar10 + 0x30;
        } while (param_3[5] * 0x30 != lVar10);
      }
      (*(code *)PTR_current_exe_000c4408)();
      if (CONCAT44(uStack_74,local_78) == -1) {
        if ((1 < ((uint)uStack_70 & 3) - 2) && ((uStack_70 & 3) != 0)) {
          (*(code *)PTR_drop_000c3ae0)();
        }
        goto LAB_000a1726;
      }
    }
    lVar8 = CONCAT44(uStack_74,local_78);
  }
LAB_000a1731:
  lVar9 = 8;
  uVar15 = uVar11;
  if (uVar7 == 0) {
    uVar15 = 8;
  }
  uVar6 = uVar7;
  if (uVar11 == 0) {
    uVar15 = 8;
    uVar6 = 0;
  }
  if (uVar6 == 0) {
    uVar7 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar9 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar9 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
LAB_000a18a9:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar6 == 1) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)(uVar15 + 0x60);
      puVar14 = (undefined8 *)(lVar9 + 0x18);
      uVar11 = 0;
      do {
        uVar3 = puVar13[-7];
        puVar14[-3] = puVar13[-10];
        puVar14[-2] = uVar3;
        uVar3 = *puVar13;
        puVar14[-1] = puVar13[-3];
        *puVar14 = uVar3;
        uVar11 = uVar11 + 2;
        puVar13 = puVar13 + 0xe;
        puVar14 = puVar14 + 4;
      } while (((uint)uVar6 & 0xfffe) != uVar11);
      if ((uVar6 & 1) == 0) goto LAB_000a1813;
    }
    uVar3 = *(undefined8 *)(uVar15 + 0x28 + uVar11 * 0x38);
    *(undefined8 *)(lVar9 + uVar11 * 0x10) = *(undefined8 *)(uVar15 + 0x10 + uVar11 * 0x38);
    *(undefined8 *)(lVar9 + 8 + uVar11 * 0x10) = uVar3;
  }
LAB_000a1813:
  lVar10 = param_3[2];
  if (lVar10 == *param_3) {
    (*(code *)PTR_grow_one_000c4210)();
  }
  lVar4 = param_3[1];
  lVar12 = lVar10 * 0x38;
  *(ulonglong *)(lVar4 + 0x30 + lVar12) = uVar2;
  plVar1 = (longlong *)(lVar4 + 0x20 + lVar12);
  *plVar1 = lVar9;
  plVar1[1] = uVar7;
  plVar1 = (longlong *)(lVar4 + 0x10 + lVar12);
  *plVar1 = local_68;
  plVar1[1] = uVar7;
  *(longlong *)(lVar4 + lVar12) = lVar8;
  ((longlong *)(lVar4 + lVar12))[1] = uStack_70;
  param_3[2] = lVar10 + 1;
  return 0;
}


