// 005ca2e0 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,&mut<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#0}>::{closure#0},core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&craggemini_core[66f3c71560d70857]::pool::AgySlot>>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,
   &mut 
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#0}>::{closure#0},
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&craggemini_core[66f3c71560d70857]::pool::AgySlot>>
    */

undefined4 * __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,&mut<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::_closure_0_::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&craggemini_core[66f3c71560d70857]::pool::AgySlot>>
          (void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 *in_RSI;
  longlong *in_RDI;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar2 = (undefined4 *)in_RDI[1];
  if ((undefined4 *)*in_RDI != puVar2) {
    puVar3 = (ulonglong *)*in_RSI;
    puVar6 = (undefined4 *)*in_RDI;
    do {
      puVar1 = puVar6 + 0x212;
      *in_RDI = (longlong)puVar1;
      if (*(longlong *)(puVar6 + 0x1e0) == -1) {
        if (0x2ffffff < *(ulonglong *)(puVar6 + 0x56)) {
          return puVar6;
        }
        uVar4 = *puVar3;
        if (puVar6[0x1c] == 1) {
          auVar7._8_8_ = *(undefined8 *)(puVar6 + 0x1e);
          auVar7._0_8_ = 1;
        }
        else {
          auVar7 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                             ("/",1,puVar6[0x210]);
        }
        uVar5 = auVar7._8_8_;
        if ((auVar7._0_8_ & 1) == 0) {
          uVar5 = *(ulonglong *)(puVar6 + 2);
        }
        if (((auVar7[0] | (byte)*puVar6) & uVar4 <= uVar5) != 0) {
          return puVar6;
        }
      }
      puVar6 = puVar1;
    } while (puVar1 != puVar2);
  }
  puVar2 = (undefined4 *)in_RDI[3];
  if ((undefined4 *)in_RDI[2] != puVar2) {
    puVar3 = (ulonglong *)*in_RSI;
    puVar6 = (undefined4 *)in_RDI[2];
    do {
      puVar1 = puVar6 + 0x212;
      in_RDI[2] = (longlong)puVar1;
      if (*(longlong *)(puVar6 + 0x1e0) == -1) {
        if (0x2ffffff < *(ulonglong *)(puVar6 + 0x56)) {
          return puVar6;
        }
        uVar4 = *puVar3;
        if (puVar6[0x1c] == 1) {
          auVar8._8_8_ = *(undefined8 *)(puVar6 + 0x1e);
          auVar8._0_8_ = 1;
        }
        else {
          auVar8 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                             ("/",1,puVar6[0x210]);
        }
        uVar5 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) {
          uVar5 = *(ulonglong *)(puVar6 + 2);
        }
        if (((auVar8[0] | (byte)*puVar6) & uVar4 <= uVar5) != 0) {
          return puVar6;
        }
      }
      puVar6 = puVar1;
    } while (puVar1 != puVar2);
  }
  return (undefined4 *)0x0;
}


