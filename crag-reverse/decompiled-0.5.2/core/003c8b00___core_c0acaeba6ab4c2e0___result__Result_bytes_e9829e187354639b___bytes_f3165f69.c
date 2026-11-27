// 003c8b00 <core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x003c8b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_1[2]);
    return;
  }
  if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


