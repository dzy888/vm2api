// 006f5fd0 process

/* <tokio[d7d91d38da47d894]::runtime::signal::Driver>::process */

void __rustcall <tokio[d7d91d38da47d894]::runtime::signal::Driver>::process(longlong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_c0;
  ulonglong *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  cVar3 = *(char *)(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x34) = 0;
  puVar2 = PTR_read_0079a928;
  if (cVar3 == '\x01') {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    puVar6 = &local_a8;
    do {
      uVar5 = 0x80;
      lVar4 = (*(code *)puVar2)();
      uVar8 = extraout_XMM0_Da;
      if (lVar4 == 1) goto LAB_006f6075;
    } while (uVar5 != 0);
    puVar6 = (undefined8 *)&DAT_00000021;
    uVar8 = (*(code *)PTR_panic_fmt_007991a8)
                      (extraout_XMM0_Da,&PTR_s__vendor_tokio_1_54_1_src_runtime_00794578);
LAB_006f6075:
    uVar7 = (uint)uVar5 & 3;
    switch(uVar7) {
    case 0:
      cVar3 = *(char *)(uVar5 + 0x10);
      break;
    case 1:
      cVar3 = *(char *)(uVar5 + 0x1f);
      break;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar3 = (**(code **)(lVar4 + 8))();
      uVar8 = extraout_XMM0_Da_00;
      break;
    case 3:
      cVar3 = (char)(uVar5 >> 0x20);
    }
    if (cVar3 != '\r') {
      local_b8 = &local_c0;
      local_b0 = PTR_fmt_007991d0;
      local_c0 = uVar5;
      (*(code *)PTR_panic_fmt_007991a8)(uVar8,&PTR_s__vendor_tokio_1_54_1_src_runtime_00794590);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((1 < uVar7 - 2) && ((uVar5 & 3) != 0)) {
      local_b0 = (undefined *)(uVar5 - 1);
      local_b8 = (ulonglong *)CONCAT71(local_b8._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    if (tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS._24_4_ != 0) {
      <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>
      ::initialize::
      <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::_closure_0_,_>
                (tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS,puVar6);
    }
    <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>,<tokio[d7d91d38da47d894]::signal::unix::OsStorage_as_tokio[d7d91d38da47d894]::signal::registry::Storage>::iter::{closure#0}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
    ::fold::
    <bool,core[c0acaeba6ab4c2e0]::iter::adapters::filter::filter_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_0_,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_1_,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_2_>::_closure_0_>::_closure_0_>
              (tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS._8_8_,
               tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS._16_8_ * 0x20 +
               tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS._8_8_,0);
  }
  return;
}


