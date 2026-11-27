// 00759fc6 panic_with_hook

/* std[6c98fd8553dbae28]::panicking::panic_with_hook */

void __rustcall
std[6c98fd8553dbae28]::panicking::panic_with_hook
          (undefined8 param_1,code ***param_2,code *param_3,char param_4,undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *extraout_RDX;
  code ***pppcVar6;
  undefined *puVar7;
  longlong *in_FS_OFFSET;
  longlong local_80;
  code *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  code ***local_48;
  code *local_40;
  undefined1 local_31;
  
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  cVar3 = (*(code *)PTR_increase_0079b020)();
  puVar7 = PTR_HOOK_0079b028;
  if (cVar3 != '\x02') {
    if (cVar3 == '\0') {
      local_60 = (code *)&local_50;
      local_58 = <&mut_dyn_core[c0acaeba6ab4c2e0]::panic::PanicPayload_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                 ::fmt;
      puVar7 = &DAT_0018ab1b;
    }
    else {
      lVar4 = (*(code *)param_2[6])();
      local_80 = 1;
      if (lVar4 == 0) {
        param_3 = (code *)0x0;
      }
      else {
        local_80 = lVar4;
      }
      local_60 = (code *)&local_80;
      local_58 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      puVar7 = &DAT_0018bc30;
      local_78 = param_3;
    }
    local_68 = <&core[c0acaeba6ab4c2e0]::panic::location::Location_as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_70 = &local_40;
    pppcVar6 = &local_70;
    goto LAB_0075a160;
  }
  uVar2 = *(uint *)PTR_HOOK_0079b028;
  if (0x3ffffffd < uVar2) goto LAB_0075a0c5;
  LOCK();
  uVar1 = *(uint *)PTR_HOOK_0079b028;
  if (uVar2 == uVar1) {
    *(uint *)PTR_HOOK_0079b028 = uVar2 + 1;
  }
  UNLOCK();
  pppcVar6 = param_2;
  if (uVar2 != uVar1) goto LAB_0075a0c5;
  while( true ) {
    param_2 = local_48;
    if (*(longlong *)(puVar7 + 8) == 0) {
      local_70 = (code **)(*(code *)local_48[5])();
      local_60 = local_40;
      local_58._0_2_ = CONCAT11(param_5,param_4);
      local_68 = param_3;
      (*(code *)PTR_default_hook_0079adb0)();
    }
    else {
      local_70 = (code **)(*(code *)local_48[5])();
      pppcVar6 = &local_70;
      local_60 = local_40;
      local_58._0_2_ = CONCAT11(param_5,param_4);
      local_68 = param_3;
      (**(code **)(*(longlong *)(puVar7 + 0x10) + 0x28))();
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::sync::nonpoison::rwlock::RwLockReadGuard<std[6c98fd8553dbae28]::panicking::Hook>>
              (PTR_HOOK_0079b028,pppcVar6);
    *(undefined1 *)(*in_FS_OFFSET + -0x40) = 0;
    if (param_4 == '\0') break;
    param_3 = extraout_RDX;
    (*(code *)PTR_rust_panic_00798f90)();
LAB_0075a0c5:
    (*(code *)PTR_read_contended_0079ad80)();
    pppcVar6 = param_2;
  }
  do {
    puVar7 = &DAT_001c072b;
    pppcVar6 = (code ***)0x5b;
LAB_0075a160:
    uVar5 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_31,puVar7,pppcVar6);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar5);
    (*(code *)PTR_abort_00799748)();
  } while( true );
}


