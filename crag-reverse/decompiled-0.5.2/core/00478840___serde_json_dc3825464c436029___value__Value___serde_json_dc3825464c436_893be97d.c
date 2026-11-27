// 00478840 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  ulonglong local_2f0;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar8 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar12 = param_2 - (param_2 >> 1);
    uVar9 = 0x40;
    if (uVar12 < 0x40) {
      uVar9 = uVar12;
    }
  }
  else {
    uVar9 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar17 = 1;
  uVar22 = 0;
  local_2f0 = 0;
  uVar12 = param_2;
  if (param_2 != 0) goto LAB_00478930;
LAB_00478910:
  uVar14 = 0;
  uVar12 = 1;
  uVar11 = uVar17;
  do {
    uVar17 = uVar12;
    if (1 < uVar22) {
      do {
        while( true ) {
          if (abStack_283[uVar22] < (byte)uVar14) goto LAB_00478d36;
          uVar22 = uVar22 - 1;
          uVar16 = auStack_240[uVar22];
          uVar18 = uVar16 >> 1;
          uVar20 = uVar11 >> 1;
          uVar12 = uVar20 + uVar18;
          if ((param_4 < uVar12) || ((((uint)uVar16 | (uint)uVar11) & 1) != 0)) break;
          uVar11 = uVar12 * 2;
          if (uVar22 < 2) goto LAB_00478d30;
        }
        lVar19 = (local_2f0 - uVar12) * 0x20 + param_1;
        if ((uVar16 & 1) == 0) {
          lVar21 = 0x3f;
          if ((uVar18 | 1) != 0) {
            for (; (uVar18 | 1) >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          quicksort::quicksort::
          <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                    (lVar19,uVar18,param_3,param_4,((uint)lVar21 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar11 & 1) == 0) {
          lVar21 = 0x3f;
          if ((uVar20 | 1) != 0) {
            for (; (uVar20 | 1) >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          quicksort::quicksort::
          <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                    (uVar18 * 0x20 + lVar19,uVar20,param_3,param_4,((uint)lVar21 ^ 0x3f) * 2 ^ 0x7e,
                     0,param_6);
        }
        merge::merge::
        <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                  (lVar19,uVar12,param_3,param_4);
        uVar11 = uVar12 * 2 + 1;
      } while (1 < uVar22);
LAB_00478d30:
      uVar22 = 1;
    }
LAB_00478d36:
    auStack_240[uVar22] = uVar11;
    abStack_283[uVar22 + 1] = (byte)uVar14;
    if (param_2 <= local_2f0) {
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar8 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      quicksort::quicksort::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,((uint)lVar8 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar22 = uVar22 + 1;
    local_2f0 = local_2f0 + (uVar17 >> 1);
    uVar12 = param_2 - local_2f0;
    if (param_2 < local_2f0 || uVar12 == 0) goto LAB_00478910;
LAB_00478930:
    lVar19 = local_2f0 * 0x20;
    if (uVar12 < uVar9) {
LAB_0047894a:
      if (param_5 == '\0') {
        if (uVar9 <= uVar12) {
          uVar12 = uVar9;
        }
        uVar12 = uVar12 * 2;
      }
      else {
        if (0x1f < uVar12) {
          uVar12 = 0x20;
        }
        quicksort::quicksort::
        <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                  (param_1 + lVar19,uVar12,param_3,param_4,0,0,param_6);
        uVar12 = (uVar12 & 0xffffffff) * 2 + 1;
      }
    }
    else {
      if (1 < uVar12) {
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)();
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar11 = *(ulonglong *)(pcVar10 + 0x10);
        }
        else {
          uVar11 = 0;
        }
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)
                                    (extraout_XMM0_Da,param_1 + lVar19 + 0x20);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if (((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) &&
           (uVar11 < *(ulonglong *)(pcVar10 + 0x10))) {
          uVar11 = 2;
          bVar7 = true;
          if (uVar12 == 2) goto joined_r0x00478a8b;
          lVar21 = lVar19 + param_1 + 0x20;
          uVar23 = extraout_XMM0_Da_00;
          do {
            pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,lVar21);
            if (pcVar10 == (char *)0x0) {
              pcVar10 = PTR_NULL_00799530;
            }
            if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
              uVar16 = *(ulonglong *)(pcVar10 + 0x10);
            }
            else {
              uVar16 = 0;
            }
            lVar21 = lVar21 + 0x20;
            pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_03,lVar21);
            if (pcVar10 == (char *)0x0) {
              pcVar10 = PTR_NULL_00799530;
            }
            if (((*pcVar10 != '\x02') || (*(longlong *)(pcVar10 + 8) != 0)) ||
               (*(ulonglong *)(pcVar10 + 0x10) <= uVar16)) goto LAB_00478e34;
            uVar11 = uVar11 + 1;
            uVar23 = extraout_XMM0_Da_04;
          } while (uVar12 != uVar11);
          uVar11 = uVar12;
LAB_00478e34:
          bVar7 = true;
joined_r0x00478d96:
          if (uVar11 < uVar9) goto LAB_0047894a;
        }
        else {
          if (uVar12 != 2) {
            lVar21 = lVar19 + param_1 + 0x20;
            uVar11 = 2;
            uVar23 = extraout_XMM0_Da_00;
            do {
              pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,lVar21);
              if (pcVar10 == (char *)0x0) {
                pcVar10 = PTR_NULL_00799530;
              }
              if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
                uVar16 = *(ulonglong *)(pcVar10 + 0x10);
              }
              else {
                uVar16 = 0;
              }
              lVar21 = lVar21 + 0x20;
              pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,lVar21);
              if (pcVar10 == (char *)0x0) {
                pcVar10 = PTR_NULL_00799530;
              }
              if (((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) &&
                 (uVar16 < *(ulonglong *)(pcVar10 + 0x10))) {
                bVar7 = false;
                goto joined_r0x00478d96;
              }
              uVar11 = uVar11 + 1;
              uVar23 = extraout_XMM0_Da_02;
            } while (uVar12 != uVar11);
            bVar7 = false;
            uVar11 = uVar12;
            goto joined_r0x00478d96;
          }
          bVar7 = false;
joined_r0x00478a8b:
          uVar11 = 2;
          if (2 < uVar9) goto LAB_0047894a;
        }
        uVar12 = uVar11;
        if ((bVar7) && (uVar11 = uVar12 >> 1, uVar11 != 0)) {
          puVar13 = (undefined8 *)(param_1 + 0x10 + lVar19);
          puVar15 = (undefined8 *)(uVar12 * 0x20 + lVar19 + param_1 + -0x10);
          do {
            uVar4 = puVar13[-2];
            uVar5 = puVar13[-1];
            uVar6 = puVar15[-1];
            puVar13[-2] = puVar15[-2];
            puVar13[-1] = uVar6;
            puVar15[-2] = uVar4;
            puVar15[-1] = uVar5;
            uVar23 = *(undefined4 *)puVar13;
            uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar2 = *(undefined4 *)(puVar13 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar4 = puVar15[1];
            *puVar13 = *puVar15;
            puVar13[1] = uVar4;
            *(undefined4 *)puVar15 = uVar23;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar1;
            *(undefined4 *)(puVar15 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar3;
            puVar13 = puVar13 + 4;
            puVar15 = puVar15 + -4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      uVar12 = uVar12 * 2 + 1;
    }
    uVar11 = ((uVar12 >> 1) + local_2f0 * 2) * lVar8 ^ (local_2f0 * 2 - (uVar17 >> 1)) * lVar8;
    lVar19 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar14 = (uint)lVar19 ^ 0x3f;
    uVar11 = uVar17;
  } while( true );
}


