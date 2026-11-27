// 00731e60 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* addr2line[f7adfda4b3430143]::line::render_file::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
addr2line[f7adfda4b3430143]::line::render_file::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
          longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_70;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  
  if (*(longlong *)(param_3 + 0x188) != 0) {
    (*(code *)PTR_from_utf8_lossy_00799b68)(param_4,*(undefined8 *)(param_3 + 400));
    if (local_48 == -1) {
      if (local_38 != 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar1 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar1 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          if (0 < local_38) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (local_70 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        (*(code *)PTR_memcpy_00799008)();
      }
    }
    else if (local_48 == -2) {
      param_1[1] = local_40;
      param_1[2] = local_38;
      *param_1 = 0xffffffffffffffff;
      return;
    }
  }
  uVar2 = param_4[6];
  if (uVar2 != 0) {
    if (*(ushort *)(param_5 + 0x102) < 5) {
      uVar2 = uVar2 - 1;
      if (uVar2 < *(ulonglong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x00731f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_001be27c +
                  *(int *)(&DAT_001be27c +
                          *(longlong *)(*(longlong *)(param_5 + 0x78) + uVar2 * 0x18) * 4)))
                  (&DAT_001be27c,*(longlong *)(param_5 + 0x78) + uVar2 * 0x18);
        return;
      }
    }
    else if (uVar2 < *(ulonglong *)(param_5 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x00731fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001be1c4 +
                *(int *)(&DAT_001be1c4 +
                        *(longlong *)(*(longlong *)(param_5 + 0x78) + uVar2 * 0x18) * 4)))
                (&DAT_001be1c4,*(longlong *)(param_5 + 0x78) + uVar2 * 0x18);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00731fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_001be334 + *(int *)(&DAT_001be334 + *param_4 * 4)))();
  return;
}


