// 0066bf20 <craggemini_core[66f3c71560d70857]::multiprotocol::CollectedTurn>

/* WARNING: Switch with 1 destination removed at 0x0066c021 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::multiprotocol::CollectedTurn>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::multiprotocol::CollectedTurn>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <craggemini_core[66f3c71560d70857]::multiprotocol::CollectedPart>(lVar1);
    lVar1 = lVar1 + 0x68;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((char)param_1[0xc] != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xc);
  }
  if ((char)param_1[0x10] != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x10);
  }
  if ((char)param_1[0x14] != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x14);
  }
  if ((char)param_1[0x1d] != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x1d);
  }
  if ((param_1[9] == -1) || (param_1[9] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


