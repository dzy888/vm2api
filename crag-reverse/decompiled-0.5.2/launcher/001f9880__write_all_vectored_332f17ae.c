// 001f9880 write_all_vectored

/* <alloc[12e961f32105355]::vec::Vec<u8> as std[6c98fd8553dbae28]::io::Write>::write_all_vectored */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_all_vectored
          (longlong *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    if (param_3 < 5) {
      lVar3 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
      if ((param_3 & 3) != 0) {
        uVar2 = (ulonglong)((uint)param_3 & 3);
      }
      lVar3 = param_3 - uVar2;
      plVar1 = param_2 + 5;
      lVar6 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar9 = 0;
      lVar4 = lVar3;
      do {
        lVar8 = lVar8 + plVar1[-4];
        lVar9 = lVar9 + plVar1[-2];
        lVar6 = lVar6 + *plVar1;
        lVar7 = lVar7 + plVar1[2];
        plVar1 = plVar1 + 8;
        lVar4 = lVar4 + -4;
      } while (lVar4 != 0);
      uVar2 = lVar7 + lVar9 + lVar6 + lVar8;
    }
    puVar5 = param_2 + param_3 * 2;
    lVar4 = param_3 - lVar3;
    plVar1 = param_2 + lVar3 * 2 + 1;
    do {
      uVar2 = uVar2 + *plVar1;
      plVar1 = plVar1 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = param_1[2];
    if ((ulonglong)(*param_1 - lVar4) < uVar2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_1,lVar4,uVar2,1,1);
      lVar4 = param_1[2];
    }
    do {
      uVar2 = param_2[1];
      if ((ulonglong)(*param_1 - lVar4) < uVar2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar4,uVar2,1,1,param_6,*param_2);
        lVar4 = param_1[2];
LAB_001f9990:
        (*(code *)PTR_memcpy_00219c60)();
      }
      else if (uVar2 != 0) goto LAB_001f9990;
      lVar4 = lVar4 + uVar2;
      param_1[2] = lVar4;
      param_2 = param_2 + 2;
    } while (param_2 != puVar5);
  }
  return 0;
}


