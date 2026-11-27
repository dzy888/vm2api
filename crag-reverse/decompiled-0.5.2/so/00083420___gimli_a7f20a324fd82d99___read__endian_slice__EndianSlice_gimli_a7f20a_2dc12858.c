// 00083420 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::line::parse_file_v5::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::line::parse_file_v5::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,longlong param_5
          )

{
  code *pcVar1;
  longlong lVar2;
  longlong local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 *local_90;
  longlong local_88;
  undefined4 *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  uStack_4c = 0;
  uStack_50 = 0;
  local_58 = param_1;
  if (param_5 != 0) {
    local_78 = -1;
    local_48 = (undefined4 *)0x0;
    lVar2 = 0;
    local_70 = -1;
    local_38 = (undefined4 *)0x0;
    local_40 = (undefined4 *)0x0;
    local_68 = 0;
    local_60 = 0;
    do {
      parse_attribute::
      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                (&local_b0,param_2,param_3,*(undefined2 *)(param_4 + 2 + lVar2));
      if (local_b0 == -1) {
        local_58[1] = (longlong)local_a8;
        local_58[2] = local_a0;
        *local_58 = -1;
        return;
      }
      switch(*(short *)(param_4 + lVar2)) {
      case 1:
        local_88 = local_a0;
        local_80 = local_a8;
        local_78 = local_b0;
        break;
      case 2:
        switch(local_b0) {
        case 2:
          local_40 = (undefined4 *)((ulonglong)local_a8 & 0xff);
          break;
        case 3:
          local_40 = (undefined4 *)((ulonglong)local_a8 & 0xffff);
          break;
        case 4:
          local_40 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff);
          break;
        case 5:
        case 7:
switchD_00083529_caseD_5:
          local_40 = local_a8;
          break;
        case 6:
          if (-1 < (longlong)local_a8) goto switchD_00083529_caseD_5;
        }
        break;
      case 3:
        switch(local_b0) {
        case 2:
          local_38 = (undefined4 *)((ulonglong)local_a8 & 0xff);
          break;
        case 3:
          local_38 = (undefined4 *)((ulonglong)local_a8 & 0xffff);
          break;
        case 4:
          local_38 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff);
          break;
        case 5:
        case 7:
switchD_000835b0_caseD_5:
          local_38 = local_a8;
          break;
        case 6:
          if (-1 < (longlong)local_a8) goto switchD_000835b0_caseD_5;
        }
        break;
      case 4:
        switch(local_b0) {
        case 2:
          local_48 = (undefined4 *)((ulonglong)local_a8 & 0xff);
          break;
        case 3:
          local_48 = (undefined4 *)((ulonglong)local_a8 & 0xffff);
          break;
        case 4:
          local_48 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff);
          break;
        case 5:
        case 7:
switchD_000835da_caseD_5:
          local_48 = local_a8;
          break;
        case 6:
          if (-1 < (longlong)local_a8) goto switchD_000835da_caseD_5;
        }
        break;
      case 5:
        if (local_a0 == 0x10 && local_b0 == 1) {
          uStack_50 = *local_a8;
          uStack_4c = (undefined3)((uint)*(undefined4 *)((longlong)local_a8 + 3) >> 8);
          local_68 = *(undefined8 *)((longlong)local_a8 + 7);
          local_60 = (ulonglong)*(byte *)((longlong)local_a8 + 0xf);
        }
        break;
      default:
        if (*(short *)(param_4 + lVar2) == 0x2001) {
          local_90 = local_a8;
          local_98 = local_a0;
          local_70 = local_b0;
        }
      }
      lVar2 = lVar2 + 4;
    } while (param_5 * 4 != lVar2);
    if (local_78 != -1) {
      *(uint *)((longlong)local_58 + 0x4b) = CONCAT31(uStack_4c,uStack_50._3_1_);
      *(undefined4 *)(local_58 + 9) = uStack_50;
      *local_58 = local_78;
      local_58[1] = (longlong)local_80;
      local_58[2] = local_88;
      local_58[3] = local_70;
      local_58[4] = (longlong)local_90;
      local_58[5] = local_98;
      local_58[6] = (longlong)local_40;
      local_58[7] = (longlong)local_38;
      local_58[8] = (longlong)local_48;
      *(undefined8 *)((longlong)local_58 + 0x4f) = local_68;
      *(char *)((longlong)local_58 + 0x57) = (char)local_60;
      return;
    }
  }
  (*(code *)PTR_unwrap_failed_000c3b08)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


