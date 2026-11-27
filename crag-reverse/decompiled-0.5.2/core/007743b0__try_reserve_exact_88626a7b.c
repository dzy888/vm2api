// 007743b0 try_reserve_exact

/* <alloc[12e961f32105355]::string::String>::try_reserve_exact */

longlong __rustcall
<alloc[12e961f32105355]::string::String>::try_reserve_exact(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int local_30 [2];
  longlong local_28;
  
  uVar1 = param_1[2];
  lVar2 = -1;
  if (*param_1 - uVar1 < param_2) {
    if (CARRY8(uVar1,param_2)) {
      lVar2 = 0;
    }
    else {
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (local_30,*param_1,param_1[1],uVar1 + param_2);
      if (local_30[0] == 1) {
        lVar2 = local_28;
      }
      else {
        param_1[1] = local_28;
        *param_1 = uVar1 + param_2;
        lVar2 = -1;
      }
    }
  }
  return lVar2;
}


