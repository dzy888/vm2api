// 0049e800 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>
    */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  char *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_40;
  
  if ((param_4 & 0x1ffffffffffffff8) == 0) {
    local_40 = param_2;
  }
  else {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar5 = param_4 * 0xe0;
    param_1 = <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                        (param_1,lVar4 + param_1,param_1 + lVar5);
    local_40 = <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                         (param_2,param_2 + lVar4,param_2 + lVar5,param_4,param_5);
    param_3 = <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                        (param_3,lVar4 + param_3,lVar5 + param_3,param_4,param_5);
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    uVar3 = *(ulonglong *)(pcVar1 + 0x10);
  }
  else {
    uVar3 = 0;
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    bVar2 = uVar3 < *(ulonglong *)(pcVar1 + 0x10);
  }
  else {
    bVar2 = false;
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    uVar3 = *(ulonglong *)(pcVar1 + 0x10);
  }
  else {
    uVar3 = 0;
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    if (uVar3 < *(ulonglong *)(pcVar1 + 0x10) != bVar2) {
      return param_1;
    }
  }
  else if (bVar2 != false) {
    return param_1;
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    uVar3 = *(ulonglong *)(pcVar1 + 0x10);
  }
  else {
    uVar3 = 0;
  }
  pcVar1 = (char *)(*(code *)PTR_index_into_00799300)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = PTR_NULL_00799530;
  }
  if ((*pcVar1 == '\x02') && (*(longlong *)(pcVar1 + 8) == 0)) {
    bVar2 = (bool)(bVar2 ^ uVar3 < *(ulonglong *)(pcVar1 + 0x10));
  }
  if (bVar2 != false) {
    local_40 = param_3;
  }
  return local_40;
}


