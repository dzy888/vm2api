// 001ecd40 u8_value

/* <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>::u8_value */

undefined8 __rustcall
<gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
::u8_value(longlong *param_1)

{
  undefined7 uVar1;
  ulonglong uVar2;
  
  uVar1 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_001ecd5b::switchdataD_0012d860 +
           (longlong)(int)(&switchD_001ecd5b::switchdataD_0012d860)[*param_1 + -2]) >> 8);
  switch(*param_1) {
  case 2:
    return CONCAT71(uVar1,(ulonglong)*(byte *)(param_1 + 1) < 0x100);
  case 3:
    return CONCAT71(uVar1,*(ushort *)(param_1 + 1) < 0x100);
  case 4:
    return CONCAT71(uVar1,*(uint *)(param_1 + 1) < 0x100);
  case 5:
  case 7:
    uVar2 = param_1[1];
    break;
  case 6:
    uVar2 = param_1[1];
    if ((longlong)uVar2 < 0) {
      return 0;
    }
    break;
  default:
    return 0;
  }
  return CONCAT71(uVar1,uVar2 < 0x100);
}


