// 006b8cf0 drop

/* <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 8) + 0x38;
    lVar2 = 1 - *(longlong *)(param_1 + 0x10);
    do {
      if (*(longlong *)(lVar1 + -0x38) != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x38) + 0x20))(param_4,*(undefined8 *)(lVar1 + -0x28));
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1);
  }
  return;
}


