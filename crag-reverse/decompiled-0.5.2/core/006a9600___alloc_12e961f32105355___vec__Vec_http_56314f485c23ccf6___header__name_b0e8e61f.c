// 006a9600 <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>>

/* WARNING: Switch with 1 destination removed at 0x006a9678 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[2] != 0) {
    lVar1 = param_1[1] + 0x38;
    lVar2 = 1 - param_1[2];
    do {
      if (*(longlong *)(lVar1 + -0x38) != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x38) + 0x20))(param_4,*(undefined8 *)(lVar1 + -0x28));
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


