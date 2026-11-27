// 006a9f80 eq_ignore_ascii_case_simple

/* <[u8]>::eq_ignore_ascii_case_simple */

bool __rustcall <[u8]>::eq_ignore_ascii_case_simple(byte *param_1)

{
  if (((((((byte)(((byte)(*param_1 + 0xbf) < 0x1a) << 5 | *param_1) == 0x31) &&
         ((byte)(((byte)(param_1[1] + 0xbf) < 0x1a) << 5 | param_1[1]) == 0x30)) &&
        ((byte)(((byte)(param_1[2] + 0xbf) < 0x1a) << 5 | param_1[2]) == 0x30)) &&
       (((byte)(((byte)(param_1[3] + 0xbf) < 0x1a) << 5 | param_1[3]) == 0x2d &&
        ((byte)(((byte)(param_1[4] + 0xbf) < 0x1a) << 5 | param_1[4]) == 99)))) &&
      (((byte)(((byte)(param_1[5] + 0xbf) < 0x1a) << 5 | param_1[5]) == 0x6f &&
       (((byte)(((byte)(param_1[6] + 0xbf) < 0x1a) << 5 | param_1[6]) == 0x6e &&
        ((byte)(((byte)(param_1[7] + 0xbf) < 0x1a) << 5 | param_1[7]) == 0x74)))))) &&
     (((byte)(((byte)(param_1[8] + 0xbf) < 0x1a) << 5 | param_1[8]) == 0x69 &&
      (((byte)(((byte)(param_1[9] + 0xbf) < 0x1a) << 5 | param_1[9]) == 0x6e &&
       ((byte)(((byte)(param_1[10] + 0xbf) < 0x1a) << 5 | param_1[10]) == 0x75)))))) {
    return (byte)(((byte)(param_1[0xb] + 0xbf) < 0x1a) << 5 | param_1[0xb]) == 0x65;
  }
  return false;
}


