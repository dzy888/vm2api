// 00579260 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>
          (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong *in_FS_OFFSET;
  undefined1 local_44f1;
  undefined1 *local_44f0;
  undefined *local_44e8;
  undefined8 local_4028;
  undefined8 local_3028;
  undefined8 local_2028;
  undefined8 local_1028;
  
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  (*(code *)PTR_memcpy_00799008)(param_4,0x44c8);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar6 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar6 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)();
    puVar5 = PTR_NEXT_ID_00799878;
    do {
      LOCK();
      lVar1 = *(longlong *)puVar5;
      *(longlong *)puVar5 = *(longlong *)puVar5 + 1;
      UNLOCK();
    } while (lVar1 == 0);
    lVar2 = *in_FS_OFFSET;
    if ((char)in_FS_OFFSET[-0x1e] == '\0') {
      uVar3 = in_FS_OFFSET[-0x27];
    }
    else {
      if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>
                  (lVar6,param_1);
        (*(code *)PTR___rust_dealloc_00798fc8)();
        local_44f1 = 1;
        goto LAB_005793ed;
      }
      param_1 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
                <tokio[d7d91d38da47d894]::runtime::context::Context>;
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
      uVar3 = in_FS_OFFSET[-0x27];
    }
    if (uVar3 < 0x7fffffffffffffff) {
      in_FS_OFFSET[-0x27] = uVar3 + 1;
      if ((int)in_FS_OFFSET[-0x26] != 2) {
        ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
        <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>>>
                  (lVar2 + -0x130,lVar6,lVar1);
        in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
        return;
      }
      do {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>
                  (lVar6,param_1);
        (*(code *)PTR___rust_dealloc_00798fc8)();
        in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
        local_44f1 = 0;
LAB_005793ed:
        local_44f0 = &local_44f1;
        local_44e8 = PTR_fmt_00799db8;
        param_1 = (code *)&local_44f0;
        (*(code *)PTR_panic_fmt_007991a8)();
      } while( true );
    }
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


