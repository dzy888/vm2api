// 00700150 allocate

/* <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::allocate */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar6 [16];
  longlong *local_200;
  undefined8 local_1f8;
  undefined8 local_180;
  undefined5 uStack_178;
  undefined3 uStack_173;
  undefined5 uStack_170;
  undefined8 uStack_16b;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  
  if (*(char *)(param_2 + 0x28) != '\0') {
    plVar4 = (longlong *)(*(code *)PTR_<&str>_007991e8)(param_4,0x38);
    uVar5 = 1;
LAB_00700260:
    auVar6._8_8_ = plVar4;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  local_200 = (longlong *)0x1;
  local_1f8 = 1;
  local_140 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uStack_173 = 0;
  uStack_170 = 0;
  uStack_16b = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar4 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x100);
    LOCK();
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
      local_200 = plVar4 + 0x10;
      plVar2 = *(longlong **)(param_2 + 0x18);
      if (plVar2 != local_200) {
        plVar4[0x11] = (longlong)plVar2;
        plVar4[0x10] = 0;
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)local_200;
        }
        *(longlong **)(param_2 + 0x18) = local_200;
        if (*(longlong *)(param_2 + 0x20) == 0) {
          *(longlong **)(param_2 + 0x20) = local_200;
        }
        uVar5 = 0;
        goto LAB_00700260;
      }
      (*(code *)
        PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>>_0079a848
      )(0,&local_200,param_5,&anon_1c7207ea9655bfcf55d918eab6d9918c_48_llvm_17559541839288726608);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


