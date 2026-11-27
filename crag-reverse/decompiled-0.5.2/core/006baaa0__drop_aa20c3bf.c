// 006baaa0 drop

/* WARNING: Switch with 1 destination removed at 0x006bab17 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::name::HeaderName>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8) + 0x38;
    lVar2 = 1 - (uVar1 >> 5);
    do {
      if (*(longlong *)(lVar3 + -0x38) != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x38) + 0x20))(param_4,*(undefined8 *)(lVar3 + -0x28));
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


