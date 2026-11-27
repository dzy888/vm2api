// 0047afa0 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,longlong *param_4,ulonglong param_5
          ,char param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar24;
  ulonglong local_318;
  ulonglong local_2e8;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_3 < 2) {
    return;
  }
  lVar5 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  if (param_3 < 0x1001) {
    uVar8 = param_3 - (param_3 >> 1);
    local_2e8 = 0x40;
    if (uVar8 < 0x40) {
      local_2e8 = uVar8;
    }
  }
  else {
    local_2e8 = (*(code *)PTR_sqrt_approx_007999c8)();
    param_1 = extraout_XMM0_Da;
  }
  uVar8 = 1;
  uVar17 = 0;
  uVar20 = 0;
  local_318 = param_3;
  if (param_3 == 0) goto LAB_0047b09b;
LAB_0047b0c0:
  lVar11 = uVar17 * 0x10;
  plVar19 = (longlong *)(param_2 + lVar11);
  if (local_318 < local_2e8) {
LAB_0047b0d7:
    if (param_6 == '\0') {
      if (local_2e8 <= local_318) {
        local_318 = local_2e8;
      }
      local_318 = local_318 * 2;
    }
    else {
      if (0x1f < local_318) {
        local_318 = 0x20;
      }
      param_1 = quicksort::quicksort::
                <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                          (plVar19,local_318,param_4,param_5,0,0,param_7);
      local_318 = (local_318 & 0xffffffff) * 2 + 1;
    }
    goto LAB_0047b39d;
  }
  uVar6 = local_318;
  if (1 < local_318) {
    lVar14 = *(longlong *)(plVar19[2] + 0x10);
    lVar13 = *(longlong *)(*plVar19 + 0x10);
    iVar4 = (*(code *)PTR_memcmp_00799528)();
    lVar13 = lVar14 - lVar13;
    if (iVar4 != 0) {
      lVar13 = (longlong)iVar4;
    }
    if (lVar13 < 0) {
      if (local_318 != 2) {
        plVar18 = (longlong *)(param_2 + 0x20 + lVar11);
        uVar6 = 2;
        do {
          lVar1 = *(longlong *)(*plVar18 + 0x10);
          iVar4 = (*(code *)PTR_memcmp_00799528)();
          lVar14 = lVar1 - lVar14;
          if (iVar4 != 0) {
            lVar14 = (longlong)iVar4;
          }
          param_1 = extraout_XMM0_Da_02;
          if (-1 < lVar14) goto LAB_0047b2a5;
          uVar6 = uVar6 + 1;
          plVar18 = plVar18 + 2;
          lVar14 = lVar1;
        } while (local_318 != uVar6);
        goto LAB_0047b2a0;
      }
      uVar6 = 2;
      uVar9 = 1;
LAB_0047b2dc:
      if (uVar9 == 1) {
        uVar12 = 0;
      }
      else {
        plVar18 = (longlong *)(param_2 + 0x10 + lVar11);
        plVar21 = (longlong *)(uVar6 * 0x10 + lVar11 + param_2 + -0x10);
        uVar12 = 0;
        do {
          lVar11 = plVar18[-2];
          lVar14 = plVar18[-1];
          lVar13 = plVar21[1];
          plVar18[-2] = *plVar21;
          plVar18[-1] = lVar13;
          *plVar21 = lVar11;
          plVar21[1] = lVar14;
          param_1 = (undefined4)*plVar18;
          uVar24 = *(undefined4 *)((longlong)plVar18 + 4);
          lVar14 = plVar18[1];
          uVar2 = *(undefined4 *)((longlong)plVar18 + 0xc);
          lVar11 = (plVar19 + uVar6 * 2 + (uVar12 ^ 0xffffffffffffffe) * 2)[1];
          *plVar18 = plVar19[uVar6 * 2 + (uVar12 ^ 0xffffffffffffffe) * 2];
          plVar18[1] = lVar11;
          plVar22 = plVar19 + uVar6 * 2 + (uVar12 ^ 0xffffffffffffffe) * 2;
          *(undefined4 *)plVar22 = param_1;
          *(undefined4 *)((longlong)plVar22 + 4) = uVar24;
          *(int *)(plVar22 + 1) = (int)lVar14;
          *(undefined4 *)((longlong)plVar22 + 0xc) = uVar2;
          uVar12 = uVar12 + 2;
          plVar18 = plVar18 + 4;
          plVar21 = plVar21 + -4;
        } while ((uVar9 & 0xfffffffffffffffe) != uVar12);
        if ((uVar9 & 1) == 0) goto LAB_0047b390;
      }
      plVar18 = plVar19 + uVar12 * 2;
      param_1 = (undefined4)*plVar18;
      uVar24 = *(undefined4 *)((longlong)plVar18 + 4);
      lVar14 = plVar18[1];
      uVar2 = *(undefined4 *)((longlong)plVar18 + 0xc);
      lVar11 = (plVar19 + uVar6 * 2 + ~uVar12 * 2)[1];
      plVar19[uVar12 * 2] = plVar19[uVar6 * 2 + ~uVar12 * 2];
      (plVar19 + uVar12 * 2)[1] = lVar11;
      plVar19 = plVar19 + uVar6 * 2 + ~uVar12 * 2;
      *(undefined4 *)plVar19 = param_1;
      *(undefined4 *)((longlong)plVar19 + 4) = uVar24;
      *(int *)(plVar19 + 1) = (int)lVar14;
      *(undefined4 *)((longlong)plVar19 + 0xc) = uVar2;
    }
    else {
      uVar6 = 2;
      param_1 = extraout_XMM0_Da_00;
      if (local_318 != 2) {
        plVar18 = (longlong *)(param_2 + 0x20 + lVar11);
        do {
          lVar1 = *(longlong *)(*plVar18 + 0x10);
          iVar4 = (*(code *)PTR_memcmp_00799528)();
          lVar14 = lVar1 - lVar14;
          if (iVar4 != 0) {
            lVar14 = (longlong)iVar4;
          }
          param_1 = extraout_XMM0_Da_01;
          if (lVar14 < 0) goto LAB_0047b2a5;
          uVar6 = uVar6 + 1;
          plVar18 = plVar18 + 2;
          lVar14 = lVar1;
        } while (local_318 != uVar6);
LAB_0047b2a0:
        uVar6 = local_318;
LAB_0047b2a5:
        if (uVar6 < local_2e8) goto LAB_0047b0d7;
        if ((lVar13 < 0) && (uVar9 = uVar6 >> 1, uVar9 != 0)) goto LAB_0047b2dc;
      }
    }
  }
LAB_0047b390:
  local_318 = uVar6 * 2 + 1;
LAB_0047b39d:
  uVar6 = ((local_318 >> 1) + uVar17 * 2) * lVar5 ^ (uVar17 * 2 - (uVar8 >> 1)) * lVar5;
  lVar11 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  uVar10 = (uint)lVar11 ^ 0x3f;
  uVar6 = uVar8;
  do {
    uVar8 = local_318;
    if (1 < uVar20) {
      do {
        while( true ) {
          if (abStack_283[uVar20] < (byte)uVar10) goto LAB_0047b6d6;
          uVar20 = uVar20 - 1;
          uVar12 = auStack_240[uVar20];
          uVar15 = uVar12 >> 1;
          uVar23 = uVar6 >> 1;
          uVar9 = uVar15 + uVar23;
          if ((param_5 < uVar9) || ((((uint)uVar12 | (uint)uVar6) & 1) != 0)) break;
          uVar6 = uVar9 * 2;
          if (uVar20 < 2) goto LAB_0047b6d0;
        }
        plVar19 = (longlong *)((uVar17 - uVar9) * 0x10 + param_2);
        if ((uVar12 & 1) == 0) {
          lVar11 = 0x3f;
          if ((uVar15 | 1) != 0) {
            for (; (uVar15 | 1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          param_1 = quicksort::quicksort::
                    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                              (plVar19,uVar15,param_4,param_5,((uint)lVar11 ^ 0x3f) * 2 ^ 0x7e,0,
                               param_7);
        }
        if ((uVar6 & 1) == 0) {
          lVar11 = 0x3f;
          if ((uVar23 | 1) != 0) {
            for (; (uVar23 | 1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          param_1 = quicksort::quicksort::
                    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                              (plVar19 + uVar15 * 2,uVar23,param_4,param_5,
                               ((uint)lVar11 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
        }
        if ((uVar23 != 0) && (uVar15 != 0)) {
          uVar6 = uVar15;
          if (uVar23 < uVar15) {
            uVar6 = uVar23;
          }
          if (uVar6 <= param_5) {
            plVar22 = plVar19 + uVar15 * 2;
            (*(code *)PTR_memcpy_00799008)(param_1,uVar6 * 0x10);
            plVar21 = param_4 + uVar6 * 2;
            plVar18 = param_4;
            if (uVar23 < uVar15) {
              puVar16 = (undefined4 *)(uVar17 * 0x10 + param_2 + -0x10);
              do {
                uVar6 = *(ulonglong *)(plVar21[-2] + 0x10);
                uVar12 = *(ulonglong *)(plVar22[-2] + 0x10);
                uVar15 = uVar6;
                if (uVar12 <= uVar6) {
                  uVar15 = uVar12;
                }
                iVar4 = (*(code *)PTR_memcmp_00799528)(plVar22[-2],uVar15);
                lVar11 = uVar6 - uVar12;
                if (iVar4 != 0) {
                  lVar11 = (longlong)iVar4;
                }
                plVar7 = plVar22;
                if (-1 < lVar11) {
                  plVar7 = plVar21;
                }
                uVar24 = (undefined4)plVar7[-2];
                uVar2 = *(undefined4 *)((longlong)plVar7 + -0xc);
                lVar14 = plVar7[-1];
                uVar3 = *(undefined4 *)((longlong)plVar7 + -4);
                *puVar16 = uVar24;
                puVar16[1] = uVar2;
                puVar16[2] = (int)lVar14;
                puVar16[3] = uVar3;
                plVar22 = plVar22 + (ulonglong)(-1 < lVar11) * 2 + -2;
                plVar21 = (longlong *)
                          ((longlong)plVar21 +
                          ((ulonglong)((uint)((ulonglong)lVar11 >> 0x3f) << 4) - 0x10));
              } while ((plVar22 != plVar19) && (puVar16 = puVar16 + -4, plVar21 != param_4));
            }
            else {
              do {
                uVar6 = *(ulonglong *)(*plVar22 + 0x10);
                uVar12 = *(ulonglong *)(*plVar18 + 0x10);
                uVar15 = uVar12;
                if (uVar6 < uVar12) {
                  uVar15 = uVar6;
                }
                iVar4 = (*(code *)PTR_memcmp_00799528)(*plVar18,uVar15);
                lVar11 = uVar6 - uVar12;
                if (iVar4 != 0) {
                  lVar11 = (longlong)iVar4;
                }
                plVar7 = plVar22;
                if (-1 < lVar11) {
                  plVar7 = plVar18;
                }
                uVar24 = (undefined4)*plVar7;
                uVar2 = *(undefined4 *)((longlong)plVar7 + 4);
                lVar14 = plVar7[1];
                uVar3 = *(undefined4 *)((longlong)plVar7 + 0xc);
                *(undefined4 *)plVar19 = uVar24;
                *(undefined4 *)((longlong)plVar19 + 4) = uVar2;
                *(int *)(plVar19 + 1) = (int)lVar14;
                *(undefined4 *)((longlong)plVar19 + 0xc) = uVar3;
                plVar18 = plVar18 + (ulonglong)(-1 < lVar11) * 2;
                plVar19 = plVar19 + 2;
              } while ((plVar18 != plVar21) &&
                      (plVar22 = (longlong *)
                                 ((longlong)plVar22 +
                                 (ulonglong)((uint)((ulonglong)lVar11 >> 0x3f) << 4)),
                      plVar22 != (longlong *)(param_2 + uVar17 * 0x10)));
            }
            param_1 = (*(code *)PTR_memcpy_00799008)(uVar24,(longlong)plVar21 - (longlong)plVar18);
          }
        }
        uVar6 = uVar9 * 2 + 1;
      } while (1 < uVar20);
LAB_0047b6d0:
      uVar20 = 1;
    }
LAB_0047b6d6:
    auStack_240[uVar20] = uVar6;
    abStack_283[uVar20 + 1] = (byte)uVar10;
    if (param_3 <= uVar17) {
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar5 = 0x3f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      quicksort::quicksort::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_2,param_3,param_4,param_5,((uint)lVar5 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
      return;
    }
    uVar20 = uVar20 + 1;
    uVar17 = uVar17 + (uVar8 >> 1);
    local_318 = param_3 - uVar17;
    if (uVar17 <= param_3 && param_3 - uVar17 != 0) goto LAB_0047b0c0;
LAB_0047b09b:
    uVar10 = 0;
    local_318 = 1;
    uVar6 = uVar8;
  } while( true );
}


