// 006efa50 next_expiration

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::next_expiration */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::next_expiration
          (undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = *(ulonglong *)(param_2 + 0x408);
  if (uVar6 == 0) {
    *param_1 = 0;
    return;
  }
  bVar3 = (char)*(undefined8 *)(param_2 + 0x400) * '\x06';
  lVar4 = (param_3 >> (bVar3 & 0x3f)) + 1;
  bVar1 = (byte)lVar4 & 0x3f;
  iVar2 = 0;
  for (uVar6 = uVar6 >> bVar1 | uVar6 << 0x40 - bVar1; (uVar6 & 1) == 0;
      uVar6 = uVar6 >> 1 | 0x8000000000000000) {
    iVar2 = iVar2 + 1;
  }
  lVar5 = 1L << (bVar3 + 6 & 0x3f);
  uVar6 = (ulonglong)(iVar2 + (int)lVar4 & 0x3f);
  uVar7 = (uVar6 << (bVar3 & 0x3f)) + (-lVar5 & param_3);
  lVar4 = 0;
  if (uVar7 <= param_3) {
    lVar4 = lVar5;
  }
  param_1[1] = *(undefined8 *)(param_2 + 0x400);
  param_1[2] = uVar6;
  param_1[3] = lVar4 + uVar7;
  *param_1 = 1;
  return;
}


