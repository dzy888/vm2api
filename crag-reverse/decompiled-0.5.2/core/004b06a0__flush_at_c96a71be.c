// 004b06a0 flush_at

/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::flush_at */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::flush_at
          (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong extraout_RDX;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 local_174;
  undefined8 local_170;
  code *pcStack_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 *puStack_150;
  longlong *local_140;
  ulonglong local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  int local_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8 [32];
  undefined1 local_48 [24];
  
  uVar11 = prune_expired();
  uVar6 = extraout_RDX;
  if (*(char *)(param_1 + 0x80) == '\0') {
    (*(code *)PTR_metadata_00799308)(uVar11,*(undefined8 *)(param_1 + 0x10));
    if (local_f8 != 2) {
      return (undefined8 *)0x0;
    }
    uVar5 = ((uint)uStack_f0 & 3) - 2;
    uVar6 = (ulonglong)uVar5;
    if ((1 < uVar5) && ((uStack_f0 & 3) != 0)) {
      uStack_f0 = uStack_f0 - 1;
      local_f8 = 3;
      (*(code *)PTR_drop_00799040)();
    }
  }
  lVar1 = (*(code *)PTR_parent_00799418)();
  if (lVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)craggemini_core[66f3c71560d70857]::binding::ensure_private_dir(lVar1,uVar6)
  ;
  if (puVar2 != (undefined8 *)0x0) {
    return puVar2;
  }
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_130,param_1 + 0x18);
  local_c8[0] = 1;
  local_f8 = (int)local_130;
  uStack_f4 = local_130._4_4_;
  local_e8 = (undefined4)local_120;
  uStack_e4 = local_120._4_4_;
  uStack_e0 = (undefined4)uStack_118;
  uStack_dc = uStack_118._4_4_;
  local_d8 = local_110;
  uStack_d4 = uStack_10c;
  uStack_d0 = uStack_108;
  uStack_cc = uStack_104;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcStack_168 = (code *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcStack_168 == (code *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_170 = (undefined8 *)&DAT_00000080;
  local_130 = &local_170;
  pcStack_128 = "  ";
  local_120 = 2;
  uStack_118 = 1;
  local_110 = local_110 & 0xffffff00;
  *pcStack_168 = (code)0x7b;
  local_160 = (longlong *)0x1;
  local_158 = CONCAT22(local_158._2_2_,0x100);
  puStack_150 = &local_130;
  pcVar3 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                   ::serialize_entry::<str,u32>(&local_158,"version",7,local_c8);
  uVar11 = extraout_XMM0_Da;
  if (pcVar3 == (code *)0x0) {
    if ((char)local_158 == '\x01') {
      pcVar3 = (code *)(*(code *)PTR_invalid_raw_value_00799700)();
      uVar11 = extraout_XMM0_Da_00;
      goto LAB_004b0881;
    }
    pcVar3 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                     ::serialize_entry::
                     <str,std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>>
                               (&local_158,"accounts",8,&local_f8);
    puVar2 = puStack_150;
    uVar11 = extraout_XMM0_Da_01;
    if (pcVar3 != (code *)0x0) goto LAB_004b0881;
    if (((local_158 & 1) == 0) && (local_158._1_1_ != '\0')) {
      plVar9 = (longlong *)*puStack_150;
      lVar7 = puStack_150[3] + -1;
      puStack_150[3] = lVar7;
      if ((*(char *)(puVar2 + 4) == '\x01') &&
         ((local_140 = plVar9,
          uVar11 = <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(plVar9,"\n",1),
          plVar9 = local_140, lVar7 != 0 && (puVar2[2] != 0)))) {
        local_100 = puVar2[1];
        lVar10 = local_140[2];
        local_138 = puVar2[2];
        do {
          if ((ulonglong)(*local_140 - lVar10) < local_138) {
            uVar11 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (local_140,lVar10,local_138,1,1);
            lVar10 = local_140[2];
          }
          uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,local_138);
          lVar10 = lVar10 + local_138;
          local_140[2] = lVar10;
          lVar7 = lVar7 + -1;
          plVar9 = local_140;
        } while (lVar7 != 0);
      }
      <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(plVar9,"}false",1);
    }
    pcVar3 = pcStack_168;
    puVar2 = local_170;
    if (local_170 != (undefined8 *)0xffffffffffffffff) {
      local_140 = local_160;
      (*(code *)PTR_new_v4_00799350)();
      uVar5 = (uint)local_170;
      local_158 = (uint)local_170;
      uStack_154 = local_170._4_4_;
      puStack_150 = (undefined8 *)pcStack_168;
      local_170 = (undefined8 *)&local_158;
      pcStack_168 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                    fmt;
      (*(code *)PTR_format_inner_00799048)(uVar5,&local_170);
      <std[6c98fd8553dbae28]::path::Path>::join::<std[6c98fd8553dbae28]::path::PathBuf>
                (&local_130,lVar1,uVar6,local_48);
      pcStack_168 = (code *)CONCAT26((short)((ulonglong)pcStack_168 >> 0x30),0x10000000100);
      local_170 = (undefined8 *)0x180000a0000;
      uVar11 = (*(code *)PTR__open_00799768)(local_120,pcStack_128);
      if (local_158 == 1) {
        puVar4 = puStack_150;
      }
      else {
        local_174 = uStack_154;
        puVar4 = (undefined8 *)
                 <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                           (&local_174,pcVar3,local_140);
        if ((puVar4 == (undefined8 *)0x0) &&
           (puVar4 = (undefined8 *)(*(code *)PTR_sync_data_00799770)(), puVar4 == (undefined8 *)0x0)
           ) {
          (*(code *)PTR_close_00799030)();
          puVar4 = (undefined8 *)
                   (*(code *)PTR_rename_00799778)
                             (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
          puVar8 = local_130;
          uVar11 = extraout_XMM0_Da_02;
          if (puVar4 == (undefined8 *)0x0) {
            *(undefined1 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x78) = param_2;
            if (local_130 != (undefined8 *)0x0) {
              uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_02,1);
            }
            if (puVar2 != (undefined8 *)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
              puVar8 = puVar2;
            }
            <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_f8,puVar8);
            return (undefined8 *)0x0;
          }
        }
        else {
          uVar11 = (*(code *)PTR_close_00799030)();
        }
      }
      pcVar3 = (code *)local_130;
      if (local_130 != (undefined8 *)0x0) {
        uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
      }
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        pcVar3 = (code *)puVar2;
      }
      goto LAB_004b08ac;
    }
  }
  else {
LAB_004b0881:
    if (local_170 != (undefined8 *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
  }
  puVar4 = (undefined8 *)(*(code *)PTR_<serde_json[dc3825464c436029]::error::Error>_00799ba0)();
LAB_004b08ac:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_f8,pcVar3);
  return puVar4;
}


