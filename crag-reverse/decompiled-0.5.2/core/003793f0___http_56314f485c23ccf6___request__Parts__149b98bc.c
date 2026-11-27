// 003793f0 <http[56314f485c23ccf6]::request::Parts>

/* WARNING: Switch with 1 destination removed at 0x003794b4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::request::Parts> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::request::Parts>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((10 < *(byte *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 200) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (1 < *(byte *)(param_1 + 0x60)) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))
              (param_4,(*(longlong **)(param_1 + 0x68))[2]);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))(param_4,*(undefined8 *)(param_1 + 0xa0));
  <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1,uVar1);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    return;
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(*(longlong *)(param_1 + 0xd0));
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


