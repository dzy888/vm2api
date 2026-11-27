// 00635110 drop

/* <craggemini_core[66f3c71560d70857]::server::SocketPath as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_d0;
  ulonglong *local_c8;
  undefined *local_c0;
  longlong local_a8;
  longlong local_a0;
  uint local_90;
  
  (*(code *)PTR_symlink_metadata_007992d0)(param_4,*(undefined8 *)(param_1 + 0x10));
  if ((int)local_c8 != 2) {
    if ((local_90 & 0xf000) != 0xc000) {
      return;
    }
    if (local_a8 != *(longlong *)(param_1 + 0x18)) {
      return;
    }
    if (local_a0 != *(longlong *)(param_1 + 0x20)) {
      return;
    }
    local_d0 = (*(code *)PTR_remove_file_007992f0)();
    if (local_d0 == 0) {
      return;
    }
    local_c8 = &local_d0;
    local_c0 = PTR_fmt_007991d0;
    (*(code *)PTR__eprint_00799160)();
    local_c0 = (undefined *)local_d0;
  }
  if ((1 < ((uint)local_c0 & 3) - 2) && (((ulonglong)local_c0 & 3) != 0)) {
    local_c0 = (undefined *)((longlong)local_c0 - 1);
    local_c8 = (ulonglong *)CONCAT71(local_c8._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


