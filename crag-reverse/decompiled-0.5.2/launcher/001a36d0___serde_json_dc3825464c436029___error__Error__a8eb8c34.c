// 001a36d0 <serde_json[dc3825464c436029]::error::Error>

/* WARNING: Switch with 1 destination removed at 0x001a3718 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<serde_json[dc3825464c436029]::error::Error> */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<serde_json[dc3825464c436029]::error::Error>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = param_2;
  lVar3 = (*(code *)PTR_custom_owner_from_box_0021a170)
                    (param_4,&PTR_<serde_json[dc3825464c436029]::error::Error>_002169c0);
  return lVar3 + 1;
}


