// 00394870 spec_extend

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<u8> as
   alloc[12e961f32105355]::collections::vec_deque::spec_extend::SpecExtend<&u8,
   core[c0acaeba6ab4c2e0]::slice::iter::Iter<u8>>>::spec_extend */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<u8>as_alloc[12e961f32105355]::collections::vec_deque::spec_extend::SpecExtend<&u8,core[c0acaeba6ab4c2e0]::slice::iter::Iter<u8>>>
::spec_extend(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *unaff_R14;
  ulonglong uVar8;
  
  uVar6 = param_3 - param_2;
  uVar8 = param_1[3];
  if (CARRY8(uVar8,uVar6)) {
    ppuVar4 = &anon_869a44742910931491f4b62d80901a16_73_llvm_763634721200370616;
    (*(code *)PTR_expect_failed_00799440)();
LAB_0039494b:
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(unaff_R14,uVar8,uVar6,1,1);
    ppuVar5 = (undefined **)*unaff_R14;
    uVar8 = unaff_R14[3];
    uVar7 = unaff_R14[2];
    param_1 = unaff_R14;
    if (uVar7 <= (longlong)ppuVar4 - uVar8) goto LAB_0039498d;
  }
  else {
    ppuVar5 = (undefined **)*param_1;
    if ((undefined **)(uVar8 + uVar6) <= ppuVar5) {
      uVar7 = param_1[2];
      goto LAB_0039498d;
    }
    ppuVar4 = ppuVar5;
    unaff_R14 = param_1;
    if ((longlong)ppuVar5 - uVar8 < uVar6) goto LAB_0039494b;
    uVar7 = param_1[2];
    if (uVar7 <= (longlong)ppuVar5 - uVar8) goto LAB_0039498d;
  }
  uVar2 = (longlong)ppuVar4 - uVar7;
  uVar3 = uVar8 - uVar2;
  if ((ulonglong)((longlong)ppuVar5 - (longlong)ppuVar4) < uVar3 || uVar2 <= uVar3) {
    uVar7 = (longlong)ppuVar5 - uVar2;
    (*(code *)PTR_memmove_00799258)(uVar3,uVar2);
    param_1[2] = uVar7;
  }
  else {
    (*(code *)PTR_memcpy_00799008)(uVar3,uVar3);
  }
LAB_0039498d:
  puVar1 = PTR_memcpy_00799008;
  ppuVar4 = (undefined **)0x0;
  if (ppuVar5 <= (undefined **)(uVar7 + uVar8)) {
    ppuVar4 = ppuVar5;
  }
  if ((ulonglong)((longlong)ppuVar5 - ((longlong)(uVar7 + uVar8) - (longlong)ppuVar4)) < uVar6) {
    (*(code *)PTR_memcpy_00799008)();
    (*(code *)puVar1)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)();
  }
  param_1[3] = uVar8 + uVar6;
  return;
}


