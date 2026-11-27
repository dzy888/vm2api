// 007740e0 try_reserve

/* <alloc[12e961f32105355]::string::String>::try_reserve */

ulonglong __rustcall
<alloc[12e961f32105355]::string::String>::try_reserve(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_30 [2];
  ulonglong local_28;
  
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar2 = 0xffffffffffffffff;
  if (uVar1 - uVar3 < param_2) {
    if (!CARRY8(uVar3,param_2)) {
      uVar2 = uVar1 * 2;
      if (uVar1 * 2 < uVar3 + param_2) {
        uVar2 = uVar3 + param_2;
      }
      uVar3 = 8;
      if (8 < uVar2) {
        uVar3 = uVar2;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow(local_30,uVar1,param_1[1],uVar3);
      if (local_30[0] != 1) {
        param_1[1] = local_28;
        *param_1 = uVar3;
        local_28 = 0xffffffffffffffff;
      }
      return local_28;
    }
    uVar2 = 0;
  }
  return uVar2;
}


