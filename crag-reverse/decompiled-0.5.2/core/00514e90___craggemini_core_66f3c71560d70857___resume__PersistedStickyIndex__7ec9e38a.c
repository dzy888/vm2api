// 00514e90 <craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>(longlong param_1)

{
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x30);
  return;
}


