// 003b1410 from_iter

/* <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,
   <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::with_capacity::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::with_capacity::{closure#0}>>>
::from_iter(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = param_3 - param_2;
  uVar8 = uVar7;
  if (param_3 < param_2) {
    uVar8 = 0;
  }
  uVar3 = uVar8 * 0x40;
  uVar2 = param_3;
  puVar5 = (ulonglong *)0x0;
  if (uVar3 < 0x7ffffffffffffff9 && uVar8 >> 0x3a == 0) goto LAB_003b145c;
  do {
    param_1 = puVar5;
    (*(code *)PTR_handle_error_00798ff0)();
    uVar2 = param_3;
    param_2 = uVar3;
LAB_003b145c:
    if (uVar3 == 0) {
      uVar1 = 8;
      uVar8 = 0;
      break;
    }
    param_3 = uVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar1 = (*(code *)PTR___rust_alloc_00799000)();
    puVar5 = (ulonglong *)&DAT_00000008;
  } while (uVar1 == 0);
  if (param_2 < uVar2) {
    uVar3 = (ulonglong)((uint)uVar7 & 3);
    if (param_2 - uVar2 < 0xfffffffffffffffd) {
      plVar4 = (longlong *)(uVar1 + 0xc0);
      uVar2 = 0;
      do {
        plVar4[-0x18] = param_2 + uVar2;
        plVar4[-0x10] = param_2 + uVar2 + 1;
        plVar4[-8] = param_2 + 2 + uVar2;
        *plVar4 = param_2 + uVar2 + 3;
        uVar2 = uVar2 + 4;
        plVar4 = plVar4 + 0x20;
      } while ((uVar7 & 0xfffffffffffffffc) != uVar2);
      if (uVar3 == 0) goto LAB_003b1545;
      param_2 = param_2 + uVar2;
    }
    else {
      uVar2 = 0;
    }
    puVar5 = (ulonglong *)(uVar2 * 0x40 + uVar1);
    lVar6 = 0;
    do {
      *puVar5 = param_2;
      param_2 = param_2 + 1;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 8;
    } while (-lVar6 != uVar3);
    uVar2 = uVar2 - lVar6;
  }
  else {
    uVar2 = 0;
  }
LAB_003b1545:
  *param_1 = uVar8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}


