// 000a79e0 read_offset

/* <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>
   as gimli[a7f20a324fd82d99]::read::reader::Reader>::read_offset */

void __rustcall
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>as_gimli[a7f20a324fd82d99]::read::reader::Reader>
::read_offset(undefined8 *param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  
  if (param_3 == '\b') {
    puVar1 = (uint *)*param_2;
    if (7 < (ulonglong)param_2[1]) {
      *param_2 = (longlong)(puVar1 + 2);
      param_2[1] = param_2[1] - 8;
      param_1[1] = ((ulonglong)*puVar1 << 8 | (ulonglong)(uint3)puVar1[1] << 0x28) >> 8 |
                   (ulonglong)*(byte *)((longlong)puVar1 + 7) << 0x38;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  else {
    puVar1 = (uint *)*param_2;
    if (3 < (ulonglong)param_2[1]) {
      *param_2 = (longlong)(puVar1 + 1);
      param_2[1] = param_2[1] - 4;
      param_1[1] = (ulonglong)*puVar1;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  *param_1 = 0x13;
  param_1[1] = puVar1;
  return;
}


