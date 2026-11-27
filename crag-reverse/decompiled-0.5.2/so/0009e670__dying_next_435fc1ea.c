// 0009e670 dying_next

/* <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,
   core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,
   gimli[a7f20a324fd82d99]::read::Error>>>::dying_next */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>>>
::dying_next(ulonglong *param_1,longlong *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_2[8] == 0) {
    lVar7 = *param_2;
    lVar11 = param_2[2];
    uVar9 = param_2[3];
    *param_2 = 0;
    puVar3 = PTR___rust_dealloc_000c3aa0;
    if (lVar7 == 1) {
      if (param_2[1] == 0) {
        if (uVar9 != 0) {
          if ((uVar9 & 7) == 0) {
            uVar8 = uVar9;
          }
          else {
            uVar8 = 0;
            do {
              lVar11 = *(longlong *)(lVar11 + 0x118);
              uVar8 = uVar8 + 1;
            } while ((uVar9 & 7) != uVar8);
            uVar8 = uVar9 - uVar8;
          }
          if (7 < uVar9) {
            do {
              lVar11 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar11 + 0x118) + 0x118) + 0x118) +
                                0x118) + 0x118) + 0x118) + 0x118) + 0x118);
              uVar8 = uVar8 - 8;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        lVar11 = param_2[1];
      }
      for (lVar7 = *(longlong *)(lVar11 + 0xb0); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0xb0)) {
        (*(code *)puVar3)();
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if ((int)*param_2 != 1) {
    (*(code *)PTR_unwrap_failed_000c3b08)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = param_2[1];
  if (uVar9 == 0) {
    uVar9 = param_2[2];
    uVar8 = param_2[3];
    if (uVar8 != 0) {
      uVar6 = uVar8;
      if ((uVar8 & 7) != 0) {
        uVar6 = 0;
        do {
          uVar9 = *(ulonglong *)(uVar9 + 0x118);
          uVar6 = uVar6 + 1;
        } while ((uVar8 & 7) != uVar6);
        uVar6 = uVar8 - uVar6;
      }
      if (7 < uVar8) {
        do {
          uVar9 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar9 + 0x118) + 0x118) + 0x118) + 0x118)
                         + 0x118) + 0x118) + 0x118) + 0x118);
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
    }
    *param_2 = 1;
    uVar6 = 0;
    uVar8 = 0;
    uVar5 = (ulonglong)*(ushort *)(uVar9 + 0x112);
    if (uVar5 != 0) goto joined_r0x0009e8bb;
  }
  else {
    uVar8 = param_2[2];
    uVar6 = param_2[3];
    uVar5 = (ulonglong)*(ushort *)(uVar9 + 0x112);
    if (uVar6 < uVar5) goto joined_r0x0009e8bb;
  }
  puVar3 = PTR___rust_dealloc_000c3aa0;
  uVar10 = uVar9;
  do {
    uVar9 = *(ulonglong *)(uVar10 + 0xb0);
    if (uVar9 == 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
      (*(code *)PTR_unwrap_failed_000c3b08)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar8 = uVar8 + 1;
    uVar1 = *(ushort *)(uVar10 + 0x110);
    uVar6 = (ulonglong)uVar1;
    (*(code *)puVar3)();
    uVar10 = uVar9;
  } while (*(ushort *)(uVar9 + 0x112) <= uVar1);
joined_r0x0009e8bb:
  if (uVar8 == 0) {
    lVar7 = uVar6 + 1;
    uVar5 = uVar9;
  }
  else {
    puVar4 = (ulonglong *)(uVar9 + uVar6 * 8 + 0x120);
    uVar10 = uVar8;
    if ((uVar8 & 7) != 0) {
      uVar10 = 0;
      do {
        uVar5 = *puVar4;
        puVar4 = (ulonglong *)(uVar5 + 0x118);
        uVar10 = uVar10 + 1;
      } while ((uVar8 & 7) != uVar10);
      uVar10 = uVar8 - uVar10;
    }
    lVar7 = 0;
    if (7 < uVar8) {
      do {
        lVar7 = 0;
        uVar5 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(*puVar4 + 0x118) + 0x118) + 0x118)
                       + 0x118) + 0x118) + 0x118) + 0x118);
        puVar4 = (ulonglong *)(uVar5 + 0x118);
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
    }
  }
  param_2[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = lVar7;
  *param_1 = uVar9;
  param_1[1] = uVar8;
  param_1[2] = uVar6;
  return;
}


