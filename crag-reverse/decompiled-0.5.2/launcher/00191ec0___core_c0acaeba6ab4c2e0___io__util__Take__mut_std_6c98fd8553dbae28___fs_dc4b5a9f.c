// 00191ec0 <core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::<core[c0acaeba6ab4c2e0]::io::util::Take<&mut
   std[6c98fd8553dbae28]::fs::File>> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::
<core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>
          (longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  ulonglong local_c8;
  ulonglong local_b0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  byte local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar8 = 0x2000;
  local_b0 = uVar1;
  local_c8 = uVar2;
  local_58 = param_3;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar4 = param_4 + 0x400;
      uVar9 = (ulonglong)((uint)uVar4 & 0x1fff);
      uVar7 = (param_4 - uVar9) + 0x2400;
      if (uVar4 <= uVar7) {
        uVar8 = uVar7;
      }
      if (uVar9 == 0) {
        uVar8 = uVar4;
      }
      if (param_4 == 0) goto LAB_00191f2e;
    }
  }
  else {
LAB_00191f2e:
    if (uVar1 - uVar2 < 0x20) {
      auVar10 = small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>
                          (param_1,param_2);
      uVar4 = auVar10._8_8_;
      if (auVar10._0_8_ == 1) {
LAB_001922c6:
        uVar6 = 1;
        goto LAB_001922cb;
      }
      if (uVar4 == 0) {
        uVar4 = 0;
        uVar6 = 0;
        goto LAB_001922cb;
      }
      local_b0 = *param_2;
      local_c8 = param_2[2];
    }
  }
  local_38 = param_1;
  while( true ) {
    if ((local_c8 == local_b0) && (local_b0 == uVar1)) {
      auVar10 = small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>
                          (param_1,param_2);
      uVar4 = auVar10._8_8_;
      if (auVar10._0_8_ == 1) goto LAB_001922c6;
      local_c8 = param_2[2];
      if (uVar4 == 0) goto LAB_001922ff;
      local_b0 = *param_2;
    }
    if (local_c8 == local_b0) {
      uVar4 = local_b0 * 2;
      if (local_b0 * 2 < local_b0 + 0x20) {
        uVar4 = local_b0 + 0x20;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (&local_98,local_b0,param_2[1],uVar4,1,1);
      if ((int)local_98 == 1) {
        uVar6 = 1;
        uVar4 = 0x2600000003;
        goto LAB_001922cb;
      }
      param_2[1] = local_90;
      *param_2 = uVar4;
      local_b0 = uVar4;
    }
    else {
    }
    local_78 = param_2[1] + local_c8;
    local_48 = local_b0 - local_c8;
    local_70 = local_48;
    if (uVar8 < local_48) {
      local_70 = uVar8;
    }
    local_68 = 0;
    local_60 = 0;
    uVar9 = *(ulonglong *)(param_1 + 0x10);
    local_50 = local_70;
    local_40 = uVar8;
    if (uVar9 == 0) break;
    do {
      uVar8 = local_68;
      if (uVar9 < local_70 - local_68) {
        local_98 = local_78 + local_68;
        local_88 = 0;
        local_80 = '\0';
        local_90 = uVar9;
        if (local_60 == 0) {
          uVar4 = (*(code *)PTR_read_buf_0021a268)();
          lVar5 = local_88;
          if (local_80 != '\0') {
            (*(code *)PTR_memset_00219d00)();
            local_60 = 1;
          }
        }
        else {
          local_80 = '\x01';
          uVar4 = (*(code *)PTR_read_buf_0021a268)();
          lVar5 = local_88;
        }
        local_68 = uVar8 + lVar5;
        uVar9 = uVar9 - lVar5;
        *(ulonglong *)(local_38 + 0x10) = uVar9;
        param_1 = local_38;
      }
      else {
        uVar4 = (*(code *)PTR_read_buf_0021a268)();
        uVar9 = (uVar9 + uVar8) - local_68;
        *(ulonglong *)(param_1 + 0x10) = uVar9;
      }
      if (uVar4 == 0) break;
      switch((uint)uVar4 & 3) {
      case 0:
        cVar3 = *(char *)(uVar4 + 0x10);
        break;
      case 1:
        if (*(char *)(uVar4 + 0x1f) == '#') {
          local_90 = uVar4 - 1;
          uVar8 = (ulonglong)local_98 >> 8;
          local_98 = CONCAT71((int7)uVar8,3);
          (*(code *)PTR_drop_00219c58)();
          goto LAB_0019204b;
        }
        goto LAB_001922b6;
      case 2:
        lVar5 = (*(code *)PTR_get_os_functions_0021a0e8)();
        cVar3 = (**(code **)(lVar5 + 0x10))();
        if (cVar3 == '\0') goto LAB_001922b6;
        goto LAB_0019204b;
      case 3:
        cVar3 = (char)(uVar4 >> 0x20);
        if (0x2a < uVar4 >> 0x20) {
          cVar3 = -1;
        }
      }
      if (cVar3 != '#') {
LAB_001922b6:
        param_2[2] = local_c8 + local_68;
        goto LAB_001922c6;
      }
LAB_0019204b:
    } while (uVar9 != 0);
    local_c8 = local_c8 + local_68;
    param_2[2] = local_c8;
    if (local_68 == 0) goto LAB_001922ff;
    if (((~local_60 | (byte)local_58) & 1) == 0) {
      if ((local_48 < local_40) || (local_68 != local_50)) {
        uVar8 = local_40;
      }
      else if ((longlong)local_40 < 0) {
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar8 = local_40 * 2;
      }
    }
    else {
      uVar8 = local_40 | -(ulonglong)((local_58 & 1) == 0);
    }
  }
  param_2[2] = local_c8;
LAB_001922ff:
  uVar4 = local_c8 - uVar2;
  uVar6 = 0;
LAB_001922cb:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar6;
  return auVar10;
}


