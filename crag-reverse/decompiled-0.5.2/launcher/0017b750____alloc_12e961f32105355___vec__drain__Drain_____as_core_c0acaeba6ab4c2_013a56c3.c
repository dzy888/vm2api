// 0017b750 <<alloc[12e961f32105355]::vec::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry,alloc[12e961f32105355]::alloc::Global>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::vec::drain::Drain<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry,
   alloc[12e961f32105355]::alloc::Global>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::vec::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry,alloc[12e961f32105355]::alloc::Global>>
          (longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(param_1 + 0x18) != lVar2) {
      (*(code *)PTR_memmove_00219fb0)(lVar3 * 8,lVar3 * 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
    }
    *(longlong *)(lVar1 + 0x10) = lVar3 + lVar2;
  }
  return;
}


