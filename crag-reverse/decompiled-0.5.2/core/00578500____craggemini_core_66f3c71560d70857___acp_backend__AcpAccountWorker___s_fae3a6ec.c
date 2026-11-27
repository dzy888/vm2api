// 00578500 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>
          (undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_2e1;
  longlong local_2e0;
  longlong *local_2d8;
  undefined1 *local_2d0;
  longlong *local_228;
  undefined *local_220;
  undefined1 local_178 [176];
  undefined1 local_c8 [160];
  
  puVar4 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    local_2e0 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_2e0 == 0);
  local_2d8 = &local_2e0;
  local_2d0 = &local_2e1;
  (*(code *)PTR_memcpy_00799008)(local_2e0,0xa0);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>::_closure_0_>
                (&local_2d8,param_1);
      local_178[0] = 1;
      goto LAB_00578656;
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
  pplVar5 = &local_2d8;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0xb0);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>
              (lVar1 + -0x130,local_c8,*local_228);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>::_closure_0_>
              (&local_228,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_178[0] = 0;
LAB_00578656:
    local_228 = (longlong *)local_178;
    local_220 = PTR_fmt_00799db8;
    pplVar5 = &local_228;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


