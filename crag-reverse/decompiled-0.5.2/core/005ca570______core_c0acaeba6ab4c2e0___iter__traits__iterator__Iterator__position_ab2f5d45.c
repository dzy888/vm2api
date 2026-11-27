// 005ca570 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&craggemini_core[66f3c71560d70857]::server::Turn,<craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire::{closure#0}>::{closure#0},core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&craggemini_core[66f3c71560d70857]::server::Turn,
   <craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire::{closure#0}>::{closure#0},
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>> */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&craggemini_core[66f3c71560d70857]::server::Turn,<craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>
          (void)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *in_RSI;
  longlong *in_RDI;
  
  puVar6 = PTR_bcmp_00799020;
  lVar1 = in_RDI[1];
  if (*in_RDI != lVar1) {
    lVar2 = *in_RSI;
    pcVar3 = (char *)in_RSI[1];
    plVar4 = (longlong *)in_RSI[2];
    lVar5 = *in_RDI;
    do {
      lVar8 = lVar5 + 0x3b0;
      if ((*(longlong *)(lVar5 + 0x70) == *(longlong *)(lVar2 + 8)) &&
         (iVar7 = (*(code *)puVar6)(), iVar7 == 0)) {
        if (*pcVar3 == '\x01') {
          if (**(longlong **)(pcVar3 + 8) == *(longlong *)(lVar5 + 0x398)) {
LAB_005ca604:
            *in_RDI = lVar8;
            return 1;
          }
        }
        else if (*(char *)(*(longlong *)(lVar5 + 0x398) + 0x20) == pcVar3[1]) goto LAB_005ca604;
      }
      *plVar4 = *plVar4 + 1;
      lVar5 = lVar8;
    } while (lVar8 != lVar1);
    *in_RDI = lVar8;
  }
  puVar6 = PTR_bcmp_00799020;
  lVar1 = in_RDI[3];
  if (in_RDI[2] != lVar1) {
    lVar2 = *in_RSI;
    pcVar3 = (char *)in_RSI[1];
    plVar4 = (longlong *)in_RSI[2];
    lVar5 = in_RDI[2];
    do {
      lVar8 = lVar5 + 0x3b0;
      if ((*(longlong *)(lVar5 + 0x70) == *(longlong *)(lVar2 + 8)) &&
         (iVar7 = (*(code *)puVar6)(), iVar7 == 0)) {
        if (*pcVar3 == '\x01') {
          if (**(longlong **)(pcVar3 + 8) == *(longlong *)(lVar5 + 0x398)) {
LAB_005ca6b5:
            in_RDI[2] = lVar8;
            return 1;
          }
        }
        else if (*(char *)(*(longlong *)(lVar5 + 0x398) + 0x20) == pcVar3[1]) goto LAB_005ca6b5;
      }
      *plVar4 = *plVar4 + 1;
      lVar5 = lVar8;
    } while (lVar8 != lVar1);
    in_RDI[2] = lVar8;
  }
  return 0;
}


