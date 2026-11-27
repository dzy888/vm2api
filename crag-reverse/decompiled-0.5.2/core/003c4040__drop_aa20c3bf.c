// 003c4040 drop

/* WARNING: Switch with 1 destination removed at 0x003c40af */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String, u64)>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,
   usize)> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,u64)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  uVar3 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
  if (uVar3 != 0) {
    uVar3 = uVar3 >> 5;
    lVar2 = *(longlong *)(param_1 + 8) + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


