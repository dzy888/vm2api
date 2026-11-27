// 000b8b50 sqrt_approx

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sqrt_approx */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sqrt_approx(ulonglong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  uVar1 = 0x3f;
  if ((param_1 | 1) != 0) {
    for (; (param_1 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  bVar2 = ((byte)uVar1 & 1) + (char)(uVar1 >> 1);
  return (1L << (bVar2 & 0x3f)) + (param_1 >> (bVar2 & 0x3f)) >> 1;
}


