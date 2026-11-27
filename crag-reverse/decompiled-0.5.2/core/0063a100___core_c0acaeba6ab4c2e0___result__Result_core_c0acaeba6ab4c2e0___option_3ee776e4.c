// 0063a100 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::FromBridge>,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::FromBridge>,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::FromBridge>,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong *param_1)

{
  if (*param_1 == -2) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if (*param_1 != -1) {
    <craggemini_core[66f3c71560d70857]::protocol::FromBridge>();
    return;
  }
  return;
}


