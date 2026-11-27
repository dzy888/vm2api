// 001eb880 capture_env

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::capture_env */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::capture_env
          (ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  undefined8 *puStack_90;
  ulonglong local_88;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  longlong local_38;
  
  if ((*(char *)(param_2 + 0x78) == '\0') && (*(longlong *)(param_2 + 0x70) == 0)) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  local_f0 = param_1;
  <std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::capture(&local_108);
  local_58 = local_100;
  uVar8 = local_f8 + 1;
  if (local_f8 * 8 + 8U < 0x7ffffffffffffff9 && uVar8 >> 0x3d == 0) {
    local_38 = param_2;
    if (local_f8 * 8 == -8) {
      local_50 = 0;
      local_48 = (undefined8 *)&DAT_00000008;
LAB_001eb983:
      uStack_40 = 0;
      (*(code *)PTR_grow_one_0021a9b0)();
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar6 == (undefined8 *)0x0) goto LAB_001eb91b;
      uStack_40 = 0;
      local_50 = uVar8;
      local_48 = puVar6;
      if (uVar8 == 0) goto LAB_001eb983;
    }
    *local_48 = 0;
    puVar5 = PTR___rust_dealloc_00219c40;
    local_98 = local_50;
    puStack_90 = local_48;
    local_88 = 1;
    local_e8 = (ulonglong)(local_108 != 0);
    if (local_108 == 0) {
      local_f8 = 0;
    }
    local_e0 = 0;
    local_d8 = local_108;
    local_d0 = local_58;
    local_c0 = 0;
    local_b8 = local_108;
    local_b0 = local_58;
    local_a0 = (undefined8 *)0x0;
    local_c8 = local_e8;
    local_a8 = local_f8;
    while( true ) {
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::dying_next(&local_78,&local_e8);
      if ((local_78 == 0) ||
         (uVar8 = *(ulonglong *)(local_78 + 8 + local_68 * 0x18), uVar8 == 0xffffffffffffffff)) {
        while (uVar10 = <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
                        ::dying_next(&local_78,&local_e8), uVar9 = local_68, uVar8 = local_78,
              local_78 != 0) {
          if (*(longlong *)(local_78 + 8 + local_68 * 0x18) != 0) {
            uVar10 = (*(code *)puVar5)(uVar10,1);
          }
          if (*(longlong *)(uVar8 + uVar9 * 0x18 + 0x110) != 0) {
            (*(code *)puVar5)(uVar10,1);
          }
        }
        local_f0[2] = local_88;
        *local_f0 = local_98;
        local_f0[1] = (ulonglong)puStack_90;
        return;
      }
      lVar1 = local_78 + local_68 * 0x18;
      local_60 = *(longlong *)(local_78 + 0x110 + local_68 * 0x18);
      local_58 = *(undefined8 *)(local_78 + 0x118 + local_68 * 0x18);
      uVar7 = *(ulonglong *)(local_78 + 0x120 + local_68 * 0x18);
      local_48 = (undefined8 *)(lVar1 + 0x10);
      uVar10 = *(undefined4 *)local_48;
      local_48 = (undefined8 *)*local_48;
      uVar3 = *(ulonglong *)(lVar1 + 0x18);
      uVar9 = uVar7 + 2;
      local_50 = uVar8;
      uVar4 = uVar3;
      uStack_40 = uVar3;
      if (uVar8 - uVar3 < uVar9) break;
joined_r0x001ebc42:
      uStack_40 = uVar3;
      if (local_50 == uVar3) {
        uStack_40 = uVar4;
        uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_50,uVar3,1,1,1);
      }
      *(undefined1 *)((longlong)local_48 + uStack_40) = 0x3d;
      uVar8 = uStack_40 + 1;
      uStack_40 = uVar8;
      if (local_50 - uVar8 < uVar7) {
        uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_50,uVar8,uVar7,1,1);
LAB_001ebb08:
        uVar8 = uStack_40;
        puVar6 = local_48;
        uVar9 = local_50;
        uVar10 = (*(code *)PTR_memcpy_00219c60)(uVar10,uVar7);
      }
      else {
        uVar9 = local_50;
        puVar6 = local_48;
        if (uVar7 != 0) goto LAB_001ebb08;
      }
      uVar8 = uVar8 + uVar7;
      uStack_40 = uVar8;
      if (uVar8 < 0x10) {
        uVar7 = 0;
        if (uVar8 == 0) goto LAB_001ebb5e;
        do {
          if (*(char *)((longlong)puVar6 + uVar7) == '\0') goto LAB_001ebb62;
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
LAB_001ebb90:
        local_78 = uVar9;
        local_70 = puVar6;
        local_68 = uVar8;
        puVar6 = (undefined8 *)(*(code *)PTR__from_vec_unchecked_0021a060)();
        uVar10 = extraout_XMM0_Da_00;
        if (local_88 == local_98) {
LAB_001ebbbf:
          uVar8 = local_88;
          uVar10 = (*(code *)PTR_grow_one_0021a9b0)();
          local_88 = uVar8;
        }
LAB_001ebbcc:
        puStack_90[local_88] = 0;
        if (local_88 == 0) {
          local_88 = local_88 + 1;
          (*(code *)PTR_panic_bounds_check_0021a020)
                    (uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217960);
          goto LAB_001ebd57;
        }
        puStack_90[local_88 - 1] = puVar6;
        local_88 = local_88 + 1;
      }
      else {
        uVar7 = (*(code *)PTR_memchr_aligned_00219d40)(uVar10,uVar8);
        uVar10 = extraout_XMM0_Da;
LAB_001ebb5e:
        if ((uVar7 & 1) == 0) goto LAB_001ebb90;
LAB_001ebb62:
        if (uVar9 != 0) {
          if (uVar9 != 0xffffffffffffffff) {
            uVar10 = (*(code *)puVar5)(uVar10,1);
            goto LAB_001eba2f;
          }
          if (local_88 == local_98) goto LAB_001ebbbf;
          goto LAB_001ebbcc;
        }
LAB_001eba2f:
        *(undefined1 *)(local_38 + 0xc0) = 1;
      }
      if (local_60 != 0) {
        (*(code *)puVar5)(uVar10,1);
      }
    }
    if (!CARRY8(uVar9,uVar3)) {
      uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                         (&local_78,uVar8,local_48,uVar9 + uVar3,1,1);
      if ((int)local_78 != 1) {
        local_50 = uVar9 + uVar3;
        local_48 = local_70;
        uVar4 = uStack_40;
        goto joined_r0x001ebc42;
      }
      local_a0 = local_70;
    }
    (*(code *)PTR_handle_error_00219c78)();
  }
  else {
LAB_001eb91b:
    (*(code *)PTR_handle_error_00219c78)();
  }
LAB_001ebd57:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


