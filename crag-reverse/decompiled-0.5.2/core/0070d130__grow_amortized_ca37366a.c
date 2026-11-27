// 0070d130 grow_amortized

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized
          (ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 extraout_RDX;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  char local_28 [8];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar3 = *param_1 * 2;
  uVar2 = param_2 + 1U;
  if (param_2 + 1U <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  finish_grow(local_28,*param_1,param_1[1],uVar3,param_3,param_4);
  if (local_28[0] == '\0') {
    param_1[1] = local_20;
    *param_1 = uVar3;
    auVar4._8_8_ = extraout_RDX;
    auVar4._0_8_ = 0xffffffffffffffff;
    return auVar4;
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}


