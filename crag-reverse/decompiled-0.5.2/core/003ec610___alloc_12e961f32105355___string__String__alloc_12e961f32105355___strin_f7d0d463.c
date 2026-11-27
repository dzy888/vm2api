// 003ec610 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar23;
  longlong local_90;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 < 0x21) {
LAB_003ec63c:
    shared::smallsort::small_sort_general_with_scratch::
    <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  local_90 = param_6;
LAB_003ec671:
  uVar18 = param_2;
  do {
    puVar7 = PTR_memcmp_00799528;
    if (param_5 == 0) {
      drift::sort::
      <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,uVar18,param_3,param_4,1,param_7);
      return;
    }
    uVar11 = uVar18 >> 3;
    puVar20 = param_1 + uVar11 * 0xc;
    puVar22 = param_1 + uVar11 * 0x15;
    if (uVar18 < 0x40) {
      uVar19 = param_1[2];
      uVar12 = puVar20[2];
      uVar14 = uVar12;
      if (uVar19 < uVar12) {
        uVar14 = uVar19;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(uVar11,uVar14);
      uVar11 = uVar19 - uVar12;
      if (iVar8 != 0) {
        uVar11 = (longlong)iVar8;
      }
      uVar14 = puVar22[2];
      uVar13 = uVar19;
      if (uVar14 <= uVar19) {
        uVar13 = uVar14;
      }
      iVar8 = (*(code *)puVar7)(extraout_XMM0_Da,uVar13);
      uVar19 = uVar19 - uVar14;
      if (iVar8 != 0) {
        uVar19 = (longlong)iVar8;
      }
      puVar9 = param_1;
      if (-1 < (longlong)(uVar19 ^ uVar11)) {
        uVar19 = uVar14;
        if (uVar12 < uVar14) {
          uVar19 = uVar12;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(param_1,uVar19);
        uVar19 = uVar12 - uVar14;
        if (iVar8 != 0) {
          uVar19 = (longlong)iVar8;
        }
        puVar9 = puVar20;
        if ((longlong)(uVar19 ^ uVar11) < 0) {
          puVar9 = puVar22;
        }
      }
    }
    else {
      puVar9 = (undefined8 *)
               shared::pivot::median3_rec::
               <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                         (param_1,puVar20,puVar22,uVar11,param_7);
    }
    param_5 = param_5 + -1;
    uVar11 = ((ulonglong)((longlong)puVar9 - (longlong)param_1) >> 3) * -0x5555555555555555;
    local_38 = puVar9[2];
    uVar23 = *(undefined4 *)puVar9;
    uStack_44 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_40 = *(undefined4 *)(puVar9 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_48 = uVar23;
    if (local_90 != 0) {
      uVar19 = *(ulonglong *)(local_90 + 0x10);
      uVar12 = puVar9[2];
      uVar14 = uVar12;
      if (uVar19 < uVar12) {
        uVar14 = uVar19;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar14);
      lVar15 = uVar19 - uVar12;
      if (iVar8 != 0) {
        lVar15 = (longlong)iVar8;
      }
      uVar23 = extraout_XMM0_Da_00;
      if (-1 < lVar15) break;
    }
    if (param_4 < uVar18) goto LAB_003ecc99;
    lVar15 = param_3 + uVar18 * 0x18;
    param_2 = 0;
    uVar19 = uVar11;
    lVar17 = lVar15;
    puVar22 = param_1;
    while( true ) {
      for (; puVar22 < param_1 + uVar19 * 3; puVar22 = puVar22 + 3) {
        uVar12 = puVar22[2];
        uVar14 = puVar9[2];
        uVar13 = uVar14;
        if (uVar12 < uVar14) {
          uVar13 = uVar12;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar13);
        lVar16 = uVar12 - uVar14;
        if (iVar8 != 0) {
          lVar16 = (longlong)iVar8;
        }
        lVar17 = lVar17 + -0x18;
        lVar10 = lVar17;
        if (lVar16 < 0) {
          lVar10 = param_3;
        }
        uVar23 = *(undefined4 *)puVar22;
        uVar3 = *(undefined4 *)((longlong)puVar22 + 4);
        uVar4 = *(undefined4 *)(puVar22 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar22 + 0xc);
        puVar1 = (undefined4 *)(lVar10 + param_2 * 0x18);
        *puVar1 = uVar23;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        *(undefined8 *)(lVar10 + 0x10 + param_2 * 0x18) = puVar22[2];
        param_2 = param_2 - (lVar16 >> 0x3f);
      }
      if (uVar19 == uVar18) break;
      *(undefined8 *)(lVar17 + -8 + param_2 * 0x18) = puVar22[2];
      uVar23 = *(undefined4 *)puVar22;
      uVar3 = *(undefined4 *)((longlong)puVar22 + 4);
      uVar4 = *(undefined4 *)(puVar22 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar22 + 0xc);
      puVar1 = (undefined4 *)(lVar17 + -0x18 + param_2 * 0x18);
      *puVar1 = uVar23;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar17 = lVar17 + -0x18;
      puVar22 = puVar22 + 3;
      uVar19 = uVar18;
    }
    uVar23 = (*(code *)PTR_memcpy_00799008)();
    uVar19 = uVar18 - param_2;
    if (uVar19 != 0) {
      puVar22 = param_1 + param_2 * 3;
      if (uVar18 == param_2 + 1) {
        uVar14 = 0;
      }
      else {
        puVar20 = (undefined8 *)(param_3 + -0x18 + uVar18 * 0x18);
        uVar12 = 0;
        puVar21 = puVar22;
        do {
          puVar21[2] = puVar20[2];
          uVar6 = puVar20[1];
          *puVar21 = *puVar20;
          puVar21[1] = uVar6;
          uVar14 = uVar12 + 2;
          puVar1 = (undefined4 *)(lVar15 + (uVar12 ^ 0x1ffffffffffffffe) * 0x18);
          uVar23 = *puVar1;
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          *(undefined4 *)(puVar21 + 3) = uVar23;
          *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar3;
          *(undefined4 *)(puVar21 + 4) = uVar4;
          *(undefined4 *)((longlong)puVar21 + 0x24) = uVar5;
          puVar21[5] = *(undefined8 *)(lVar15 + 0x10 + (uVar12 ^ 0x1ffffffffffffffe) * 0x18);
          puVar21 = puVar21 + 6;
          puVar20 = puVar20 + -6;
          uVar12 = uVar14;
        } while ((uVar19 & 0xfffffffffffffffe) != uVar14);
        if ((uVar19 & 1) == 0) goto LAB_003ec9e1;
      }
      puVar22[uVar14 * 3 + 2] = *(undefined8 *)(lVar15 + 0x10 + ~uVar14 * 0x18);
      puVar1 = (undefined4 *)(lVar15 + ~uVar14 * 0x18);
      uVar23 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar22 = puVar22 + uVar14 * 3;
      *(undefined4 *)puVar22 = uVar23;
      *(undefined4 *)((longlong)puVar22 + 4) = uVar3;
      *(undefined4 *)(puVar22 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
    }
LAB_003ec9e1:
    if (param_2 == 0) break;
    if (uVar18 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003eccb4;
    }
    <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1 + param_2 * 3,uVar19,param_3,param_4,param_5,&local_48,param_7);
    uVar18 = param_2;
    if (param_2 < 0x21) goto LAB_003ec63c;
  } while( true );
  if (param_4 < uVar18) {
LAB_003ecc99:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar15 = param_3 + uVar18 * 0x18;
  uVar19 = 0;
  puVar22 = param_1;
  lVar17 = lVar15;
  while( true ) {
    for (; puVar22 < param_1 + uVar11 * 3; puVar22 = puVar22 + 3) {
      uVar12 = puVar22[2];
      uVar14 = puVar9[2];
      uVar13 = uVar12;
      if (uVar14 < uVar12) {
        uVar13 = uVar14;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar13);
      lVar16 = uVar14 - uVar12;
      if (iVar8 != 0) {
        lVar16 = (longlong)iVar8;
      }
      lVar17 = lVar17 + -0x18;
      lVar10 = lVar17;
      if (-1 < lVar16) {
        lVar10 = param_3;
      }
      uVar23 = *(undefined4 *)puVar22;
      uVar3 = *(undefined4 *)((longlong)puVar22 + 4);
      uVar4 = *(undefined4 *)(puVar22 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar22 + 0xc);
      puVar1 = (undefined4 *)(lVar10 + uVar19 * 0x18);
      *puVar1 = uVar23;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(lVar10 + 0x10 + uVar19 * 0x18) = puVar22[2];
      uVar19 = (-1 < lVar16) + uVar19;
    }
    if (uVar11 == uVar18) break;
    lVar17 = lVar17 + -0x18;
    *(undefined8 *)(param_3 + 0x10 + uVar19 * 0x18) = puVar22[2];
    uVar23 = *(undefined4 *)puVar22;
    uVar3 = *(undefined4 *)((longlong)puVar22 + 4);
    uVar4 = *(undefined4 *)(puVar22 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar22 + 0xc);
    puVar1 = (undefined4 *)(param_3 + uVar19 * 0x18);
    *puVar1 = uVar23;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    uVar19 = uVar19 + 1;
    puVar22 = puVar22 + 3;
    uVar11 = uVar18;
  }
  (*(code *)PTR_memcpy_00799008)(uVar23,uVar19 * 0x18);
  param_2 = uVar18 - uVar19;
  if (param_2 == 0) {
    param_1 = param_1 + uVar18 * 3;
    param_2 = 0;
    goto LAB_003ec63c;
  }
  param_1 = param_1 + uVar19 * 3;
  if (uVar18 == uVar19 + 1) {
    uVar12 = 0;
  }
  else {
    puVar22 = (undefined8 *)(param_3 + -0x18 + uVar18 * 0x18);
    uVar11 = 0;
    puVar20 = param_1;
    do {
      puVar20[2] = puVar22[2];
      uVar6 = puVar22[1];
      *puVar20 = *puVar22;
      puVar20[1] = uVar6;
      uVar12 = uVar11 + 2;
      puVar1 = (undefined4 *)(lVar15 + (uVar11 ^ 0x1ffffffffffffffe) * 0x18);
      uVar23 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar20 + 3) = *puVar1;
      *(undefined4 *)((longlong)puVar20 + 0x1c) = uVar23;
      *(undefined4 *)(puVar20 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar20 + 0x24) = uVar4;
      puVar20[5] = *(undefined8 *)(lVar15 + 0x10 + (uVar11 ^ 0x1ffffffffffffffe) * 0x18);
      puVar20 = puVar20 + 6;
      puVar22 = puVar22 + -6;
      uVar11 = uVar12;
    } while ((param_2 & 0xfffffffffffffffe) != uVar12);
    if ((param_2 & 1) == 0) goto LAB_003ecc31;
  }
  param_1[uVar12 * 3 + 2] = *(undefined8 *)(lVar15 + 0x10 + ~uVar12 * 0x18);
  puVar1 = (undefined4 *)(lVar15 + ~uVar12 * 0x18);
  uVar23 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  puVar22 = param_1 + uVar12 * 3;
  *(undefined4 *)puVar22 = *puVar1;
  *(undefined4 *)((longlong)puVar22 + 4) = uVar23;
  *(undefined4 *)(puVar22 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar22 + 0xc) = uVar4;
LAB_003ecc31:
  if (uVar18 < uVar19) {
LAB_003eccb4:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_90 = 0;
  if (param_2 < 0x21) goto LAB_003ec63c;
  goto LAB_003ec671;
}


