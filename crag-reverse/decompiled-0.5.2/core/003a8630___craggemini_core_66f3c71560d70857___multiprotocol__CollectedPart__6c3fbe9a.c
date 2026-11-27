// 003a8630 <craggemini_core[66f3c71560d70857]::multiprotocol::CollectedPart>

/* WARNING: Switch with 1 destination removed at 0x003a86e1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::multiprotocol::CollectedPart>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::multiprotocol::CollectedPart>(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar3 = uVar1 ^ 0x8000000000000000;
  uVar2 = 3;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar4 = 8;
      goto LAB_003a86c7;
    }
    if (uVar2 != 2) {
      if (uVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
      }
      if (param_1[3] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      lVar4 = 0x30;
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 9);
      goto LAB_003a86c7;
    }
  }
  if (param_1[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  lVar4 = 0x20;
LAB_003a86c7:
  if (*(longlong *)((longlong)param_1 + lVar4) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


