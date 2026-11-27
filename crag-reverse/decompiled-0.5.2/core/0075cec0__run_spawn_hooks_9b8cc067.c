// 0075cec0 run_spawn_hooks

/* std[6c98fd8553dbae28]::thread::spawnhook::run_spawn_hooks */

longlong * __rustcall std[6c98fd8553dbae28]::thread::spawnhook::run_spawn_hooks(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *in_FS_OFFSET;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  lVar9 = *in_FS_OFFSET;
  puVar1 = (undefined8 *)(lVar9 + -0xd8);
  if (*(char *)(lVar9 + -0xd0) != '\0') {
    if (*(char *)(lVar9 + -0xd0) != '\x01') {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      param_1[3] = 0;
      return param_1;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar9 + -0xd0) = 0;
  }
  local_38 = (longlong *)*puVar1;
  *puVar1 = 0;
  if (local_38 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    lVar9 = *local_38;
    *local_38 = *local_38 + 1;
    UNLOCK();
    if (*local_38 == 0 || SCARRY8(lVar9,1) != *local_38 < 0) goto LAB_0075d0e4;
    plVar7 = (longlong *)*puVar1;
  }
  *puVar1 = local_38;
  local_50 = plVar7;
  (*(code *)PTR_drop_00799c68)();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      (*(code *)PTR_drop_slow_00799c70)();
    }
  }
  plVar8 = local_38;
  plVar3 = (longlong *)&DAT_00000008;
  if (local_38 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
  }
  else {
    lVar9 = local_38[4];
    lVar4 = (**(code **)(local_38[3] + 0x28))();
    if (lVar4 == 0) {
      plVar7 = (longlong *)0x0;
      local_50 = (longlong *)0x0;
      plVar3 = (longlong *)&DAT_00000008;
    }
    else {
      plVar6 = plVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar3 == (longlong *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
LAB_0075d0e4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *plVar3 = lVar4;
      plVar3[1] = (longlong)plVar7;
      local_50 = (longlong *)0x4;
      local_40 = (longlong *)0x1;
      if (lVar9 == 0) {
        local_50 = (longlong *)0x4;
        plVar7 = (longlong *)0x1;
      }
      else {
        lVar4 = 0x18;
        local_48 = plVar3;
        do {
          plVar7 = local_40;
          plVar8 = (longlong *)(lVar9 + 0x18);
          lVar9 = *(longlong *)(lVar9 + 0x20);
          lVar5 = (**(code **)(*plVar8 + 0x28))();
          if (lVar5 == 0) break;
          if (plVar7 == local_50) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>
                      (&local_50,plVar7,2 - (ulonglong)(lVar9 == 0),8,0x10);
            plVar3 = local_48;
          }
          plVar7 = (longlong *)((longlong)plVar7 + 1);
          *(longlong *)((longlong)plVar3 + lVar4 + -8) = lVar5;
          *(longlong **)((longlong)plVar3 + lVar4) = plVar6;
          lVar4 = lVar4 + 0x10;
          local_40 = plVar7;
        } while (lVar9 != 0);
        plVar3 = local_48;
        plVar8 = local_38;
      }
    }
  }
  param_1[3] = (longlong)plVar8;
  *param_1 = (longlong)local_50;
  param_1[1] = (longlong)plVar3;
  param_1[2] = (longlong)plVar7;
  return param_1;
}


