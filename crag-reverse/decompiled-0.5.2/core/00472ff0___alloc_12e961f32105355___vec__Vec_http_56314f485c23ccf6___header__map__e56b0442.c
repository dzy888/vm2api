// 00472ff0 <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<http[56314f485c23ccf6]::header::value::HeaderValue>>>

/* WARNING: Switch with 1 destination removed at 0x00473058 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<http[56314f485c23ccf6]::header::value::HeaderValue>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<http[56314f485c23ccf6]::header::value::HeaderValue>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1[1] + 0x38;
  for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    plVar1 = (longlong *)(lVar4 + -0x18);
    puVar2 = (undefined8 *)(lVar4 + -8);
    lVar4 = lVar4 + 0x48;
    (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


