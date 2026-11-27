// 006f3fe0 signal_with_handle

/* tokio[d7d91d38da47d894]::signal::unix::signal_with_handle */

undefined1 (*) [16] __rustcall
tokio[d7d91d38da47d894]::signal::unix::signal_with_handle
          (undefined1 (*param_1) [16],uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint local_54;
  undefined1 *local_50;
  uint *local_48;
  undefined *local_40;
  
  local_54 = param_2;
  if (((int)param_2 < 1) || ((param_2 < 0x14 && ((0x80b10U >> (param_2 & 0x1f) & 1) != 0)))) {
    local_48 = &local_54;
    local_40 = PTR_fmt_007999c0;
    (*(code *)PTR_format_inner_00799048)(param_4,&local_48);
    uVar3 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
  }
  else {
    if (((longlong *)*param_3 != (longlong *)0xffffffffffffffff) && (*(longlong *)*param_3 != 0)) {
      if (registry::globals::GLOBALS._24_4_ != 0) {
        <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>
        ::initialize::
        <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::_closure_0_,_>
                  (registry::globals::GLOBALS);
      }
      local_50 = registry::globals::GLOBALS;
      uVar3 = (ulonglong)param_2;
      if (uVar3 - 1 < (ulonglong)registry::globals::GLOBALS._16_8_) {
        lVar4 = (uVar3 - 1) * 0x20;
        lVar1 = registry::globals::GLOBALS._8_8_ + lVar4;
        if (*(int *)(registry::globals::GLOBALS._8_8_ + 0x18 + lVar4) == 0) {
          iVar2 = *(int *)(lVar1 + 0x10);
        }
        else {
          <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>
          ::initialize::
          <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::_closure_0_>::_closure_0_,_>
                    ();
          iVar2 = *(int *)(lVar1 + 0x10);
        }
        if (iVar2 == 2) {
          if (registry::globals::GLOBALS._24_4_ != 0) {
            <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>
            ::initialize::
            <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::_closure_0_,_>
                      (registry::globals::GLOBALS,uVar3);
          }
          auVar5 = <tokio[d7d91d38da47d894]::signal::registry::Globals>::register_listener
                             (registry::globals::GLOBALS,uVar3);
          *param_1 = auVar5;
          return param_1;
        }
        if (iVar2 == 1) {
          iVar2 = *(int *)(lVar1 + 0x14);
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
              &anon_c49be660a078f24638188b28ebcb61a3_2_llvm_15508925077749842928) {
            (*(code *)PTR_set_functions_inner_007990c0)();
          }
          uVar3 = (longlong)iVar2 << 0x20 | 2;
          goto LAB_006f4042;
        }
      }
    }
    uVar3 = (*(code *)PTR_<&str>_007991e8)();
  }
LAB_006f4042:
  *(ulonglong *)(*param_1 + 8) = uVar3;
  *(undefined8 *)*param_1 = 0;
  return param_1;
}


