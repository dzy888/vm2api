// 006fb620 drop

/* <alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  lVar3 = param_1[2];
  uVar5 = lVar2 - lVar1;
  if (uVar5 != 0) {
    for (uVar4 = 0; uVar5 >> 3 != uVar4; uVar4 = uVar4 + 1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
                (*(undefined8 *)(lVar1 + uVar4 * 8));
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (param_1[3] != lVar2) {
      (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar3 + 8),lVar1 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar2 + lVar1;
  }
  return;
}


