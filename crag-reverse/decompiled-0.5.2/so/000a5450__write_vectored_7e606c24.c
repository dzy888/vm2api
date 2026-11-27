// 000a5450 write_vectored

/* <alloc[12e961f32105355]::vec::Vec<u8> as std[6c98fd8553dbae28]::io::Write>::write_vectored */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_vectored
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    if (param_3 < 5) {
      lVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if ((param_3 & 3) != 0) {
        uVar7 = (ulonglong)((uint)param_3 & 3);
      }
      lVar6 = param_3 - uVar7;
      plVar3 = (longlong *)(param_2 + 0x28);
      lVar4 = 0;
      lVar8 = 0;
      lVar9 = 0;
      lVar10 = 0;
      lVar5 = lVar6;
      do {
        lVar9 = lVar9 + plVar3[-4];
        lVar10 = lVar10 + plVar3[-2];
        lVar4 = lVar4 + *plVar3;
        lVar8 = lVar8 + plVar3[2];
        plVar3 = plVar3 + 8;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
      uVar7 = lVar8 + lVar10 + lVar4 + lVar9;
    }
    lVar5 = param_3 * 0x10 + param_2;
    lVar4 = param_3 - lVar6;
    plVar3 = (longlong *)(lVar6 * 0x10 + param_2 + 8);
    do {
      uVar7 = uVar7 + *plVar3;
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if ((ulonglong)(*param_1 - param_1[2]) < uVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_1,param_1[2],uVar7,1,1);
    }
    lVar6 = param_1[2];
    do {
      uVar1 = *(ulonglong *)(param_2 + 8);
      if ((ulonglong)(*param_1 - lVar6) < uVar1) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar6,uVar1,1,1);
        lVar6 = param_1[2];
LAB_000a5570:
        (*(code *)PTR_memcpy_000c3aa8)();
      }
      else if (uVar1 != 0) goto LAB_000a5570;
      lVar6 = lVar6 + uVar1;
      param_1[2] = lVar6;
      param_2 = param_2 + 0x10;
    } while (param_2 != lVar5);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar7;
  return auVar2 << 0x40;
}


