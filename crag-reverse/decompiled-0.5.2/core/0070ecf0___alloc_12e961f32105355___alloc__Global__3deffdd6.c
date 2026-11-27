// 0070ecf0 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
<alloc[12e961f32105355]::alloc::Global>
          (ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  int local_28 [2];
  ulonglong local_20;
  
  if (param_5 != 0) goto LAB_0070ed07;
  do {
    param_1 = (ulonglong *)0x0;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0070ed07:
    bVar4 = CARRY8(param_3,param_2);
    param_3 = param_3 + param_2;
  } while (bVar4);
  uVar2 = *param_1 * 2;
  if (uVar2 < param_3) {
    uVar2 = param_3;
  }
  uVar3 = 8;
  if (param_5 != 1) {
    uVar3 = (ulonglong)(param_5 < 0x401) * 3 + 1;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar3,param_4);
  if (local_28[0] == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[1] = local_20;
  *param_1 = uVar3;
  return;
}


