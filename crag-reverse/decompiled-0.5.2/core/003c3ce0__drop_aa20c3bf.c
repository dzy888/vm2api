// 003c3ce0 drop

/* WARNING: Switch with 1 destination removed at 0x003c3d53 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<bytes[e9829e187354639b]::bytes::Bytes> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8) + 0x18;
  for (lVar4 = ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 5) + 1;
      lVar4 != 1; lVar4 = lVar4 + -1) {
    plVar1 = (longlong *)(lVar3 + -0x18);
    puVar2 = (undefined8 *)(lVar3 + -8);
    lVar3 = lVar3 + 0x20;
    (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


