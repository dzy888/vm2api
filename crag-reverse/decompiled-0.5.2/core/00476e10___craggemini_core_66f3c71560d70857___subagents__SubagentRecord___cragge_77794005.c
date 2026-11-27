// 00476e10 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
          (longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong local_328;
  ulonglong local_318;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar4 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar7 = param_2 - (param_2 >> 1);
    uVar5 = 0x40;
    if (uVar7 < 0x40) {
      uVar5 = uVar7;
    }
  }
  else {
    uVar5 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar7 = 1;
  uVar17 = 0;
  local_318 = 0;
  local_328 = param_2;
  if (param_2 == 0) goto LAB_00476f1e;
LAB_00476f40:
  lVar12 = local_318 * 200;
  lVar16 = param_1 + lVar12;
  if (local_328 < uVar5) {
LAB_00476f57:
    if (param_5 == '\0') {
      if (uVar5 <= local_328) {
        local_328 = uVar5;
      }
      local_328 = local_328 * 2;
    }
    else {
      if (0x1f < local_328) {
        local_328 = 0x20;
      }
      quicksort::quicksort::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                (lVar16,local_328,param_3,param_4,0,0,param_6);
      local_328 = (local_328 & 0xffffffff) * 2 + 1;
    }
    goto LAB_004773b2;
  }
  if (local_328 < 2) {
    uVar20 = local_328;
  }
  else {
    uVar6 = *(ulonglong *)(lVar16 + 0x108);
    uVar20 = *(ulonglong *)(lVar16 + 0x40);
    uVar10 = uVar20;
    if (uVar6 <= uVar20) {
      uVar10 = uVar6;
    }
    iVar3 = (*(code *)PTR_memcmp_00799528)(local_328,uVar10);
    lVar18 = uVar20 - uVar6;
    if (iVar3 != 0) {
      lVar18 = (longlong)iVar3;
    }
    if (lVar18 < 0) {
      if (local_328 != 2) {
        puVar15 = (ulonglong *)(param_1 + 0x1d0 + lVar12);
        uVar20 = 2;
        do {
          uVar10 = *puVar15;
          iVar3 = (*(code *)PTR_memcmp_00799528)();
          lVar14 = uVar6 - uVar10;
          if (iVar3 != 0) {
            lVar14 = (longlong)iVar3;
          }
          if (-1 < lVar14) goto LAB_00477134;
          uVar20 = uVar20 + 1;
          puVar15 = puVar15 + 0x19;
          uVar6 = uVar10;
        } while (local_328 != uVar20);
        goto LAB_0047712f;
      }
      uVar20 = 2;
      uVar6 = 1;
LAB_00477175:
      puVar8 = (undefined8 *)(param_1 + 0xc0 + lVar12);
      puVar11 = (undefined8 *)(uVar20 * 200 + lVar12 + param_1 + -8);
      do {
        uVar1 = puVar8[-0x18];
        puVar8[-0x18] = puVar11[-0x18];
        puVar11[-0x18] = uVar1;
        uVar1 = puVar8[-0x17];
        puVar8[-0x17] = puVar11[-0x17];
        puVar11[-0x17] = uVar1;
        uVar1 = puVar8[-0x16];
        puVar8[-0x16] = puVar11[-0x16];
        puVar11[-0x16] = uVar1;
        uVar1 = puVar8[-0x15];
        puVar8[-0x15] = puVar11[-0x15];
        puVar11[-0x15] = uVar1;
        uVar1 = puVar8[-0x14];
        puVar8[-0x14] = puVar11[-0x14];
        puVar11[-0x14] = uVar1;
        uVar1 = puVar8[-0x13];
        puVar8[-0x13] = puVar11[-0x13];
        puVar11[-0x13] = uVar1;
        uVar1 = puVar8[-0x12];
        puVar8[-0x12] = puVar11[-0x12];
        puVar11[-0x12] = uVar1;
        uVar1 = puVar8[-0x11];
        puVar8[-0x11] = puVar11[-0x11];
        puVar11[-0x11] = uVar1;
        uVar1 = puVar8[-0x10];
        puVar8[-0x10] = puVar11[-0x10];
        puVar11[-0x10] = uVar1;
        uVar1 = puVar8[-0xf];
        puVar8[-0xf] = puVar11[-0xf];
        puVar11[-0xf] = uVar1;
        uVar1 = puVar8[-0xe];
        puVar8[-0xe] = puVar11[-0xe];
        puVar11[-0xe] = uVar1;
        uVar1 = puVar8[-0xd];
        puVar8[-0xd] = puVar11[-0xd];
        puVar11[-0xd] = uVar1;
        uVar1 = puVar8[-0xc];
        puVar8[-0xc] = puVar11[-0xc];
        puVar11[-0xc] = uVar1;
        uVar1 = puVar8[-0xb];
        puVar8[-0xb] = puVar11[-0xb];
        puVar11[-0xb] = uVar1;
        uVar1 = puVar8[-10];
        puVar8[-10] = puVar11[-10];
        puVar11[-10] = uVar1;
        uVar1 = puVar8[-9];
        puVar8[-9] = puVar11[-9];
        puVar11[-9] = uVar1;
        uVar1 = puVar8[-8];
        puVar8[-8] = puVar11[-8];
        puVar11[-8] = uVar1;
        uVar1 = puVar8[-7];
        puVar8[-7] = puVar11[-7];
        puVar11[-7] = uVar1;
        uVar1 = puVar8[-6];
        puVar8[-6] = puVar11[-6];
        puVar11[-6] = uVar1;
        uVar1 = puVar8[-5];
        puVar8[-5] = puVar11[-5];
        puVar11[-5] = uVar1;
        uVar1 = puVar8[-4];
        puVar8[-4] = puVar11[-4];
        puVar11[-4] = uVar1;
        uVar1 = puVar8[-3];
        puVar8[-3] = puVar11[-3];
        puVar11[-3] = uVar1;
        uVar1 = puVar8[-2];
        puVar8[-2] = puVar11[-2];
        puVar11[-2] = uVar1;
        uVar1 = puVar8[-1];
        puVar8[-1] = puVar11[-1];
        puVar11[-1] = uVar1;
        uVar1 = *puVar8;
        *puVar8 = *puVar11;
        *puVar11 = uVar1;
        puVar8 = puVar8 + 0x19;
        puVar11 = puVar11 + -0x19;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      uVar20 = 2;
      if (local_328 != 2) {
        puVar15 = (ulonglong *)(param_1 + 0x1d0 + lVar12);
        do {
          uVar10 = *puVar15;
          iVar3 = (*(code *)PTR_memcmp_00799528)();
          lVar14 = uVar6 - uVar10;
          if (iVar3 != 0) {
            lVar14 = (longlong)iVar3;
          }
          if (lVar14 < 0) goto LAB_00477134;
          uVar20 = uVar20 + 1;
          puVar15 = puVar15 + 0x19;
          uVar6 = uVar10;
        } while (local_328 != uVar20);
LAB_0047712f:
        uVar20 = local_328;
LAB_00477134:
        if (uVar20 < uVar5) goto LAB_00476f57;
        if ((lVar18 < 0) && (uVar6 = uVar20 >> 1, uVar6 != 0)) goto LAB_00477175;
      }
    }
  }
  local_328 = uVar20 * 2 + 1;
LAB_004773b2:
  uVar6 = ((local_328 >> 1) + local_318 * 2) * lVar4 ^ (local_318 * 2 - (uVar7 >> 1)) * lVar4;
  lVar16 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  uVar9 = (uint)lVar16 ^ 0x3f;
  uVar6 = uVar7;
  do {
    uVar7 = local_328;
    if (1 < uVar17) {
      do {
        while( true ) {
          if (abStack_283[uVar17] < (byte)uVar9) goto LAB_00477766;
          uVar17 = uVar17 - 1;
          uVar10 = auStack_240[uVar17];
          uVar19 = uVar10 >> 1;
          uVar13 = uVar6 >> 1;
          uVar20 = uVar13 + uVar19;
          if ((param_4 < uVar20) || ((((uint)uVar10 | (uint)uVar6) & 1) != 0)) break;
          uVar6 = uVar20 * 2;
          if (uVar17 < 2) goto LAB_00477760;
        }
        lVar16 = (local_318 - uVar20) * 200 + param_1;
        if ((uVar10 & 1) == 0) {
          lVar12 = 0x3f;
          if ((uVar19 | 1) != 0) {
            for (; (uVar19 | 1) >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          quicksort::quicksort::
          <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                    (lVar16,uVar19,param_3,param_4,((uint)lVar12 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar6 & 1) == 0) {
          lVar12 = 0x3f;
          if ((uVar13 | 1) != 0) {
            for (; (uVar13 | 1) >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          quicksort::quicksort::
          <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                    (uVar19 * 200 + lVar16,uVar13,param_3,param_4,((uint)lVar12 ^ 0x3f) * 2 ^ 0x7e,0
                     ,param_6);
        }
        if ((uVar13 != 0) && (uVar19 != 0)) {
          uVar6 = uVar19;
          if (uVar13 < uVar19) {
            uVar6 = uVar13;
          }
          if (uVar6 <= param_4) {
            lVar12 = uVar19 * 200 + lVar16;
            (*(code *)PTR_memcpy_00799008)();
            lVar18 = uVar6 * 200 + param_3;
            if (uVar13 < uVar19) {
              do {
                lVar14 = *(longlong *)(lVar18 + -0x88);
                lVar2 = *(longlong *)(lVar12 + -0x88);
                iVar3 = (*(code *)PTR_memcmp_00799528)();
                lVar14 = lVar2 - lVar14;
                if (iVar3 != 0) {
                  lVar14 = (longlong)iVar3;
                }
                (*(code *)PTR_memcpy_00799008)();
                lVar12 = lVar12 + (ulonglong)(-1 < lVar14) * 200 + -200;
                lVar18 = lVar18 + (lVar14 >> 0x3f) * -200 + -200;
              } while ((lVar12 != lVar16) && (lVar18 != param_3));
            }
            else {
              lVar16 = param_3;
              do {
                lVar14 = *(longlong *)(lVar12 + 0x40);
                lVar2 = *(longlong *)(lVar16 + 0x40);
                iVar3 = (*(code *)PTR_memcmp_00799528)();
                lVar14 = lVar2 - lVar14;
                if (iVar3 != 0) {
                  lVar14 = (longlong)iVar3;
                }
                (*(code *)PTR_memcpy_00799008)();
                lVar16 = (ulonglong)(-1 < lVar14) * 200 + lVar16;
              } while ((lVar16 != lVar18) &&
                      (lVar12 = lVar12 + (lVar14 >> 0x3f) * -200,
                      lVar12 != param_1 + local_318 * 200));
            }
            (*(code *)PTR_memcpy_00799008)();
          }
        }
        uVar6 = (uVar13 + uVar19) * 2 + 1;
      } while (1 < uVar17);
LAB_00477760:
      uVar17 = 1;
    }
LAB_00477766:
    auStack_240[uVar17] = uVar6;
    abStack_283[uVar17 + 1] = (byte)uVar9;
    if (param_2 <= local_318) {
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar4 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      quicksort::quicksort::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                (param_1,param_2,param_3,param_4,((uint)lVar4 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar17 = uVar17 + 1;
    local_318 = local_318 + (uVar7 >> 1);
    local_328 = param_2 - local_318;
    if (local_318 <= param_2 && param_2 - local_318 != 0) goto LAB_00476f40;
LAB_00476f1e:
    uVar9 = 0;
    local_328 = 1;
    uVar6 = uVar7;
  } while( true );
}


