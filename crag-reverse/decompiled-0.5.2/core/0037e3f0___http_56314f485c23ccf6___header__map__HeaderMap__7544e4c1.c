// 0037e3f0 <http[56314f485c23ccf6]::header::map::HeaderMap>

/* WARNING: Switch with 1 destination removed at 0x0037e4a9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
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
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


