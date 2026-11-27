// 00578b10 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>
          (undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_6361;
  longlong local_6360;
  longlong *local_6358;
  undefined1 *local_6350;
  undefined8 local_6028;
  undefined8 local_5028;
  longlong *local_4a88;
  undefined *local_4a80;
  undefined8 local_4028;
  undefined1 local_31b8 [400];
  undefined8 local_3028;
  undefined8 local_2028;
  undefined1 local_18e8 [2240];
  undefined8 local_1028;
  
  puVar4 = PTR_NEXT_ID_00799878;
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  local_5028 = 0;
  local_6028 = 0;
  do {
    LOCK();
    local_6360 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_6360 == 0);
  local_6358 = &local_6360;
  local_6350 = &local_6361;
  (*(code *)PTR_memcpy_00799008)(local_6360,0x18c0);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>::_closure_0_>
                (&local_6358,param_1);
      local_31b8[0] = 1;
      goto LAB_00578cc6;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
  }
  (*(code *)PTR_memcpy_00799008)();
  if (0x7ffffffffffffffe < (ulonglong)in_FS_OFFSET[-0x27]) {
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + 1;
  lVar3 = in_FS_OFFSET[-0x26];
  pplVar5 = &local_6358;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x18d0);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>
              (lVar1 + -0x130,local_18e8,*local_4a88);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>::_closure_0_>
              (&local_4a88,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_31b8[0] = 0;
LAB_00578cc6:
    local_4a88 = (longlong *)local_31b8;
    local_4a80 = PTR_fmt_00799db8;
    pplVar5 = &local_4a88;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


