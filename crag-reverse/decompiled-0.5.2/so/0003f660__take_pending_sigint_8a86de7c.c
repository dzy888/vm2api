// 0003f660 take_pending_sigint

/* <agy_bridge[64a9e9deac6c45ce]::Turn>::take_pending_sigint */

undefined8 __rustcall <agy_bridge[64a9e9deac6c45ce]::Turn>::take_pending_sigint(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [12];
  
  if (*(char *)(param_1 + 0x323) != '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != -1) {
    uVar1 = *(undefined2 *)(param_1 + 0x148);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    cVar4 = agy_bridge[64a9e9deac6c45ce]::sse_ok(uVar1,uVar2,uVar3);
    if ((cVar4 == '\0') && (*(char *)(param_1 + 0x328) == '\0')) {
      if (*(char *)(param_1 + 0x1a3) == '\0') {
        auVar7 = agy_bridge[64a9e9deac6c45ce]::sse_ok(uVar1,uVar2,uVar3);
        uVar6 = auVar7._8_4_;
        if ((((auVar7[0] == '\0') &&
             (((*(longlong *)(param_1 + 0x150) == -1 || (*(longlong *)(param_1 + 0x160) == 0)) &&
              (*(char *)(param_1 + 0x1a1) == '\0')))) &&
            (((*(char *)(param_1 + 0x1a2) == '\0' && (*(int *)(param_1 + 0x170) != -1)) &&
             (lVar5 = (*(code *)PTR_elapsed_000c3b38)(), lVar5 == 0)))) && (uVar6 < 250000000))
        goto LAB_0003f736;
      }
      *(undefined1 *)(param_1 + 0x328) = 1;
      return 1;
    }
  }
LAB_0003f736:
  if (*(char *)(param_1 + 0x322) != '\x01') {
    return 0;
  }
  if (*(char *)(param_1 + 800) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x327) == '\0') {
    *(undefined1 *)(param_1 + 0x327) = 1;
    return 1;
  }
  return 0;
}


