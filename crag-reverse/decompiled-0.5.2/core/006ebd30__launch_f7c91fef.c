// 006ebd30 launch

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch
          (longlong *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_50 = (undefined8 *)param_1[1];
  local_38 = param_1[2];
  param_1[2] = 0;
  local_48 = local_50 + local_38;
  local_30 = 0;
  local_40 = param_1;
  if (local_38 != 0) {
    do {
      uVar1 = *local_50;
      local_50 = local_50 + 1;
      plVar3 = (longlong *)
               tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
               <<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_,()>
                         (uVar1,&anon_dbc6346551702d8f49f87a432b9dece2_23_llvm_7788165550271277997);
      LOCK();
      lVar4 = *plVar3;
      if (lVar4 == 0xcc) {
        *plVar3 = 0x84;
      }
      UNLOCK();
      if (lVar4 != 0xcc) {
        (**(code **)(plVar3[2] + 0x20))();
      }
    } while (local_50 != local_48);
  }
  <alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_50);
  puVar2 = PTR_drop_slow_00799670;
  if (param_1[2] != 0) {
    puVar5 = (undefined8 *)param_1[1];
    lVar4 = 1 - param_1[2];
    do {
      plVar3 = (longlong *)*puVar5;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)puVar2)();
      }
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


