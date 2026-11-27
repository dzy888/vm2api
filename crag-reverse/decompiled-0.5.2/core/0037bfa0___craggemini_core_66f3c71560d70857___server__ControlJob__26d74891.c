// 0037bfa0 <craggemini_core[66f3c71560d70857]::server::ControlJob>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::ControlJob>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::ControlJob>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[9] != -1) && (param_1[9] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar1 & 5) == 1) {
      (**(code **)(plVar2[0xc] + 0x10))();
      plVar2 = (longlong *)param_1[0xc];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 0xc);
      return;
    }
  }
  return;
}


