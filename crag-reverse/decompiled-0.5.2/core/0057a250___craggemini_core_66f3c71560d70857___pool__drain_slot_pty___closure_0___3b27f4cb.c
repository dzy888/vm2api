// 0057a250 <craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_4781;
  longlong local_4780;
  longlong *local_4778;
  undefined1 *local_4770;
  undefined8 local_4028;
  longlong *local_35a0;
  undefined *local_3598;
  undefined8 local_3028;
  undefined1 local_23c8 [928];
  undefined8 local_2028;
  undefined1 local_11f0 [456];
  undefined8 local_1028;
  
  puVar4 = PTR_NEXT_ID_00799878;
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  do {
    LOCK();
    local_4780 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_4780 == 0);
  local_4778 = &local_4780;
  local_4770 = &local_4781;
  (*(code *)PTR_memcpy_00799008)(local_4780,0x11c8);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>::_closure_0_>
                (&local_4778,param_1);
      local_23c8[0] = 1;
      goto LAB_0057a3e6;
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
  pplVar5 = &local_4778;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x11d8);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>
              (lVar1 + -0x130,local_11f0,*local_35a0);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>::_closure_0_>
              (&local_35a0,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_23c8[0] = 0;
LAB_0057a3e6:
    local_35a0 = (longlong *)local_23c8;
    local_3598 = PTR_fmt_00799db8;
    pplVar5 = &local_35a0;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


