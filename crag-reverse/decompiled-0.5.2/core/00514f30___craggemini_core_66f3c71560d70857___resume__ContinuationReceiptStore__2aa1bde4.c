// 00514f30 <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>

/* WARNING: Switch with 1 destination removed at 0x00514fb0 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar1 = param_1[4];
  for (lVar2 = param_1[5] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar1);
    lVar1 = lVar1 + 0xd8;
  }
  if (param_1[3] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


