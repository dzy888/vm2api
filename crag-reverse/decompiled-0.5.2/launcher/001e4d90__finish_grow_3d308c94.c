// 001e4d90 finish_grow

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
    goto LAB_001e4e1a;
  }
  if (param_2 == 0) {
    if (uVar2 != 0) {
      lVar1 = (*(code *)PTR_malloc_0021a8a8)();
      goto joined_r0x001e4df8;
    }
    lVar1 = 8;
  }
  else {
    lVar1 = (*(code *)PTR_realloc_0021a8c0)();
joined_r0x001e4df8:
    if (lVar1 == 0) {
      param_1[1] = 8;
      lVar1 = 0x10;
      goto LAB_001e4e1a;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar3 = 0;
LAB_001e4e1a:
  *(ulonglong *)((longlong)param_1 + lVar1) = uVar2;
  *param_1 = uVar3;
  return;
}


