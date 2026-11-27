// 001ec750 value

/* <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::value
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::value(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 extraout_DL_02;
  undefined1 extraout_DL_03;
  undefined1 extraout_DL_04;
  undefined1 extraout_DL_05;
  undefined1 extraout_DL_06;
  undefined1 extraout_DL_07;
  undefined1 extraout_DL_08;
  unkbyte10 Var5;
  
  uVar1 = *(ushort *)(param_2 + 3);
  if (0x2130 < uVar1) {
    if (uVar1 == 0x2131) {
      switch(*param_2) {
      case 2:
        uVar4 = (ulonglong)*(byte *)(param_2 + 1);
        break;
      case 3:
        uVar4 = (ulonglong)*(ushort *)(param_2 + 1);
        break;
      case 4:
        uVar4 = (ulonglong)*(uint *)(param_2 + 1);
        break;
      case 5:
      case 7:
        uVar4 = param_2[1];
        break;
      case 6:
        uVar4 = param_2[1];
        if ((longlong)uVar4 < 0) goto switchD_001ec77e_caseD_3;
        break;
      default:
        goto switchD_001ec77e_caseD_3;
      }
      param_1[1] = uVar4;
      *param_1 = 0x2d;
      return;
    }
    if (uVar1 == 0x2132) goto switchD_001ec77e_caseD_74;
    if (uVar1 != 0x2133) goto switchD_001ec77e_caseD_3;
switchD_001ec77e_caseD_73:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0xb;
      return;
    }
    goto switchD_001ec77e_caseD_3;
  }
  switch(uVar1) {
  case 2:
  case 0x19:
  case 0x2a:
  case 0x40:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4d:
    if ((*param_2 == 1) || (iVar3 = (int)*param_2, iVar3 == 8)) {
switchD_001eca53_caseD_1:
      lVar2 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = lVar2;
      *param_1 = 8;
      return;
    }
    if (iVar3 == 10) goto switchD_001ecae5_caseD_a;
    break;
  case 9:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_03;
      *param_1 = 0x2b;
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_001eca53_caseD_1;
    case 2:
switchD_001eca16_caseD_2:
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      break;
    case 3:
switchD_001eca16_caseD_3:
      uVar4 = (ulonglong)*(ushort *)(param_2 + 1);
      break;
    case 4:
switchD_001eca16_caseD_4:
      uVar4 = (ulonglong)*(uint *)(param_2 + 1);
      break;
    case 5:
    case 7:
switchD_001eca16_caseD_5:
      uVar4 = param_2[1];
      break;
    case 6:
switchD_001eca16_caseD_6:
      uVar4 = param_2[1];
      if ((longlong)uVar4 < 0) goto switchD_001ec77e_caseD_3;
      break;
    default:
      goto switchD_001ec77e_caseD_3;
    }
    param_1[1] = uVar4;
    *param_1 = 7;
    return;
  case 0x10:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x10;
      return;
    }
    break;
  case 0x12:
    switch(*param_2) {
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x13:
    Var5 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
           ::u16_value(param_2);
    if (((ulonglong)Var5 & 1) != 0) {
      *(short *)(param_1 + 1) = (short)((unkuint10)Var5 >> 0x40);
      *param_1 = 0x26;
      return;
    }
    break;
  case 0x17:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_05;
      *param_1 = 0x24;
      return;
    }
    break;
  case 0x20:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_06;
      *param_1 = 0x2a;
      return;
    }
    break;
  case 0x22:
  case 0x2f:
  case 0x37:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x71:
  case 0x7e:
  case 0x7f:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    if ((*param_2 == 1) || ((int)*param_2 == 8)) goto switchD_001eca53_caseD_1;
    break;
  case 0x2c:
  case 0x55:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x16;
      return;
    }
    break;
  case 0x2e:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_001eca53_caseD_1;
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x32:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_04;
      *param_1 = 0x23;
      return;
    }
    break;
  case 0x33:
    switch(*param_2) {
    case 2:
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      break;
    case 3:
      uVar4 = (ulonglong)*(ushort *)(param_2 + 1);
      break;
    case 4:
      uVar4 = (ulonglong)*(uint *)(param_2 + 1);
      break;
    case 5:
    case 7:
      uVar4 = param_2[1];
      break;
    case 6:
      uVar4 = param_2[1];
      if (-1 < (longlong)uVar4) break;
    default:
      goto switchD_001ec77e_caseD_3;
    }
    param_1[1] = uVar4;
    *param_1 = 0x27;
    return;
  case 0x36:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_00;
      *param_1 = 0x29;
      return;
    }
    break;
  case 0x38:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_001eca53_caseD_1;
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    case 10:
switchD_001ecae5_caseD_a:
      param_1[1] = param_2[1];
      *param_1 = 0x11;
      return;
    }
  case 0x39:
    switch(*param_2) {
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x3a:
    switch(*param_2) {
    case 2:
switchD_001eca9f_caseD_2:
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      break;
    case 3:
switchD_001eca9f_caseD_3:
      uVar4 = (ulonglong)*(ushort *)(param_2 + 1);
      break;
    case 4:
switchD_001eca9f_caseD_4:
      uVar4 = (ulonglong)*(uint *)(param_2 + 1);
      break;
    case 5:
    case 7:
switchD_001eca9f_caseD_5:
      uVar4 = param_2[1];
      break;
    case 6:
switchD_001eca9f_caseD_6:
      uVar4 = param_2[1];
      if ((longlong)uVar4 < 0) goto switchD_001ec77e_caseD_3;
      break;
    default:
      goto switchD_001ec77e_caseD_3;
    }
    param_1[1] = uVar4;
    *param_1 = 0x2c;
    return;
  case 0x3b:
    switch(*param_2) {
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x3e:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_02;
      *param_1 = 0x20;
      return;
    }
    break;
  case 0x42:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL;
      *param_1 = 0x28;
      return;
    }
    break;
  case 0x43:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x14;
      return;
    }
    break;
  case 0x4c:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_08;
      *param_1 = 0x25;
      return;
    }
    break;
  case 0x51:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_001eca53_caseD_1;
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x57:
    switch(*param_2) {
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x58:
    switch(*param_2) {
    case 2:
      goto switchD_001eca9f_caseD_2;
    case 3:
      goto switchD_001eca9f_caseD_3;
    case 4:
      goto switchD_001eca9f_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca9f_caseD_5;
    case 6:
      goto switchD_001eca9f_caseD_6;
    default:
      break;
    }
  case 0x59:
    switch(*param_2) {
    case 2:
      goto switchD_001eca16_caseD_2;
    case 3:
      goto switchD_001eca16_caseD_3;
    case 4:
      goto switchD_001eca16_caseD_4;
    case 5:
    case 7:
      goto switchD_001eca16_caseD_5;
    case 6:
      goto switchD_001eca16_caseD_6;
    default:
      break;
    }
  case 0x5e:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_07;
      *param_1 = 0x21;
      return;
    }
    break;
  case 0x65:
    uVar4 = <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
            ::u8_value(param_2);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = extraout_DL_01;
      *param_1 = 0x22;
      return;
    }
    break;
  case 0x72:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x1c;
      return;
    }
    break;
  case 0x73:
    goto switchD_001ec77e_caseD_73;
  case 0x74:
switchD_001ec77e_caseD_74:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x17;
      return;
    }
    break;
  case 0x79:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x15;
      return;
    }
    break;
  case 0x8c:
    if ((int)*param_2 == 10) {
      param_1[1] = param_2[1];
      *param_1 = 0x12;
      return;
    }
  }
switchD_001ec77e_caseD_3:
  <gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(param_1,param_2);
  return;
}


