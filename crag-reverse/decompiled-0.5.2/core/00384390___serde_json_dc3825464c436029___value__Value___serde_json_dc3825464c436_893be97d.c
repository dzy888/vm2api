// 00384390 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_1);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    uVar6 = *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_1 + 0x20);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    bVar13 = uVar6 < *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    bVar13 = false;
  }
  puVar5 = (undefined8 *)(param_1 + 0x40);
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,puVar5);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    uVar6 = *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)
                             (extraout_XMM0_Da_01,(undefined8 *)(param_1 + 0x60));
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  lVar7 = 3;
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    if (uVar6 < *(ulonglong *)(pcVar4 + 0x10)) {
      puVar5 = (undefined8 *)(param_1 + 0x60);
    }
    lVar7 = 3 - (ulonglong)(uVar6 < *(ulonglong *)(pcVar4 + 0x10));
  }
  puVar9 = (undefined8 *)((ulonglong)bVar13 * 0x20 + param_1);
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_02,puVar9);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    uVar6 = *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_03,puVar5);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  puVar12 = (undefined8 *)((ulonglong)(bVar13 ^ 1) * 0x20 + param_1);
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    bVar13 = uVar6 < *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    bVar13 = false;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,puVar12);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  puVar10 = (undefined8 *)(param_1 + lVar7 * 0x20);
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    uVar6 = *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_05,puVar10);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  puVar8 = puVar9;
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    if (bVar13) {
      puVar8 = puVar5;
    }
    if (uVar6 < *(ulonglong *)(pcVar4 + 0x10)) {
      puVar11 = puVar10;
      if (!bVar13) {
        puVar9 = puVar5;
      }
      goto LAB_00384587;
    }
  }
  else if (bVar13) {
    puVar8 = puVar5;
  }
  if (bVar13) {
    puVar5 = puVar12;
  }
  else {
    puVar9 = puVar12;
  }
  puVar11 = puVar5;
  puVar12 = puVar10;
LAB_00384587:
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,puVar9);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if ((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) {
    uVar6 = *(ulonglong *)(pcVar4 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_07,puVar11);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = PTR_NULL_00799530;
  }
  if (((*pcVar4 == '\x02') && (*(longlong *)(pcVar4 + 8) == 0)) &&
     (uVar6 < *(ulonglong *)(pcVar4 + 0x10))) {
    puVar5 = puVar11;
    puVar11 = puVar9;
  }
  else {
    puVar5 = puVar9;
  }
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  uVar3 = puVar8[3];
  param_2[2] = puVar8[2];
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[3];
  param_2[6] = puVar5[2];
  param_2[7] = uVar3;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  uVar1 = puVar11[1];
  uVar2 = puVar11[2];
  uVar3 = puVar11[3];
  param_2[8] = *puVar11;
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[3];
  param_2[0xc] = *puVar12;
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return;
}


