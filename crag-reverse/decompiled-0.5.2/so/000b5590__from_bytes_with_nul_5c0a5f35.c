// 000b5590 from_bytes_with_nul

/* <core[c0acaeba6ab4c2e0]::ffi::c_str::CStr>::from_bytes_with_nul */

void __rustcall
<core[c0acaeba6ab4c2e0]::ffi::c_str::CStr>::from_bytes_with_nul
          (undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        if (*(char *)(param_2 + uVar2) == '\0') goto LAB_000b5673;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
    goto LAB_000b565e;
  }
  uVar1 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar1 == 0) {
    uVar1 = 0;
LAB_000b55da:
    do {
      uVar2 = *(ulonglong *)(param_2 + 8 + uVar1);
      if (((0x101010101010100 - *(ulonglong *)(param_2 + uVar1) | *(ulonglong *)(param_2 + uVar1)) &
           0x8080808080808080 & (0x101010101010100 - uVar2 | uVar2)) != 0x8080808080808080) break;
      uVar1 = uVar1 + 0x10;
    } while (uVar1 <= param_3 - 0x10);
  }
  else {
    uVar2 = 0;
    do {
      if (*(char *)(param_2 + uVar2) == '\0') goto LAB_000b5673;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
    if (uVar1 <= param_3 - 0x10) goto LAB_000b55da;
  }
  for (; param_3 != uVar1; uVar1 = uVar1 + 1) {
    if (*(char *)(param_2 + uVar1) == '\0') {
      uVar2 = uVar1;
LAB_000b5673:
      if (uVar2 + 1 == param_3) {
        param_1[1] = param_2;
        param_1[2] = param_3;
        *param_1 = 0;
        return;
      }
      param_1[1] = 0;
      param_1[2] = uVar2;
      *param_1 = 1;
      return;
    }
  }
LAB_000b565e:
  param_1[1] = 1;
  *param_1 = 1;
  return;
}


