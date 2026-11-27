// 00410fb0 <craggemini_core[66f3c71560d70857]::protocol::Cancel>

/* WARNING: Switch with 1 destination removed at 0x00410fe4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Cancel>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::ResumeRequest>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::SubagentActionRequest>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Cancel>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[3] == -1) || (param_1[3] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


