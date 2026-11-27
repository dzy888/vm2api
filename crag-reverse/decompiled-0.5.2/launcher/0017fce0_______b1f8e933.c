// 0017fce0 <()>

/* std[6c98fd8553dbae28]::sync::mpmc::sync_channel::<()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::sync::mpmc::sync_channel::<()>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong in_stack_fffffffffffffd00;
  ulonglong uVar15;
  
  if (param_2 == 0) {
    uVar13 = 1;
    uVar14 = 1;
    uVar15 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
    uVar3 = 0;
    uVar4 = 8;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 8;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 8;
    uVar11 = 0;
    uVar12 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
      goto LAB_0017ff58;
    }
    (*(code *)PTR_memcpy_00219c60)
              (extraout_XMM0_Da_00,0x88,param_5,param_6,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
               uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
    uVar3 = 2;
  }
  else {
    lVar2 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    <alloc[12e961f32105355]::boxed::Box<[std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>]>as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<std[6c98fd8553dbae28]::sync::mpmc::array::Slot<()>>>
    ::from_iter::
    <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::with_capacity::_closure_0_>>
              ();
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
LAB_0017ff58:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da,0x280);
    uVar3 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = lVar2;
  return param_1;
}


