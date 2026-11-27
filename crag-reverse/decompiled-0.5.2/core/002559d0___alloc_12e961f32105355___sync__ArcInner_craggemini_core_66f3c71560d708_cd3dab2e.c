// 002559d0 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>::
      drop_slow(param_1 + 0x28);
    }
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x38);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x70);
  return;
}


