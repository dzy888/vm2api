// 006a5040 <axum_core[61c49771464cda0a]::response::into_response_parts::ResponseParts>

/* WARNING: Switch with 1 destination removed at 0x006a5148 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<axum_core[61c49771464cda0a]::response::into_response_parts::ResponseParts>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<axum_core[61c49771464cda0a]::response::into_response_parts::ResponseParts>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,2);
  }
  <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar4 = *(longlong *)(param_1 + 0x38) + 0x38;
  for (lVar3 = *(longlong *)(param_1 + 0x40) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    plVar1 = (longlong *)(lVar4 + -0x18);
    puVar2 = (undefined8 *)(lVar4 + -8);
    lVar4 = lVar4 + 0x48;
    (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(*(longlong *)(param_1 + 0x60));
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)();
  }
  if (puVar2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar2[2]);
  return;
}


