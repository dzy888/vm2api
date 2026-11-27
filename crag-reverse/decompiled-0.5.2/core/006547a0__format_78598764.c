// 006547a0 format

/* WARNING: Switch with 1 destination removed at 0x006547bc */
/* alloc[12e961f32105355]::fmt::format */

ulonglong * __rustcall alloc[12e961f32105355]::fmt::format(ulonglong *param_1,ulonglong param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  ulonglong *in_RAX;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ushort *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  longlong lStack_50;
  undefined1 auStack_31 [9];
  
  if ((param_2 & 1) != 0) {
    param_2 = param_2 >> 1;
    if (param_2 == 0) {
      uVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar5 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        pcVar2 = (code *)swi(3);
        puVar6 = (ulonglong *)(*pcVar2)();
        return puVar6;
      }
      in_RAX = (ulonglong *)(*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_2);
    }
    *param_1 = param_2;
    param_1[1] = uVar5;
    param_1[2] = param_2;
    return in_RAX;
  }
  if ((param_2 & 1) == 0) {
    if (DAT_001a2e84 != 0) {
      bVar3 = 0;
      pbVar8 = &DAT_001a2e84;
      uVar5 = 0;
      bVar1 = DAT_001a2e84;
      do {
        puVar9 = (ushort *)(pbVar8 + 1);
        if ((char)bVar1 < '\0') {
          if (SBORROW1('\0',bVar1)) {
            uVar5 = uVar5 + *puVar9;
            pbVar8 = (byte *)((longlong)puVar9 + (ulonglong)*puVar9 + 2);
          }
          else {
            bVar3 = bVar3 | uVar5 == 0;
            pbVar8 = (byte *)((longlong)puVar9 +
                             (ulonglong)((byte)((bVar1 & 2) << 5 | bVar1 << 7) >> 5) +
                             (ulonglong)(bVar1 >> 2 & 2) + (ulonglong)(bVar1 >> 1 & 2));
          }
        }
        else {
          uVar5 = uVar5 + bVar1;
          pbVar8 = (byte *)((longlong)puVar9 + (ulonglong)bVar1);
        }
        bVar1 = *pbVar8;
      } while (bVar1 != 0);
      if ((bool)(bVar3 & uVar5 < 0x10)) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 * 2;
        if ((longlong)uVar5 < 0) goto LAB_007749f7;
      }
      goto LAB_00774954;
    }
  }
  else {
    uVar5 = param_2 >> 1;
LAB_00774954:
    if (uVar5 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar7 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar7 == 0) {
LAB_007749f7:
        uVar10 = (*(code *)PTR_handle_error_00798ff0)();
        if (lStack_50 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      goto LAB_00774982;
    }
  }
  uVar7 = 1;
  uVar5 = 0;
LAB_00774982:
  cVar4 = (*(code *)PTR_write_007994b0)(param_2,&DAT_001a2e84);
  if (cVar4 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00798120,auStack_31,&PTR_s__rustc_48a229ceaefd4985c50990b14_007981b8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1[2] = 0;
  *param_1 = uVar5;
  param_1[1] = uVar7;
  return param_1;
}


