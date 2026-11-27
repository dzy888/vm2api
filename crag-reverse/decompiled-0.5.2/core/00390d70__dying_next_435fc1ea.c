// 00390d70 dying_next

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
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_3[8] == 0) {
    lVar7 = *param_3;
    lVar5 = param_3[2];
    uVar9 = param_3[3];
    *param_3 = 0;
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (lVar7 == 1) {
      if (param_3[1] == 0) {
        if (uVar9 != 0) {
          uVar8 = uVar9;
          if ((uVar9 & 7) != 0) {
            uVar8 = 0;
            do {
              lVar5 = *(longlong *)(lVar5 + 0x278);
              uVar8 = uVar8 + 1;
            } while ((uVar9 & 7) != uVar8);
            uVar8 = uVar9 - uVar8;
          }
          if (7 < uVar9) {
            do {
              lVar5 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar5 + 0x278) + 0x278) + 0x278) +
                               0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar8 = uVar8 - 8;
            } while (uVar8 != 0);
          }
        }
        lVar7 = *(longlong *)(lVar5 + 0x160);
      }
      else {
        lVar7 = *(longlong *)(param_3[1] + 0x160);
      }
      for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x160)) {
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
  uVar9 = param_3[1];
  if (uVar9 == 0) {
    uVar9 = param_3[2];
    uVar8 = param_3[3];
    if (uVar8 != 0) {
      uVar10 = uVar8;
      if ((uVar8 & 7) != 0) {
        uVar10 = 0;
        do {
          uVar9 = *(ulonglong *)(uVar9 + 0x278);
          uVar10 = uVar10 + 1;
        } while ((uVar8 & 7) != uVar10);
        uVar10 = uVar8 - uVar10;
      }
      if (7 < uVar8) {
        do {
          uVar9 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar9 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar10 = uVar10 - 8;
        } while (uVar10 != 0);
      }
    }
    *param_3 = 1;
    param_3[1] = uVar9;
    param_1 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  uVar8 = param_3[2];
  uVar10 = param_3[3];
  if (*(ushort *)(uVar9 + 0x272) <= uVar10) {
    uVar4 = uVar9;
    do {
      uVar9 = *(ulonglong *)(uVar4 + 0x160);
      if (uVar9 == 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = uVar8 + 1;
      uVar1 = *(ushort *)(uVar4 + 0x270);
      uVar10 = (ulonglong)uVar1;
      param_1 = (*(code *)puVar3)(param_1,8);
      uVar4 = uVar9;
    } while (*(ushort *)(uVar9 + 0x272) <= uVar1);
  }
  if (uVar8 == 0) {
    lVar7 = uVar10 + 1;
    uVar4 = uVar9;
  }
  else {
    puVar6 = (ulonglong *)(uVar9 + uVar10 * 8 + 0x280);
    uVar4 = uVar8;
    uVar11 = uVar8;
    if ((uVar8 & 7) != 0) {
      uVar11 = 0;
      do {
        uVar4 = *puVar6;
        puVar6 = (ulonglong *)(uVar4 + 0x278);
        uVar11 = uVar11 + 1;
      } while ((uVar8 & 7) != uVar11);
      uVar11 = uVar8 - uVar11;
    }
    lVar7 = 0;
    if (7 < uVar8) {
      do {
        lVar7 = 0;
        uVar4 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(*puVar6 + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278) + 0x278);
        puVar6 = (ulonglong *)(uVar4 + 0x278);
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
    }
  }
  *param_2 = uVar9;
  param_2[1] = uVar8;
  param_2[2] = uVar10;
  param_3[1] = uVar4;
  param_3[2] = 0;
  param_3[3] = lVar7;
  return;
}


