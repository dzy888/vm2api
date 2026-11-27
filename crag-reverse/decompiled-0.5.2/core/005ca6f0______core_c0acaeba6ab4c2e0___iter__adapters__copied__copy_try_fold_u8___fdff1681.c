// 005ca6f0 <(),core[c0acaeba6ab4c2e0]::iter::adapters::copied::copy_try_fold<u8,(),core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>,core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::all::check<u8,craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::{closure#0}>::{closure#0}>::{closure#0},core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<u8> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::adapters::copied::copy_try_fold<u8, (),
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>,
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::all::check<u8,
   craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::{closure#0}>::{closure#0}>::{closure#0},
   core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>> */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<u8>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::adapters::copied::copy_try_fold<u8,(),core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>,core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::all::check<u8,craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::_closure_0_>::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>>
          (void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *in_RDI;
  
  pbVar3 = (byte *)*in_RDI;
  pbVar2 = (byte *)in_RDI[1];
  if (pbVar3 == pbVar2) {
    return 0;
  }
  while ((((bVar1 = *pbVar3, (byte)(bVar1 - 0x30) < 10 || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) ||
          ((bVar1 - 0x2b < 0x35 &&
           ((0x1000000004001dU >> ((ulonglong)(bVar1 - 0x2b) & 0x3f) & 1) != 0)))) ||
         (bVar1 == 0x7e))) {
    pbVar3 = pbVar3 + 1;
    if (pbVar3 == pbVar2) {
      *in_RDI = pbVar2;
      return 0;
    }
  }
  *in_RDI = pbVar3 + 1;
  return 0x10000000040001;
}


