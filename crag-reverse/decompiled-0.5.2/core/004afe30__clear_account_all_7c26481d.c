// 004afe30 clear_account_all

/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_78 [3];
  longlong local_60;
  longlong local_40;
  
  local_98 = param_2;
  local_90 = param_3;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::remove::<str>(local_78,param_1 + 0x18,param_2);
  lVar1 = local_78[0];
  if (local_78[0] != -2) {
    if ((local_40 != 0) && (local_40 * 0x21 != -0x31)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((local_60 != -1) && (local_60 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  local_88 = (undefined1 *)&local_98;
  local_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_format_inner_00799048)();
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::
  <<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all::_closure_0_>
            (param_1 + 0x48,local_78);
  if (local_78[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


