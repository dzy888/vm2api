// 00190650 dying_next

/* <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>::dying_next
    */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
::dying_next(undefined4 param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  if (param_3[8] == 0) {
    lVar8 = *param_3;
    puVar6 = (undefined8 *)param_3[2];
    uVar5 = param_3[3];
    *param_3 = 0;
    puVar3 = PTR___rust_dealloc_00219c40;
    if (lVar8 == 1) {
      if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
        if (uVar5 != 0) {
          uVar10 = uVar5;
          if ((uVar5 & 7) != 0) {
            uVar10 = 0;
            do {
              puVar6 = (undefined8 *)puVar6[0x44];
              uVar10 = uVar10 + 1;
            } while ((uVar5 & 7) != uVar10);
            uVar10 = uVar5 - uVar10;
          }
          if (7 < uVar5) {
            do {
              puVar6 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar6[0x44] + 0x220) + 0x220) + 0x220)
                              + 0x220) + 0x220) + 0x220) + 0x220);
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
      (*(code *)PTR___rust_dealloc_00219c40)(param_1,8);
    }
    *param_2 = 0;
    return;
  }
  param_3[8] = param_3[8] + -1;
  if ((int)*param_3 != 1) {
    (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_3[2];
    uVar5 = param_3[3];
    if (uVar5 != 0) {
      uVar10 = uVar5;
      if ((uVar5 & 7) != 0) {
        uVar10 = 0;
        do {
          plVar9 = (longlong *)plVar9[0x44];
          uVar10 = uVar10 + 1;
        } while ((uVar5 & 7) != uVar10);
        uVar10 = uVar5 - uVar10;
      }
      if (7 < uVar5) {
        do {
          plVar9 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar9[0x44] + 0x220) + 0x220) + 0x220) +
                          0x220) + 0x220) + 0x220) + 0x220);
          uVar10 = uVar10 - 8;
        } while (uVar10 != 0);
      }
    }
    *param_3 = 1;
    param_3[1] = (longlong)plVar9;
    param_1 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  puVar3 = PTR___rust_dealloc_00219c40;
  uVar5 = param_3[2];
  plVar11 = (longlong *)param_3[3];
  plVar7 = (longlong *)(ulonglong)*(ushort *)((longlong)plVar9 + 0x21a);
  if (plVar7 <= plVar11) {
    plVar4 = plVar9;
    do {
      plVar9 = (longlong *)*plVar4;
      if (plVar9 == (longlong *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)(param_1,8);
        (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar5 + 1;
      uVar1 = *(ushort *)(plVar4 + 0x43);
      plVar11 = (longlong *)(ulonglong)uVar1;
      param_1 = (*(code *)puVar3)(param_1,8);
      plVar4 = plVar9;
    } while (*(ushort *)((longlong)plVar9 + 0x21a) <= uVar1);
  }
  if (uVar5 == 0) {
    lVar8 = (longlong)plVar11 + 1;
    plVar7 = plVar9;
  }
  else {
    plVar4 = plVar9 + (longlong)plVar11 + 0x45;
    uVar10 = uVar5;
    if ((uVar5 & 7) != 0) {
      uVar10 = 0;
      do {
        plVar7 = (longlong *)*plVar4;
        plVar4 = plVar7 + 0x44;
        uVar10 = uVar10 + 1;
      } while ((uVar5 & 7) != uVar10);
      uVar10 = uVar5 - uVar10;
    }
    lVar8 = 0;
    if (7 < uVar5) {
      do {
        lVar8 = 0;
        plVar7 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(*plVar4 + 0x220) + 0x220) + 0x220) + 0x220) +
                      0x220) + 0x220) + 0x220);
        plVar4 = plVar7 + 0x44;
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
    }
  }
  param_3[1] = (longlong)plVar7;
  param_3[2] = 0;
  param_3[3] = lVar8;
  *param_2 = plVar9;
  param_2[1] = uVar5;
  param_2[2] = plVar11;
  return;
}


