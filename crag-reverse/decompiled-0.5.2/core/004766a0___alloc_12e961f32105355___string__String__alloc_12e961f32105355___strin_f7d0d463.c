// 004766a0 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar27;
  ulonglong local_320;
  ulonglong local_308;
  ulonglong local_2f8;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar6 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    local_2f8 = 0x40;
    if (uVar8 < 0x40) {
      local_2f8 = uVar8;
    }
  }
  else {
    local_2f8 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar8 = 1;
  uVar18 = 0;
  local_308 = 0;
  local_320 = param_2;
  if (param_2 == 0) goto LAB_004767b0;
LAB_004767d0:
  lVar22 = param_1 + local_308 * 0x18;
  if (local_320 < local_2f8) {
LAB_004767e9:
    if (param_5 == '\0') {
      if (local_2f8 <= local_320) {
        local_320 = local_2f8;
      }
      local_320 = local_320 * 2;
    }
    else {
      if (0x1f < local_320) {
        local_320 = 0x20;
      }
      quicksort::quicksort::
      <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (lVar22,local_320,param_3,param_4,0,0,param_6);
      local_320 = (local_320 & 0xffffffff) * 2 + 1;
    }
    goto LAB_00476a42;
  }
  if (local_320 < 2) {
    uVar24 = local_320;
  }
  else {
    uVar7 = *(ulonglong *)(lVar22 + 0x28);
    uVar24 = *(ulonglong *)(lVar22 + 0x10);
    uVar13 = uVar24;
    if (uVar7 < uVar24) {
      uVar13 = uVar7;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(local_320,uVar13);
    lVar23 = uVar7 - uVar24;
    if (iVar5 != 0) {
      lVar23 = (longlong)iVar5;
    }
    if (lVar23 < 0) {
      if (local_320 == 2) {
        uVar24 = 2;
        uVar7 = 1;
      }
      else {
        puVar15 = (ulonglong *)(param_1 + 0x40 + local_308 * 0x18);
        uVar24 = 2;
        uVar27 = extraout_XMM0_Da;
        do {
          uVar13 = *puVar15;
          uVar21 = uVar7;
          if (uVar13 < uVar7) {
            uVar21 = uVar13;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(uVar27,uVar21);
          lVar20 = uVar13 - uVar7;
          if (iVar5 != 0) {
            lVar20 = (longlong)iVar5;
          }
          if (-1 < lVar20) goto LAB_00476998;
          uVar24 = uVar24 + 1;
          puVar15 = puVar15 + 3;
          uVar7 = uVar13;
          uVar27 = extraout_XMM0_Da_01;
        } while (local_320 != uVar24);
LAB_0047698e:
        uVar24 = local_320;
LAB_00476998:
        if (uVar24 < local_2f8) goto LAB_004767e9;
        if ((-1 < lVar23) || (uVar7 = uVar24 >> 1, uVar7 == 0)) goto LAB_00476a30;
      }
      puVar9 = (undefined8 *)(param_1 + 0x10 + local_308 * 0x18);
      puVar14 = (undefined8 *)(local_308 * 0x18 + uVar24 * 0x18 + param_1 + -8);
      do {
        uVar10 = puVar9[-2];
        puVar9[-2] = puVar14[-2];
        puVar14[-2] = uVar10;
        uVar10 = puVar9[-1];
        puVar9[-1] = puVar14[-1];
        puVar14[-1] = uVar10;
        uVar10 = *puVar9;
        *puVar9 = *puVar14;
        *puVar14 = uVar10;
        puVar9 = puVar9 + 3;
        puVar14 = puVar14 + -3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else {
      uVar24 = 2;
      if (local_320 != 2) {
        puVar15 = (ulonglong *)(param_1 + 0x40 + local_308 * 0x18);
        uVar27 = extraout_XMM0_Da;
        do {
          uVar13 = *puVar15;
          uVar21 = uVar7;
          if (uVar13 < uVar7) {
            uVar21 = uVar13;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(uVar27,uVar21);
          lVar20 = uVar13 - uVar7;
          if (iVar5 != 0) {
            lVar20 = (longlong)iVar5;
          }
          if (lVar20 < 0) goto LAB_00476998;
          uVar24 = uVar24 + 1;
          puVar15 = puVar15 + 3;
          uVar7 = uVar13;
          uVar27 = extraout_XMM0_Da_00;
        } while (local_320 != uVar24);
        goto LAB_0047698e;
      }
    }
  }
LAB_00476a30:
  local_320 = uVar24 * 2 + 1;
LAB_00476a42:
  uVar7 = ((local_320 >> 1) + local_308 * 2) * lVar6 ^ (local_308 * 2 - (uVar8 >> 1)) * lVar6;
  lVar22 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  uVar12 = (uint)lVar22 ^ 0x3f;
  uVar7 = uVar8;
  do {
    uVar8 = local_320;
    if (1 < uVar18) {
      do {
        while( true ) {
          if (abStack_283[uVar18] < (byte)uVar12) goto LAB_00476da5;
          uVar18 = uVar18 - 1;
          uVar13 = auStack_240[uVar18];
          uVar21 = uVar13 >> 1;
          uVar26 = uVar7 >> 1;
          uVar24 = uVar26 + uVar21;
          if ((param_4 < uVar24) || ((((uint)uVar13 | (uint)uVar7) & 1) != 0)) break;
          uVar7 = uVar24 * 2;
          if (uVar18 < 2) goto LAB_00476da0;
        }
        puVar16 = (undefined4 *)(param_1 + (local_308 - uVar24) * 0x18);
        if ((uVar13 & 1) == 0) {
          lVar22 = 0x3f;
          if ((uVar21 | 1) != 0) {
            for (; (uVar21 | 1) >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          quicksort::quicksort::
          <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                    (puVar16,uVar21,param_3,param_4,((uint)lVar22 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar7 & 1) == 0) {
          lVar22 = 0x3f;
          if ((uVar26 | 1) != 0) {
            for (; (uVar26 | 1) >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          quicksort::quicksort::
          <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                    (puVar16 + uVar21 * 6,uVar26,param_3,param_4,((uint)lVar22 ^ 0x3f) * 2 ^ 0x7e,0,
                     param_6);
        }
        if ((uVar26 != 0) && (uVar21 != 0)) {
          uVar7 = uVar21;
          if (uVar26 < uVar21) {
            uVar7 = uVar26;
          }
          if (uVar7 <= param_4) {
            puVar17 = puVar16 + uVar21 * 6;
            uVar27 = (*(code *)PTR_memcpy_00799008)(uVar21 * 3,uVar7 * 0x18);
            puVar19 = param_3 + uVar7 * 6;
            puVar25 = param_3;
            if (uVar26 < uVar21) {
              puVar11 = (undefined4 *)(local_308 * 0x18 + param_1 + -0x18);
              do {
                uVar7 = *(ulonglong *)(puVar19 + -2);
                uVar13 = *(ulonglong *)(puVar17 + -2);
                uVar21 = uVar7;
                if (uVar13 <= uVar7) {
                  uVar21 = uVar13;
                }
                iVar5 = (*(code *)PTR_memcmp_00799528)(uVar27,uVar21);
                lVar22 = uVar7 - uVar13;
                if (iVar5 != 0) {
                  lVar22 = (longlong)iVar5;
                }
                puVar1 = puVar17;
                if (-1 < lVar22) {
                  puVar1 = puVar19;
                }
                uVar27 = puVar1[-6];
                uVar2 = puVar1[-5];
                uVar3 = puVar1[-4];
                uVar4 = puVar1[-3];
                *puVar11 = uVar27;
                puVar11[1] = uVar2;
                puVar11[2] = uVar3;
                puVar11[3] = uVar4;
                uVar10 = *(undefined8 *)(puVar1 + -2);
                *(undefined8 *)(puVar11 + 4) = uVar10;
                puVar17 = puVar17 + (ulonglong)(-1 < lVar22) * 6 + -6;
                puVar19 = puVar19 + (lVar22 >> 0x3f) * -6 + -6;
              } while ((puVar17 != puVar16) && (puVar11 = puVar11 + -6, puVar19 != param_3));
            }
            else {
              do {
                uVar7 = *(ulonglong *)(puVar17 + 4);
                uVar13 = *(ulonglong *)(puVar25 + 4);
                uVar21 = uVar13;
                if (uVar7 < uVar13) {
                  uVar21 = uVar7;
                }
                iVar5 = (*(code *)PTR_memcmp_00799528)(uVar27,uVar21);
                lVar22 = uVar7 - uVar13;
                if (iVar5 != 0) {
                  lVar22 = (longlong)iVar5;
                }
                puVar11 = puVar17;
                if (-1 < lVar22) {
                  puVar11 = puVar25;
                }
                uVar27 = *puVar11;
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *puVar16 = uVar27;
                puVar16[1] = uVar2;
                puVar16[2] = uVar3;
                puVar16[3] = uVar4;
                uVar10 = *(undefined8 *)(puVar11 + 4);
                *(undefined8 *)(puVar16 + 4) = uVar10;
                puVar25 = puVar25 + (ulonglong)(-1 < lVar22) * 6;
                puVar16 = puVar16 + 6;
              } while ((puVar25 != puVar19) &&
                      (puVar17 = puVar17 + (lVar22 >> 0x3f) * -6,
                      puVar17 != (undefined4 *)(param_1 + local_308 * 0x18)));
            }
            (*(code *)PTR_memcpy_00799008)(uVar10,(longlong)puVar19 - (longlong)puVar25);
          }
        }
        uVar7 = uVar24 * 2 + 1;
      } while (1 < uVar18);
LAB_00476da0:
      uVar18 = 1;
    }
LAB_00476da5:
    auStack_240[uVar18] = uVar7;
    abStack_283[uVar18 + 1] = (byte)uVar12;
    if (param_2 <= local_308) {
      if ((uVar7 & 1) != 0) {
        return;
      }
      lVar6 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      quicksort::quicksort::
      <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,param_2,param_3,param_4,((uint)lVar6 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar18 = uVar18 + 1;
    local_308 = local_308 + (uVar8 >> 1);
    local_320 = param_2 - local_308;
    if (local_308 <= param_2 && param_2 - local_308 != 0) goto LAB_004767d0;
LAB_004767b0:
    uVar12 = 0;
    local_320 = 1;
    uVar7 = uVar8;
  } while( true );
}


