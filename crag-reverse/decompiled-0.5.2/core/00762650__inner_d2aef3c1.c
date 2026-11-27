// 00762650 inner

/* WARNING: Removing unreachable block (ram,0x007626e0) */
/* std[6c98fd8553dbae28]::fs::read::inner */

undefined8 * __rustcall
std[6c98fd8553dbae28]::fs::read::inner(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar7 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_60;
  undefined8 local_58;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  
  local_40 = 0x1b600000000;
  local_34 = 0;
  local_38 = 1;
  local_48 = &local_40;
  if (param_3 < 0x180) {
    uVar6 = (*(code *)PTR_memcpy_00799008)();
    *(undefined1 *)((longlong)&local_1e8 + param_3) = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)(uVar6,param_3 + 1);
    if (local_60 == 1) {
      local_28 = &DAT_00796450;
      goto LAB_007626f9;
    }
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_30,local_58,&local_40);
    uVar6 = local_2c;
  }
  else {
    sys::helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::fs::unix::File>
              (&local_30,param_2,param_3,&local_48,
               <std[6c98fd8553dbae28]::sys::fs::unix::File>::open::_closure_0_);
    uVar6 = local_2c;
  }
  if (local_30 == 1) {
LAB_007626f9:
    param_1[1] = local_28;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  sys::fs::unix::try_statx(&local_1e8,uVar6,&DAT_001874f9);
  if (local_1e8 == -1) {
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    iVar1 = (*(code *)PTR_fstat64_0079aca8)();
    if (iVar1 == -1) {
      piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar1 = *piVar2;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      uStack_1e0 = (longlong)iVar1 << 0x20 | 2;
      goto LAB_00762819;
    }
    lVar4 = local_1b8;
LAB_007627cb:
    if (lVar4 < 0) {
LAB_007627d4:
      param_1[1] = 0x2600000003;
      *param_1 = 0xffffffffffffffff;
      goto LAB_007628c1;
    }
    if (lVar4 == 0) {
      uVar5 = 1;
      lVar4 = 0;
      uVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar3 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar3 == 0) goto LAB_007627d4;
      uVar5 = 1;
    }
  }
  else {
    if ((int)local_1e8 != 2) {
      lVar4 = local_198;
      goto LAB_007627cb;
    }
LAB_00762819:
    if ((1 < ((uint)uStack_1e0 & 3) - 2) && ((uStack_1e0 & 3) != 0)) {
      uStack_1e0 = uStack_1e0 - 1;
      local_1e8 = CONCAT71(local_1e8._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    uVar3 = 1;
    uVar5 = 0;
    lVar4 = 0;
  }
  local_1d8 = 0;
  local_1e8 = lVar4;
  uStack_1e0 = uVar3;
  auVar7 = io::default_read_to_end::<std[6c98fd8553dbae28]::fs::File>(uVar6,&local_1e8,uVar5);
  if (auVar7._0_8_ == 1) {
    param_1[1] = auVar7._8_8_;
    *param_1 = 0xffffffffffffffff;
    if (local_1e8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
    }
  }
  else {
    param_1[2] = local_1d8;
    *(undefined4 *)param_1 = (undefined4)local_1e8;
    *(undefined4 *)((longlong)param_1 + 4) = local_1e8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1e0._4_4_;
  }
LAB_007628c1:
  (*(code *)PTR_close_00799030)();
  return param_1;
}


