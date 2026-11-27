// 0020ae20 write_formatted_parts

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::write_formatted_parts */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::write_formatted_parts
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  short *psVar7;
  undefined8 local_40;
  byte local_38 [8];
  
  if ((*(longlong *)(param_3 + 8) != 0) && (cVar4 = (**(code **)(param_2 + 0x18))(), cVar4 != '\0'))
  {
    return 1;
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    psVar7 = *(short **)(param_3 + 0x10);
    psVar1 = psVar7 + *(longlong *)(param_3 + 0x18) * 0xc;
    local_40 = param_2;
    do {
      if (*psVar7 == 0) {
        uVar5 = *(ulonglong *)(psVar7 + 4);
        if (0x40 < uVar5) {
          pcVar3 = *(code **)(local_40 + 0x18);
          do {
            cVar4 = (*pcVar3)();
            if (cVar4 != '\0') {
              return 1;
            }
            uVar5 = uVar5 - 0x40;
          } while (0x40 < uVar5);
          goto LAB_0020b037;
        }
        if (uVar5 != 0) goto LAB_0020b037;
      }
      else {
        if (*psVar7 == 1) {
          uVar2 = psVar7[1];
          local_38[4] = 0;
          local_38[0] = 0;
          local_38[1] = 0;
          local_38[2] = 0;
          local_38[3] = 0;
          if (uVar2 == 0) {
            uVar5 = 1;
          }
          else {
            uVar5 = (ulonglong)
                    (((uVar2 + 0x7d8f0 & uVar2 + 0xdfc18 ^ uVar2 + 0x7ff9c & uVar2 + 0x5fff6) >>
                     0x11) + 1);
          }
          cVar4 = (char)(uVar2 / 10);
          local_38[uVar5 - 1] = (char)uVar2 + cVar4 * -10 | 0x30;
          if ((((uVar5 != 1) &&
               (local_38[uVar5 - 2] = cVar4 + ((byte)((uVar2 / 10) / 5) & 0xfe) * -5 | 0x30,
               uVar5 != 2)) &&
              (uVar6 = (uVar2 >> 2) / 0x19,
              local_38[uVar5 - 3] = (char)uVar6 + ((byte)(uVar6 / 5) & 0xfe) * -5 | 0x30, uVar5 != 3
              )) && (((uVar6 = (uVar2 >> 3) / 0x7d,
                      local_38[uVar5 - 4] = (char)uVar6 + ((byte)(uVar6 / 5) & 0xfe) * -5 | 0x30,
                      uVar5 != 4 &&
                      (local_38[uVar5 - 5] = (byte)((uVar2 >> 4) / 0x271) | 0x30, uVar5 != 5)) &&
                     ((local_38[uVar5 - 6] = 0x30, uVar5 != 6 &&
                      (local_38[uVar5 - 7] = 0x30, uVar5 != 7)))))) {
            local_38[uVar5 - 8] = 0x30;
          }
        }
LAB_0020b037:
        cVar4 = (**(code **)(local_40 + 0x18))();
        if (cVar4 != '\0') {
          return 1;
        }
      }
      psVar7 = psVar7 + 0xc;
    } while (psVar7 != psVar1);
  }
  return 0;
}


