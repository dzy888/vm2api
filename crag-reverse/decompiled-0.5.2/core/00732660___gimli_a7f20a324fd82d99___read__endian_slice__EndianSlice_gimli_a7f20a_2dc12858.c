// 00732660 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* addr2line[f7adfda4b3430143]::function::name_attr::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
addr2line[f7adfda4b3430143]::function::name_attr::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined1 param_4,
          longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  if (param_8 == 0) {
LAB_00732742:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (param_2 == 0xd) {
      local_40 = param_6;
      local_38 = param_3;
    }
    else if (param_2 == 0xe) {
      <addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
      ::find_unit(local_48,param_7,param_3,param_4);
      if (local_48[0] != '\0') {
        param_1[1] = local_40;
        param_1[2] = local_38;
        *param_1 = 1;
        return;
      }
    }
    else {
      if ((param_2 != 0xf) || (*(longlong *)(param_5 + 0xf0) == 0)) goto LAB_00732742;
      uVar4 = *(ulonglong *)(param_7 + 0x30);
      if (uVar4 == 0) {
LAB_00732731:
        param_1[1] = 0x3a;
        *param_1 = 1;
        return;
      }
      lVar1 = *(longlong *)(param_7 + 0x28);
      lVar3 = 0;
      lVar2 = lVar3;
      if (uVar4 != 1) {
        do {
          lVar3 = lVar2 + (uVar4 >> 1);
          if (param_3 < *(ulonglong *)(lVar1 + 0x1c0 + lVar3 * 0x1c8)) {
            lVar3 = lVar2;
          }
          uVar4 = uVar4 - (uVar4 >> 1);
          lVar2 = lVar3;
        } while (1 < uVar4);
      }
      uVar4 = *(ulonglong *)(lVar1 + 0x1c0 + lVar3 * 0x1c8);
      if (((uVar4 == param_3) || (lVar3 = lVar3 + (ulonglong)(uVar4 < param_3), lVar3 == 0)) ||
         (lVar3 = lVar3 * 0x1c8, *(char *)(lVar1 + -0x1c8 + lVar3) != '\0')) goto LAB_00732731;
      lVar2 = lVar1 + lVar3;
      local_38 = param_3 - *(ulonglong *)(lVar2 + -0x1c0);
      if (param_3 < *(ulonglong *)(lVar2 + -0x1c0)) goto LAB_00732731;
      uVar4 = (*(longlong *)(lVar2 + -400) - *(ulonglong *)(lVar2 + -0x198)) +
              (ulonglong)(*(char *)(lVar2 + -0x17f) == '\b') * 8 + 4;
      if ((local_38 < uVar4) || (*(ulonglong *)(lVar2 + -0x198) <= local_38 - uVar4))
      goto LAB_00732731;
      local_40 = lVar3 + lVar1 + -0x1c8;
      param_5 = *(longlong *)(param_5 + 0xf0) + 0x10;
      param_4 = 1;
    }
    name_entry::
    <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
              (param_1,param_4,param_5,local_40,local_38,param_7,param_8);
  }
  return;
}


