// 003b71a0 next

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

void __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong **pplVar4;
  longlong *local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong *local_38;
  
  local_50 = param_2 + 0x20;
  lStack_48 = local_50;
  do {
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 == *(undefined8 **)(param_2 + 0x18)) {
      *param_1 = -1;
      return;
    }
    plVar3 = (longlong *)*puVar1;
    *(undefined8 **)(param_2 + 8) = puVar1 + 1;
    local_38 = plVar3;
    if ((*(char *)((longlong)plVar3 + 0x283) == '\x01') && ((char)plVar3[0x1c] == '\0')) {
      local_58 = plVar3;
      cVar2 = <&mut<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>
              ::call_mut(&lStack_48,&local_58);
      if (cVar2 == '\0') {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          pplVar4 = &local_58;
          goto LAB_003b7206;
        }
        goto LAB_003b720b;
      }
    }
    else {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pplVar4 = &local_38;
LAB_003b7206:
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(pplVar4);
      }
LAB_003b720b:
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      local_58 = plVar3;
      (*(code *)PTR_clone_00798fd0)();
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(&local_58,plVar3 + 0x1d);
      }
      param_1[2] = local_40;
      *param_1 = local_50;
      param_1[1] = lStack_48;
      return;
    }
  } while( true );
}


