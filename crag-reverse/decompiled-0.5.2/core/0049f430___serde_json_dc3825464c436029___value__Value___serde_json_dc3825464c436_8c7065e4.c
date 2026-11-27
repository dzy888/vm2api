// 0049f430 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
          (undefined4 *param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,
          ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_40;
  
  uVar16 = param_2 - param_5;
  if ((param_5 <= param_2 && uVar16 != 0) && param_5 != 0) {
    uVar15 = param_5;
    if (uVar16 < param_5) {
      uVar15 = uVar16;
    }
    if (uVar15 <= param_4) {
      puVar13 = param_1 + param_5 * 8;
      uVar18 = (*(code *)PTR_memcpy_00799008)(param_4,uVar15 * 0x20);
      puVar7 = PTR_index_into_00799300;
      puVar9 = param_3 + uVar15 * 8;
      if (uVar16 < param_5) {
        puVar14 = param_1 + param_2 * 8;
        do {
          puVar9 = puVar9 + -8;
          pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar18,puVar9);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = PTR_NULL_00799530;
          }
          if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
            local_40 = *(ulonglong *)(pcVar10 + 0x10);
          }
          else {
            local_40 = 0;
          }
          puVar13 = puVar13 + -8;
          pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,puVar13);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = PTR_NULL_00799530;
          }
          puVar12 = puVar9;
          if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
            bVar17 = local_40 < *(ulonglong *)(pcVar10 + 0x10);
            if (bVar17) {
              puVar12 = puVar13;
            }
          }
          else {
            bVar17 = false;
          }
          uVar18 = *puVar12;
          uVar1 = puVar12[1];
          uVar2 = puVar12[2];
          uVar3 = puVar12[3];
          uVar4 = puVar12[5];
          uVar5 = puVar12[6];
          uVar6 = puVar12[7];
          puVar14[-4] = puVar12[4];
          puVar14[-3] = uVar4;
          puVar14[-2] = uVar5;
          puVar14[-1] = uVar6;
          puVar14[-8] = uVar18;
          puVar14[-7] = uVar1;
          puVar14[-6] = uVar2;
          puVar14[-5] = uVar3;
          puVar13 = puVar13 + (ulonglong)(bVar17 ^ 1) * 8;
          uVar16 = (ulonglong)bVar17 * 0x20;
          puVar9 = puVar9 + (ulonglong)bVar17 * 8;
        } while ((puVar13 != param_1) && (puVar14 = puVar14 + -8, puVar9 != param_3));
      }
      else {
        puVar14 = param_1 + param_2 * 8;
        do {
          pcVar10 = (char *)(*(code *)puVar7)(uVar18,puVar13);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = PTR_NULL_00799530;
          }
          if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
            uVar16 = *(ulonglong *)(pcVar10 + 0x10);
          }
          else {
            uVar16 = 0;
          }
          pcVar10 = (char *)(*(code *)puVar7)(extraout_XMM0_Da_00,param_3);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = PTR_NULL_00799530;
          }
          iVar11 = 1;
          if (((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) &&
             (uVar16 < *(ulonglong *)(pcVar10 + 0x10))) {
            iVar8 = 1;
            iVar11 = 0;
            puVar12 = puVar13;
          }
          else {
            iVar8 = 0;
            puVar12 = param_3;
          }
          uVar18 = *puVar12;
          uVar1 = puVar12[1];
          uVar2 = puVar12[2];
          uVar3 = puVar12[3];
          uVar4 = puVar12[5];
          uVar5 = puVar12[6];
          uVar6 = puVar12[7];
          param_1[4] = puVar12[4];
          param_1[5] = uVar4;
          param_1[6] = uVar5;
          param_1[7] = uVar6;
          *param_1 = uVar18;
          param_1[1] = uVar1;
          param_1[2] = uVar2;
          param_1[3] = uVar3;
          uVar16 = (ulonglong)(uint)(iVar11 << 5);
          param_3 = (undefined4 *)((longlong)param_3 + uVar16);
          param_1 = param_1 + 8;
        } while ((param_3 != puVar9) &&
                (puVar13 = (undefined4 *)((longlong)puVar13 + (ulonglong)(uint)(iVar8 << 5)),
                puVar13 != puVar14));
      }
      (*(code *)PTR_memcpy_00799008)(uVar16,(longlong)puVar9 - (longlong)param_3);
      return;
    }
  }
  return;
}


