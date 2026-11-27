// 00382f00 <<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<(), core[c0acaeba6ab4c2e0]::io::error::Error>> */

undefined8 __rustcall
tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::
<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (undefined4 param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_98 = param_4;
  local_70 = param_5;
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar1 = *(char *)(in_FS_OFFSET + -0xf2);
    uVar7 = param_1;
    uVar6 = local_88;
joined_r0x003830a4:
    local_88 = uVar7;
    if (cVar1 == '\x02') {
      iVar4 = (int)param_4;
      *(undefined1 *)(in_FS_OFFSET + -0xf2) = param_3;
      local_88 = uVar6;
      local_9c = (*(code *)PTR_next_seed_007996b0)(*(undefined8 *)(param_2 + 8));
      if ((*(byte *)(in_FS_OFFSET + -0x100) & 1) == 0) {
        iVar5 = iVar4;
        iVar3 = (*(code *)PTR_new_007996b8)();
        uVar6 = extraout_XMM0_Da_00;
      }
      else {
        iVar3 = *(int *)(in_FS_OFFSET + -0xfc);
        iVar5 = *(int *)(in_FS_OFFSET + -0xf8);
        uVar6 = extraout_XMM0_Da;
      }
      *(undefined4 *)(in_FS_OFFSET + -0x100) = 1;
      *(undefined4 *)(in_FS_OFFSET + -0xfc) = local_9c;
      *(int *)(in_FS_OFFSET + -0xf8) = iVar4;
      (*(code *)PTR_set_current_007996c0)(uVar6,param_2);
      iVar4 = 1;
      if (iVar3 != 0 || iVar5 != 0) {
        iVar4 = iVar5;
      }
      local_78 = CONCAT44(iVar4,iVar3);
      local_48 = local_88;
      uStack_44 = uStack_84;
      uStack_40 = uStack_80;
      uStack_3c = uStack_7c;
      local_38 = local_78;
      if (local_90 == -2) goto LAB_003830c3;
      local_58 = local_78;
      local_68 = local_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      if (local_90 != -1) {
        auVar8 = <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
                 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
                           (&local_9d,local_98);
        if (auVar8._0_8_ != 1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>(&local_90);
          return auVar8._8_8_;
        }
        (*(code *)PTR_unwrap_failed_00799028)
                  (&DAT_007877a0,&local_9d,
                   &PTR_anon_dbc6346551702d8f49f87a432b9dece2_21_llvm_7788165550271277997_00787710);
        goto LAB_003830d0;
      }
    }
    (*(code *)PTR_panic_fmt_007991a8)(local_88,local_70);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
      uVar7 = (*(code *)PTR_register_00799240)();
      *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
      cVar1 = *(char *)(in_FS_OFFSET + -0xf2);
      uVar6 = local_88;
      goto joined_r0x003830a4;
    }
LAB_003830c3:
    (*(code *)PTR_panic_access_error_00799458)();
  }
LAB_003830d0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


