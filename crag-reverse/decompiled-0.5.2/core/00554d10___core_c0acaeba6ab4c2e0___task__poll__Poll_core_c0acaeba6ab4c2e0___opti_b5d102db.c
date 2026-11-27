// 00554d10 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>,core[c0acaeba6ab4c2e0]::io::error::Error>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>,
   core[c0acaeba6ab4c2e0]::io::error::Error>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>,core[c0acaeba6ab4c2e0]::io::error::Error>>>>
          (longlong *param_1)

{
  int iVar1;
  
  if ((*param_1 != 3) && (iVar1 = (int)*param_1, iVar1 != -3)) {
    if (iVar1 != -2) {
      if (iVar1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00554d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[1] + 0x20))(*(code **)(param_1[1] + 0x20),param_1[3]);
        return;
      }
      <http[56314f485c23ccf6]::header::map::HeaderMap>();
      return;
    }
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
      return;
    }
  }
  return;
}


