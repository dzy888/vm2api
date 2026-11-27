// 005786f0 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>
          (undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_4181;
  longlong local_4180;
  longlong *local_4178;
  undefined1 *local_4170;
  undefined8 local_4028;
  longlong *local_3120;
  undefined *local_3118;
  undefined8 local_3028;
  undefined1 local_20c8 [160];
  undefined8 local_2028;
  undefined1 local_1070 [72];
  undefined8 local_1028;
  
  puVar4 = PTR_NEXT_ID_00799878;
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  do {
    LOCK();
    local_4180 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_4180 == 0);
  local_4178 = &local_4180;
  local_4170 = &local_4181;
  (*(code *)PTR_memcpy_00799008)(local_4180,0x1048);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>::_closure_0_>
                (&local_4178,param_1);
      local_20c8[0] = 1;
      goto LAB_00578886;
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
  pplVar5 = &local_4178;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x1058);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>
              (lVar1 + -0x130,local_1070,*local_3120);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>::_closure_0_>
              (&local_3120,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_20c8[0] = 0;
LAB_00578886:
    local_3120 = (longlong *)local_20c8;
    local_3118 = PTR_fmt_00799db8;
    pplVar5 = &local_3120;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


