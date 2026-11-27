// 000718c0 finish_grow

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
          (undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
          longlong param_5,ulonglong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = SUB168(auVar1 * auVar2,8);
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar4 = 0x8000000000000000 - param_5;
  uVar6 = 1;
  if (uVar4 < uVar3 || lVar5 != 0) {
    lVar5 = 8;
    uVar3 = 0;
    goto LAB_0007195c;
  }
  if (param_2 == 0) {
    if (uVar3 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)
                (CONCAT71((int7)(uVar4 >> 8),uVar4 < uVar3 || lVar5 != 0),lVar5,param_3);
      lVar5 = (*(code *)PTR___rust_alloc_000c3a90)();
      goto joined_r0x00071940;
    }
    lVar5 = param_5;
  }
  else {
    lVar5 = (*(code *)PTR___rust_realloc_000c3c40)(uVar3,param_5,param_3,param_6 * param_2);
joined_r0x00071940:
    if (lVar5 == 0) {
      param_1[1] = param_5;
      lVar5 = 0x10;
      goto LAB_0007195c;
    }
  }
  param_1[1] = lVar5;
  lVar5 = 0x10;
  uVar6 = 0;
LAB_0007195c:
  *(ulonglong *)((longlong)param_1 + lVar5) = uVar3;
  *param_1 = uVar6;
  return;
}


