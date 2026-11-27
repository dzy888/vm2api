// 0071a040 dying_next

/* <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::dying_next */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::dying_next(undefined4 param_1,ulonglong *param_2,longlong *param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_3[8] == 0) {
    lVar6 = *param_3;
    lVar11 = param_3[2];
    uVar8 = param_3[3];
    *param_3 = 0;
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (lVar6 == 1) {
      if (param_3[1] == 0) {
        if (uVar8 != 0) {
          if ((uVar8 & 7) == 0) {
            uVar7 = uVar8;
          }
          else {
            uVar7 = 0;
            do {
              lVar11 = *(longlong *)(lVar11 + 0x278);
              uVar7 = uVar7 + 1;
            } while ((uVar8 & 7) != uVar7);
            uVar7 = uVar8 - uVar7;
          }
          if (7 < uVar8) {
            do {
              lVar11 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar11 + 0x278) + 0x278) + 0x278) +
                                0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar7 = uVar7 - 8;
            } while (uVar7 != 0);
          }
        }
      }
      else {
        lVar11 = param_3[1];
      }
      for (lVar6 = *(longlong *)(lVar11 + 0x160); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x160))
      {
        param_1 = (*(code *)puVar3)(param_1,8);
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *param_2 = 0;
    return;
  }
  param_3[8] = param_3[8] + -1;
  if ((int)*param_3 != 1) {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar8 = param_3[1];
  if (uVar8 == 0) {
    uVar8 = param_3[2];
    uVar7 = param_3[3];
    if (uVar7 != 0) {
      uVar10 = uVar7;
      if ((uVar7 & 7) != 0) {
        uVar10 = 0;
        do {
          uVar8 = *(ulonglong *)(uVar8 + 0x278);
          uVar10 = uVar10 + 1;
        } while ((uVar7 & 7) != uVar10);
        uVar10 = uVar7 - uVar10;
      }
      if (7 < uVar7) {
        do {
          uVar8 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar8 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar10 = uVar10 - 8;
        } while (uVar10 != 0);
      }
    }
    *param_3 = 1;
    param_3[1] = uVar8;
    param_1 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar10 = 0;
    uVar7 = 0;
    if (*(short *)(uVar8 + 0x272) != 0) goto joined_r0x0071a299;
  }
  else {
    uVar7 = param_3[2];
    uVar10 = param_3[3];
    if (uVar10 < *(ushort *)(uVar8 + 0x272)) goto joined_r0x0071a299;
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  uVar4 = uVar8;
  do {
    uVar8 = *(ulonglong *)(uVar4 + 0x160);
    if (uVar8 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
      (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar7 = uVar7 + 1;
    uVar1 = *(ushort *)(uVar4 + 0x270);
    uVar10 = (ulonglong)uVar1;
    param_1 = (*(code *)puVar3)(param_1,8);
    uVar4 = uVar8;
  } while (*(ushort *)(uVar8 + 0x272) <= uVar1);
joined_r0x0071a299:
  if (uVar7 == 0) {
    lVar6 = uVar10 + 1;
    uVar4 = uVar8;
  }
  else {
    puVar5 = (ulonglong *)(uVar8 + uVar10 * 8 + 0x280);
    uVar4 = uVar7;
    uVar9 = uVar7;
    if ((uVar7 & 7) != 0) {
      uVar9 = 0;
      do {
        uVar4 = *puVar5;
        puVar5 = (ulonglong *)(uVar4 + 0x278);
        uVar9 = uVar9 + 1;
      } while ((uVar7 & 7) != uVar9);
      uVar9 = uVar7 - uVar9;
    }
    lVar6 = 0;
    if (7 < uVar7) {
      do {
        lVar6 = 0;
        uVar4 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(*puVar5 + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278) + 0x278);
        puVar5 = (ulonglong *)(uVar4 + 0x278);
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
    }
  }
  *param_2 = uVar8;
  param_2[1] = uVar7;
  param_2[2] = uVar10;
  param_3[1] = uVar4;
  param_3[2] = 0;
  param_3[3] = lVar6;
  return;
}


