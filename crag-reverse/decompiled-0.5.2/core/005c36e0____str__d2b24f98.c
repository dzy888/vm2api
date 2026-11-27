// 005c36e0 <&str>

/* <str>::replace::<&str> */

void __rustcall <str>::replace::<&str>(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_130 = 0;
  lStack_128 = 1;
  local_120 = 0;
  local_110 = param_2;
  (*(code *)PTR_new_00799a18)(&DAT_0019ed33,param_3,2);
  local_38 = local_a0;
  local_48 = local_b0;
  uStack_40 = uStack_a8;
  local_58 = local_c0;
  uStack_50 = uStack_b8;
  local_68 = local_d0;
  uStack_60 = uStack_c8;
  local_78 = local_e0;
  uStack_70 = uStack_d8;
  local_88 = local_f0;
  uStack_80 = uStack_e8;
  local_98 = local_100;
  uStack_94 = uStack_fc;
  uStack_90 = uStack_f8;
  uStack_8c = uStack_f4;
  lVar5 = 0;
  lVar4 = 0;
  local_118 = param_1;
  local_108 = param_3;
  while( true ) {
    uVar7 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
            ::next_match(&local_100,&local_98);
    lVar3 = local_f0;
    lVar1 = local_108;
    if ((char)local_100 == '\0') break;
    lVar1 = CONCAT44(uStack_f4,uStack_f8);
    uVar6 = lVar1 - lVar4;
    if ((ulonglong)(local_130 - lVar5) < uVar6) {
      uVar7 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_130,lVar5,uVar6,1,1);
      lVar5 = local_120;
    }
    if (lVar1 != lVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar7,uVar6);
    }
    local_120 = lVar5 + uVar6;
    if (local_130 == local_120) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_130,local_120,1,1,1);
    }
    *(undefined1 *)(lStack_128 + local_120) = 10;
    lVar5 = local_120 + 1;
    lVar4 = lVar3;
    local_120 = lVar5;
  }
  uVar6 = local_108 - lVar4;
  plVar2 = local_118;
  if ((ulonglong)(local_130 - lVar5) < uVar6) {
    uVar7 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_130,lVar5,uVar6,1,1);
    lVar5 = local_120;
    plVar2 = local_118;
  }
  if (lVar1 != lVar4) {
    local_118 = plVar2;
    (*(code *)PTR_memcpy_00799008)(uVar7,uVar6);
  }
  plVar2[2] = lVar5 + uVar6;
  *plVar2 = local_130;
  plVar2[1] = lStack_128;
  return;
}


