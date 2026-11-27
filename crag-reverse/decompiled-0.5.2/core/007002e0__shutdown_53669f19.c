// 007002e0 shutdown

/* <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::shutdown */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::shutdown
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_48;
  
  if (*(char *)(param_3 + 0x28) == '\0') {
    *(undefined1 *)(param_3 + 0x28) = 1;
    puVar5 = *(undefined8 **)(param_3 + 8);
    lVar4 = *(longlong *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
    puVar3 = PTR_drop_slow_00799150;
    if (lVar4 != 0) {
      lVar4 = 1 - lVar4;
      do {
        plVar1 = (longlong *)*puVar5;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar3)();
        }
        puVar5 = puVar5 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 1);
    }
    puVar3 = PTR_grow_one_0079a7d8;
    local_48 = 0;
    puVar5 = *(undefined8 **)(param_3 + 0x20);
    while (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      *(undefined8 **)(param_3 + 0x20) = puVar2;
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined8 *)(param_3 + 0x18) = 0;
      }
      else {
        puVar2[1] = 0;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      if (local_48 == 0) {
        (*(code *)puVar3)();
      }
      *(undefined8 **)(local_48 * 8 + 8) = puVar5 + -0x10;
      puVar5 = puVar2;
      local_48 = local_48 + 1;
    }
    param_1[2] = local_48;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  return param_1;
}


