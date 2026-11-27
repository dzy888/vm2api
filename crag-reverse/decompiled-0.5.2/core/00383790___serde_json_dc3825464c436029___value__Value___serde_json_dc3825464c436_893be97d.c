// 00383790 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insert_tail::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insert_tail::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
          (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pcVar3 = (char *)(*(code *)PTR_index_into_00799300)(param_1,param_3 + -4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = PTR_NULL_00799530;
  }
  if ((*pcVar3 == '\x02') && (*(longlong *)(pcVar3 + 8) == 0)) {
    uVar4 = *(ulonglong *)(pcVar3 + 0x10);
  }
  else {
    uVar4 = 0;
  }
  pcVar3 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_3);
  puVar1 = PTR_index_into_00799300;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = PTR_NULL_00799530;
  }
  if (((*pcVar3 == '\x02') && (*(longlong *)(pcVar3 + 8) == 0)) &&
     (uVar4 < *(ulonglong *)(pcVar3 + 0x10))) {
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    puVar2 = param_3 + -4;
    while( true ) {
      puVar5 = puVar2;
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar5 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x34) = *(undefined4 *)((longlong)puVar5 + 0x14);
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar5 + 3);
      *(undefined4 *)((longlong)puVar5 + 0x3c) = *(undefined4 *)((longlong)puVar5 + 0x1c);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)puVar5;
      *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)((longlong)puVar5 + 4);
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 0xc);
      if (puVar5 == param_2) break;
      pcVar3 = (char *)(*(code *)puVar1)(*(undefined4 *)puVar5,puVar5 + -4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = PTR_NULL_00799530;
      }
      if ((*pcVar3 == '\x02') && (*(longlong *)(pcVar3 + 8) == 0)) {
        uVar4 = *(ulonglong *)(pcVar3 + 0x10);
      }
      else {
        uVar4 = 0;
      }
      pcVar3 = (char *)(*(code *)puVar1)(extraout_XMM0_Da_00,&local_58);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = PTR_NULL_00799530;
      }
      if (((*pcVar3 != '\x02') || (*(longlong *)(pcVar3 + 8) != 0)) ||
         (puVar2 = puVar5 + -4, *(ulonglong *)(pcVar3 + 0x10) <= uVar4)) break;
    }
    puVar5[2] = local_48;
    puVar5[3] = uStack_40;
    *puVar5 = local_58;
    puVar5[1] = uStack_50;
  }
  return;
}


