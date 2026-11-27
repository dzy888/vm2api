// 00579790 <craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_>
          (undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong **pplVar5;
  longlong *in_FS_OFFSET;
  undefined1 local_d21;
  longlong local_d20;
  longlong *local_d18;
  undefined1 *local_d10;
  longlong *local_9d8;
  undefined *local_9d0;
  undefined1 local_698 [832];
  undefined1 local_358 [816];
  
  puVar4 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    local_d20 = *(longlong *)puVar4;
    *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
    UNLOCK();
  } while (local_d20 == 0);
  local_d18 = &local_d20;
  local_d10 = &local_d21;
  (*(code *)PTR_memcpy_00799008)(local_d20,0x330);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_>::_closure_0_>
                (&local_d18,param_1);
      local_698[0] = 1;
      goto LAB_005798e6;
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
  pplVar5 = &local_d18;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x340);
  if ((int)lVar3 != 2) {
    (*(code *)PTR_memcpy_00799008)();
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_>
              (lVar1 + -0x130,local_358,*local_9d8);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_>::_closure_0_>
              (&local_9d8,pplVar5);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    local_698[0] = 0;
LAB_005798e6:
    local_9d8 = (longlong *)local_698;
    local_9d0 = PTR_fmt_00799db8;
    pplVar5 = &local_9d8;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


