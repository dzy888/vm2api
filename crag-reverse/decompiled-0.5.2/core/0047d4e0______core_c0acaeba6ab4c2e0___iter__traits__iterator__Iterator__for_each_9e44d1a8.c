// 0047d4e0 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::for_each::call<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall,<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>::extend_trusted<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>>::{closure#0}>::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::for_each::call<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall,
   <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>::extend_trusted<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>>::{closure#0}>::{closure#0}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::for_each::call<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall,<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>::extend_trusted<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>>::_closure_0_>::_closure_0_>
          (void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *in_RDX;
  longlong in_RSI;
  longlong in_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar4 = PTR_clone_00798fd0;
  plVar3 = (longlong *)*in_RDX;
  lVar6 = in_RDX[1];
  if (in_RDI != in_RSI) {
    lVar1 = lVar6 * 0x60 + in_RDX[2];
    lVar7 = 0;
    lVar8 = 0;
    do {
      if (*(longlong *)(in_RDI + 0x30 + lVar7) == -1) {
        local_f0 = 0xffffffffffffffff;
      }
      else {
        (*(code *)puVar4)();
      }
      (*(code *)puVar4)();
      (*(code *)puVar4)();
      if (*(longlong *)(in_RDI + 0x48 + lVar7) == -1) {
        uVar5 = 0xffffffffffffffff;
      }
      else {
        (*(code *)puVar4)();
        local_a8 = local_88;
        uStack_a0 = uStack_80;
        uVar5 = local_90;
      }
      *(undefined8 *)(lVar1 + 0x40 + lVar7) = local_e0;
      puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar7);
      *puVar2 = local_f0;
      puVar2[1] = uStack_e8;
      puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar7);
      *puVar2 = uStack_b8;
      puVar2[1] = local_b0;
      puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar7);
      *puVar2 = local_c8;
      puVar2[1] = local_c0;
      *(undefined8 *)(lVar1 + lVar7) = local_d8;
      ((undefined8 *)(lVar1 + lVar7))[1] = uStack_d0;
      *(undefined8 *)(lVar1 + 0x48 + lVar7) = uVar5;
      puVar2 = (undefined8 *)(lVar1 + 0x50 + lVar7);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a0;
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + 0x60;
    } while (-((ulonglong)(in_RSI - in_RDI) / 0x60) != lVar8);
    lVar6 = lVar6 - lVar8;
  }
  *plVar3 = lVar6;
  return;
}


