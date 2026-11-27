// 00770ad2 next

/* <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher as
   core[c0acaeba6ab4c2e0]::str::pattern::Searcher>::next */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
::next(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong unaff_R13;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong local_38;
  
  if (*param_2 != 1) {
    uVar15 = 2;
    if (*(char *)((longlong)param_2 + 0x1a) != '\0') goto LAB_00770db9;
    bVar2 = *(byte *)(param_2 + 6);
    *(byte *)(param_2 + 6) = bVar2 ^ 1;
    piVar12 = *(int **)(param_2 + 2);
    puVar8 = *(undefined8 **)(param_2 + 0x12);
    piVar10 = *(int **)(param_2 + 0x14);
    if (piVar12 == (int *)0x0) {
LAB_00770ce8:
      if (piVar12 == piVar10) {
        if (bVar2 == 0) {
          *(undefined1 *)((longlong)param_2 + 0x1a) = 1;
          goto LAB_00770db9;
        }
      }
      else {
        bVar3 = *(byte *)((longlong)puVar8 + (longlong)piVar12);
        uVar17 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          uVar14 = bVar3 & 0x1f;
          uVar17 = *(byte *)((longlong)puVar8 + 1 + (longlong)piVar12) & 0x3f;
          if (bVar3 < 0xe0) {
            uVar17 = uVar14 << 6 | uVar17;
          }
          else {
            uVar17 = *(byte *)((longlong)puVar8 + 2 + (longlong)piVar12) & 0x3f | uVar17 << 6;
            if (bVar3 < 0xf0) {
              uVar17 = uVar17 | uVar14 << 0xc;
            }
            else {
              uVar17 = *(byte *)((longlong)puVar8 + 3 + (longlong)piVar12) & 0x3f | uVar17 << 6 |
                       (bVar3 & 7) << 0x12;
            }
          }
        }
        if (bVar2 == 0) {
          uVar15 = 1;
          lVar7 = 1;
          if ((0x7f < uVar17) && (lVar7 = 2, 0x7ff < uVar17)) {
            lVar7 = 4 - (ulonglong)(uVar17 < 0x10000);
          }
          *(longlong *)(param_2 + 2) = lVar7 + (longlong)piVar12;
          param_1[1] = piVar12;
          param_1[2] = lVar7 + (longlong)piVar12;
          goto LAB_00770db9;
        }
      }
      param_1[1] = piVar12;
      param_1[2] = piVar12;
    }
    else {
      if (piVar12 < piVar10) {
        if (-0x41 < *(char *)((longlong)puVar8 + (longlong)piVar12)) goto LAB_00770ce8;
      }
      else if (piVar12 == piVar10) goto LAB_00770ce8;
      (*(code *)PTR_slice_error_fail_00799408)
                (piVar10,piVar12,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797c10);
LAB_00770cbf:
      *(longlong *)(piVar10 + 10) = local_38;
      if (unaff_R13 != 0xffffffffffffffff) {
        piVar10[0xe] = 0;
        piVar10[0xf] = 0;
      }
      puVar8[1] = piVar12;
      puVar8[2] = local_38;
      param_1 = puVar8;
    }
    uVar15 = 0;
    goto LAB_00770db9;
  }
  piVar12 = *(int **)(param_2 + 10);
  piVar13 = *(int **)(param_2 + 0x14);
  uVar15 = 2;
  if (piVar12 == piVar13) goto LAB_00770db9;
  lVar7 = *(longlong *)(param_2 + 0x12);
  uVar4 = *(ulonglong *)(param_2 + 0x18);
  piVar18 = (int *)((longlong)piVar12 + (uVar4 - 1));
  piVar10 = piVar13;
  if (piVar18 < piVar13) {
    unaff_R13 = *(ulonglong *)(param_2 + 0xe);
    uVar5 = *(ulonglong *)(param_2 + 2);
    piVar9 = (int *)(*(longlong *)(param_2 + 6) + (longlong)piVar12);
    local_38 = (longlong)piVar12 + uVar4;
    piVar10 = piVar12;
    uVar16 = unaff_R13;
LAB_00770b63:
    if (piVar12 == piVar10) {
      if ((*(ulonglong *)(param_2 + 8) >> ((ulonglong)*(byte *)(lVar7 + (longlong)piVar18) & 0x3f) &
          1) != 0) {
        uVar19 = uVar5;
        if (uVar5 < uVar16) {
          uVar19 = uVar16;
        }
        if (unaff_R13 == 0xffffffffffffffff) {
          uVar19 = uVar5;
        }
        do {
          if (uVar4 <= uVar19) {
            uVar19 = uVar5;
            uVar20 = uVar16;
            if (unaff_R13 == 0xffffffffffffffff) {
              uVar20 = 0;
            }
            goto LAB_00770be2;
          }
          uVar20 = uVar19 + 1;
          pcVar1 = (char *)(*(longlong *)(param_2 + 0x16) + uVar19);
          lVar6 = uVar19 + lVar7;
          uVar19 = uVar20;
        } while (*pcVar1 == *(char *)((longlong)piVar12 + lVar6));
        piVar10 = (int *)((longlong)piVar12 + (uVar20 - uVar5));
        *(int **)(param_2 + 10) = piVar10;
        if (unaff_R13 == 0xffffffffffffffff) goto LAB_00770c1f;
        uVar19 = 0;
        goto LAB_00770c18;
      }
      piVar10 = (int *)((longlong)piVar12 + uVar4);
      *(int **)(param_2 + 10) = piVar10;
      if (unaff_R13 != 0xffffffffffffffff) {
        piVar10 = (int *)((longlong)piVar12 + uVar4);
        uVar19 = 0;
        goto LAB_00770c18;
      }
      goto LAB_00770c1f;
    }
  }
  goto LAB_00770c33;
  while( true ) {
    if (uVar4 <= uVar11) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797768);
      puVar8 = (undefined8 *)(*(code *)PTR_write_str_0079b2d8)();
      return puVar8;
    }
    uVar19 = uVar11;
    if (*(char *)(*(longlong *)(param_2 + 0x16) + uVar11) !=
        *(char *)((longlong)piVar12 + uVar11 + lVar7)) break;
LAB_00770be2:
    uVar11 = uVar19 - 1;
    piVar10 = param_2;
    puVar8 = param_1;
    if (uVar19 <= uVar20) goto LAB_00770cbf;
  }
  *(int **)(param_2 + 10) = piVar9;
  piVar10 = piVar9;
  uVar19 = uVar4 - *(longlong *)(param_2 + 6);
  if (unaff_R13 != 0xffffffffffffffff) {
LAB_00770c18:
    uVar16 = uVar19;
    *(ulonglong *)(param_2 + 0xe) = uVar16;
  }
LAB_00770c1f:
  piVar18 = (int *)((longlong)piVar10 + (uVar4 - 1));
  if (piVar13 <= piVar18) goto code_r0x00770c30;
  goto LAB_00770b63;
code_r0x00770c30:
  piVar10 = piVar13;
LAB_00770c33:
  if (piVar10 != (int *)0x0) {
    piVar18 = piVar10;
    do {
      if (piVar18 < piVar13) {
        if (-0x41 < *(char *)(lVar7 + (longlong)piVar18)) {
          piVar13 = piVar18;
          goto LAB_00770c56;
        }
      }
      else if (piVar18 == piVar13) goto LAB_00770c56;
      piVar18 = (int *)((longlong)piVar18 + 1);
    } while (piVar18 != (int *)0x0);
  }
  piVar13 = (int *)0x0;
LAB_00770c56:
  if (piVar10 <= piVar13) {
    piVar10 = piVar13;
  }
  *(int **)(param_2 + 10) = piVar10;
  param_1[1] = piVar12;
  param_1[2] = piVar13;
  uVar15 = 1;
LAB_00770db9:
  *param_1 = uVar15;
  return param_1;
}


