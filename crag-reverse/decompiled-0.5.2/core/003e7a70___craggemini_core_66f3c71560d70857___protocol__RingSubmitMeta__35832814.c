// 003e7a70 <craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>

/* WARNING: Switch with 1 destination removed at 0x003e7ace */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < param_1[3]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < param_1[6]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[9] < 1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


