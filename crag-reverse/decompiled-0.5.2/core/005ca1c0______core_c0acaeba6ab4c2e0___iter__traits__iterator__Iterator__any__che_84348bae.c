// 005ca1c0 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::any::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#1}>::{closure#0},core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::any::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#1}>::{closure#0},
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>> */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::any::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::_closure_0_::_closure_1_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>>
          (void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 in_RCX;
  longlong in_RSI;
  longlong *in_RDI;
  
  lVar1 = in_RDI[1];
  if (*in_RDI != lVar1) {
    lVar2 = *(longlong *)(in_RSI + 8);
    lVar3 = *in_RDI;
    do {
      lVar6 = lVar3 + 0x848;
      if ((((*(longlong *)(lVar3 + 0x6e8) == -1) && (*(longlong *)(lVar3 + 0x780) == -1)) &&
          (*(longlong *)(lVar3 + 0x668) == lVar2)) &&
         (iVar5 = (*(code *)PTR_bcmp_00799020)(in_RCX,lVar2), iVar5 == 0)) {
        *in_RDI = lVar6;
        return 1;
      }
      lVar3 = lVar6;
    } while (lVar6 != lVar1);
    *in_RDI = lVar6;
  }
  puVar4 = PTR_bcmp_00799020;
  lVar1 = in_RDI[3];
  if (in_RDI[2] != lVar1) {
    lVar2 = *(longlong *)(in_RSI + 8);
    lVar3 = in_RDI[2];
    do {
      lVar6 = lVar3 + 0x848;
      if (((*(longlong *)(lVar3 + 0x6e8) == -1) && (*(longlong *)(lVar3 + 0x780) == -1)) &&
         ((*(longlong *)(lVar3 + 0x668) == lVar2 &&
          (iVar5 = (*(code *)puVar4)(in_RCX,lVar2), iVar5 == 0)))) {
        in_RDI[2] = lVar6;
        return 1;
      }
      lVar3 = lVar6;
    } while (lVar6 != lVar1);
    in_RDI[2] = lVar6;
  }
  return 0;
}


