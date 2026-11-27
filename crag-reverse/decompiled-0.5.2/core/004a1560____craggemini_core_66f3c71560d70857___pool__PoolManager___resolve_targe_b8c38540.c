// 004a1560 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#11}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::find::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#11}>
    */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::find::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_11_>
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar1 = PTR_bcmp_00799020;
  plVar5 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  if ((longlong *)*param_1 == plVar5) {
    plVar5 = (longlong *)0x0;
  }
  else {
    do {
      plVar4 = plVar2;
      if ((*(longlong *)(*plVar4 + 0xf8) == param_3) &&
         (iVar3 = (*(code *)puVar1)(param_4,param_3), iVar3 == 0)) {
        plVar5 = plVar4;
        goto LAB_004a15c3;
      }
      plVar2 = plVar4 + 2;
    } while (plVar4 + 2 != plVar5);
    plVar5 = (longlong *)0x0;
LAB_004a15c3:
    *param_1 = (longlong)(plVar4 + 2);
  }
  return plVar5;
}


