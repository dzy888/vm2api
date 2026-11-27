// 002e8400 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>,axum_core[61c49771464cda0a]::body::Body),core[c0acaeba6ab4c2e0]::convert::Infallible>>>>

/* WARNING: Switch with 1 destination removed at 0x002e8460 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>,
   axum_core[61c49771464cda0a]::body::Body), core[c0acaeba6ab4c2e0]::convert::Infallible>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>,axum_core[61c49771464cda0a]::body::Body),core[c0acaeba6ab4c2e0]::convert::Infallible>>>>
          (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*param_1 < 0xfffffffe) {
    <http[56314f485c23ccf6]::header::map::HeaderMap>();
    if (*(longlong *)(param_1 + 0x18) != 0) {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(*(longlong *)(param_1 + 0x18));
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x1e);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


