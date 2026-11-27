// 006fffc0 release

/* <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::release */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::release
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_40 = *param_2;
  local_50 = (undefined8 *)param_2[1];
  lVar6 = param_2[2];
  *param_2 = 0;
  param_2[1] = 8;
  param_2[2] = 0;
  puVar5 = PTR_drop_slow_00799150;
  local_38 = local_50 + lVar6;
  local_48 = local_50;
  if (lVar6 != 0) {
    lVar6 = lVar6 << 3;
    puVar4 = local_50;
    do {
      puVar7 = puVar4 + 1;
      plVar2 = (longlong *)*puVar4;
      plVar1 = plVar2 + 0x10;
      local_48 = puVar7;
      if (plVar2[0x10] == 0) {
        if ((longlong *)param_2[3] == plVar1) {
          plVar3 = (longlong *)plVar2[0x11];
          param_2[3] = plVar3;
          goto joined_r0x007000b4;
        }
      }
      else {
        plVar3 = (longlong *)plVar2[0x11];
        *(longlong **)(plVar2[0x10] + 8) = plVar3;
joined_r0x007000b4:
        if (plVar3 == (longlong *)0x0) {
          if ((longlong *)param_2[4] != plVar1) goto LAB_007000d0;
          param_2[4] = *plVar1;
        }
        else {
          *plVar3 = *plVar1;
        }
        *plVar1 = 0;
        plVar2[0x11] = 0;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)puVar5)();
        }
      }
LAB_007000d0:
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar5)();
      }
      lVar6 = lVar6 + -8;
      puVar4 = puVar7;
    } while (lVar6 != 0);
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_50);
  *param_1 = 0;
  return;
}


