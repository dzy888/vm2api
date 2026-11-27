// 00666e70 drop

/* <craggemini_core[66f3c71560d70857]::shm::ShmOwner as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_d0;
  ulonglong local_c8;
  longlong local_b0;
  longlong local_a8;
  uint local_98;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  (*(code *)PTR_memset_00799090)(param_4,0x1000);
  if (*(ulonglong *)(param_1 + 0x30) < uVar1) {
    uVar1 = *(ulonglong *)(param_1 + 0x30);
  }
  if (uVar1 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  if (*(ulonglong *)(param_1 + 0x40) < uVar2) {
    uVar2 = *(ulonglong *)(param_1 + 0x40);
  }
  if (uVar2 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  (*(code *)PTR_symlink_metadata_007992d0)();
  if (local_d0 != 2) {
    if ((local_98 & 0xf000) != 0x8000) {
      return;
    }
    if (local_b0 != *(longlong *)(param_1 + 0x48)) {
      return;
    }
    if (local_a8 != *(longlong *)(param_1 + 0x50)) {
      return;
    }
    local_c8 = (*(code *)PTR_remove_file_007992f0)();
    if (local_c8 == 0) {
      return;
    }
  }
  if ((1 < ((uint)local_c8 & 3) - 2) && ((local_c8 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


