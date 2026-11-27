// 00394a00 drop

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_14;
  undefined8 local_10;
  
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) goto LAB_00394ab0;
LAB_00394a1b:
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x20) == (int)*(ulonglong *)(lVar2 + 0x18)) {
    return;
  }
  uVar5 = *(ulonglong *)(lVar2 + 0x18);
  do {
    local_14 = (uint)uVar5 + 1;
    uVar6 = (uint)(uVar5 >> 0x20);
    if (uVar6 == (uint)uVar5) {
      uVar7 = (ulonglong)local_14 << 0x20;
    }
    else {
      if (local_14 == uVar6) break;
      uVar7 = uVar5 & 0xffffffff00000000;
    }
    LOCK();
    uVar1 = *(ulonglong *)(lVar2 + 0x18);
    if (uVar5 == uVar1) {
      *(ulonglong *)(lVar2 + 0x18) = uVar7 | local_14;
      uVar7 = uVar5;
    }
    else {
      uVar7 = uVar1;
    }
    UNLOCK();
    if (uVar5 == uVar1) {
      local_10 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (uVar5 & 0xff) * 8);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (&local_10);
      (*(code *)PTR_panic_fmt_007991a8)();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = uVar7;
    if (*(int *)(lVar2 + 0x20) == (int)uVar7) {
      return;
    }
  } while( true );
  param_1 = (longlong *)0x1;
  (*(code *)PTR_<u32,u32>_00799798)
            (0,&local_14,local_14,&anon_869a44742910931491f4b62d80901a16_69_llvm_763634721200370616)
  ;
LAB_00394ab0:
  cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
  if (cVar4 == '\0') {
    return;
  }
  goto LAB_00394a1b;
}


