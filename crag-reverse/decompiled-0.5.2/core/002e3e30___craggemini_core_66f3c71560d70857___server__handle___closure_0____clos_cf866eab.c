// 002e3e30 <craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#5}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_some_and::<craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#5}>
    */

bool __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_some_and::
<craggemini_core[66f3c71560d70857]::server::handle::_closure_0_::_closure_5_>
          (byte *param_1,longlong param_2)

{
  if (param_1 != (byte *)0x0) {
    if (param_2 == 4) {
      if ((((byte)(((byte)(*param_1 + 0xbf) < 0x1a) << 5 | *param_1) == 0x74) &&
          ((byte)(((byte)(param_1[1] + 0xbf) < 0x1a) << 5 | param_1[1]) == 0x72)) &&
         ((byte)(((byte)(param_1[2] + 0xbf) < 0x1a) << 5 | param_1[2]) == 0x75)) {
        return (byte)(((byte)(param_1[3] + 0xbf) < 0x1a) << 5 | param_1[3]) == 0x65;
      }
    }
    else if (param_2 == 1) {
      return *param_1 == 0x31;
    }
  }
  return false;
}


