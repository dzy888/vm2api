// 006bc3f0 <http[56314f485c23ccf6]::header::map::HeaderMap>

/* WARNING: Switch with 1 destination removed at 0x006bc499 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50) << 2;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,2);
  }
  <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop((longlong *)(param_1 + 0x18),lVar3);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar3 = *(longlong *)(param_1 + 0x38) + 0x38;
  for (lVar4 = *(longlong *)(param_1 + 0x40) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    plVar1 = (longlong *)(lVar3 + -0x18);
    puVar2 = (undefined8 *)(lVar3 + -8);
    lVar3 = lVar3 + 0x48;
    (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


