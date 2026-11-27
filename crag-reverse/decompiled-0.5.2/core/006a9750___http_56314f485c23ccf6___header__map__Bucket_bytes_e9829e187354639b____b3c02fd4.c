// 006a9750 <http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x006a978a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x28));
  return;
}


