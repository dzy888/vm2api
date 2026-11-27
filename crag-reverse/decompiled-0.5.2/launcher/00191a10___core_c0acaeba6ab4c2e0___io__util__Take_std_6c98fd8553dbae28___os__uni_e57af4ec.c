// 00191a10 <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::
<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
          (longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  ulonglong local_c8;
  ulonglong local_a8;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  byte local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar9 = 0x2000;
  local_a8 = uVar1;
  local_c8 = uVar2;
  local_48 = param_3;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar7 = param_4 + 0x400;
      uVar6 = (ulonglong)((uint)uVar7 & 0x1fff);
      uVar8 = (param_4 - uVar6) + 0x2400;
      if (uVar7 <= uVar8) {
        uVar9 = uVar8;
      }
      if (uVar6 == 0) {
        uVar9 = uVar7;
      }
      if (param_4 == 0) goto LAB_00191a83;
    }
LAB_00191ae9:
    while( true ) {
      if ((local_c8 == local_a8) && (local_a8 == uVar1)) {
        auVar10 = small_probe_read::
                  <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
                            (param_1,param_2);
        uVar7 = auVar10._8_8_;
        if (auVar10._0_8_ == 1) goto LAB_00191aa5;
        local_c8 = param_2[2];
        if (uVar7 == 0) {
          uVar7 = local_c8 - uVar2;
          goto LAB_00191e7a;
        }
        local_a8 = *param_2;
      }
      if (local_c8 == local_a8) {
        uVar7 = local_a8 * 2;
        if (local_a8 * 2 < local_a8 + 0x20) {
          uVar7 = local_a8 + 0x20;
        }
        <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                  (&local_88,local_a8,param_2[1],uVar7,1,1);
        if ((int)local_88 == 1) {
          uVar4 = 1;
          uVar7 = 0x2600000003;
          goto LAB_00191e7c;
        }
        param_2[1] = local_80;
        *param_2 = uVar7;
        local_a8 = uVar7;
      }
      else {
      }
      local_68 = param_2[1] + local_c8;
      local_38 = local_a8 - local_c8;
      local_60 = local_38;
      if (uVar9 < local_38) {
        local_60 = uVar9;
      }
      local_58 = 0;
      local_50 = 0;
      uVar7 = *(ulonglong *)(param_1 + 8);
      local_40 = local_60;
      if (uVar7 == 0) break;
      do {
        uVar6 = local_58;
        if (uVar7 < local_60 - local_58) {
          local_88 = local_68 + local_58;
          local_78 = 0;
          local_70 = '\0';
          local_80 = uVar7;
          if (local_50 == 0) {
            uVar7 = (*(code *)PTR_read_buf_0021a260)();
            lVar5 = local_78;
            if (local_70 != '\0') {
              (*(code *)PTR_memset_00219d00)();
              local_50 = 1;
            }
          }
          else {
            local_70 = '\x01';
            uVar7 = (*(code *)PTR_read_buf_0021a260)();
            lVar5 = local_78;
          }
          local_58 = uVar6 + lVar5;
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) - lVar5;
        }
        else {
          uVar7 = (*(code *)PTR_read_buf_0021a260)();
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (uVar6 - local_58);
        }
        if (uVar7 == 0) break;
        switch((uint)uVar7 & 3) {
        case 0:
          cVar3 = *(char *)(uVar7 + 0x10);
          break;
        case 1:
          if (*(char *)(uVar7 + 0x1f) == '#') {
            local_80 = uVar7 - 1;
            uVar7 = (ulonglong)local_88 >> 8;
            local_88 = CONCAT71((int7)uVar7,3);
            (*(code *)PTR_drop_00219c58)();
            goto LAB_00191bab;
          }
          goto LAB_00191e44;
        case 2:
          lVar5 = (*(code *)PTR_get_os_functions_0021a0e8)();
          cVar3 = (**(code **)(lVar5 + 0x10))();
          if (cVar3 == '\0') goto LAB_00191e44;
          goto LAB_00191bab;
        case 3:
          cVar3 = (char)(uVar7 >> 0x20);
          if (0x2a < uVar7 >> 0x20) {
            cVar3 = -1;
          }
        }
        if (cVar3 != '#') {
LAB_00191e44:
          param_2[2] = local_c8 + local_58;
          uVar4 = 1;
          goto LAB_00191e7c;
        }
LAB_00191bab:
        uVar7 = *(ulonglong *)(param_1 + 8);
      } while (uVar7 != 0);
      local_c8 = local_c8 + local_58;
      param_2[2] = local_c8;
      if (local_58 == 0) goto LAB_00191e6c;
      if (((~local_50 | (byte)local_48) & 1) == 0) {
        if ((uVar9 <= local_38) && (local_58 == local_40)) {
          if ((longlong)uVar9 < 0) {
            uVar9 = 0xffffffffffffffff;
          }
          else {
            uVar9 = uVar9 * 2;
          }
        }
      }
      else {
        uVar9 = uVar9 | -(ulonglong)((local_48 & 1) == 0);
      }
    }
    param_2[2] = local_c8;
LAB_00191e6c:
    uVar7 = local_c8 - uVar2;
  }
  else {
LAB_00191a83:
    if (0x1f < uVar1 - uVar2) goto LAB_00191ae9;
    auVar10 = small_probe_read::
              <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
                        (param_1,param_2);
    uVar7 = auVar10._8_8_;
    if (auVar10._0_8_ == 1) {
LAB_00191aa5:
      uVar4 = 1;
      goto LAB_00191e7c;
    }
    if (uVar7 != 0) {
      local_a8 = *param_2;
      local_c8 = param_2[2];
      goto LAB_00191ae9;
    }
    uVar7 = 0;
  }
LAB_00191e7a:
  uVar4 = 0;
LAB_00191e7c:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar4;
  return auVar10;
}


