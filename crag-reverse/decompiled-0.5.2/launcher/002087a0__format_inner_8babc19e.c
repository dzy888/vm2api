// 002087a0 format_inner

/* alloc[12e961f32105355]::fmt::format::format_inner */

ulonglong * __rustcall
alloc[12e961f32105355]::fmt::format::format_inner
          (ulonglong *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  ushort *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong local_50;
  undefined1 local_31;
  
  if ((param_3 & 1) == 0) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      bVar3 = 0;
      uVar8 = 0;
      pbVar7 = param_2;
      do {
        puVar6 = (ushort *)(pbVar7 + 1);
        if ((char)bVar1 < '\0') {
          if (SBORROW1('\0',bVar1)) {
            uVar8 = uVar8 + *puVar6;
            pbVar7 = (byte *)((longlong)puVar6 + (ulonglong)*puVar6 + 2);
          }
          else {
            bVar3 = bVar3 | uVar8 == 0;
            pbVar7 = (byte *)((longlong)puVar6 +
                             (ulonglong)((byte)((bVar1 & 2) << 5 | bVar1 << 7) >> 5) +
                             (ulonglong)(bVar1 >> 2 & 2) + (ulonglong)(bVar1 >> 1 & 2));
          }
        }
        else {
          uVar8 = uVar8 + bVar1;
          pbVar7 = (byte *)((longlong)puVar6 + (ulonglong)bVar1);
        }
        bVar1 = *pbVar7;
      } while (bVar1 != 0);
      if ((bool)(bVar3 & uVar8 < 0x10)) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar8 * 2;
        if ((longlong)uVar8 < 0) goto LAB_00208917;
      }
      goto LAB_00208874;
    }
  }
  else {
    uVar8 = param_3 >> 1;
LAB_00208874:
    if (uVar8 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      uVar5 = (*(code *)PTR___rust_alloc_00219c88)();
      if (uVar5 == 0) {
LAB_00208917:
        uVar9 = (*(code *)PTR_handle_error_00219c78)();
        if (local_50 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar9,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      goto LAB_002088a2;
    }
  }
  uVar5 = 1;
  uVar8 = 0;
LAB_002088a2:
  cVar4 = (*(code *)PTR_write_0021a2e0)(param_3,param_2);
  if (cVar4 != '\0') {
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&DAT_00218f30,&local_31,&PTR_s__rustc_48a229ceaefd4985c50990b14_00218fb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1[2] = 0;
  *param_1 = uVar8;
  param_1[1] = uVar5;
  return param_1;
}


