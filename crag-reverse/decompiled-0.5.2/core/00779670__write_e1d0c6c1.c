// 00779670 write

/* core[c0acaeba6ab4c2e0]::fmt::write */

undefined8 __rustcall
core[c0acaeba6ab4c2e0]::fmt::write
          (undefined8 param_1,longlong param_2,ushort *param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulonglong local_38;
  
  if ((param_4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2 + 0x18))(param_4,param_4 >> 1);
    return uVar5;
  }
  bVar1 = (byte)*param_3;
  if (bVar1 != 0) {
    pcVar3 = *(code **)(param_2 + 0x18);
    local_38 = 0;
    do {
      puVar6 = (ushort *)((longlong)param_3 + 1);
      if ((char)bVar1 < '\0') {
        if (bVar1 == 0x80) {
          uVar2 = *(ushort *)((longlong)param_3 + 1);
          cVar4 = (*pcVar3)();
          if (cVar4 != '\0') {
            return 1;
          }
          puVar6 = (ushort *)((longlong)param_3 + (ulonglong)uVar2 + 3);
        }
        else {
          if (bVar1 != 0xc0) {
            if ((bVar1 & 1) != 0) {
              puVar6 = (ushort *)((longlong)param_3 + 5);
            }
            if ((bVar1 & 2) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 4) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 8) != 0) {
              local_38 = (ulonglong)*puVar6;
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 0x10) != 0) {
            }
          }
          cVar4 = (**(code **)(param_4 + 8 + local_38 * 0x10))();
          if (cVar4 != '\0') {
            return 1;
          }
          local_38 = local_38 + 1;
        }
      }
      else {
        cVar4 = (*pcVar3)();
        if (cVar4 != '\0') {
          return 1;
        }
        puVar6 = (ushort *)((longlong)puVar6 + (ulonglong)bVar1);
      }
      bVar1 = (byte)*puVar6;
      param_3 = puVar6;
    } while (bVar1 != 0);
  }
  return 0;
}


