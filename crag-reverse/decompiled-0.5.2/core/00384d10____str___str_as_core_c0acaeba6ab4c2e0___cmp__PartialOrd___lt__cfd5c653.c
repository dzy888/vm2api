// 00384d10 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined1 auStack_368 [8];
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_2f8 [64];
  undefined1 auStack_2b8 [64];
  undefined1 auStack_278 [584];
  
  if (1 < param_2) {
    if (0x20 < param_2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    puVar19 = (undefined8 *)(param_2 >> 1);
    local_358 = puVar19;
    if (param_2 < 0x10) {
      lVar15 = (longlong)puVar19 * 0x10;
      puVar16 = param_1 + (longlong)puVar19 * 2;
      if (param_2 < 8) {
        local_338 = *param_1;
        uStack_330 = param_1[1];
        uVar8 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar9 = *(undefined4 *)(puVar16 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar16 + 0xc);
        *(undefined4 *)(local_2f8 + lVar15 + -0x40) = *(undefined4 *)puVar16;
        *(undefined4 *)(local_2f8 + lVar15 + -0x3c) = uVar8;
        *(undefined4 *)(local_2f8 + lVar15 + -0x38) = uVar9;
        *(undefined4 *)(local_2f8 + lVar15 + -0x34) = uVar10;
        puVar16 = (undefined8 *)0x1;
      }
      else {
        uStack_370 = 0x384e15;
        sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (param_1,&local_338);
        uStack_370 = 0x384e20;
        sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (puVar16,local_2f8 + lVar15 + -0x40);
        puVar16 = (undefined8 *)&DAT_00000004;
      }
    }
    else {
      lVar15 = param_2 * 0x10;
      uStack_370 = 0x384d6a;
      sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,local_2f8 + lVar15 + -0x40);
      uStack_370 = 0x384d7b;
      sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1 + 8,local_2f8 + lVar15);
      uStack_370 = 0x384d8d;
      bidirectional_merge::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (local_2f8 + lVar15 + -0x40,8,&local_338);
      puVar1 = local_358;
      lVar20 = (longlong)local_358 * 0x10;
      uStack_370 = 0x384db5;
      sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1 + (longlong)local_358 * 2,auStack_2b8 + lVar15);
      puVar19 = local_358;
      puVar16 = (undefined8 *)&DAT_00000008;
      uStack_370 = 0x384dd7;
      sort4_stable::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1 + (longlong)puVar1 * 2 + 8,auStack_278 + lVar15);
      uStack_370 = 0x384de7;
      bidirectional_merge::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (auStack_2b8 + lVar15,8,local_2f8 + lVar20 + -0x40);
    }
    local_340 = param_2;
    local_348 = (undefined8 *)(param_2 - (longlong)puVar19);
    local_350 = param_1;
    local_360 = puVar16;
    if (puVar16 < puVar19) {
      uVar17 = (ulonglong)(uint)((int)puVar16 << 4);
      do {
        lVar15 = (longlong)puVar16 * 0x10;
        puVar19 = param_1 + (longlong)puVar16 * 2;
        uVar8 = *(undefined4 *)puVar19;
        uVar9 = *(undefined4 *)((longlong)puVar19 + 4);
        uVar10 = *(undefined4 *)(puVar19 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar19 + 0xc);
        *(undefined4 *)(local_2f8 + lVar15 + -0x40) = uVar8;
        *(undefined4 *)(local_2f8 + lVar15 + -0x3c) = uVar9;
        *(undefined4 *)(local_2f8 + lVar15 + -0x38) = uVar10;
        *(undefined4 *)(local_2f8 + lVar15 + -0x34) = uVar11;
        uVar4 = *(undefined8 *)(local_2f8 + lVar15 + -0x40);
        uVar5 = *(ulonglong *)(local_2f8 + lVar15 + -0x38);
        uVar18 = *(ulonglong *)(local_2f8 + lVar15 + -0x48);
        uVar13 = uVar18;
        if (uVar5 < uVar18) {
          uVar13 = uVar5;
        }
        uStack_370 = 0x384ecc;
        iVar12 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar13);
        lVar15 = uVar5 - uVar18;
        if (iVar12 != 0) {
          lVar15 = (longlong)iVar12;
        }
        if (lVar15 < 0) {
          uVar18 = uVar17;
          do {
            uVar13 = uVar18;
            uVar8 = *(undefined4 *)(local_2f8 + (uVar13 - 0x50));
            uVar9 = *(undefined4 *)(local_2f8 + (uVar13 - 0x4c));
            uVar10 = *(undefined4 *)(local_2f8 + (uVar13 - 0x48));
            uVar11 = *(undefined4 *)(local_2f8 + (uVar13 - 0x44));
            *(undefined4 *)(local_2f8 + (uVar13 - 0x40)) = uVar8;
            *(undefined4 *)(local_2f8 + (uVar13 - 0x3c)) = uVar9;
            *(undefined4 *)(local_2f8 + (uVar13 - 0x38)) = uVar10;
            *(undefined4 *)(local_2f8 + (uVar13 - 0x34)) = uVar11;
            puVar7 = auStack_368;
            if (uVar13 == 0x10) goto LAB_00384e73;
            uVar18 = *(ulonglong *)(local_2f8 + (uVar13 - 0x58));
            uVar14 = uVar18;
            if (uVar5 < uVar18) {
              uVar14 = uVar5;
            }
            uStack_370 = 0x384f13;
            iVar12 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar14);
            lVar15 = uVar5 - uVar18;
            if (iVar12 != 0) {
              lVar15 = (longlong)iVar12;
            }
            uVar18 = uVar13 - 0x10;
          } while (lVar15 < 0);
          puVar7 = auStack_378 + uVar13;
LAB_00384e73:
          *(undefined8 *)(puVar7 + 0x30) = uVar4;
          *(ulonglong *)(puVar7 + 0x38) = uVar5;
          param_1 = local_350;
        }
        puVar16 = (undefined8 *)((longlong)puVar16 + 1);
        uVar17 = uVar17 + 0x10;
        puVar19 = local_358;
      } while (puVar16 != local_358);
    }
    if (local_360 < local_348) {
      lVar15 = (longlong)puVar19 * 0x10;
      local_358 = local_350 + (longlong)puVar19 * 2;
      puVar16 = (undefined8 *)(local_2f8 + lVar15 + -0x40);
      uVar17 = (ulonglong)(uint)((int)local_360 << 4);
      puVar19 = local_360;
      do {
        puVar1 = local_358 + (longlong)puVar19 * 2;
        uVar8 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar9 = *(undefined4 *)(puVar1 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar1 + 0xc);
        puVar2 = puVar16 + (longlong)puVar19 * 2;
        *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar8;
        *(undefined4 *)(puVar2 + 1) = uVar9;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar10;
        uVar4 = puVar16[(longlong)puVar19 * 2];
        uVar5 = *(ulonglong *)(local_2f8 + (longlong)puVar19 * 0x10 + lVar15 + -0x38);
        uVar18 = *(ulonglong *)(local_2f8 + (longlong)puVar19 * 0x10 + lVar15 + -0x48);
        uVar13 = uVar18;
        if (uVar5 < uVar18) {
          uVar13 = uVar5;
        }
        uStack_370 = 0x384fc1;
        iVar12 = (*(code *)PTR_memcmp_00799528)(local_358,uVar13);
        lVar20 = uVar5 - uVar18;
        if (iVar12 != 0) {
          lVar20 = (longlong)iVar12;
        }
        if (lVar20 < 0) {
          uVar18 = uVar17;
          local_360 = puVar19;
          do {
            puVar3 = (undefined4 *)(local_2f8 + uVar18 + lVar15 + -0x50);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar10 = puVar3[2];
            uVar11 = puVar3[3];
            puVar3 = (undefined4 *)((longlong)puVar16 + uVar18);
            *puVar3 = uVar8;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            if (uVar18 == 0x10) {
              puVar19 = puVar16;
              goto LAB_00384f66;
            }
            uVar13 = *(ulonglong *)(local_2f8 + uVar18 + lVar15 + -0x58);
            uVar14 = uVar13;
            if (uVar5 < uVar13) {
              uVar14 = uVar5;
            }
            uStack_370 = 0x385013;
            iVar12 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar14);
            lVar20 = uVar5 - uVar13;
            if (iVar12 != 0) {
              lVar20 = (longlong)iVar12;
            }
            uVar18 = uVar18 - 0x10;
          } while (lVar20 < 0);
          puVar19 = (undefined8 *)(uVar18 + (longlong)puVar16);
LAB_00384f66:
          *puVar19 = uVar4;
          puVar19[1] = uVar5;
          puVar19 = local_360;
        }
        puVar19 = (undefined8 *)((longlong)puVar19 + 1);
        uVar17 = uVar17 + 0x10;
      } while (puVar19 != local_348);
    }
    uStack_370 = 0x385046;
    bidirectional_merge::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (&local_338,local_340,local_350);
  }
  return;
}


