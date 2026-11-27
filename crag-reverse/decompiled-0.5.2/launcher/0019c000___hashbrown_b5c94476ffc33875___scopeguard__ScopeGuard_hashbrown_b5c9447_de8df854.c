// 0019c000 <hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<hashbrown[b5c94476ffc33875]::raw::RawTableInner,<hashbrown[b5c94476ffc33875]::raw::RawTableInner>::prepare_resize<alloc[12e961f32105355]::alloc::Global>::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x0019c036 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<hashbrown[b5c94476ffc33875]::raw::RawTableInner,
   <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::prepare_resize<alloc[12e961f32105355]::alloc::Global>::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<hashbrown[b5c94476ffc33875]::raw::RawTableInner,<hashbrown[b5c94476ffc33875]::raw::RawTableInner>::prepare_resize<alloc[12e961f32105355]::alloc::Global>::_closure_0_>>
          (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 == 0) ||
     (lVar1 + (-*(longlong *)(param_1 + 0x10) &
              (*(longlong *)(param_1 + 0x10) + (lVar1 + 1) * *(longlong *)(param_1 + 8)) - 1U) ==
      -0x11)) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)();
  return;
}


