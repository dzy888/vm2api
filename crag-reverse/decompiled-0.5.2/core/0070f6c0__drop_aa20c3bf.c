// 0070f6c0 drop

/* WARNING: Switch with 1 destination removed at 0x0070f6e3 */
/* WARNING: Switch with 1 destination removed at 0x0070f719 */
/* <bytes[e9829e187354639b]::bytes_mut::BytesMut as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

void __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (((ulonglong)plVar2 & 1) == 0) {
    LOCK();
    plVar1 = plVar2 + 4;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    if (*plVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    uVar3 = 8;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) + ((ulonglong)plVar2 >> 5) == 0) {
      return;
    }
    uVar3 = 1;
  }
  (*(code *)PTR_free_0079adc8)(param_4,uVar3);
  return;
}


