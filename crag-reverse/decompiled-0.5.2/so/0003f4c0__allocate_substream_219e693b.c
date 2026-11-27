// 0003f4c0 allocate_substream

/* <agy_bridge[64a9e9deac6c45ce]::Turn>::allocate_substream */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Turn>::allocate_substream(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong local_288 [39];
  undefined1 local_150 [312];
  
  uVar2 = 0;
  if (*(ulonglong *)(param_1 + 0x290) < 0x20) {
    iVar1 = *(int *)(param_1 + 0x318);
    iVar3 = -1;
    if (iVar1 + 1 != 0) {
      iVar3 = iVar1 + 1;
    }
    *(int *)(param_1 + 0x318) = iVar3;
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      uVar4 = 0;
      if (*(ulonglong *)(param_1 + 0x1a8) <= *(longlong *)(param_1 + 0x1b8) + 1U) {
        uVar4 = *(ulonglong *)(param_1 + 0x1a8);
      }
      *(ulonglong *)(param_1 + 0x1b8) = (*(longlong *)(param_1 + 0x1b8) - uVar4) + 1;
      *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_1 + 0x1c0) + -1;
    }
    uVar5 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
            ::insert(param_1 + 0x2a8,param_2,iVar1);
    (*(code *)PTR_memcpy_000c3aa8)(uVar5,0x138);
    <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
    ::insert(local_288,param_1 + 0x278,iVar1,local_150);
    if (local_288[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::StreamSlot>(local_288);
    }
    uVar2 = 1;
  }
  return uVar2;
}


