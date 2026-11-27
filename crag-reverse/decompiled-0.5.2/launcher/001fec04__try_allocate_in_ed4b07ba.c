// 001fec04 try_allocate_in

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in */

undefined8 * __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
          (undefined8 *param_1,ulonglong param_2,char param_3,longlong param_4,ulonglong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  uVar3 = SUB168(auVar1 * auVar2,0);
  if (0x8000000000000000U - param_4 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    param_1[1] = 0;
LAB_001fec46:
    uVar4 = 1;
  }
  else {
    if (uVar3 == 0) {
      param_1[1] = 0;
      param_1[2] = param_4;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      if (param_3 == '\0') {
        lVar5 = (*(code *)PTR___rust_alloc_00219c88)();
      }
      else {
        lVar5 = (*(code *)PTR___rust_alloc_zeroed_00219e90)();
      }
      if (lVar5 == 0) {
        param_1[1] = param_4;
        param_1[2] = uVar3;
        goto LAB_001fec46;
      }
      param_1[1] = param_2;
      param_1[2] = lVar5;
    }
    uVar4 = 0;
  }
  *param_1 = uVar4;
  return param_1;
}


