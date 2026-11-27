// 0006c920 <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::<u32, <u32 as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::
<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (uint *param_1,ulonglong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = param_1[1];
  uVar18 = 2;
  if (uVar2 < *param_1) {
    if (param_2 != 2) {
      uVar20 = uVar2;
      do {
        puVar19 = param_1 + uVar18;
        if (uVar20 <= *puVar19) goto LAB_0006c96c;
        uVar18 = uVar18 + 1;
        uVar20 = *puVar19;
      } while (param_2 != uVar18);
      goto LAB_0006c9a4;
    }
  }
  else if (param_2 != 2) {
    uVar20 = uVar2;
    do {
      puVar19 = param_1 + uVar18;
      if (*puVar19 < uVar20) goto LAB_0006c96c;
      uVar18 = uVar18 + 1;
      uVar20 = *puVar19;
    } while (param_2 != uVar18);
    goto LAB_0006c9a4;
  }
LAB_0006c96c:
  if (uVar18 != param_2) {
    lVar17 = 0x3f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    quicksort::quicksort::<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1,param_2,0,((uint)lVar17 ^ 0x3f) * 2 ^ 0x7e,param_3);
    return;
  }
LAB_0006c9a4:
  if (uVar2 < *param_1) {
    uVar18 = param_2 >> 1;
    if (param_2 < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar18 & 0xffffffffffffff8;
      puVar19 = param_1 + 4;
      lVar17 = 0;
      do {
        uVar2 = puVar19[-4];
        uVar20 = puVar19[-3];
        uVar3 = puVar19[-2];
        uVar4 = puVar19[-1];
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar1 = param_1 + param_2 + lVar17 + -8;
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar1 = param_1 + param_2 + lVar17 + -4;
        uVar13 = *puVar1;
        uVar14 = puVar1[1];
        uVar15 = puVar1[2];
        puVar19[-4] = puVar1[3];
        puVar19[-3] = uVar15;
        puVar19[-2] = uVar14;
        puVar19[-1] = uVar13;
        *puVar19 = uVar12;
        puVar19[1] = uVar11;
        puVar19[2] = uVar10;
        puVar19[3] = uVar9;
        puVar1 = param_1 + param_2 + lVar17 + -4;
        *puVar1 = uVar4;
        puVar1[1] = uVar3;
        puVar1[2] = uVar20;
        puVar1[3] = uVar2;
        puVar1 = param_1 + param_2 + lVar17 + -8;
        *puVar1 = uVar8;
        puVar1[1] = uVar7;
        puVar1[2] = uVar6;
        puVar1[3] = uVar5;
        lVar17 = lVar17 + -8;
        puVar19 = puVar19 + 8;
      } while (-lVar17 != (uVar18 & 0xfffffffffffffff8));
      if (uVar18 == uVar16) {
        return;
      }
    }
    puVar19 = param_1 + uVar16;
    lVar17 = -uVar16;
    do {
      uVar2 = *puVar19;
      *puVar19 = param_1[param_2 + lVar17 + -1];
      param_1[param_2 + lVar17 + -1] = uVar2;
      lVar17 = lVar17 + -1;
      puVar19 = puVar19 + 1;
    } while (-lVar17 != uVar18);
  }
  return;
}


