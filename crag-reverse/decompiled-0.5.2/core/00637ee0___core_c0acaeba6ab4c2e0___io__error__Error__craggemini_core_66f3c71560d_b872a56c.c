// 00637ee0 <core[c0acaeba6ab4c2e0]::io::error::Error,<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0}::{closure#2}>

/* <core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String, u16),
   craggemini_core[66f3c71560d70857]::protocol::Failure>>::map_err::<core[c0acaeba6ab4c2e0]::io::error::Error,
   <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0}::{closure#2}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,u16),craggemini_core[66f3c71560d70857]::protocol::Failure>>
::map_err::
<core[c0acaeba6ab4c2e0]::io::error::Error,<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_::_closure_2_>
          (undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_3 == -2) {
    lVar3 = param_3[1];
    lVar1 = param_3[2];
    lVar2 = param_3[4];
    param_2[2] = param_3[3];
    param_2[3] = lVar2;
    *param_2 = lVar3;
    param_2[1] = lVar1;
    return;
  }
  lVar3 = (*(code *)PTR_<&str>_007991e8)(param_1,0x16);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
            (param_3,&DAT_001a2533);
  param_2[1] = lVar3;
  *param_2 = -1;
  return;
}


