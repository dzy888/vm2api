// 003ad800 <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]>
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (param_2 != 0) {
    do {
      plVar1 = (longlong *)*param_1;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1);
      }
      if ((param_1[1] != -1) && (param_1[1] != 0)) {
        (*(code *)puVar2)(param_4,1);
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


