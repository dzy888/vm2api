// 003e6c20 <craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>

/* WARNING: Switch with 1 destination removed at 0x003e6c96 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < param_1[6]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < param_1[9]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[0xc] < 1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


