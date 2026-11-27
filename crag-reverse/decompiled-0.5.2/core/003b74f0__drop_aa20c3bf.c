// 003b74f0 drop

/* <alloc[12e961f32105355]::vec::drain::Drain<u8> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::drain::Drain<u8>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = param_1[1];
  lVar1 = param_1[4];
  *param_1 = 1;
  param_1[1] = 1;
  if (lVar1 != 0) {
    lVar2 = param_1[2];
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (param_1[3] != lVar3) {
      uVar4 = (*(code *)PTR_memmove_00799258)(param_4,lVar1);
    }
    *(longlong *)(lVar2 + 0x10) = lVar3 + lVar1;
  }
  return uVar4;
}


