// 00032300 <agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders>

/* WARNING: Switch with 1 destination removed at 0x000323b5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[9] != -1) && (param_1[9] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[0xf] == -1) || (param_1[0xf] == 0)) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,1);
  return;
}


