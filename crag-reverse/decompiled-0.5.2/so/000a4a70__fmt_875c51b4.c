// 000a4a70 fmt

/* WARNING: Switch with 1 destination removed at 0x000a4a84 */
/* WARNING: Switch with 1 destination removed at 0x000a4a9f */
/* <std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined8 __rustcall
<std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload_as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(longlong *param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  char cVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ulonglong uStack_38;
  
  if (*param_1 != -1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_1[2]);
    return uVar5;
  }
  puVar7 = (ushort *)**(undefined8 **)param_1[3];
  uVar3 = (*(undefined8 **)param_1[3])[1];
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000b7429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(uVar3,uVar3 >> 1);
    return uVar5;
  }
  bVar1 = (byte)*puVar7;
  if (bVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
    uStack_38 = 0;
    do {
      puVar6 = (ushort *)((longlong)puVar7 + 1);
      if ((char)bVar1 < '\0') {
        if (bVar1 == 0x80) {
          uVar2 = *(ushort *)((longlong)puVar7 + 1);
          cVar4 = (*UNRECOVERED_JUMPTABLE)();
          if (cVar4 != '\0') {
            return 1;
          }
          puVar6 = (ushort *)((longlong)puVar7 + (ulonglong)uVar2 + 3);
        }
        else {
          if (bVar1 != 0xc0) {
            if ((bVar1 & 1) != 0) {
              puVar6 = (ushort *)((longlong)puVar7 + 5);
            }
            if ((bVar1 & 2) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 4) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 8) != 0) {
              uStack_38 = (ulonglong)*puVar6;
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 0x10) != 0) {
            }
          }
          cVar4 = (**(code **)(uVar3 + 8 + uStack_38 * 0x10))();
          if (cVar4 != '\0') {
            return 1;
          }
          uStack_38 = uStack_38 + 1;
        }
      }
      else {
        cVar4 = (*UNRECOVERED_JUMPTABLE)();
        if (cVar4 != '\0') {
          return 1;
        }
        puVar6 = (ushort *)((longlong)puVar6 + (ulonglong)bVar1);
      }
      bVar1 = (byte)*puVar6;
      puVar7 = puVar6;
    } while (bVar1 != 0);
  }
  return 0;
}


