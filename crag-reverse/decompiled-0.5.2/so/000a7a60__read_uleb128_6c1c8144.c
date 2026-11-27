// 000a7a60 read_uleb128

/* <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>
   as gimli[a7f20a324fd82d99]::read::reader::Reader>::read_uleb128 */

void __rustcall
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>as_gimli[a7f20a324fd82d99]::read::reader::Reader>
::read_uleb128(undefined2 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  pbVar4 = (byte *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar7 = 1 - lVar2;
    iVar5 = 0;
    uVar8 = 0;
    pbVar3 = pbVar4;
    do {
      pbVar6 = pbVar3 + 1;
      bVar1 = *pbVar3;
      if ((iVar5 == 0x3f) && (1 < bVar1)) {
        *param_2 = (longlong)pbVar6;
        param_2[1] = -lVar7;
        *(undefined1 *)param_1 = 6;
        return;
      }
      uVar8 = uVar8 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar5 & 0x3f);
      if (-1 < (char)bVar1) {
        *param_2 = (longlong)pbVar6;
        param_2[1] = -lVar7;
        *(ulonglong *)(param_1 + 4) = uVar8;
        *(undefined1 *)param_1 = 0xff;
        return;
      }
      iVar5 = iVar5 + 7;
      lVar7 = lVar7 + 1;
      pbVar3 = pbVar6;
    } while (lVar7 != 1);
    *param_2 = (longlong)(pbVar4 + lVar2);
    param_2[1] = 0;
    pbVar4 = pbVar4 + lVar2;
  }
  *param_1 = 0x13;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(byte **)(param_1 + 4) = pbVar4;
  return;
}


