// 005cad30 {closure#2}

/* craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::{closure#2} */

void __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::_closure_2_
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_38;
  undefined1 *local_30;
  undefined *local_28;
  undefined1 local_20 [24];
  
  local_30 = (undefined1 *)&local_38;
  local_28 = PTR_fmt_007991d0;
  local_38 = param_2;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_30);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(param_1,0x1f7,&DAT_0019de92,0x16,local_20);
  *(undefined1 *)(param_1 + 0x3b) = 4;
  if ((1 < ((uint)local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
    local_28 = (undefined *)(local_38 - 1);
    local_30 = (undefined1 *)CONCAT71(local_30._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


