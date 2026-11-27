// 000a19f0 locate_build_id

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::locate_build_id */

void __rustcall
std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::locate_build_id
          (undefined4 param_1,ulonglong *param_2,byte *param_3,ulonglong param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  uint local_b8;
  byte *local_40;
  ulonglong *local_38;
  
  if (1 < param_4) {
    local_40 = param_3;
    if (debug_path_exists::DEBUG_PATH_EXISTS == '\0') goto LAB_000a1a44;
    while (debug_path_exists::DEBUG_PATH_EXISTS == '\x01') {
      uVar9 = param_4 * 2 + 0x20;
      if (-1 < (longlong)uVar9) {
        if (uVar9 == 0) {
          local_f0 = 0;
          uStack_e8 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          uVar7 = (*(code *)PTR___rust_alloc_000c3a90)();
          if (uVar7 == 0) goto LAB_000a1a38;
          local_f0 = uVar9;
          uStack_e8 = uVar7;
          if (0x18 < uVar9) {
            uVar9 = 0;
            goto LAB_000a1b8e;
          }
        }
        local_e0 = 0;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_f0,0,0x19,1,1);
        uVar9 = local_e0;
LAB_000a1b8e:
        uVar6 = s_debug__build_id__0001652f._8_8_;
        puVar2 = (undefined8 *)(uStack_e8 + 9 + uVar9);
        *puVar2 = CONCAT17(s_debug__build_id__0001652f[7],
                           CONCAT43(s_debug__build_id__0001652f._3_4_,
                                    s_debug__build_id__0001652f._0_3_));
        puVar2[1] = uVar6;
        uVar5 = s_debug__build_id__0001652f._3_4_;
        uVar4 = ram0x0001652e;
        uVar3 = s__usr_lib__00016526._4_4_;
        pcVar1 = (char *)(uStack_e8 + uVar9);
        *(undefined4 *)pcVar1 = s__usr_lib__00016526._0_4_;
        *(undefined4 *)(pcVar1 + 4) = uVar3;
        *(undefined4 *)(pcVar1 + 8) = uVar4;
        *(undefined4 *)(pcVar1 + 0xc) = uVar5;
        local_e0 = uVar9 + 0x19;
        bVar10 = *local_40;
        cVar8 = (bVar10 >> 4) + 0x57;
        if (bVar10 < 0xa0) {
          cVar8 = (bVar10 >> 4) + 0x30;
        }
        if (local_f0 == local_e0) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,1,1,1);
        }
        *(char *)(uStack_e8 + 0x19 + uVar9) = cVar8;
        local_e0 = uVar9 + 0x1a;
        bVar10 = bVar10 & 0xf;
        cVar8 = bVar10 + 0x57;
        if (bVar10 < 10) {
          cVar8 = bVar10 + 0x30;
        }
        if (local_f0 == local_e0) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,1,1,1);
        }
        *(char *)(uStack_e8 + 0x1a + uVar9) = cVar8;
        local_e0 = uVar9 + 0x1b;
        if (local_f0 == local_e0) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,1,1,1);
        }
        *(undefined1 *)(uStack_e8 + 0x1b + uVar9) = 0x2f;
        local_e0 = uVar9 + 0x1c;
        uVar9 = 1;
        local_38 = param_2;
        do {
          uVar7 = local_e0;
          bVar10 = local_40[uVar9];
          cVar8 = (bVar10 >> 4) + 0x57;
          if (bVar10 < 0xa0) {
            cVar8 = (bVar10 >> 4) + 0x30;
          }
          if (local_e0 == local_f0) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,1,1,1);
          }
          *(char *)(uStack_e8 + uVar7) = cVar8;
          local_e0 = uVar7 + 1;
          bVar10 = bVar10 & 0xf;
          cVar8 = bVar10 + 0x57;
          if (bVar10 < 10) {
            cVar8 = bVar10 + 0x30;
          }
          if (local_e0 == local_f0) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,1,1,1);
          }
          *(char *)(uStack_e8 + 1 + uVar7) = cVar8;
          local_e0 = uVar7 + 2;
          uVar9 = uVar9 + 1;
        } while (param_4 != uVar9);
        if (local_f0 - local_e0 < 6) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_f0,local_e0,6,1,1);
        }
        *(undefined2 *)(uStack_e8 + 4 + local_e0) = 0x6775;
        *(undefined4 *)(uStack_e8 + local_e0) = 0x6265642e;
        local_38[2] = local_e0 + 6;
        *local_38 = local_f0;
        local_38[1] = uStack_e8;
        return;
      }
LAB_000a1a38:
      param_1 = (*(code *)PTR_handle_error_000c3a98)();
LAB_000a1a44:
      (*(code *)PTR_metadata_000c40e0)(param_1,0xe);
      if ((int)local_f0 == 2) {
        if ((1 < ((uint)uStack_e8 & 3) - 2) && ((uStack_e8 & 3) != 0)) {
          uStack_e8 = uStack_e8 - 1;
          local_f0 = CONCAT71(local_f0._1_7_,3);
          (*(code *)PTR_drop_000c3ae0)();
        }
        debug_path_exists::DEBUG_PATH_EXISTS = '\x02';
        break;
      }
      debug_path_exists::DEBUG_PATH_EXISTS = '\x02' - ((local_b8 & 0xf000) == 0x4000);
    }
  }
  *param_2 = 0xffffffffffffffff;
  return;
}


