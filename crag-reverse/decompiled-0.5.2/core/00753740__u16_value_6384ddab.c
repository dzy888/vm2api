// 00753740 u16_value

/* <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>::u16_value */

bool __rustcall
<gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
::u16_value(undefined8 *param_1)

{
  ulonglong uVar1;
  
  switch(*param_1) {
  case 2:
    return (ulonglong)*(byte *)(param_1 + 1) < 0x10000;
  case 3:
    return (ulonglong)*(ushort *)(param_1 + 1) < 0x10000;
  case 4:
    return *(uint *)(param_1 + 1) < 0x10000;
  case 5:
  case 7:
    uVar1 = param_1[1];
    break;
  case 6:
    uVar1 = param_1[1];
    if ((longlong)uVar1 < 0) {
      return false;
    }
    break;
  default:
    return false;
  }
  return uVar1 < 0x10000;
}


