// 00178340 validate_core

/* craggemini[b21da2d71f2da7a3]::validate_core */

undefined8 __rustcall
craggemini[b21da2d71f2da7a3]::validate_core(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x3f < param_2) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar5 = *(uint *)((longlong)&DAT_00118c68 + lVar2) & 0xff;
      uVar4 = *(uint *)((longlong)&DAT_00118c68 + lVar2) >> 8;
      if (uVar5 < 0x8f) {
        if (uVar5 == 0x24) {
          uVar3 = uVar3 ^ uVar4;
        }
        else if (uVar5 == 0x59) {
          if (param_2 < ((ulonglong)uVar4 & 0xffff) + 2) break;
          uVar3 = (uint)*(ushort *)(param_1 + ((ulonglong)uVar4 & 0xffff));
        }
        else {
          if ((uVar5 != 0x78) || ((short)uVar3 != 0)) break;
          uVar3 = 0;
        }
      }
      else if (uVar5 == 0xb3) {
        uVar3 = uVar3 & uVar4;
      }
      else {
        if (uVar5 != 0xde) {
          if (uVar5 == 0x8f) {
            return 0;
          }
          break;
        }
        uVar3 = uVar3 ^ 0x3e;
      }
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x54);
  }
  uVar1 = (*(code *)PTR_from_00219f00)();
  return uVar1;
}


