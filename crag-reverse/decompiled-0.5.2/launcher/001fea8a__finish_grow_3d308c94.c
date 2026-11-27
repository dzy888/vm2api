// 001fea8a finish_grow

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow */

undefined8 * __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
          (undefined8 *param_1,longlong *param_2,ulonglong param_3,longlong param_4,
          ulonglong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_38;
  longlong local_30;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar6 = 1;
  if (0x8000000000000000U - param_4 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto LAB_001feb58;
  }
  plVar5 = &local_30;
  if ((param_5 == 0) || (*param_2 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *param_2 * param_5;
    plVar5 = &local_38;
    local_30 = param_4;
  }
  *plVar5 = lVar4;
  lVar4 = param_4;
  if (local_30 == 0) {
    if (uVar3 != 0) {
LAB_001feb2a:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
      goto LAB_001feb3c;
    }
  }
  else {
    if (local_38 == 0) {
      if (uVar3 != 0) goto LAB_001feb2a;
    }
    else {
      lVar4 = (*(code *)PTR___rust_realloc_0021a150)(uVar3,param_4);
    }
LAB_001feb3c:
    if (lVar4 == 0) {
      param_1[1] = param_4;
      lVar4 = 0x10;
      goto LAB_001feb58;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar6 = 0;
LAB_001feb58:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar6;
  return param_1;
}


