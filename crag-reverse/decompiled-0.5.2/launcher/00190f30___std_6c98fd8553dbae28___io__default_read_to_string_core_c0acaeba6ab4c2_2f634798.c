// 00190f30 <std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::{closure#0}>

/* std[6c98fd8553dbae28]::io::append_to_string::<std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::{closure#0}>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::append_to_string::
<std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::_closure_0_>
          (ulonglong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  char cVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  char local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  ulonglong *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  byte local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 *local_38;
  
  uVar9 = param_1[2];
  local_50 = *param_3;
  local_58 = *param_1;
  local_c8 = 0x2000;
  uVar10 = uVar9;
  local_90 = param_1;
  local_88 = uVar9;
  if (local_50 == 1) {
    uVar7 = param_3[1];
    if (uVar7 < 0xfffffffffffffc00) {
      uVar1 = uVar7 + 0x400;
      uVar5 = (ulonglong)((uint)uVar1 & 0x1fff);
      uVar8 = (uVar7 - uVar5) + 0x2400;
      local_c8 = 0x2000;
      if (uVar1 <= uVar8) {
        local_c8 = uVar8;
      }
      if (uVar5 == 0) {
        local_c8 = uVar1;
      }
      if (uVar7 == 0) goto LAB_00190fbb;
    }
    else {
      local_c8 = 0x2000;
    }
  }
  else {
LAB_00190fbb:
    if (local_58 - uVar9 < 0x20) {
      auVar11 = default_read_to_end::small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
                          (param_2,param_1);
      ppuVar4 = auVar11._8_8_;
      if (auVar11._0_8_ == 1) {
LAB_00191328:
        lVar6 = 1;
        goto LAB_0019132d;
      }
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar4 = (undefined **)0x0;
        lVar6 = 0;
        goto LAB_0019132d;
      }
      uVar10 = param_1[2];
    }
  }
  local_a0 = param_1;
  local_60 = uVar9;
  local_38 = param_2;
  while( true ) {
    uVar7 = local_60;
    puVar2 = local_a0;
    uVar9 = *local_a0;
    if (uVar9 == local_58 && uVar10 == uVar9) {
      auVar11 = default_read_to_end::small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
                          (param_2,local_a0);
      ppuVar4 = auVar11._8_8_;
      if (auVar11._0_8_ == 1) goto LAB_00191328;
      uVar10 = puVar2[2];
      if (ppuVar4 == (undefined **)0x0) goto LAB_001913a8;
      uVar9 = *puVar2;
    }
    uVar7 = uVar9;
    if (uVar10 == uVar9) {
      uVar7 = uVar9 * 2;
      if (uVar9 * 2 < uVar9 + 0x20) {
        uVar7 = uVar9 + 0x20;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (&local_c0,uVar9,puVar2[1],uVar7,1,1);
      if ((int)local_c0 == 1) {
        lVar6 = 1;
        ppuVar4 = (undefined **)0x2600000003;
        goto LAB_0019132d;
      }
      puVar2[1] = local_b8;
      *puVar2 = uVar7;
      uVar10 = puVar2[2];
    }
    local_80 = puVar2[1] + uVar10;
    local_40 = uVar7 - uVar10;
    local_78 = local_40;
    if (local_c8 < local_40) {
      local_78 = local_c8;
    }
    local_70 = 0;
    local_68 = 0;
    uVar9 = param_2[2];
    local_48 = local_78;
    if (uVar9 == 0) break;
    local_98 = *param_2;
    do {
      uVar10 = local_70;
      if (uVar9 < local_78 - local_70) {
        local_c0 = local_80 + local_70;
        local_b0 = 0;
        local_a8 = '\0';
        local_b8 = uVar9;
        if (local_68 == 0) {
          ppuVar4 = (undefined **)(*(code *)PTR_read_buf_0021a240)();
          lVar6 = local_b0;
          if (local_a8 != '\0') {
            (*(code *)PTR_memset_00219d00)();
            local_68 = 1;
          }
        }
        else {
          local_a8 = '\x01';
          ppuVar4 = (undefined **)(*(code *)PTR_read_buf_0021a240)();
          lVar6 = local_b0;
        }
        local_70 = uVar10 + lVar6;
        uVar9 = uVar9 - lVar6;
        local_38[2] = uVar9;
        param_2 = local_38;
      }
      else {
        ppuVar4 = (undefined **)(*(code *)PTR_read_buf_0021a240)();
        uVar9 = (uVar9 + uVar10) - local_70;
        param_2[2] = uVar9;
      }
      if (ppuVar4 == (undefined **)0x0) break;
      switch((uint)ppuVar4 & 3) {
      case 0:
        cVar3 = *(char *)(ppuVar4 + 2);
        break;
      case 1:
        if (*(char *)((longlong)ppuVar4 + 0x1f) == '#') {
          local_b8 = (longlong)ppuVar4 - 1;
          uVar10 = (ulonglong)local_c0 >> 8;
          local_c0 = CONCAT71((int7)uVar10,3);
          (*(code *)PTR_drop_00219c58)();
          goto LAB_001910db;
        }
        goto LAB_0019131f;
      case 2:
        lVar6 = (*(code *)PTR_get_os_functions_0021a0e8)();
        cVar3 = (**(code **)(lVar6 + 0x10))();
        if (cVar3 == '\0') goto LAB_0019131f;
        goto LAB_001910db;
      case 3:
        cVar3 = (char)((ulonglong)ppuVar4 >> 0x20);
        if (0x2a < (ulonglong)ppuVar4 >> 0x20) {
          cVar3 = -1;
        }
      }
      if (cVar3 != '#') {
LAB_0019131f:
        local_a0[2] = local_a0[2] + local_70;
        goto LAB_00191328;
      }
LAB_001910db:
    } while (uVar9 != 0);
    uVar10 = local_a0[2] + local_70;
    local_a0[2] = uVar10;
    uVar7 = local_60;
    if (local_70 == 0) goto LAB_001913a8;
    uVar9 = 0xffffffffffffffff;
    if ((byte)local_50 != 0) {
      uVar9 = local_c8;
    }
    if (((((~local_68 | (byte)local_50) & 1) == 0) && (uVar9 = local_c8, local_c8 <= local_40)) &&
       (local_70 == local_48)) {
      if ((longlong)local_c8 < 0) {
        local_c8 = 0xffffffffffffffff;
      }
      else {
        local_c8 = local_c8 * 2;
      }
    }
    else {
      local_c8 = uVar9;
    }
  }
  local_a0[2] = uVar10;
  uVar7 = local_60;
LAB_001913a8:
  ppuVar4 = (undefined **)(uVar10 - uVar7);
  lVar6 = 0;
LAB_0019132d:
  (*(code *)PTR_from_utf8_00219d78)();
  if ((char)local_c0 == '\0') {
    local_88 = local_90[2];
  }
  else {
    if (lVar6 == 0) {
      ppuVar4 = &PTR_s_stream_did_not_contain_valid_UTF_00215f28;
    }
    lVar6 = 1;
  }
  (*(code *)PTR_drop_0021a248)();
  auVar11._8_8_ = ppuVar4;
  auVar11._0_8_ = lVar6;
  return auVar11;
}


