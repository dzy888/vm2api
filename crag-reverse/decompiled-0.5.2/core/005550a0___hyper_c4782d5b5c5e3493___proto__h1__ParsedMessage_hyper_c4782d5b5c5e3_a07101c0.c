// 005550a0 <hyper[c4782d5b5c5e3493]::proto::h1::ParsedMessage<hyper[c4782d5b5c5e3493]::proto::RequestLine>>

/* WARNING: Switch with 1 destination removed at 0x00555110 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::ParsedMessage<hyper[c4782d5b5c5e3493]::proto::RequestLine>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::h1::ParsedMessage<hyper[c4782d5b5c5e3493]::proto::RequestLine>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((10 < *(byte *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 200) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <http[56314f485c23ccf6]::uri::Uri>(param_1 + 0x60);
  <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    return;
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(*(longlong *)(param_1 + 0xd0));
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


