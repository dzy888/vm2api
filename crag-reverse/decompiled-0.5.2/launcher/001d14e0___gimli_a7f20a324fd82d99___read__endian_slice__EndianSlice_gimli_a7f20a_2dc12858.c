// 001d14e0 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::line::parse_directory_v5::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::line::parse_directory_v5::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,longlong param_5
          )

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong *local_38;
  
  local_38 = param_1;
  if (param_5 != 0) {
    local_40 = -1;
    lVar4 = 0;
    do {
      parse_attribute::
      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                (&local_90,param_2,param_3,*(undefined2 *)(param_4 + 2 + lVar4));
      local_58 = local_88;
      lVar2 = local_58;
      uStack_50 = lStack_80;
      lVar3 = uStack_50;
      if (local_90 == -1) {
        local_38[1] = local_88;
        local_38[2] = lStack_80;
        *local_38 = -1;
        return;
      }
      local_58._0_4_ = (undefined4)local_88;
      local_58._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      uStack_50._0_4_ = (undefined4)lStack_80;
      uStack_50._4_4_ = (undefined4)((ulonglong)lStack_80 >> 0x20);
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      if (*(short *)(param_4 + lVar4) == 1) {
        local_68 = (undefined4)local_58;
        uStack_64 = local_58._4_4_;
        uStack_60 = (undefined4)uStack_50;
        uStack_5c = uStack_50._4_4_;
        local_40 = local_90;
      }
      lVar4 = lVar4 + 4;
      local_58 = lVar2;
      uStack_50 = lVar3;
    } while (param_5 * 4 != lVar4);
    if (local_40 != -1) {
      local_38[1] = CONCAT44(uStack_64,local_68);
      local_38[2] = CONCAT44(uStack_5c,uStack_60);
      *local_38 = local_40;
      return;
    }
  }
  (*(code *)PTR_unwrap_failed_00219e58)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


