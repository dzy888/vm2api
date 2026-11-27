// 004a14c0 <<craggemini_core[66f3c71560d70857]::Config>::validate::{closure#19}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<<craggemini_core[66f3c71560d70857]::Config>::validate::{closure#19}>
    */

undefined1 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::<<craggemini_core[66f3c71560d70857]::Config>::validate::_closure_19_>(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  if (*param_1 == param_1[1]) {
    return 0;
  }
  do {
    lVar1 = lVar4 + 0x18;
    if (*(longlong *)(lVar4 + 0x10) != 0x40) {
      *param_1 = lVar1;
      return 1;
    }
    lVar5 = 0;
    while (lVar5 != 0x40) {
      cVar2 = *(char *)(*(longlong *)(lVar4 + 8) + lVar5);
      uVar3 = 1;
      if (((byte)(cVar2 - 0x3aU) < 0xf6 && (byte)(cVar2 + 0x99U) < 0xfa) ||
         (cVar2 = *(char *)(*(longlong *)(lVar4 + 8) + 1 + lVar5), lVar5 = lVar5 + 2,
         (byte)(cVar2 + 0x99U) < 0xfa && (byte)(cVar2 - 0x3aU) < 0xf6)) goto LAB_004a154a;
    }
    uVar3 = 0;
    lVar4 = lVar1;
  } while (lVar1 != param_1[1]);
LAB_004a154a:
  *param_1 = lVar1;
  return uVar3;
}


