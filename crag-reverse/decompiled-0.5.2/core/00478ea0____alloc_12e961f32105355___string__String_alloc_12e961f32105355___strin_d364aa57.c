// 00478ea0 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5,char param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  code *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  ulonglong local_2b8;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_3 < 2) {
    return;
  }
  lVar9 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  if (param_3 < 0x1001) {
    uVar12 = param_3 - (param_3 >> 1);
    uVar10 = 0x40;
    if (uVar12 < 0x40) {
      uVar10 = uVar12;
    }
  }
  else {
    uVar10 = (*(code *)PTR_sqrt_approx_007999c8)();
    param_1 = extraout_XMM0_Da;
  }
  uVar20 = 1;
  uVar26 = 0;
  local_2b8 = 0;
  uVar12 = param_3;
  pcVar19 = (code *)PTR_memcmp_00799528;
  if (param_3 == 0) goto LAB_00478f9c;
LAB_00478fc0:
  lVar21 = local_2b8 * 0x30;
  lVar23 = param_2 + lVar21;
  if (uVar12 < uVar10) {
LAB_00478fd8:
    if (param_6 == '\0') {
      if (uVar10 <= uVar12) {
        uVar12 = uVar10;
      }
      uVar12 = uVar12 * 2;
    }
    else {
      if (0x1f < uVar12) {
        uVar12 = 0x20;
      }
      param_1 = quicksort::quicksort::
                <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                          (lVar23,uVar12,param_4,param_5,0,0,param_7);
      uVar12 = (uVar12 & 0xffffffff) * 2 + 1;
      pcVar19 = (code *)PTR_memcmp_00799528;
    }
  }
  else {
    uVar11 = uVar12;
    if (1 < uVar12) {
      uVar18 = *(ulonglong *)(lVar23 + 0x40);
      uVar11 = *(ulonglong *)(lVar23 + 0x10);
      uVar24 = uVar11;
      if (uVar18 < uVar11) {
        uVar24 = uVar18;
      }
      iVar8 = (*pcVar19)(param_1,uVar24);
      lVar17 = uVar18 - uVar11;
      if (iVar8 != 0) {
        lVar17 = (longlong)iVar8;
      }
      uVar14 = (uint)((ulonglong)lVar17 >> 0x3f);
      if (lVar17 == 0) {
        uVar14 = 2;
      }
      param_1 = extraout_XMM0_Da_00;
      if (uVar14 == 0) {
LAB_004790ce:
        if (uVar12 == 2) {
          bVar7 = false;
          pcVar19 = (code *)PTR_memcmp_00799528;
          uVar11 = 2;
        }
        else {
          puVar22 = (ulonglong *)(lVar21 + param_2 + 0x88);
          uVar11 = 2;
          do {
            uVar24 = puVar22[-3];
            uVar25 = uVar18;
            if (uVar24 < uVar18) {
              uVar25 = uVar24;
            }
            iVar8 = (*(code *)PTR_memcmp_00799528)(param_1,uVar25);
            lVar21 = uVar24 - uVar18;
            if (iVar8 != 0) {
              lVar21 = (longlong)iVar8;
            }
            uVar14 = 2;
            if (lVar21 != 0) {
              uVar14 = (uint)((ulonglong)lVar21 >> 0x3f);
            }
            param_1 = extraout_XMM0_Da_02;
            if (uVar14 != 0) {
              if (uVar14 == 2) {
                uVar18 = *puVar22;
                uVar25 = puVar22[-6];
                uVar15 = uVar25;
                if (uVar18 < uVar25) {
                  uVar15 = uVar18;
                }
                iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_02,uVar15);
                lVar21 = uVar18 - uVar25;
                if (iVar8 != 0) {
                  lVar21 = (longlong)iVar8;
                }
                param_1 = extraout_XMM0_Da_03;
                if (-1 < lVar21) goto LAB_00479140;
              }
              bVar7 = false;
              pcVar19 = (code *)PTR_memcmp_00799528;
              goto LAB_004792a6;
            }
LAB_00479140:
            uVar11 = uVar11 + 1;
            puVar22 = puVar22 + 6;
            uVar18 = uVar24;
          } while (uVar12 != uVar11);
          bVar7 = false;
          pcVar19 = (code *)PTR_memcmp_00799528;
          uVar11 = uVar12;
        }
      }
      else {
        if (uVar14 == 2) {
          uVar11 = *(ulonglong *)(lVar23 + 0x58);
          uVar24 = *(ulonglong *)(lVar23 + 0x28);
          uVar25 = uVar24;
          if (uVar11 < uVar24) {
            uVar25 = uVar11;
          }
          iVar8 = (*(code *)PTR_memcmp_00799528)(lVar23,uVar25);
          lVar17 = uVar11 - uVar24;
          if (iVar8 != 0) {
            lVar17 = (longlong)iVar8;
          }
          param_1 = extraout_XMM0_Da_01;
          if (-1 < lVar17) goto LAB_004790ce;
        }
        pcVar19 = (code *)PTR_memcmp_00799528;
        uVar11 = 2;
        bVar7 = true;
        if (uVar12 != 2) {
          puVar22 = (ulonglong *)(lVar21 + param_2 + 0x88);
          do {
            uVar24 = puVar22[-3];
            uVar25 = uVar18;
            if (uVar24 < uVar18) {
              uVar25 = uVar24;
            }
            iVar8 = (*pcVar19)(param_1,uVar25);
            lVar21 = uVar24 - uVar18;
            if (iVar8 != 0) {
              lVar21 = (longlong)iVar8;
            }
            uVar14 = (uint)((ulonglong)lVar21 >> 0x3f);
            if (lVar21 == 0) {
              uVar14 = 2;
            }
            if ((char)uVar14 == '\x02') {
              uVar18 = *puVar22;
              uVar25 = puVar22[-6];
              uVar15 = uVar25;
              if (uVar18 < uVar25) {
                uVar15 = uVar18;
              }
              iVar8 = (*pcVar19)(2,uVar15);
              lVar21 = uVar18 - uVar25;
              if (iVar8 != 0) {
                lVar21 = (longlong)iVar8;
              }
              param_1 = extraout_XMM0_Da_04;
              if (-1 < lVar21) goto LAB_00479293;
            }
            else {
              param_1 = extraout_XMM0_Da_05;
              if (uVar14 == 0) {
LAB_00479293:
                goto LAB_004792a4;
              }
            }
            uVar11 = uVar11 + 1;
            puVar22 = puVar22 + 6;
            uVar18 = uVar24;
          } while (uVar12 != uVar11);
          uVar11 = uVar12;
LAB_004792a4:
          bVar7 = true;
        }
      }
LAB_004792a6:
      if (uVar11 < uVar10) goto LAB_00478fd8;
      if ((bVar7) && (uVar12 = uVar11 >> 1, uVar12 != 0)) {
        puVar13 = (undefined8 *)(param_2 + 0x20 + local_2b8 * 0x30);
        puVar16 = (undefined8 *)(uVar11 * 0x30 + local_2b8 * 0x30 + param_2 + -0x10);
        do {
          uVar4 = puVar13[-4];
          uVar5 = puVar13[-3];
          uVar6 = puVar16[-3];
          puVar13[-4] = puVar16[-4];
          puVar13[-3] = uVar6;
          puVar16[-4] = uVar4;
          puVar16[-3] = uVar5;
          uVar4 = puVar13[-2];
          uVar5 = puVar13[-1];
          uVar6 = puVar16[-1];
          puVar13[-2] = puVar16[-2];
          puVar13[-1] = uVar6;
          puVar16[-2] = uVar4;
          puVar16[-1] = uVar5;
          param_1 = *(undefined4 *)puVar13;
          uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
          uVar2 = *(undefined4 *)(puVar13 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar13 + 0xc);
          uVar4 = puVar16[1];
          *puVar13 = *puVar16;
          puVar13[1] = uVar4;
          *(undefined4 *)puVar16 = param_1;
          *(undefined4 *)((longlong)puVar16 + 4) = uVar1;
          *(undefined4 *)(puVar16 + 1) = uVar2;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uVar3;
          puVar13 = puVar13 + 6;
          puVar16 = puVar16 + -6;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar12 = uVar11 * 2 + 1;
  }
  uVar11 = ((uVar12 >> 1) + local_2b8 * 2) * lVar9 ^ (local_2b8 * 2 - (uVar20 >> 1)) * lVar9;
  lVar23 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  uVar14 = (uint)lVar23 ^ 0x3f;
  uVar11 = uVar20;
  do {
    uVar20 = uVar12;
    if (1 < uVar26) {
      do {
        while( true ) {
          if (abStack_283[uVar26] < (byte)uVar14) goto LAB_004794d6;
          uVar26 = uVar26 - 1;
          uVar18 = auStack_240[uVar26];
          uVar24 = uVar18 >> 1;
          uVar25 = uVar11 >> 1;
          uVar12 = uVar25 + uVar24;
          if ((param_5 < uVar12) || ((((uint)uVar18 | (uint)uVar11) & 1) != 0)) break;
          uVar11 = uVar12 * 2;
          if (uVar26 < 2) goto LAB_004794d0;
        }
        lVar23 = (local_2b8 - uVar12) * 0x30 + param_2;
        if ((uVar18 & 1) == 0) {
          lVar21 = 0x3f;
          if ((uVar24 | 1) != 0) {
            for (; (uVar24 | 1) >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          quicksort::quicksort::
          <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                    (lVar23,uVar24,param_4,param_5,((uint)lVar21 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
        }
        if ((uVar11 & 1) == 0) {
          lVar21 = 0x3f;
          if ((uVar25 | 1) != 0) {
            for (; (uVar25 | 1) >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          quicksort::quicksort::
          <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                    (uVar24 * 0x30 + lVar23,uVar25,param_4,param_5,((uint)lVar21 ^ 0x3f) * 2 ^ 0x7e,
                     0,param_7);
        }
        param_1 = merge::merge::
                  <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                            (lVar23,uVar12,param_4,param_5,uVar24,param_7);
        uVar11 = uVar12 * 2 + 1;
        pcVar19 = (code *)PTR_memcmp_00799528;
      } while (1 < uVar26);
LAB_004794d0:
      uVar26 = 1;
    }
LAB_004794d6:
    auStack_240[uVar26] = uVar11;
    abStack_283[uVar26 + 1] = (byte)uVar14;
    if (param_3 <= local_2b8) {
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar9 = 0x3f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      quicksort::quicksort::
      <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_2,param_3,param_4,param_5,((uint)lVar9 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
      return;
    }
    uVar26 = uVar26 + 1;
    local_2b8 = local_2b8 + (uVar20 >> 1);
    uVar12 = param_3 - local_2b8;
    if (local_2b8 <= param_3 && param_3 - local_2b8 != 0) goto LAB_00478fc0;
LAB_00478f9c:
    uVar14 = 0;
    uVar12 = 1;
    uVar11 = uVar20;
  } while( true );
}


