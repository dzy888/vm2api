// 002e3f40 <&str,craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#4}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::and_then::<&str,
   craggemini_core[66f3c71560d70857]::server::handle::{closure#0}::{closure#4}> */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::and_then::
<&str,craggemini_core[66f3c71560d70857]::server::handle::_closure_0_::_closure_4_>
          (longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined2 local_20;
  
  if (param_1 != 0) {
    local_60 = 0;
    local_40 = 0;
    local_30 = 0x2600000026;
    local_28 = 1;
    local_20 = 1;
    local_58 = param_2;
    local_50 = param_1;
    local_48 = param_2;
    local_38 = param_2;
    auVar2 = <core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
             ::next(&local_60);
    if (auVar2._0_8_ != 0) {
      while ((plVar1 = auVar2._0_8_, auVar2._8_8_ < 10 ||
             ((short)plVar1[1] != 0x3d6b || *plVar1 != 0x63615f7265666564))) {
        auVar2 = <core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                 ::next(&local_60);
        if (auVar2._0_8_ == 0) {
          return 0;
        }
      }
      return (longlong)plVar1 + 10;
    }
  }
  return 0;
}


