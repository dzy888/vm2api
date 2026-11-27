// 0049dc20 <(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(param_1);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


