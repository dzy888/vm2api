// 001a0560 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::with_capacity::{closure#0}>>

/* <alloc[12e961f32105355]::boxed::Box<[std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>]> as
   core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>::from_iter::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,
   <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::with_capacity::{closure#0}>>
    */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::boxed::Box<[std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>]>as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>
::from_iter::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::with_capacity::_closure_0_>>
          (ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  uVar8 = param_2 - param_1;
  uVar9 = uVar8;
  if (param_2 < param_1) {
    uVar9 = 0;
  }
  uVar4 = uVar9 * 0x40;
  uVar3 = 0;
  if (uVar4 < 0x7ffffffffffffff9 && uVar9 >> 0x3a == 0) goto LAB_001a05ac;
  do {
    param_1 = uVar3;
    (*(code *)PTR_handle_error_00219c78)();
    param_2 = uVar4;
LAB_001a05ac:
    if (uVar4 == 0) {
      lVar2 = 8;
      goto LAB_001a05f6;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    uVar3 = 8;
  } while (lVar2 == 0);
  if (param_2 <= param_1) {
LAB_001a05f6:
    uVar3 = 0;
    goto LAB_001a05f8;
  }
  uVar4 = (ulonglong)((uint)uVar8 & 3);
  if (param_1 - param_2 < 0xfffffffffffffffd) {
    plVar5 = (longlong *)(lVar2 + 0xc0);
    uVar3 = 0;
    do {
      plVar5[-0x18] = param_1 + uVar3;
      plVar5[-0x10] = param_1 + uVar3 + 1;
      plVar5[-8] = param_1 + 2 + uVar3;
      *plVar5 = param_1 + uVar3 + 3;
      uVar3 = uVar3 + 4;
      plVar5 = plVar5 + 0x20;
    } while ((uVar8 & 0xfffffffffffffffc) != uVar3);
    if (uVar4 != 0) {
      param_1 = param_1 + uVar3;
      goto LAB_001a0662;
    }
  }
  else {
    uVar3 = 0;
LAB_001a0662:
    puVar6 = (ulonglong *)(lVar2 + uVar3 * 0x40);
    lVar7 = 0;
    do {
      *puVar6 = param_1;
      param_1 = param_1 + 1;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (-lVar7 != uVar4);
    uVar3 = uVar3 - lVar7;
  }
  if (uVar3 < uVar9) {
    lVar2 = (*(code *)PTR___rust_realloc_0021a150)(uVar3 << 6,8);
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
LAB_001a05f8:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = lVar2;
  return auVar10;
}


