// 005e07e0 clean_pty_tail

/* craggemini_core[66f3c71560d70857]::oauth::clean_pty_tail */

void __rustcall craggemini_core[66f3c71560d70857]::oauth::clean_pty_tail(ulonglong *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong *local_38;
  
  (*(code *)PTR_from_utf8_lossy_00799b68)();
  uVar5 = local_40;
  lVar6 = local_48;
  if ((longlong)local_40 < 0) {
LAB_005e0810:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005e0e4b:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_40 == 0) {
    uVar16 = 0;
    uVar15 = 0;
    uVar4 = 1;
  }
  else {
    local_38 = param_1;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar7 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar7 == 0) goto LAB_005e0810;
    local_98 = uVar5;
    local_88 = 0;
    uVar16 = 0;
    uVar11 = 0;
    local_90 = uVar7;
    do {
      bVar8 = *(byte *)(lVar6 + uVar11);
      uVar14 = (uint)bVar8;
      uVar12 = (uint)bVar8;
      if (uVar12 == 0x1b) {
        uVar15 = uVar11 + 1;
        if (uVar15 < uVar5) {
          if (*(char *)(lVar6 + uVar15) == ']') {
            uVar15 = uVar11 + 2;
            if (uVar11 + 2 < uVar5) {
              uVar11 = uVar11 + 4;
              do {
                cVar1 = *(char *)(lVar6 + -2 + uVar11);
                if (cVar1 == '\x1b') {
                  if ((uVar11 - 1 < uVar5) && (*(char *)(lVar6 + -1 + uVar11) == '\\'))
                  goto LAB_005e0b61;
                }
                else {
                  uVar15 = uVar11 - 1;
                  if (cVar1 == '\a') break;
                }
                lVar9 = uVar11 - uVar5;
                uVar11 = uVar11 + 1;
                uVar15 = local_98;
                uVar4 = local_90;
                param_1 = local_38;
                if (lVar9 == 1) goto joined_r0x005e0bea;
              } while( true );
            }
          }
          else if (*(char *)(lVar6 + uVar15) == '[') {
            uVar11 = uVar11 + 2;
            if (uVar11 < uVar5) {
              do {
                if ((byte)(*(char *)(lVar6 + uVar11) - 0x40U) < 0x3f) {
                  lVar9 = 1;
                  goto LAB_005e0b5e;
                }
                uVar11 = uVar11 + 1;
              } while (uVar5 != uVar11);
              uVar11 = uVar5;
            }
            lVar9 = 0;
LAB_005e0b5e:
            uVar11 = uVar11 + lVar9;
LAB_005e0b61:
            uVar15 = uVar11;
          }
        }
      }
      else {
        if (uVar11 != 0) {
          if (uVar11 < uVar5) {
            if ((char)bVar8 < -0x40) {
LAB_005e0e25:
              (*(code *)PTR_slice_error_fail_00799408)(uVar5,uVar11,&PTR_s_src_oauth_rs_0078e738);
              goto LAB_005e0e4b;
            }
          }
          else if (uVar11 != uVar5) goto LAB_005e0e25;
        }
        if (uVar11 == uVar5) {
          (*(code *)PTR_expect_failed_00799440)();
          goto LAB_005e0e4b;
        }
        if ((char)bVar8 < '\0') {
          uVar14 = *(byte *)(lVar6 + 1 + uVar11) & 0x3f;
          if (bVar8 < 0xe0) {
            uVar14 = (uVar12 & 0x1f) << 6 | uVar14;
          }
          else {
            uVar14 = *(byte *)(lVar6 + 2 + uVar11) & 0x3f | uVar14 << 6;
            if (bVar8 < 0xf0) {
              uVar14 = uVar14 | (uVar12 & 0x1f) << 0xc;
            }
            else {
              uVar14 = *(byte *)(lVar6 + 3 + uVar11) & 0x3f | uVar14 << 6 | (uVar12 & 7) << 0x12;
            }
          }
          if (uVar14 < 0x80) goto LAB_005e0927;
          if (uVar14 < 0x800) {
            lVar9 = 2;
          }
          else {
            lVar9 = 4 - (ulonglong)(uVar14 < 0x10000);
          }
          bVar3 = false;
          uVar15 = lVar9 + uVar11;
          if (1 < uVar14 - 9) goto LAB_005e093e;
LAB_005e0a90:
          if (bVar3) {
            if (local_98 == uVar16) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_98,uVar16,1,1,1);
            }
            *(byte *)(local_90 + uVar16) = (byte)uVar14;
            lVar9 = 1;
          }
          else {
            uVar7 = 4 - (ulonglong)(uVar14 < 0x10000);
            if (uVar14 < 0x800) {
              uVar7 = 2;
            }
            if (local_98 - uVar16 < uVar7) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_98,uVar16,uVar7,1,1);
            }
            bVar8 = (byte)uVar14 & 0x3f | 0x80;
            bVar10 = (byte)(uVar14 >> 6);
            if (uVar14 < 0x800) {
              *(byte *)(local_90 + uVar16) = bVar10 | 0xc0;
              *(byte *)(local_90 + 1 + uVar16) = bVar8;
              lVar9 = 2;
            }
            else {
              bVar10 = bVar10 & 0x3f | 0x80;
              bVar13 = (byte)(uVar14 >> 0xc);
              if (uVar14 < 0x10000) {
                *(byte *)(local_90 + uVar16) = bVar13 | 0xe0;
                *(byte *)(local_90 + 1 + uVar16) = bVar10;
                *(byte *)(local_90 + 2 + uVar16) = bVar8;
                lVar9 = 3;
              }
              else {
                *(byte *)(local_90 + uVar16) = (byte)(uVar14 >> 0x12) | 0xf0;
                *(byte *)(local_90 + 1 + uVar16) = bVar13 & 0x3f | 0x80;
                *(byte *)(local_90 + 2 + uVar16) = bVar10;
                *(byte *)(local_90 + 3 + uVar16) = bVar8;
                lVar9 = 4;
              }
            }
          }
          uVar16 = uVar16 + lVar9;
          uVar7 = local_90;
        }
        else {
LAB_005e0927:
          bVar3 = true;
          uVar15 = uVar11 + 1;
          if (uVar14 - 9 < 2) goto LAB_005e0a90;
LAB_005e093e:
          if (0x20 < uVar14 - 0x7f && 0x1f < uVar14) goto LAB_005e0a90;
          if (uVar14 != 0xd) goto LAB_005e088d;
          if (local_98 == uVar16) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_98,uVar16,1,1,1);
            uVar7 = local_90;
          }
          *(undefined1 *)(uVar7 + uVar16) = 10;
          uVar16 = uVar16 + 1;
        }
        local_88 = uVar16;
      }
LAB_005e088d:
      uVar11 = uVar15;
      uVar15 = local_98;
      uVar4 = local_90;
      param_1 = local_38;
    } while (uVar11 < uVar5);
  }
joined_r0x005e0bea:
  local_38 = param_1;
  if (0 < local_50) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_98 = 0;
  local_78 = 0;
  local_68 = 0xa0000000a;
  local_60 = 1;
  local_58 = 0;
  local_90 = uVar16;
  local_88 = uVar4;
  local_80 = uVar16;
  local_70 = uVar16;
  <alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::str::iter::Lines,<str>::trim>,craggemini_core[66f3c71560d70857]::oauth::clean_pty_tail::{closure#0}>>>
  ::from_iter(&local_50,&local_98);
  if (local_40 == 0) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
              (&local_98,local_48,local_40,&DAT_0019e9ec,3);
    uVar5 = local_98;
    protocol::redact_error_secrets(&local_98,local_90,local_88);
    uVar7 = local_98;
    if (local_88 < 0x801) {
      *param_1 = local_98;
      param_1[1] = local_90;
      param_1[2] = local_88;
    }
    else {
      uVar16 = local_88 - 0x800;
      uVar11 = 0x800;
      do {
        if (-0x41 < *(char *)(local_90 + uVar16)) {
          if (uVar11 != 0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar16 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar16 != 0) {
              (*(code *)PTR_memcpy_00799008)();
              goto LAB_005e0d74;
            }
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005e0e4b;
          }
          break;
        }
        uVar16 = uVar16 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar16 < local_88);
      uVar16 = 1;
      uVar11 = 0;
LAB_005e0d74:
      *local_38 = uVar11;
      local_38[1] = uVar16;
      local_38[2] = uVar11;
      if (uVar7 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (uVar5 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if (local_50 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (uVar15 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


