// 003f1b90 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::with_capacity::{closure#0}>>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <alloc[12e961f32105355]::boxed::Box<[std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>]> as
   core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>>>::from_iter::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,
   <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::with_capacity::{closure#0}>> */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::boxed::Box<[std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>]>as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>>>
::from_iter::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::with_capacity::_closure_0_>>
          (void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong in_RSI;
  ulonglong in_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined1 auVar15 [16];
  
  uVar11 = in_RSI - in_RDI;
  if (in_RSI < in_RDI) {
    uVar11 = 0;
  }
  uVar9 = uVar11 * 8;
  uVar8 = 0;
  if (uVar9 < 0x7ffffffffffffff9 && uVar11 >> 0x3d == 0) goto LAB_003f1bd8;
  do {
    in_RDI = uVar8;
    (*(code *)PTR_handle_error_00798ff0)();
    in_RSI = uVar9;
LAB_003f1bd8:
    if (uVar9 == 0) {
      lVar7 = 8;
      goto LAB_003f1c1f;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = (*(code *)PTR___rust_alloc_00799000)();
    lVar6 = _UNK_00184268;
    lVar5 = _DAT_00184260;
    lVar4 = _UNK_00182e98;
    lVar3 = _DAT_00182e90;
    uVar8 = 8;
  } while (lVar7 == 0);
  uVar9 = in_RSI - in_RDI;
  if (in_RSI < in_RDI || uVar9 == 0) {
LAB_003f1c1f:
    uVar8 = 0;
    goto LAB_003f1c21;
  }
  if (uVar9 < 4) {
    uVar8 = 0;
LAB_003f1c90:
    do {
      *(ulonglong *)(lVar7 + uVar8 * 8) = in_RDI;
      in_RDI = in_RDI + 1;
      uVar8 = uVar8 + 1;
    } while (in_RSI != in_RDI);
  }
  else {
    uVar8 = uVar9 & 0xfffffffffffffffc;
    auVar13._8_4_ = (int)in_RDI;
    auVar13._0_8_ = in_RDI;
    auVar13._12_4_ = (int)(in_RDI >> 0x20);
    lVar12 = in_RDI + _DAT_00182f50;
    lVar14 = auVar13._8_8_ + _UNK_00182f58;
    in_RDI = in_RDI + uVar8;
    uVar10 = 0;
    do {
      plVar1 = (longlong *)(lVar7 + uVar10 * 8);
      *plVar1 = lVar12;
      plVar1[1] = lVar14;
      plVar1 = (longlong *)(lVar7 + 0x10 + uVar10 * 8);
      *plVar1 = lVar12 + lVar3;
      plVar1[1] = lVar14 + lVar4;
      uVar10 = uVar10 + 4;
      lVar12 = lVar12 + lVar5;
      lVar14 = lVar14 + lVar6;
    } while (uVar8 != uVar10);
    if (uVar9 != uVar8) goto LAB_003f1c90;
  }
  if ((uVar8 < uVar11) && (lVar7 = (*(code *)PTR___rust_realloc_007997f0)(uVar8 * 8,8), lVar7 == 0))
  {
    (*(code *)PTR_handle_error_00798ff0)(extraout_XMM0_Qa,uVar8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_003f1c21:
  auVar15._8_8_ = uVar8;
  auVar15._0_8_ = lVar7;
  return auVar15;
}


