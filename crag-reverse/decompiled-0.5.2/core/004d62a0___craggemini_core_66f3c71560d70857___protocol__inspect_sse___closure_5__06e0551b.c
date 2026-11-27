// 004d62a0 <craggemini_core[66f3c71560d70857]::protocol::inspect_sse::{closure#5}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::filter::<craggemini_core[66f3c71560d70857]::protocol::inspect_sse::{closure#5}>
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::filter::
<craggemini_core[66f3c71560d70857]::protocol::inspect_sse::_closure_5_>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((param_1 == (longlong *)0x0) || (param_3 = 0, param_2 == 0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  if (param_2 == 0x18) {
    if ((param_1[2] == 0x4445494649434550 && *param_1 == s_BLOCK_REASON_UNS_00182a70._0_8_) &&
        param_1[1] == s_BLOCK_REASON_UNS_00182a70._8_8_) {
      param_1 = (longlong *)0x0;
    }
    param_2 = 0x18;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}


