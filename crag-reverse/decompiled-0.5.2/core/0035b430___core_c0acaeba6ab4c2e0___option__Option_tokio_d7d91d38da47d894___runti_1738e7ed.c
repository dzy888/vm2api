// 0035b430 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>

/* WARNING: Switch with 1 destination removed at 0x0035b44a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
          (longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) || (cVar2 = (*(code *)PTR_ref_dec_00799640)(), cVar2 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00701754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x10))();
  return;
}


