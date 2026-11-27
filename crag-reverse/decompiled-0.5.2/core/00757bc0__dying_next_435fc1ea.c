// 00757bc0 dying_next

/* <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>>::dying_next */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
::dying_next(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  if (param_2[8] == 0) {
    lVar7 = *param_2;
    puVar11 = (undefined8 *)param_2[2];
    uVar5 = param_2[3];
    *param_2 = 0;
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (lVar7 == 1) {
      if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
        if (uVar5 != 0) {
          if ((uVar5 & 7) == 0) {
            uVar9 = uVar5;
          }
          else {
            uVar9 = 0;
            do {
              puVar11 = (undefined8 *)puVar11[0x44];
              uVar9 = uVar9 + 1;
            } while ((uVar5 & 7) != uVar9);
            uVar9 = uVar5 - uVar9;
          }
          if (7 < uVar5) {
            do {
              puVar11 = *(undefined8 **)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(puVar11[0x44] + 0x220) + 0x220) +
                                 0x220) + 0x220) + 0x220) + 0x220) + 0x220);
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
          }
        }
      }
      else {
        puVar11 = (undefined8 *)param_2[1];
      }
      for (puVar11 = (undefined8 *)*puVar11; puVar11 != (undefined8 *)0x0;
          puVar11 = (undefined8 *)*puVar11) {
        (*(code *)puVar3)();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if ((int)*param_2 != 1) {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)param_2[2];
    uVar5 = param_2[3];
    if (uVar5 != 0) {
      uVar9 = uVar5;
      if ((uVar5 & 7) != 0) {
        uVar9 = 0;
        do {
          plVar8 = (longlong *)plVar8[0x44];
          uVar9 = uVar9 + 1;
        } while ((uVar5 & 7) != uVar9);
        uVar9 = uVar5 - uVar9;
      }
      if (7 < uVar5) {
        do {
          plVar8 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar8[0x44] + 0x220) + 0x220) + 0x220) +
                          0x220) + 0x220) + 0x220) + 0x220);
          uVar9 = uVar9 - 8;
        } while (uVar9 != 0);
      }
    }
    *param_2 = 1;
    plVar10 = (longlong *)0x0;
    uVar5 = 0;
    plVar6 = (longlong *)(ulonglong)*(ushort *)((longlong)plVar8 + 0x21a);
    if (plVar6 != (longlong *)0x0) goto joined_r0x00757df7;
  }
  else {
    uVar5 = param_2[2];
    plVar10 = (longlong *)param_2[3];
    plVar6 = (longlong *)(ulonglong)*(ushort *)((longlong)plVar8 + 0x21a);
    if (plVar10 < plVar6) goto joined_r0x00757df7;
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  plVar4 = plVar8;
  do {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
      (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = uVar5 + 1;
    uVar1 = *(ushort *)(plVar4 + 0x43);
    plVar10 = (longlong *)(ulonglong)uVar1;
    (*(code *)puVar3)();
    plVar4 = plVar8;
  } while (*(ushort *)((longlong)plVar8 + 0x21a) <= uVar1);
joined_r0x00757df7:
  if (uVar5 == 0) {
    lVar7 = (longlong)plVar10 + 1;
    plVar6 = plVar8;
  }
  else {
    plVar4 = plVar8 + (longlong)plVar10 + 0x45;
    uVar9 = uVar5;
    if ((uVar5 & 7) != 0) {
      uVar9 = 0;
      do {
        plVar6 = (longlong *)*plVar4;
        plVar4 = plVar6 + 0x44;
        uVar9 = uVar9 + 1;
      } while ((uVar5 & 7) != uVar9);
      uVar9 = uVar5 - uVar9;
    }
    lVar7 = 0;
    if (7 < uVar5) {
      do {
        lVar7 = 0;
        plVar6 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(*plVar4 + 0x220) + 0x220) + 0x220) + 0x220) +
                      0x220) + 0x220) + 0x220);
        plVar4 = plVar6 + 0x44;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
    }
  }
  param_2[1] = (longlong)plVar6;
  param_2[2] = 0;
  param_2[3] = lVar7;
  *param_1 = plVar8;
  param_1[1] = uVar5;
  param_1[2] = plVar10;
  return;
}


