// 00768070 read_sized_offset

/* <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>
   as gimli[a7f20a324fd82d99]::read::reader::Reader>::read_sized_offset */

void __rustcall
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>as_gimli[a7f20a324fd82d99]::read::reader::Reader>
::read_sized_offset(ulonglong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_3 - 1);
  bVar2 = (byte)(param_3 - 1);
  if (bVar2 < (byte)((byte)param_3 ^ bVar2)) {
    uVar1 = 0;
    for (uVar3 = param_3 & 0xff; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar1 = uVar1 + 1;
    }
    uVar4 = (ulonglong)uVar1;
    if ((byte)uVar1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0076809c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&DAT_001bfa34 + (longlong)(int)(&DAT_001bfa34)[uVar4]))();
      return;
    }
  }
  *param_1 = (ulonglong)((param_3 & 0xff) << 8) | 0x1a;
  param_1[1] = uVar4;
  return;
}


