// 00096560 finish_grow

/* <alloc[12e961f32105355]::raw_vec::RawVecInner<std[6c98fd8553dbae28]::alloc::System>>::finish_grow
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner<std[6c98fd8553dbae28]::alloc::System>>::finish_grow
          (undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_4 * 0x10;
  uVar3 = 1;
  if (0x7ffffffffffffff8 < uVar2 || param_4 >> 0x3c != 0) {
    lVar1 = 8;
    uVar2 = 0;
    goto LAB_000965ea;
  }
  if (param_2 == 0) {
    if (uVar2 != 0) {
      lVar1 = (*(code *)PTR_malloc_000c4280)();
      goto joined_r0x000965c8;
    }
    lVar1 = 8;
  }
  else {
    lVar1 = (*(code *)PTR_realloc_000c4298)();
joined_r0x000965c8:
    if (lVar1 == 0) {
      param_1[1] = 8;
      lVar1 = 0x10;
      goto LAB_000965ea;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar3 = 0;
LAB_000965ea:
  *(ulonglong *)((longlong)param_1 + lVar1) = uVar2;
  *param_1 = uVar3;
  return;
}


