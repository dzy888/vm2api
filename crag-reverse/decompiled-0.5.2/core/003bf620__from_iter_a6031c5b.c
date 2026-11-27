// 003bf620 from_iter

/* <alloc[12e961f32105355]::vec::Vec<u32> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u32,
   alloc[12e961f32105355]::collections::btree::set::IntoIter<u32>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<u32>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u32,alloc[12e961f32105355]::collections::btree::set::IntoIter<u32>>>
::from_iter(ulonglong *param_1,undefined4 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [3];
  longlong local_90 [2];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  if (0x7ffffffffffffffc < uVar2 * 4 || uVar2 >> 0x3e != 0) {
LAB_003bf661:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar2 * 4 == 0) {
    uStack_108 = 4;
    uVar2 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uStack_108 = (*(code *)PTR___rust_alloc_00799000)();
    if (uStack_108 == 0) goto LAB_003bf661;
  }
  local_100 = 0;
  local_38 = *(ulonglong *)(param_2 + 0x10);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  local_58 = param_2[8];
  uStack_54 = param_2[9];
  uStack_50 = param_2[10];
  uStack_4c = param_2[0xb];
  local_48 = param_2[0xc];
  uStack_44 = param_2[0xd];
  uStack_40 = param_2[0xe];
  uStack_3c = param_2[0xf];
  local_110 = uVar2;
  if (uVar2 < local_38) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_110,0,local_38,4,4);
  }
  uVar2 = uStack_108;
  local_b8 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  uStack_ec = param_2[3];
  local_e8 = *(undefined8 *)(param_2 + 4);
  uStack_e0 = *(undefined8 *)(param_2 + 6);
  local_d8 = *(undefined8 *)(param_2 + 8);
  uStack_d0 = *(undefined8 *)(param_2 + 10);
  local_c8 = *(undefined8 *)(param_2 + 0xc);
  uStack_c0 = *(undefined8 *)(param_2 + 0xe);
  uVar3 = local_100;
  while (<alloc[12e961f32105355]::collections::btree::map::IntoIter<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
         ::dying_next(local_90,&local_f8), local_90[0] != 0) {
    *(undefined4 *)(uVar2 + uVar3 * 4) = *(undefined4 *)(local_90[0] + 8 + local_80 * 4);
    uVar3 = uVar3 + 1;
  }
  local_100 = uVar3;
  do {
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
    ::dying_next(local_a8,&local_f8);
  } while (local_a8[0] != 0);
  param_1[2] = local_100;
  *param_1 = local_110;
  param_1[1] = uStack_108;
  return param_1;
}


