// 0066b630 <http[56314f485c23ccf6]::response::Response<axum_core[61c49771464cda0a]::body::Body>>

/* WARNING: Switch with 1 destination removed at 0x0066b68b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::response::Response<axum_core[61c49771464cda0a]::body::Body>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http[56314f485c23ccf6]::response::Response<axum_core[61c49771464cda0a]::body::Body>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  <http[56314f485c23ccf6]::header::map::HeaderMap>();
  if (*(longlong *)(param_1 + 0x60) != 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(*(longlong *)(param_1 + 0x60));
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


