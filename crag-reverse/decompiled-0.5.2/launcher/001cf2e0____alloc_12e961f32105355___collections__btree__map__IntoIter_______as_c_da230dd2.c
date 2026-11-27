// 001cf2e0 <<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>,alloc[12e961f32105355]::alloc::Global>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,
   _, _> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<u64,
   core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,
   gimli[a7f20a324fd82d99]::read::Error>, alloc[12e961f32105355]::alloc::Global>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>,alloc[12e961f32105355]::alloc::Global>>
          (undefined8 param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong local_38 [2];
  longlong local_28;
  
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>>>
  ::dying_next(local_38,param_1);
  puVar2 = PTR_drop_slow_0021a750;
  if (local_38[0] != 0) {
    do {
      if (*(char *)(local_38[0] + local_28 * 0x10) == -1) {
        plVar1 = *(longlong **)(local_38[0] + local_28 * 0x10 + 8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar2)();
        }
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>>>
      ::dying_next(local_38,param_1);
    } while (local_38[0] != 0);
  }
  return;
}


