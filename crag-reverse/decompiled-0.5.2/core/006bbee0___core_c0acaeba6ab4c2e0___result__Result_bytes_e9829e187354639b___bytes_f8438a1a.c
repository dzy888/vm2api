// 006bbee0 <core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x006bbf5e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::error::Error>>
          (longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x006bbf0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_1[2]);
    return;
  }
  if (*(longlong *)param_1[1] != 0) {
    puVar1 = (undefined8 *)((longlong *)param_1[1])[1];
    UNRECOVERED_JUMPTABLE = (code *)*puVar1;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


