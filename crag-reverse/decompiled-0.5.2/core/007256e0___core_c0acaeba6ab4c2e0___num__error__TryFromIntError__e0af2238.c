// 007256e0 <core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>

/* WARNING: Switch with 1 destination removed at 0x00725724 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>
    */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::
<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>
          (undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  *puVar2 = param_2;
  lVar3 = (*(code *)PTR_custom_owner_from_box_00799f90)(param_4,&DAT_00797398);
  return lVar3 + 1;
}


