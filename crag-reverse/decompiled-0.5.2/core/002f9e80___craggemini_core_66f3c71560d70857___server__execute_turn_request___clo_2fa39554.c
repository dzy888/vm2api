// 002f9e80 <craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#6}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>
   as 
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::rposition::<craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#6}>
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::rposition::
<craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_::_closure_6_>
          (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = lVar2 - lVar1;
  auVar4 = auVar3 * ZEXT816(0xe38e38e38e38e38f);
  if (lVar2 != lVar1) {
    lVar6 = (ulonglong)(lVar2 - lVar1) / 0x90 - 1;
    do {
      lVar7 = lVar2 + -0x90;
      if ((*(longlong *)(lVar2 + -0x80) == 9) &&
         ((char)(*(longlong **)(lVar2 + -0x88))[1] == 't' &&
          **(longlong **)(lVar2 + -0x88) == 0x6e61747369737361)) {
        param_1[1] = lVar7;
        auVar8._8_8_ = lVar6;
        auVar8._0_8_ = 1;
        return auVar8;
      }
      lVar6 = lVar6 + -1;
      auVar4._8_8_ = lVar6;
      auVar4._0_8_ = 0x6e61747369737361;
      lVar2 = lVar7;
    } while (lVar7 != lVar1);
    param_1[1] = lVar7;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar4._8_8_;
  return auVar5 << 0x40;
}


