// 00473830 <hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<(usize,&mut_hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>),<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>>::clone_from_impl::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<(usize,
   &mut hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>),
   <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>>::clone_from_impl::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<(usize,&mut_hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>),<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>>::clone_from_impl::_closure_0_>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (param_1 != 0) {
    lVar3 = param_2 + -0x18;
    lVar2 = 0;
    do {
      if (-1 < *(char *)(param_2 + lVar2)) {
        if (*(longlong *)(lVar3 + -0x20) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -0x38;
    } while (param_1 != lVar2);
  }
  return;
}


