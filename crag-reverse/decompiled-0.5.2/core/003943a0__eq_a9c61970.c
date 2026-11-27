// 003943a0 eq

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
::eq(ulonglong *param_1,ulonglong *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulonglong local_50;
  
  uVar13 = param_1[2];
  if (uVar13 == param_2[2]) {
    uVar11 = *param_1;
    uVar12 = param_1[1];
    uVar5 = *param_2;
    local_50 = param_2[1];
    bVar18 = uVar5 != 0;
    uVar14 = uVar13;
    if (!bVar18) {
      uVar14 = 0;
    }
    bVar19 = uVar11 != 0;
    if (!bVar19) {
      uVar13 = 0;
    }
    uVar6 = 0;
    uVar9 = 0;
    do {
      bVar17 = uVar13 == 0;
      uVar13 = uVar13 - 1;
      if (bVar17) {
        return 1;
      }
      if (!bVar19) goto LAB_00394851;
      if (uVar9 == 0) {
        if (uVar12 != 0) {
          uVar9 = uVar12;
          if ((uVar12 & 7) != 0) {
            uVar9 = 0;
            do {
              uVar11 = *(ulonglong *)(uVar11 + 0x278);
              uVar9 = uVar9 + 1;
            } while ((uVar12 & 7) != uVar9);
            uVar9 = uVar12 - uVar9;
          }
          if (7 < uVar12) {
            do {
              uVar11 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar11 + 0x278) + 0x278) + 0x278) +
                                0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
          }
        }
        uVar10 = 0;
        uVar15 = 0;
        uVar16 = uVar11;
        uVar9 = uVar11;
        if (*(short *)(uVar11 + 0x272) == 0) goto LAB_003944e0;
      }
      else {
        uVar16 = uVar9;
        uVar10 = uVar11;
        uVar15 = uVar12;
        if (*(ushort *)(uVar9 + 0x272) <= uVar12) {
LAB_003944e0:
          do {
            uVar16 = *(ulonglong *)(uVar9 + 0x160);
            if (uVar16 == 0) {
              (*(code *)PTR_unwrap_failed_00799278)();
              goto LAB_0039484f;
            }
            uVar10 = uVar10 + 1;
            puVar1 = (ushort *)(uVar9 + 0x270);
            uVar15 = (ulonglong)*puVar1;
            uVar9 = uVar16;
          } while (*(ushort *)(uVar16 + 0x272) <= *puVar1);
        }
      }
      uVar9 = uVar16;
      if (uVar10 == 0) {
        uVar12 = uVar15 + 1;
      }
      else {
        puVar7 = (ulonglong *)(uVar15 * 8 + 0x280 + uVar16);
        uVar12 = uVar10;
        if ((uVar10 & 7) != 0) {
          uVar12 = 0;
          do {
            uVar9 = *puVar7;
            puVar7 = (ulonglong *)(uVar9 + 0x278);
            uVar12 = uVar12 + 1;
          } while ((uVar10 & 7) != uVar12);
          uVar12 = uVar10 - uVar12;
        }
        if (7 < uVar10) {
          do {
            uVar9 = *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(*puVar7 + 0x278) + 0x278) + 0x278) + 0x278
                           ) + 0x278) + 0x278) + 0x278);
            puVar7 = (ulonglong *)(uVar9 + 0x278);
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
      }
      if (uVar14 == 0) {
        return 1;
      }
      uVar14 = uVar14 - 1;
      if (!bVar18) {
LAB_00394851:
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 == 0) {
        if (local_50 == 0) {
          uVar6 = uVar5;
        }
        else {
          uVar11 = local_50;
          if ((local_50 & 7) != 0) {
            uVar11 = 0;
            do {
              uVar5 = *(ulonglong *)(uVar5 + 0x278);
              uVar11 = uVar11 + 1;
            } while ((local_50 & 7) != uVar11);
            uVar11 = local_50 - uVar11;
          }
          uVar6 = uVar5;
          if (7 < local_50) {
            do {
              uVar5 = *(ulonglong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(uVar5 + 0x278) + 0x278) + 0x278) +
                               0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar11 = uVar11 - 8;
              uVar6 = uVar5;
            } while (uVar11 != 0);
          }
        }
        uVar11 = 0;
        uVar5 = 0;
        if (*(short *)(uVar6 + 0x272) == 0) goto LAB_003946a0;
LAB_003945d0:
        uVar10 = uVar6;
      }
      else {
        uVar11 = local_50;
        if (local_50 < *(ushort *)(uVar6 + 0x272)) goto LAB_003945d0;
LAB_003946a0:
        do {
          uVar10 = *(ulonglong *)(uVar6 + 0x160);
          if (uVar10 == 0) {
            (*(code *)PTR_unwrap_failed_00799278)();
LAB_0039484f:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar5 = uVar5 + 1;
          puVar1 = (ushort *)(uVar6 + 0x270);
          uVar11 = (ulonglong)*puVar1;
          uVar6 = uVar10;
        } while (*(ushort *)(uVar10 + 0x272) <= *puVar1);
      }
      uVar6 = uVar10;
      if (uVar5 == 0) {
        local_50 = uVar11 + 1;
      }
      else {
        puVar7 = (ulonglong *)(uVar10 + uVar11 * 8 + 0x280);
        uVar8 = uVar5;
        if ((uVar5 & 7) != 0) {
          uVar8 = 0;
          do {
            uVar6 = *puVar7;
            puVar7 = (ulonglong *)(uVar6 + 0x278);
            uVar8 = uVar8 + 1;
          } while ((uVar5 & 7) != uVar8);
          uVar8 = uVar5 - uVar8;
        }
        if (7 < uVar5) {
          do {
            uVar6 = *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(*puVar7 + 0x278) + 0x278) + 0x278) + 0x278
                           ) + 0x278) + 0x278) + 0x278);
            puVar7 = (ulonglong *)(uVar6 + 0x278);
            uVar8 = uVar8 - 8;
          } while (uVar8 != 0);
        }
        local_50 = 0;
      }
      if (*(longlong *)(uVar15 * 0x18 + uVar16 + 0x178) !=
          *(longlong *)(uVar10 + 0x178 + uVar11 * 0x18)) {
        return 0;
      }
      iVar4 = (*(code *)PTR_bcmp_00799020)();
      if (iVar4 != 0) {
        return 0;
      }
      cVar3 = <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
              ::eq(uVar16 + uVar15 * 0x20,uVar10 + uVar11 * 0x20);
      bVar18 = true;
      uVar5 = 0;
      uVar11 = 0;
      bVar19 = true;
    } while (cVar3 != '\0');
  }
  return 0;
}


