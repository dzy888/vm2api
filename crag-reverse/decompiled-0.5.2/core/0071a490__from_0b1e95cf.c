// 0071a490 from

/* WARNING: Switch with 1 destination removed at 0x007189e8 */
/* WARNING: Switch with 1 destination removed at 0x0071a4c6 */
/* WARNING: Switch with 1 destination removed at 0x0071a4d1 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error as
   core[c0acaeba6ab4c2e0]::convert::From<serde_json[dc3825464c436029]::error::Error>>::from */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error_as_core[c0acaeba6ab4c2e0]::convert::From<serde_json[dc3825464c436029]::error::Error>>
::from(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*param_1 == 1) {
    lVar3 = param_1[1];
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    return lVar3;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = param_1;
  lVar3 = (*(code *)PTR_custom_owner_from_box_00799f90)();
  return lVar3 + 1;
}


