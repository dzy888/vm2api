// 000a3d90 inner

/* WARNING: Removing unreachable block (ram,0x000a3e24) */
/* std[6c98fd8553dbae28]::fs::read_to_string::inner */

undefined8 * __rustcall
std[6c98fd8553dbae28]::fs::read_to_string::inner
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 unaff_R12;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar9 [16];
  longlong local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  
  local_70 = 0x1b600000000;
  local_64 = 0;
  local_68 = 1;
  local_78 = &local_70;
  if (param_3 < 0x180) {
    uVar8 = (*(code *)PTR_memcpy_000c3aa8)();
    *(undefined1 *)((longlong)&local_1f8 + param_3) = 0;
    (*(code *)PTR_from_bytes_with_nul_000c40a8)(uVar8,param_3 + 1);
    if ((int)local_50 == 1) {
      local_58 = &DAT_000c1618;
      goto LAB_000a3e3d;
    }
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_60,uStack_48,&local_70);
    uVar8 = local_5c;
  }
  else {
    sys::helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::fs::unix::File>
              (&local_60,param_2,param_3,&local_78,
               <std[6c98fd8553dbae28]::sys::fs::unix::File>::open::_closure_0_);
    uVar8 = local_5c;
  }
  if (local_60 == 1) {
LAB_000a3e3d:
    param_1[1] = local_58;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  sys::fs::unix::try_statx(&local_1f8,uVar8,&DAT_0000a00f,0x1000);
  if (local_1f8 == -1) {
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
    local_1f8 = 0;
    uStack_1f0 = 0;
    iVar2 = (*(code *)PTR_fstat64_000c4180)();
    if (iVar2 == -1) {
      piVar3 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      iVar2 = *piVar3;
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
      uVar6 = (longlong)iVar2 << 0x20 | 2;
      goto LAB_000a3f42;
    }
    unaff_R12 = local_1c8;
LAB_000a3f0f:
    uVar5 = 1;
  }
  else {
    if ((int)local_1f8 != 2) {
      unaff_R12 = local_1a8;
      goto LAB_000a3f0f;
    }
    uVar6 = uStack_1f0;
LAB_000a3f42:
    if ((1 < ((uint)uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
      uStack_1f0 = uVar6 - 1;
      local_1f8 = CONCAT71(local_1f8._1_7_,3);
      (*(code *)PTR_drop_000c3ae0)();
    }
    uVar5 = 0;
  }
  local_50 = 0;
  uStack_48 = 1;
  local_40 = 0;
  lVar4 = (*(code *)PTR_try_reserve_exact_000c44f0)();
  lVar1 = local_40;
  if (lVar4 == -1) {
    auVar9 = io::default_read_to_end::<std[6c98fd8553dbae28]::fs::File>
                       (uVar8,&local_50,uVar5,unaff_R12);
    lVar4 = local_40;
    ppuVar7 = auVar9._8_8_;
    uVar8 = (*(code *)PTR_from_utf8_000c3bd8)(extraout_XMM0_Da_00,local_40 - lVar1);
    if (local_1f8 == 0) {
      local_40 = lVar4;
      if (auVar9._0_8_ != 1) {
        param_1[2] = lVar4;
        *(int *)param_1 = (int)local_50;
        *(undefined4 *)((longlong)param_1 + 4) = local_50._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_48._4_4_;
        goto LAB_000a4064;
      }
    }
    else {
      if ((auVar9._0_8_ & 1) == 0) {
        ppuVar7 = &PTR_DAT_000c1418;
      }
      local_40 = lVar1;
    }
  }
  else {
    ppuVar7 = (undefined **)0x2600000003;
    uVar8 = extraout_XMM0_Da;
    local_40 = lVar1;
  }
  param_1[1] = ppuVar7;
  *param_1 = 0xffffffffffffffff;
  if (local_50 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar8,1);
  }
LAB_000a4064:
  (*(code *)PTR_close_000c3ab8)();
  return param_1;
}


