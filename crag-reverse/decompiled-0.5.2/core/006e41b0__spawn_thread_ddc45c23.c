// 006e41b0 spawn_thread

/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread
          (longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_68 = 0xffffffffffffffff;
  local_78 = 0;
  local_50 = 0;
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar2 + 0x3c0);
  local_b0 = param_3;
  uVar6 = (**(code **)(lVar3 + 0x28))(lVar3,*(longlong *)(lVar3 + 0x10) - 1U & 0xfffffffffffffff0);
  (*(code *)PTR_name_00799d60)(uVar6,&local_c8);
  if (*(int *)(lVar2 + 0x398) == 1) {
    local_a0 = *(undefined8 *)(lVar2 + 0x3a0);
    local_a8 = 1;
  }
  iVar1 = *param_4;
  local_70 = *(longlong **)(param_4 + 2);
  uVar5 = 1;
  LOCK();
  lVar2 = *local_70;
  *local_70 = *local_70 + 1;
  UNLOCK();
  if (iVar1 == 1) {
    if (-1 < lVar2) {
LAB_006e427f:
      local_38 = local_88;
      local_48 = local_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      local_78 = uVar5;
      local_68 = param_3;
      local_60 = param_5;
      std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
      <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>
                (&local_c8,&local_48,local_a8,local_a0,local_80,0,&local_78);
      if (local_c8 != 0) {
        param_1[2] = local_b8;
      }
      *param_1 = local_c8;
      param_1[1] = lStack_c0;
      return param_1;
    }
  }
  else if (-1 < lVar2) {
    uVar5 = 0;
    goto LAB_006e427f;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


