// 00579d90 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>
          (undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_20c1;
  longlong local_20c0;
  longlong *local_20b8;
  undefined1 *local_20b0;
  undefined8 local_2028;
  longlong *local_1890;
  undefined *local_1888;
  undefined1 local_1068 [64];
  undefined8 local_1028;
  undefined1 local_840 [2072];
  
  puVar4 = PTR_NEXT_ID_00799878;
  local_1028 = 0;
  local_2028 = 0;
  do {
    LOCK();
    local_20c0 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_20c0 == 0);
  local_20b8 = &local_20c0;
  local_20b0 = &local_20c1;
  (*(code *)PTR_memcpy_00799008)(local_20c0,0x818);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>::_closure_0_>
                (&local_20b8,param_1);
      local_1068[0] = 1;
      goto LAB_00579f06;
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
  pplVar5 = &local_20b8;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x828);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>
              (lVar1 + -0x130,local_840,*local_1890);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>::_closure_0_>
              (&local_1890,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_1068[0] = 0;
LAB_00579f06:
    local_1890 = (longlong *)local_1068;
    local_1888 = PTR_fmt_00799db8;
    pplVar5 = &local_1890;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


