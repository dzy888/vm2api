// 00639cf0 <core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::map::HeaderMap>>

/* WARNING: Switch with 1 destination removed at 0x00639da9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::map::HeaderMap>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::map::HeaderMap>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != -1) {
    if (*(longlong *)(param_1 + 0x14) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,2);
    }
    <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
    if (*(longlong *)(param_1 + 6) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar4 = *(longlong *)(param_1 + 0xe) + 0x38;
    for (lVar3 = *(longlong *)(param_1 + 0x10) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      plVar1 = (longlong *)(lVar4 + -0x18);
      puVar2 = (undefined8 *)(lVar4 + -8);
      lVar4 = lVar4 + 0x48;
      (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
    }
    if (*(longlong *)(param_1 + 0xc) != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


