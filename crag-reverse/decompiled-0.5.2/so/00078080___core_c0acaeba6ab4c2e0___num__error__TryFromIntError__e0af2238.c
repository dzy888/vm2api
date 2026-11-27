// 00078080 <core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>

/* WARNING: Switch with 1 destination removed at 0x000780c4 */
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
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar2 = (undefined1 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  *puVar2 = param_2;
  lVar3 = (*(code *)PTR_custom_owner_from_box_000c3ee0)(param_4,&DAT_000c2158);
  return lVar3 + 1;
}


