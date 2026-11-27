// 004781b0 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5,char param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  ulonglong local_2c0;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_3 < 2) {
    return;
  }
  lVar7 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  if (param_3 < 0x1001) {
    uVar11 = param_3 - (param_3 >> 1);
    uVar8 = 0x40;
    if (uVar11 < 0x40) {
      uVar8 = uVar11;
    }
  }
  else {
    uVar8 = (*(code *)PTR_sqrt_approx_007999c8)();
    param_1 = extraout_XMM0_Da;
  }
  uVar16 = 1;
  uVar22 = 0;
  local_2c0 = 0;
  uVar11 = param_3;
  if (param_3 != 0) goto LAB_004782a0;
LAB_00478280:
  uVar13 = 0;
  uVar11 = 1;
  uVar10 = uVar16;
  do {
    uVar16 = uVar11;
    if (1 < uVar22) {
      do {
        while( true ) {
          if (abStack_283[uVar22] < (byte)uVar13) goto LAB_004786b6;
          uVar22 = uVar22 - 1;
          uVar15 = auStack_240[uVar22];
          uVar19 = uVar15 >> 1;
          uVar21 = uVar10 >> 1;
          uVar11 = uVar21 + uVar19;
          if ((param_5 < uVar11) || ((((uint)uVar15 | (uint)uVar10) & 1) != 0)) break;
          uVar10 = uVar11 * 2;
          if (uVar22 < 2) goto LAB_004786b0;
        }
        lVar17 = (local_2c0 - uVar11) * 0x20 + param_2;
        if ((uVar15 & 1) == 0) {
          lVar20 = 0x3f;
          if ((uVar19 | 1) != 0) {
            for (; (uVar19 | 1) >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          quicksort::quicksort::
          <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                    (lVar17,uVar19,param_4,param_5,((uint)lVar20 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
        }
        if ((uVar10 & 1) == 0) {
          lVar20 = 0x3f;
          if ((uVar21 | 1) != 0) {
            for (; (uVar21 | 1) >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          quicksort::quicksort::
          <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                    (uVar19 * 0x20 + lVar17,uVar21,param_4,param_5,((uint)lVar20 ^ 0x3f) * 2 ^ 0x7e,
                     0,param_7);
        }
        param_1 = merge::merge::
                  <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                            (lVar17,uVar11,param_4,param_5);
        uVar10 = uVar11 * 2 + 1;
      } while (1 < uVar22);
LAB_004786b0:
      uVar22 = 1;
    }
LAB_004786b6:
    auStack_240[uVar22] = uVar10;
    abStack_283[uVar22 + 1] = (byte)uVar13;
    if (param_3 <= local_2c0) {
      if ((uVar10 & 1) != 0) {
        return;
      }
      lVar7 = 0x3f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      quicksort::quicksort::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                (param_2,param_3,param_4,param_5,((uint)lVar7 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
      return;
    }
    uVar22 = uVar22 + 1;
    local_2c0 = local_2c0 + (uVar16 >> 1);
    uVar11 = param_3 - local_2c0;
    if (param_3 < local_2c0 || uVar11 == 0) goto LAB_00478280;
LAB_004782a0:
    lVar20 = local_2c0 * 0x20;
    lVar17 = param_2 + lVar20;
    if (uVar11 < uVar8) {
LAB_004782bc:
      if (param_6 == '\0') {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        uVar11 = uVar11 * 2;
      }
      else {
        if (0x1f < uVar11) {
          uVar11 = 0x20;
        }
        param_1 = quicksort::quicksort::
                  <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                            (lVar17,uVar11,param_4,param_5,0,0,param_7);
        uVar11 = (uVar11 & 0xffffffff) * 2 + 1;
      }
    }
    else {
      if (1 < uVar11) {
        pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(param_1,lVar17 + 0x20);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = PTR_NULL_00799530;
        }
        if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
          uVar10 = *(ulonglong *)(pcVar9 + 0x10);
        }
        else {
          uVar10 = 0;
        }
        pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,lVar17);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = PTR_NULL_00799530;
        }
        if (((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) &&
           (uVar10 < *(ulonglong *)(pcVar9 + 0x10))) {
          uVar10 = 2;
          bVar6 = true;
          if (uVar11 == 2) goto joined_r0x004783fa;
          lVar18 = param_2 + 0x20 + lVar20;
          uVar23 = extraout_XMM0_Da_01;
          do {
            pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,lVar18 + 0x20);
            if (pcVar9 == (char *)0x0) {
              pcVar9 = PTR_NULL_00799530;
            }
            if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
              uVar15 = *(ulonglong *)(pcVar9 + 0x10);
            }
            else {
              uVar15 = 0;
            }
            pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,lVar18);
            if (pcVar9 == (char *)0x0) {
              pcVar9 = PTR_NULL_00799530;
            }
            if (((*pcVar9 != '\x02') || (*(longlong *)(pcVar9 + 8) != 0)) ||
               (*(ulonglong *)(pcVar9 + 0x10) <= uVar15)) goto LAB_004787c4;
            uVar10 = uVar10 + 1;
            lVar18 = lVar18 + 0x20;
            uVar23 = extraout_XMM0_Da_05;
          } while (uVar11 != uVar10);
          uVar10 = uVar11;
LAB_004787c4:
          bVar6 = true;
          param_1 = extraout_XMM0_Da_05;
joined_r0x00478715:
          if (uVar10 < uVar8) goto LAB_004782bc;
        }
        else {
          if (uVar11 != 2) {
            uVar10 = 2;
            lVar18 = lVar20 + param_2 + 0x20;
            uVar23 = extraout_XMM0_Da_01;
            do {
              pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,lVar18 + 0x20);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = PTR_NULL_00799530;
              }
              if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
                uVar15 = *(ulonglong *)(pcVar9 + 0x10);
              }
              else {
                uVar15 = 0;
              }
              pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_02,lVar18);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = PTR_NULL_00799530;
              }
              param_1 = extraout_XMM0_Da_03;
              if (((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) &&
                 (uVar15 < *(ulonglong *)(pcVar9 + 0x10))) {
                bVar6 = false;
                goto joined_r0x00478715;
              }
              uVar10 = uVar10 + 1;
              lVar18 = lVar18 + 0x20;
              uVar23 = extraout_XMM0_Da_03;
            } while (uVar11 != uVar10);
            bVar6 = false;
            uVar10 = uVar11;
            goto joined_r0x00478715;
          }
          bVar6 = false;
joined_r0x004783fa:
          uVar10 = 2;
          param_1 = extraout_XMM0_Da_01;
          if (2 < uVar8) goto LAB_004782bc;
        }
        uVar11 = uVar10;
        if ((bVar6) && (uVar10 = uVar11 >> 1, uVar10 != 0)) {
          puVar12 = (undefined8 *)(param_2 + 0x10 + lVar20);
          puVar14 = (undefined8 *)(uVar11 * 0x20 + lVar20 + param_2 + -0x10);
          do {
            uVar3 = puVar12[-2];
            uVar4 = puVar12[-1];
            uVar5 = puVar14[-1];
            puVar12[-2] = puVar14[-2];
            puVar12[-1] = uVar5;
            puVar14[-2] = uVar3;
            puVar14[-1] = uVar4;
            param_1 = *(undefined4 *)puVar12;
            uVar23 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar1 = *(undefined4 *)(puVar12 + 1);
            uVar2 = *(undefined4 *)((longlong)puVar12 + 0xc);
            uVar3 = puVar14[1];
            *puVar12 = *puVar14;
            puVar12[1] = uVar3;
            *(undefined4 *)puVar14 = param_1;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar23;
            *(undefined4 *)(puVar14 + 1) = uVar1;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar2;
            puVar12 = puVar12 + 4;
            puVar14 = puVar14 + -4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar11 = uVar11 * 2 + 1;
    }
    uVar10 = ((uVar11 >> 1) + local_2c0 * 2) * lVar7 ^ (local_2c0 * 2 - (uVar16 >> 1)) * lVar7;
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar13 = (uint)lVar17 ^ 0x3f;
    uVar10 = uVar16;
  } while( true );
}


