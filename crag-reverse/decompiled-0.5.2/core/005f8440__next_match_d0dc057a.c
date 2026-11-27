// 005f8440 next_match

/* <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher as
   core[c0acaeba6ab4c2e0]::str::pattern::Searcher>::next_match */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
::next_match(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  longlong lVar6;
  longlong in_RAX;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong unaff_RBP;
  longlong lVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  byte bVar18;
  ulonglong in_R10;
  uint uVar19;
  ulonglong in_R11;
  longlong lVar20;
  longlong lVar21;
  ulonglong unaff_R13;
  char *pcVar22;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  longlong local_38;
  
  if (*param_2 == '\0') {
    if (param_2[0x1a] == '\0') {
      pcVar13 = *(char **)(param_2 + 8);
      puVar16 = *(undefined8 **)(param_2 + 0x48);
      pcVar22 = *(char **)(param_2 + 0x50);
      bVar18 = param_2[0x18];
      if (pcVar13 != (char *)0x0) {
        if (pcVar13 < pcVar22) {
          if (*(char *)((longlong)puVar16 + (longlong)pcVar13) < -0x40) goto LAB_005f84d6;
        }
        else if (pcVar13 != pcVar22) goto LAB_005f84d6;
      }
      if (pcVar13 == pcVar22) {
        param_2[0x18] = bVar18 ^ 1;
        if ((bVar18 & 1) == 0) {
          param_2[0x1a] = '\x01';
          goto LAB_005f8725;
        }
      }
      else {
        bVar3 = *(byte *)((longlong)puVar16 + (longlong)pcVar13);
        in_R10 = (ulonglong)bVar3;
        if ((char)bVar3 < '\0') {
          uVar12 = bVar3 & 0x1f;
          if (bVar3 < 0xe0) {
            in_R10 = (ulonglong)(uVar12 << 6 | (byte)pcVar13[(longlong)puVar16 + 1] & 0x3f);
            goto joined_r0x005f8779;
          }
          uVar19 = (byte)pcVar13[(longlong)puVar16 + 2] & 0x3f |
                   ((byte)pcVar13[(longlong)puVar16 + 1] & 0x3f) << 6;
          if (0xef < bVar3) {
            uVar19 = uVar19 << 6;
            in_R11 = (ulonglong)uVar19;
            in_R10 = (ulonglong)
                     ((byte)pcVar13[(longlong)puVar16 + 3] & 0x3f | uVar19 | (bVar3 & 7) << 0x12);
            goto joined_r0x005f8779;
          }
          in_R10 = (ulonglong)(uVar19 | uVar12 << 0xc);
          in_R11 = in_R10;
          if ((bVar18 & 1) != 0) goto LAB_005f86bd;
LAB_005f87ad:
          lVar20 = 1;
          uVar12 = (uint)in_R10;
          if ((0x7f < uVar12) && (lVar20 = 2, 0x7ff < uVar12)) {
            lVar20 = 4 - (ulonglong)(uVar12 < 0x10000);
          }
          pcVar13 = pcVar13 + lVar20;
          *(char **)(param_2 + 8) = pcVar13;
          if (pcVar13 != (char *)0x0) {
            if (pcVar13 < pcVar22) {
              if (*(char *)((longlong)puVar16 + (longlong)pcVar13) < -0x40) goto LAB_005f87ed;
            }
            else if (pcVar13 != pcVar22) {
LAB_005f87ed:
              bVar18 = 1;
LAB_005f84d6:
              param_2[0x18] = bVar18 ^ 1;
              ppuVar17 = &PTR_s__rustc_48a229ceaefd4985c50990b14_0078eaa8;
              uVar7 = (*(code *)PTR_slice_error_fail_00799408)();
              local_38 = in_RAX;
              goto LAB_005f8500;
            }
          }
          if (pcVar13 != pcVar22) {
            pcVar22 = pcVar13;
          }
        }
        else {
joined_r0x005f8779:
          if ((bVar18 & 1) == 0) goto LAB_005f87ad;
LAB_005f86bd:
          pcVar22 = pcVar13;
        }
        param_2[0x18] = '\0';
      }
      param_1[1] = pcVar22;
      param_1[2] = pcVar22;
      goto LAB_005f8815;
    }
  }
  else {
    uVar14 = *(ulonglong *)(param_2 + 0x38);
    pcVar13 = *(char **)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x60);
    unaff_RBP = uVar7 - 1;
    ppuVar17 = *(undefined ***)(param_2 + 0x50);
    in_R10 = *(ulonglong *)(param_2 + 0x58);
    if (uVar14 == 0xffffffffffffffff) {
      lVar20 = *(longlong *)(param_2 + 0x28);
      ppuVar10 = (undefined **)(lVar20 + unaff_RBP);
      if (ppuVar10 < ppuVar17) {
        uVar14 = *(ulonglong *)(param_2 + 8);
        if (uVar14 - 1 < uVar7) {
LAB_005f860e:
          if ((*(ulonglong *)(param_2 + 0x20) >>
               ((ulonglong)(byte)pcVar13[(longlong)ppuVar10] & 0x3f) & 1) == 0) {
            lVar20 = lVar20 + uVar7;
          }
          else {
            lVar8 = -lVar20;
            uVar11 = uVar14;
            do {
              if (uVar7 == uVar11) {
                lVar8 = (uVar14 - 1) + lVar20;
                uVar11 = uVar14;
                goto LAB_005f8660;
              }
              pcVar22 = (char *)(in_R10 + uVar11);
              lVar8 = lVar8 + -1;
              lVar15 = uVar11 + lVar20;
              uVar11 = uVar11 + 1;
            } while (*pcVar22 == pcVar13[lVar15]);
            lVar20 = -lVar8;
          }
          goto LAB_005f85fd;
        }
        do {
          if ((*(ulonglong *)(param_2 + 0x20) >>
               ((ulonglong)(byte)pcVar13[(longlong)ppuVar10] & 0x3f) & 1) == 0) {
            lVar8 = lVar20 + uVar7;
          }
          else {
            lVar21 = 0;
            lVar15 = lVar20;
            pcVar22 = (char *)(in_R10 + uVar14);
            do {
              if (uVar7 <= uVar14 + lVar21) {
                if (uVar14 == 0) goto LAB_005f878a;
                goto LAB_005f8857;
              }
              cVar4 = *pcVar22;
              lVar8 = lVar15 + 1;
              pcVar22 = pcVar22 + 1;
              lVar21 = lVar21 + 1;
              lVar6 = lVar15 + uVar14;
              lVar15 = lVar8;
            } while (cVar4 == pcVar13[lVar6]);
          }
          lVar20 = lVar8;
          *(longlong *)(param_2 + 0x28) = lVar20;
          ppuVar10 = (undefined **)(lVar20 + (uVar7 - 1));
        } while (ppuVar10 < ppuVar17);
      }
    }
    else {
      in_R11 = *(ulonglong *)(param_2 + 0x28);
      ppuVar10 = (undefined **)(in_R11 + unaff_RBP);
      if (ppuVar10 < ppuVar17) {
        unaff_R14 = *(ulonglong *)(param_2 + 0x20);
        unaff_R15 = *(ulonglong *)(param_2 + 8);
        local_38 = *(longlong *)(param_2 + 0x18);
        unaff_R13 = uVar7 - local_38;
        pcVar22 = param_2;
        puVar16 = param_1;
LAB_005f851a:
        if ((unaff_R14 >> ((ulonglong)(byte)pcVar13[(longlong)ppuVar10] & 0x3f) & 1) == 0) {
LAB_005f8500:
          in_R11 = in_R11 + uVar7;
          uVar14 = 0;
        }
        else {
          uVar11 = unaff_R15;
          if (unaff_R15 < uVar14) {
            uVar11 = uVar14;
          }
          do {
            uVar1 = unaff_R15;
            if (uVar7 <= uVar11) goto LAB_005f8580;
            uVar1 = uVar11 + 1;
            pcVar2 = (char *)(in_R10 + uVar11);
            lVar20 = uVar11 + in_R11;
            uVar11 = uVar1;
          } while (*pcVar2 == pcVar13[lVar20]);
          in_R11 = (in_R11 - unaff_R15) + uVar1;
          unaff_RBP = uVar7 - 1;
          uVar14 = 0;
        }
        goto LAB_005f8505;
      }
    }
LAB_005f8721:
    *(undefined ***)(param_2 + 0x28) = ppuVar17;
  }
LAB_005f8725:
  uVar9 = 0;
  goto LAB_005f881a;
  while( true ) {
    pcVar2 = (char *)((in_R10 - 1) + uVar11);
    pcVar22 = pcVar13 + lVar8;
    lVar8 = lVar8 + -1;
    uVar11 = uVar11 - 1;
    if (*pcVar2 != *pcVar22) break;
LAB_005f8660:
    if (uVar11 == 0) goto LAB_005f878a;
  }
  lVar20 = lVar20 + *(longlong *)(param_2 + 0x18);
LAB_005f85fd:
  *(longlong *)(param_2 + 0x28) = lVar20;
  ppuVar10 = (undefined **)(lVar20 + unaff_RBP);
  if (ppuVar17 <= ppuVar10) goto LAB_005f8721;
  goto LAB_005f860e;
LAB_005f8580:
  do {
    uVar11 = uVar1 - 1;
    if (uVar1 <= uVar14) {
      lVar8 = uVar7 + in_R11;
      *(longlong *)(pcVar22 + 0x28) = lVar8;
      pcVar22[0x38] = '\0';
      pcVar22[0x39] = '\0';
      pcVar22[0x3a] = '\0';
      pcVar22[0x3b] = '\0';
      pcVar22[0x3c] = '\0';
      pcVar22[0x3d] = '\0';
      pcVar22[0x3e] = '\0';
      pcVar22[0x3f] = '\0';
      puVar16[1] = in_R11;
      param_1 = puVar16;
      goto LAB_005f8795;
    }
    if (uVar7 <= uVar11) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078df78);
LAB_005f8857:
      (*(code *)PTR_panic_bounds_check_00799520)();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar1 = uVar11;
  } while (*(char *)(in_R10 + uVar11) == pcVar13[uVar11 + in_R11]);
  in_R11 = in_R11 + local_38;
  unaff_RBP = uVar7 - 1;
  uVar14 = unaff_R13;
LAB_005f8505:
  *(ulonglong *)(pcVar22 + 0x28) = in_R11;
  *(ulonglong *)(pcVar22 + 0x38) = uVar14;
  ppuVar10 = (undefined **)(in_R11 + unaff_RBP);
  param_2 = pcVar22;
  param_1 = puVar16;
  if (ppuVar17 <= ppuVar10) goto LAB_005f8721;
  goto LAB_005f851a;
LAB_005f878a:
  lVar8 = uVar7 + lVar20;
  *(longlong *)(param_2 + 0x28) = lVar8;
  param_1[1] = lVar20;
LAB_005f8795:
  param_1[2] = lVar8;
LAB_005f8815:
  uVar9 = 1;
LAB_005f881a:
  *param_1 = uVar9;
  return;
}


