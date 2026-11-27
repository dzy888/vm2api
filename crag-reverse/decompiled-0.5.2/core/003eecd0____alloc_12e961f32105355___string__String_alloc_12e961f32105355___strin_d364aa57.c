// 003eecd0 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Da_05;
  longlong local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 < 0x21) {
LAB_003eecfa:
    shared::smallsort::small_sort_general_with_scratch::
    <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  local_80 = param_6;
LAB_003eed2b:
  uVar24 = param_2;
  do {
    puVar12 = PTR_memcmp_00799528;
    if (param_5 == 0) {
      drift::sort::
      <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,uVar24,param_3,param_4,1,param_7);
      return;
    }
    uVar18 = uVar24 >> 3;
    puVar25 = param_1 + uVar18 * 0x18;
    puVar26 = param_1 + uVar18 * 0x2a;
    if (uVar24 < 0x40) {
      uVar27 = param_1[2];
      uVar23 = puVar25[2];
      uVar29 = uVar23;
      if (uVar27 < uVar23) {
        uVar29 = uVar27;
      }
      iVar13 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar29);
      uVar18 = uVar27 - uVar23;
      if (iVar13 != 0) {
        uVar18 = (longlong)iVar13;
      }
      uVar30 = extraout_XMM0_Da;
      if (uVar18 == 0) {
        uVar18 = param_1[5];
        uVar29 = puVar25[5];
        uVar19 = uVar29;
        if (uVar18 < uVar29) {
          uVar19 = uVar18;
        }
        iVar13 = (*(code *)puVar12)(extraout_XMM0_Da,uVar19);
        uVar18 = uVar18 - uVar29;
        uVar30 = extraout_XMM0_Da_00;
        if (iVar13 != 0) {
          uVar18 = (longlong)iVar13;
        }
      }
      uVar29 = puVar26[2];
      uVar19 = uVar27;
      if (uVar29 <= uVar27) {
        uVar19 = uVar29;
      }
      iVar13 = (*(code *)puVar12)(uVar30,uVar19);
      uVar27 = uVar27 - uVar29;
      if (iVar13 != 0) {
        uVar27 = (longlong)iVar13;
      }
      uVar30 = extraout_XMM0_Da_01;
      if (uVar27 == 0) {
        uVar27 = param_1[5];
        uVar19 = puVar26[5];
        uVar16 = uVar19;
        if (uVar27 < uVar19) {
          uVar16 = uVar27;
        }
        iVar13 = (*(code *)PTR_memcmp_00799528)(puVar26,uVar16);
        uVar27 = uVar27 - uVar19;
        uVar30 = extraout_XMM0_Da_02;
        if (iVar13 != 0) {
          uVar27 = (longlong)iVar13;
        }
      }
      puVar15 = param_1;
      if (-1 < (longlong)(uVar27 ^ uVar18)) {
        uVar27 = uVar29;
        if (uVar23 < uVar29) {
          uVar27 = uVar23;
        }
        iVar13 = (*(code *)PTR_memcmp_00799528)(uVar30,uVar27);
        uVar27 = uVar23 - uVar29;
        if (iVar13 != 0) {
          uVar27 = (longlong)iVar13;
        }
        if (uVar27 == 0) {
          uVar27 = puVar25[5];
          uVar23 = puVar26[5];
          uVar29 = uVar23;
          if (uVar27 < uVar23) {
            uVar29 = uVar27;
          }
          iVar13 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_03,uVar29);
          uVar27 = uVar27 - uVar23;
          if (iVar13 != 0) {
            uVar27 = (longlong)iVar13;
          }
        }
        puVar15 = puVar25;
        if ((longlong)(uVar27 ^ uVar18) < 0) {
          puVar15 = puVar26;
        }
      }
    }
    else {
      puVar15 = (undefined8 *)
                shared::pivot::median3_rec::
                <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                          (param_1,puVar25,puVar26,uVar18,param_7);
    }
    puVar12 = PTR_memcmp_00799528;
    param_5 = param_5 + -1;
    uVar18 = ((ulonglong)((longlong)puVar15 - (longlong)param_1) >> 4) * -0x5555555555555555;
    local_68 = *(undefined4 *)puVar15;
    uStack_64 = *(undefined4 *)((longlong)puVar15 + 4);
    uStack_60 = *(undefined4 *)(puVar15 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar15 + 0xc);
    local_58 = *(undefined4 *)(puVar15 + 2);
    uStack_54 = *(undefined4 *)((longlong)puVar15 + 0x14);
    uStack_50 = *(undefined4 *)(puVar15 + 3);
    uStack_4c = *(undefined4 *)((longlong)puVar15 + 0x1c);
    local_48 = *(undefined4 *)(puVar15 + 4);
    uStack_44 = *(undefined4 *)((longlong)puVar15 + 0x24);
    uStack_40 = *(undefined4 *)(puVar15 + 5);
    uStack_3c = *(undefined4 *)((longlong)puVar15 + 0x2c);
    if (local_80 != 0) {
      uVar27 = *(ulonglong *)(local_80 + 0x10);
      uVar23 = puVar15[2];
      uVar29 = uVar23;
      if (uVar27 < uVar23) {
        uVar29 = uVar27;
      }
      iVar13 = (*(code *)PTR_memcmp_00799528)(0xaaaaaaaaaaaaaaab,uVar29);
      lVar17 = uVar27 - uVar23;
      if (iVar13 != 0) {
        lVar17 = (longlong)iVar13;
      }
      uVar14 = (uint)((ulonglong)lVar17 >> 0x3f);
      if (lVar17 == 0) {
        uVar14 = 2;
      }
      if ((char)uVar14 == '\x02') {
        uVar27 = *(ulonglong *)(local_80 + 0x28);
        uVar23 = puVar15[5];
        uVar29 = uVar23;
        if (uVar27 < uVar23) {
          uVar29 = uVar27;
        }
        iVar13 = (*(code *)puVar12)(2,uVar29);
        lVar17 = uVar27 - uVar23;
        if (iVar13 != 0) {
          lVar17 = (longlong)iVar13;
        }
        if (-1 < lVar17) break;
      }
      else if (uVar14 == 0) break;
    }
    if (param_4 < uVar24) goto LAB_003ef55e;
    uVar27 = param_3 + uVar24 * 0x30;
    param_2 = 0;
    uVar23 = uVar18;
    uVar29 = uVar27;
    puVar25 = param_1;
    while( true ) {
      uVar19 = uVar23;
      for (; puVar25 < param_1 + uVar23 * 6; puVar25 = puVar25 + 6) {
        uVar16 = puVar25[2];
        uVar22 = puVar15[2];
        uVar21 = uVar22;
        if (uVar16 < uVar22) {
          uVar21 = uVar16;
        }
        iVar13 = (*(code *)PTR_memcmp_00799528)(uVar19,uVar21);
        lVar17 = uVar16 - uVar22;
        if (iVar13 != 0) {
          lVar17 = (longlong)iVar13;
        }
        if (lVar17 == 0) {
          uVar19 = puVar25[5];
          uVar16 = puVar15[5];
          uVar22 = uVar16;
          if (uVar19 < uVar16) {
            uVar22 = uVar19;
          }
          iVar13 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_04,uVar22);
          lVar17 = uVar19 - uVar16;
          if (iVar13 != 0) {
            lVar17 = (longlong)iVar13;
          }
        }
        uVar29 = uVar29 - 0x30;
        uVar16 = uVar29;
        if (lVar17 < 0) {
          uVar16 = param_3;
        }
        uVar19 = param_2 * 0x30;
        uVar30 = *(undefined4 *)puVar25;
        uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
        uVar5 = *(undefined4 *)(puVar25 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
        uVar7 = puVar25[2];
        uVar8 = puVar25[3];
        uVar9 = puVar25[5];
        puVar26 = (undefined8 *)(uVar16 + 0x20 + uVar19);
        *puVar26 = puVar25[4];
        puVar26[1] = uVar9;
        puVar26 = (undefined8 *)(uVar16 + 0x10 + uVar19);
        *puVar26 = uVar7;
        puVar26[1] = uVar8;
        puVar1 = (undefined4 *)(uVar16 + uVar19);
        *puVar1 = uVar30;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        param_2 = param_2 - (lVar17 >> 0x3f);
      }
      if (uVar23 == uVar24) break;
      lVar17 = param_2 * 0x30;
      uVar30 = *(undefined4 *)puVar25;
      uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
      uVar5 = *(undefined4 *)(puVar25 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
      uVar7 = puVar25[2];
      uVar8 = puVar25[3];
      uVar9 = puVar25[5];
      puVar26 = (undefined8 *)((uVar29 - 0x10) + lVar17);
      *puVar26 = puVar25[4];
      puVar26[1] = uVar9;
      puVar26 = (undefined8 *)((uVar29 - 0x20) + lVar17);
      *puVar26 = uVar7;
      puVar26[1] = uVar8;
      puVar1 = (undefined4 *)((uVar29 - 0x30) + lVar17);
      *puVar1 = uVar30;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar29 = uVar29 - 0x30;
      puVar25 = puVar25 + 6;
      uVar23 = uVar24;
    }
    uVar30 = (*(code *)PTR_memcpy_00799008)();
    uVar23 = uVar24 - param_2;
    if (uVar23 != 0) {
      puVar25 = param_1 + param_2 * 6;
      if (uVar24 == param_2 + 1) {
        uVar19 = 0;
      }
      else {
        puVar28 = (undefined8 *)(uVar24 * 0x30 + (param_3 - 0x30));
        uVar29 = 0;
        puVar26 = puVar25;
        do {
          uVar7 = *puVar28;
          uVar8 = puVar28[1];
          uVar9 = puVar28[2];
          uVar10 = puVar28[3];
          uVar11 = puVar28[5];
          puVar26[4] = puVar28[4];
          puVar26[5] = uVar11;
          puVar26[2] = uVar9;
          puVar26[3] = uVar10;
          *puVar26 = uVar7;
          puVar26[1] = uVar8;
          uVar19 = uVar29 + 2;
          lVar17 = (uVar29 ^ 0xffffffffffffffe) * 0x30;
          puVar1 = (undefined4 *)(uVar27 + lVar17);
          uVar30 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (undefined8 *)(uVar27 + 0x10 + lVar17);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          puVar2 = (undefined8 *)(uVar27 + 0x20 + lVar17);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          *(undefined4 *)(puVar26 + 6) = uVar30;
          *(undefined4 *)((longlong)puVar26 + 0x34) = uVar4;
          *(undefined4 *)(puVar26 + 7) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x3c) = uVar6;
          puVar26[8] = uVar7;
          puVar26[9] = uVar8;
          puVar26[10] = uVar9;
          puVar26[0xb] = uVar10;
          puVar26 = puVar26 + 0xc;
          puVar28 = puVar28 + -0xc;
          uVar29 = uVar19;
        } while ((uVar23 & 0xfffffffffffffffe) != uVar19);
        if ((uVar23 & 1) == 0) goto LAB_003ef23d;
      }
      lVar17 = ~uVar19 * 0x30;
      puVar1 = (undefined4 *)(uVar27 + lVar17);
      uVar30 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar26 = (undefined8 *)(uVar27 + 0x10 + lVar17);
      uVar7 = *puVar26;
      uVar8 = puVar26[1];
      puVar26 = (undefined8 *)(uVar27 + 0x20 + lVar17);
      uVar9 = puVar26[1];
      puVar25[uVar19 * 6 + 4] = *puVar26;
      (puVar25 + uVar19 * 6 + 4)[1] = uVar9;
      puVar25[uVar19 * 6 + 2] = uVar7;
      (puVar25 + uVar19 * 6 + 2)[1] = uVar8;
      puVar25 = puVar25 + uVar19 * 6;
      *(undefined4 *)puVar25 = uVar30;
      *(undefined4 *)((longlong)puVar25 + 4) = uVar4;
      *(undefined4 *)(puVar25 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
    }
LAB_003ef23d:
    if (param_2 == 0) break;
    if (uVar24 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar30,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003ef579;
    }
    <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1 + param_2 * 6,uVar23,param_3,param_4,param_5,&local_68,param_7);
    uVar24 = param_2;
    if (param_2 < 0x21) goto LAB_003eecfa;
  } while( true );
  if (param_4 < uVar24) {
LAB_003ef55e:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar27 = param_3 + uVar24 * 0x30;
  uVar29 = 0;
  uVar23 = uVar27;
  puVar25 = param_1;
  while( true ) {
    uVar19 = uVar18;
    for (; puVar25 < param_1 + uVar18 * 6; puVar25 = puVar25 + 6) {
      uVar16 = puVar15[2];
      uVar22 = puVar25[2];
      uVar21 = uVar22;
      if (uVar16 < uVar22) {
        uVar21 = uVar16;
      }
      iVar13 = (*(code *)PTR_memcmp_00799528)(uVar19,uVar21);
      lVar17 = uVar16 - uVar22;
      if (iVar13 != 0) {
        lVar17 = (longlong)iVar13;
      }
      if (lVar17 == 0) {
        uVar19 = puVar15[5];
        uVar16 = puVar25[5];
        uVar22 = uVar16;
        if (uVar19 < uVar16) {
          uVar22 = uVar19;
        }
        iVar13 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_05,uVar22);
        lVar17 = uVar19 - uVar16;
        if (iVar13 != 0) {
          lVar17 = (longlong)iVar13;
        }
      }
      uVar23 = uVar23 - 0x30;
      uVar19 = uVar23;
      if (-1 < lVar17) {
        uVar19 = param_3;
      }
      lVar20 = uVar29 * 0x30;
      uVar30 = *(undefined4 *)puVar25;
      uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
      uVar5 = *(undefined4 *)(puVar25 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
      uVar7 = puVar25[2];
      uVar8 = puVar25[3];
      uVar9 = puVar25[5];
      puVar26 = (undefined8 *)(uVar19 + 0x20 + lVar20);
      *puVar26 = puVar25[4];
      puVar26[1] = uVar9;
      puVar26 = (undefined8 *)(uVar19 + 0x10 + lVar20);
      *puVar26 = uVar7;
      puVar26[1] = uVar8;
      puVar1 = (undefined4 *)(uVar19 + lVar20);
      *puVar1 = uVar30;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar29 = uVar29 + (-1 < lVar17);
    }
    if (uVar18 == uVar24) break;
    uVar23 = uVar23 - 0x30;
    lVar17 = uVar29 * 0x30;
    uVar30 = *(undefined4 *)puVar25;
    uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
    uVar5 = *(undefined4 *)(puVar25 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
    uVar7 = puVar25[2];
    uVar8 = puVar25[3];
    uVar9 = puVar25[5];
    puVar26 = (undefined8 *)(param_3 + 0x20 + lVar17);
    *puVar26 = puVar25[4];
    puVar26[1] = uVar9;
    puVar26 = (undefined8 *)(param_3 + 0x10 + lVar17);
    *puVar26 = uVar7;
    puVar26[1] = uVar8;
    puVar1 = (undefined4 *)(param_3 + lVar17);
    *puVar1 = uVar30;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar29 = uVar29 + 1;
    puVar25 = puVar25 + 6;
    uVar18 = uVar24;
  }
  (*(code *)PTR_memcpy_00799008)(uVar24,uVar29 * 0x30);
  param_2 = uVar24 - uVar29;
  if (param_2 == 0) {
    param_1 = param_1 + uVar24 * 6;
    param_2 = 0;
    goto LAB_003eecfa;
  }
  param_1 = param_1 + uVar29 * 6;
  if (uVar24 == uVar29 + 1) {
    uVar23 = 0;
  }
  else {
    puVar26 = (undefined8 *)(uVar24 * 0x30 + (param_3 - 0x30));
    uVar18 = 0;
    puVar25 = param_1;
    do {
      uVar7 = *puVar26;
      uVar8 = puVar26[1];
      uVar9 = puVar26[2];
      uVar10 = puVar26[3];
      uVar11 = puVar26[5];
      puVar25[4] = puVar26[4];
      puVar25[5] = uVar11;
      puVar25[2] = uVar9;
      puVar25[3] = uVar10;
      *puVar25 = uVar7;
      puVar25[1] = uVar8;
      uVar23 = uVar18 + 2;
      lVar17 = (uVar18 ^ 0xffffffffffffffe) * 0x30;
      puVar1 = (undefined4 *)(uVar27 + lVar17);
      uVar30 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar15 = (undefined8 *)(uVar27 + 0x10 + lVar17);
      uVar7 = *puVar15;
      uVar8 = puVar15[1];
      puVar15 = (undefined8 *)(uVar27 + 0x20 + lVar17);
      uVar9 = *puVar15;
      uVar10 = puVar15[1];
      *(undefined4 *)(puVar25 + 6) = *puVar1;
      *(undefined4 *)((longlong)puVar25 + 0x34) = uVar30;
      *(undefined4 *)(puVar25 + 7) = uVar4;
      *(undefined4 *)((longlong)puVar25 + 0x3c) = uVar5;
      puVar25[8] = uVar7;
      puVar25[9] = uVar8;
      puVar25[10] = uVar9;
      puVar25[0xb] = uVar10;
      puVar25 = puVar25 + 0xc;
      puVar26 = puVar26 + -0xc;
      uVar18 = uVar23;
    } while ((param_2 & 0xfffffffffffffffe) != uVar23);
    if ((param_2 & 1) == 0) goto LAB_003ef503;
  }
  lVar17 = ~uVar23 * 0x30;
  puVar1 = (undefined4 *)(uVar27 + lVar17);
  uVar30 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar25 = (undefined8 *)(uVar27 + 0x10 + lVar17);
  uVar7 = *puVar25;
  uVar8 = puVar25[1];
  puVar25 = (undefined8 *)(uVar27 + 0x20 + lVar17);
  uVar9 = puVar25[1];
  param_1[uVar23 * 6 + 4] = *puVar25;
  (param_1 + uVar23 * 6 + 4)[1] = uVar9;
  param_1[uVar23 * 6 + 2] = uVar7;
  (param_1 + uVar23 * 6 + 2)[1] = uVar8;
  puVar25 = param_1 + uVar23 * 6;
  *(undefined4 *)puVar25 = uVar30;
  *(undefined4 *)((longlong)puVar25 + 4) = uVar4;
  *(undefined4 *)(puVar25 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
LAB_003ef503:
  if (uVar24 < uVar29) {
LAB_003ef579:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_80 = 0;
  if (param_2 < 0x21) goto LAB_003eecfa;
  goto LAB_003eed2b;
}


