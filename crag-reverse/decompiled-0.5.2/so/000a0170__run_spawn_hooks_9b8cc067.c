// 000a0170 run_spawn_hooks

/* std[6c98fd8553dbae28]::thread::spawnhook::run_spawn_hooks */

longlong * __rustcall std[6c98fd8553dbae28]::thread::spawnhook::run_spawn_hooks(longlong *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_50;
  byte *local_48;
  longlong *local_40;
  longlong *local_38;
  
  puVar2 = (undefined8 *)__tls_get_addr();
  if (*(char *)(puVar2 + 1) != '\0') {
    if (*(char *)(puVar2 + 1) != '\x01') {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      param_1[3] = 0;
      return param_1;
    }
    (*(code *)PTR_register_000c4398)();
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  local_38 = (longlong *)*puVar2;
  *puVar2 = 0;
  if (local_38 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    lVar9 = *local_38;
    *local_38 = *local_38 + 1;
    UNLOCK();
    if (*local_38 == 0 || SCARRY8(lVar9,1) != *local_38 < 0) goto LAB_000a0394;
    plVar7 = (longlong *)*puVar2;
  }
  *puVar2 = local_38;
  local_50 = plVar7;
  (*(code *)PTR_drop_000c3e68)();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      (*(code *)PTR_drop_slow_000c3e70)();
    }
  }
  plVar8 = local_38;
  pbVar4 = &Elf64_Ehdr_00000000.e_ident_abiversion;
  if (local_38 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
  }
  else {
    lVar9 = local_38[4];
    lVar3 = (**(code **)(local_38[3] + 0x28))();
    if (lVar3 == 0) {
      plVar7 = (longlong *)0x0;
      local_50 = (longlong *)0x0;
      pbVar4 = &Elf64_Ehdr_00000000.e_ident_abiversion;
    }
    else {
      plVar6 = plVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pbVar4 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pbVar4 == (byte *)0x0) {
        (*(code *)PTR_handle_error_000c3a98)();
LAB_000a0394:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(longlong *)pbVar4 = lVar3;
      *(longlong **)(pbVar4 + 8) = plVar7;
      local_50 = (longlong *)0x4;
      local_40 = (longlong *)0x1;
      if (lVar9 == 0) {
        local_50 = (longlong *)0x4;
        plVar7 = (longlong *)0x1;
      }
      else {
        lVar3 = 0x18;
        local_48 = pbVar4;
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
            pbVar4 = local_48;
          }
          plVar7 = (longlong *)((longlong)plVar7 + 1);
          *(longlong *)(pbVar4 + lVar3 + -8) = lVar5;
          *(longlong **)(pbVar4 + lVar3) = plVar6;
          lVar3 = lVar3 + 0x10;
          local_40 = plVar7;
        } while (lVar9 != 0);
        pbVar4 = local_48;
        plVar8 = local_38;
      }
    }
  }
  param_1[3] = (longlong)plVar8;
  *param_1 = (longlong)local_50;
  param_1[1] = (longlong)pbVar4;
  param_1[2] = (longlong)plVar7;
  return param_1;
}


