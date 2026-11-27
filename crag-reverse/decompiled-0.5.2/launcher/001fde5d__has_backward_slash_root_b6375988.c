// 001fde5d has_backward_slash_root

/* addr2line[f7adfda4b3430143]::line::has_backward_slash_root */

bool __rustcall
addr2line[f7adfda4b3430143]::line::has_backward_slash_root(char *param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    return false;
  }
  bVar1 = true;
  if (*param_1 != '\\') {
    if (param_2 < 3) {
      return false;
    }
    if (param_1[1] < -0x40) {
      return false;
    }
    if ((param_2 != 3) && (param_1[3] < -0x40)) {
      return false;
    }
    bVar1 = *(short *)(param_1 + 1) == 0x5c3a;
  }
  return bVar1;
}


