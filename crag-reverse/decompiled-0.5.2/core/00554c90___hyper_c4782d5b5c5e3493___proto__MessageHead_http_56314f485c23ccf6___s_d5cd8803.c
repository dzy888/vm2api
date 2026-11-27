// 00554c90 <hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>>

/* WARNING: Switch with 1 destination removed at 0x00554cc1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::MessageHead<http[56314f485c23ccf6]::status::StatusCode>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <http[56314f485c23ccf6]::header::map::HeaderMap>();
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(*(longlong *)(param_1 + 0x60));
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


