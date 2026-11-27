// 00161ac0 <craggemini[b21da2d71f2da7a3]::license::PayloadStatement>

/* serde_json[dc3825464c436029]::ser::to_vec::<craggemini[b21da2d71f2da7a3]::license::PayloadStatement>
    */

void __rustcall
serde_json[dc3825464c436029]::ser::to_vec::<craggemini[b21da2d71f2da7a3]::license::PayloadStatement>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar2;
  undefined2 local_40;
  longlong **local_38;
  longlong local_30;
  undefined1 *puStack_28;
  longlong local_20;
  longlong *local_18;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puStack_28 = (undefined1 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puStack_28 == (undefined1 *)0x0) {
    uVar2 = (*(code *)PTR_handle_error_00219c78)();
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_30 = 0x80;
  local_18 = &local_30;
  *puStack_28 = 0x7b;
  local_20 = 1;
  local_40 = 0x100;
  local_38 = &local_18;
  lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,&str>
                    (&local_40,&anon_c9247e0b0208fc9c8c019285c3882aec_21_llvm_5798562142159169407,7,
                     param_2);
  uVar2 = extraout_XMM0_Da;
  if (lVar1 != 0) goto LAB_00161b6d;
  if ((char)local_40 == '\0') {
    lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_40,&DAT_0011781e,6,param_2 + 0x10);
    uVar2 = extraout_XMM0_Da_01;
    if (lVar1 != 0) goto LAB_00161b6d;
    if ((char)local_40 == '\0') {
      lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,&str>(&local_40,&DAT_00117824,9,param_2 + 0x20);
      uVar2 = extraout_XMM0_Da_02;
      if (lVar1 != 0) goto LAB_00161b6d;
      if ((char)local_40 == '\0') {
        lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,&str>(&local_40,&DAT_0011782d,6,param_2 + 0x30);
        uVar2 = extraout_XMM0_Da_03;
        if (lVar1 != 0) goto LAB_00161b6d;
        if ((char)local_40 == '\0') {
          lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,&str>(&local_40,&DAT_001140c0,0x10,param_2 + 0x40);
          uVar2 = extraout_XMM0_Da_04;
          if (lVar1 != 0) goto LAB_00161b6d;
          if ((char)local_40 == '\0') {
            lVar1 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                    ::serialize_entry::<str,&str>(&local_40,&DAT_00117833,0x11,param_2 + 0x50);
            uVar2 = extraout_XMM0_Da_05;
            if (lVar1 == 0) {
              if (((local_40 & 1) == 0) && (local_40._1_1_ != '\0')) {
                <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                          (*local_38,
                           &anon_c9247e0b0208fc9c8c019285c3882aec_58_llvm_5798562142159169407,1);
              }
              param_1[2] = local_20;
              *param_1 = local_30;
              param_1[1] = (longlong)puStack_28;
              return;
            }
            goto LAB_00161b6d;
          }
        }
      }
    }
  }
  lVar1 = (*(code *)PTR_invalid_raw_value_00219d20)();
  uVar2 = extraout_XMM0_Da_00;
LAB_00161b6d:
  param_1[1] = lVar1;
  *param_1 = -1;
  if (local_30 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
  }
  return;
}


