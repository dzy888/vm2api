// 006b8c30 drop

/* <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  while( true ) {
    bVar3 = lVar2 == 0;
    lVar2 = lVar2 + -1;
    if (bVar3) break;
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x20))(param_4,*(undefined8 *)(lVar1 + 0x48));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x20))(param_4,*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x60;
  }
  return;
}


