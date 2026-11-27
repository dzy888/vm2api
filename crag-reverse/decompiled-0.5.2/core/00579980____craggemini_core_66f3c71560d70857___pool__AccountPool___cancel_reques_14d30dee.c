// 00579980 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
          (undefined8 *param_1,undefined1 **param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  longlong *in_FS_OFFSET;
  undefined4 uVar6;
  undefined1 local_d2;
  undefined1 local_d1;
  longlong local_d0;
  undefined1 *local_c8;
  undefined *puStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  puVar4 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    local_d0 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_d0 == 0);
  local_78 = &local_d0;
  local_70 = &local_d1;
  local_68 = *(undefined4 *)param_1;
  uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_50 = *(undefined4 *)(param_1 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_48 = *(undefined4 *)(param_1 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_40 = *(undefined4 *)(param_1 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_38 = *(undefined4 *)(param_1 + 6);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_30 = *(undefined4 *)(param_1 + 7);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_28 = param_1[8];
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] == '\0') {
    uVar2 = in_FS_OFFSET[-0x27];
    ppuVar5 = param_2;
  }
  else {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      uVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>::_closure_0_>
                        (&local_78);
      local_d2 = 1;
      goto LAB_00579af5;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
    uVar2 = in_FS_OFFSET[-0x27];
    ppuVar5 = (undefined1 **)
              std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
  }
  if (0x7ffffffffffffffe < uVar2) {
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  in_FS_OFFSET[-0x27] = uVar2 + 1;
  if ((int)in_FS_OFFSET[-0x26] != 2) {
    local_88 = param_1[8];
    local_c8 = (undefined1 *)*param_1;
    puStack_c0 = (undefined *)param_1[1];
    local_b8 = *(undefined4 *)(param_1 + 2);
    uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_b0 = *(undefined4 *)(param_1 + 3);
    uStack_ac = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_a8 = *(undefined4 *)(param_1 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_a0 = *(undefined4 *)(param_1 + 5);
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_98 = *(undefined4 *)(param_1 + 6);
    uStack_94 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_90 = *(undefined4 *)(param_1 + 7);
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0x3c);
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
              (lVar1 + -0x130,&local_c8,local_d0);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    uVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>::_closure_0_>
                      (&local_78,ppuVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_d2 = 0;
LAB_00579af5:
    local_c8 = &local_d2;
    puStack_c0 = PTR_fmt_00799db8;
    ppuVar5 = &local_c8;
    (*(code *)PTR_panic_fmt_007991a8)(uVar6,param_2);
  } while( true );
}


