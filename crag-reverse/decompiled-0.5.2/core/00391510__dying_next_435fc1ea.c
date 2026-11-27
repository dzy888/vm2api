// 00391510 dying_next

/* <alloc[12e961f32105355]::collections::btree::map::IntoIter<u32,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::dying_next */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::IntoIter<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
::dying_next(undefined4 param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_3[8] == 0) {
    lVar8 = *param_3;
    puVar6 = (undefined8 *)param_3[2];
    uVar11 = param_3[3];
    *param_3 = 0;
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (lVar8 == 1) {
      if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
        if (uVar11 != 0) {
          uVar10 = uVar11;
          if ((uVar11 & 7) != 0) {
            uVar10 = 0;
            do {
              puVar6 = (undefined8 *)puVar6[7];
              uVar10 = uVar10 + 1;
            } while ((uVar11 & 7) != uVar10);
            uVar10 = uVar11 - uVar10;
          }
          if (7 < uVar11) {
            do {
              puVar6 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar6[7] + 0x38) + 0x38) + 0x38) +
                              0x38) + 0x38) + 0x38) + 0x38);
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
        }
        puVar6 = (undefined8 *)*puVar6;
      }
      else {
        puVar6 = *(undefined8 **)param_3[1];
      }
      for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
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
  puVar6 = (undefined8 *)param_3[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_3[2];
    uVar11 = param_3[3];
    if (uVar11 != 0) {
      uVar10 = uVar11;
      if ((uVar11 & 7) != 0) {
        uVar10 = 0;
        do {
          puVar6 = (undefined8 *)puVar6[7];
          uVar10 = uVar10 + 1;
        } while ((uVar11 & 7) != uVar10);
        uVar10 = uVar11 - uVar10;
      }
      if (7 < uVar11) {
        do {
          puVar6 = *(undefined8 **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(puVar6[7] + 0x38) + 0x38) + 0x38) + 0x38) +
                        0x38) + 0x38) + 0x38);
          uVar10 = uVar10 - 8;
        } while (uVar10 != 0);
      }
    }
    *param_3 = 1;
    param_3[1] = (longlong)puVar6;
    param_1 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  puVar4 = (undefined8 *)param_3[2];
  uVar11 = param_3[3];
  if (*(ushort *)((longlong)puVar6 + 0x36) <= uVar11) {
    puVar5 = puVar6;
    do {
      puVar6 = (undefined8 *)*puVar5;
      if (puVar6 == (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar4 = (undefined8 *)((longlong)puVar4 + 1);
      uVar1 = *(ushort *)((longlong)puVar5 + 0x34);
      uVar11 = (ulonglong)uVar1;
      param_1 = (*(code *)puVar3)(param_1,8);
      puVar5 = puVar6;
    } while (*(ushort *)((longlong)puVar6 + 0x36) <= uVar1);
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar8 = uVar11 + 1;
    puVar5 = puVar6;
  }
  else {
    plVar7 = puVar6 + uVar11 + 8;
    puVar5 = puVar4;
    puVar9 = puVar4;
    if (((ulonglong)puVar4 & 7) != 0) {
      uVar10 = 0;
      do {
        puVar5 = (undefined8 *)*plVar7;
        plVar7 = puVar5 + 7;
        uVar10 = uVar10 + 1;
      } while (((ulonglong)puVar4 & 7) != uVar10);
      puVar9 = (undefined8 *)((longlong)puVar4 - uVar10);
    }
    lVar8 = 0;
    if (&DAT_00000007 < puVar4) {
      do {
        lVar8 = 0;
        puVar5 = *(undefined8 **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(*plVar7 + 0x38) + 0x38) + 0x38) +
                        0x38) + 0x38) + 0x38) + 0x38);
        plVar7 = puVar5 + 7;
        puVar9 = puVar9 + -1;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  *param_2 = puVar6;
  param_2[1] = puVar4;
  param_2[2] = uVar11;
  param_3[1] = (longlong)puVar5;
  param_3[2] = 0;
  param_3[3] = lVar8;
  return;
}


