// 00774b80 drop

/* <alloc[12e961f32105355]::string::Drain as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::string::Drain_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar1 <= uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar4 = *(ulonglong *)(lVar3 + 0x10);
    if (uVar2 <= uVar4) {
      *(ulonglong *)(lVar3 + 0x10) = uVar1;
      if (uVar2 == uVar1) {
        if (uVar4 == uVar2) {
          return;
        }
      }
      else {
        if (uVar4 == uVar2) {
          return;
        }
        (*(code *)PTR_memmove_00799258)(param_4,uVar4 - uVar2);
      }
      *(ulonglong *)(lVar3 + 0x10) = (uVar4 - uVar2) + uVar1;
    }
  }
  return;
}


