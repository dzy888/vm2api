// 0049f6d0 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
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
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_40;
  undefined4 *local_38;
  
  uVar15 = param_2 - param_5;
  if ((param_5 <= param_2 && uVar15 != 0) && param_5 != 0) {
    uVar12 = param_5;
    if (uVar15 < param_5) {
      uVar12 = uVar15;
    }
    if (uVar12 <= param_4) {
      puVar13 = param_1 + param_5 * 8;
      uVar17 = (*(code *)PTR_memcpy_00799008)();
      puVar7 = PTR_index_into_00799300;
      local_38 = param_3 + uVar12 * 8;
      if (uVar15 < param_5) {
        puVar14 = param_1 + param_2 * 8;
        do {
          puVar13 = puVar13 + -8;
          pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(uVar17,puVar13);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = PTR_NULL_00799530;
          }
          if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
            local_40 = *(ulonglong *)(pcVar9 + 0x10);
          }
          else {
            local_40 = 0;
          }
          local_38 = local_38 + -8;
          pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,local_38);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = PTR_NULL_00799530;
          }
          puVar11 = local_38;
          if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
            bVar16 = local_40 < *(ulonglong *)(pcVar9 + 0x10);
            if (bVar16) {
              puVar11 = puVar13;
            }
          }
          else {
            bVar16 = false;
          }
          uVar17 = *puVar11;
          uVar1 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          uVar4 = puVar11[5];
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          puVar14[-4] = puVar11[4];
          puVar14[-3] = uVar4;
          puVar14[-2] = uVar5;
          puVar14[-1] = uVar6;
          puVar14[-8] = uVar17;
          puVar14[-7] = uVar1;
          puVar14[-6] = uVar2;
          puVar14[-5] = uVar3;
          puVar13 = puVar13 + (ulonglong)(bVar16 ^ 1) * 8;
          uVar15 = (ulonglong)bVar16 * 0x20;
          local_38 = local_38 + (ulonglong)bVar16 * 8;
        } while ((puVar13 != param_1) && (puVar14 = puVar14 + -8, local_38 != param_3));
      }
      else {
        puVar14 = param_1 + param_2 * 8;
        do {
          pcVar9 = (char *)(*(code *)puVar7)(uVar17,param_3);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = PTR_NULL_00799530;
          }
          if ((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) {
            uVar15 = *(ulonglong *)(pcVar9 + 0x10);
          }
          else {
            uVar15 = 0;
          }
          pcVar9 = (char *)(*(code *)puVar7)(extraout_XMM0_Da_00,puVar13);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = PTR_NULL_00799530;
          }
          iVar10 = 1;
          if (((*pcVar9 == '\x02') && (*(longlong *)(pcVar9 + 8) == 0)) &&
             (uVar15 < *(ulonglong *)(pcVar9 + 0x10))) {
            iVar8 = 1;
            iVar10 = 0;
            puVar11 = puVar13;
          }
          else {
            iVar8 = 0;
            puVar11 = param_3;
          }
          uVar17 = *puVar11;
          uVar1 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          uVar4 = puVar11[5];
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          param_1[4] = puVar11[4];
          param_1[5] = uVar4;
          param_1[6] = uVar5;
          param_1[7] = uVar6;
          *param_1 = uVar17;
          param_1[1] = uVar1;
          param_1[2] = uVar2;
          param_1[3] = uVar3;
          uVar15 = (ulonglong)(uint)(iVar10 << 5);
          param_3 = (undefined4 *)((longlong)param_3 + uVar15);
          param_1 = param_1 + 8;
        } while ((param_3 != local_38) &&
                (puVar13 = (undefined4 *)((longlong)puVar13 + (ulonglong)(uint)(iVar8 << 5)),
                puVar13 != puVar14));
      }
      (*(code *)PTR_memcpy_00799008)(uVar15,(longlong)local_38 - (longlong)param_3);
      return;
    }
  }
  return;
}


