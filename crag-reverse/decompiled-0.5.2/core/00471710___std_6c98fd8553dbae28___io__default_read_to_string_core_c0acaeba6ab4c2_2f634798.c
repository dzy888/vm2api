// 00471710 <std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::{closure#0}>

/* std[6c98fd8553dbae28]::io::append_to_string::<std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::{closure#0}>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::append_to_string::
<std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::_closure_0_>
          (ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  ulonglong local_98;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  byte local_58;
  ulonglong local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  
  uVar1 = param_1[2];
  local_48 = *param_3;
  uVar6 = *param_1;
  local_98 = 0x2000;
  uVar10 = uVar1;
  if (local_48 == 1) {
    uVar8 = param_3[1];
    if (0xfffffffffffffbff < uVar8) {
      local_98 = 0x2000;
      goto LAB_004717e1;
    }
    uVar4 = uVar8 + 0x400;
    uVar5 = (ulonglong)((uint)uVar4 & 0x1fff);
    uVar9 = (uVar8 - uVar5) + 0x2400;
    local_98 = 0x2000;
    if (uVar4 <= uVar9) {
      local_98 = uVar9;
    }
    if (uVar5 == 0) {
      local_98 = uVar4;
    }
    if (uVar8 != 0) goto LAB_004717e1;
  }
  if (0x1f < uVar6 - uVar1) {
LAB_004717e1:
    local_50 = uVar6;
LAB_004717f7:
    uVar6 = *param_1;
    if (uVar6 == local_50 && uVar10 == uVar6) {
      auVar11 = default_read_to_end::small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
                          (param_2,param_1);
      ppuVar3 = auVar11._8_8_;
      if (auVar11._0_8_ == 1) goto LAB_004719e6;
      uVar10 = param_1[2];
      if (ppuVar3 == (undefined **)0x0) goto LAB_00471a55;
      uVar6 = *param_1;
    }
    if (uVar10 == uVar6) {
      uVar8 = uVar6 * 2;
      if (uVar6 * 2 < uVar6 + 0x20) {
        uVar8 = uVar6 + 0x20;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                (&local_70,uVar6,param_1[1],uVar8,1,1);
      if ((int)local_70 == 1) {
        lVar7 = 1;
        ppuVar3 = (undefined **)0x2600000003;
        goto LAB_004719eb;
      }
      param_1[1] = local_68;
      *param_1 = uVar8;
      uVar10 = param_1[2];
    }
    else {
      uVar8 = uVar6;
    }
    uVar8 = uVar8 - uVar10;
    local_70 = uVar10 + param_1[1];
    uVar6 = uVar8;
    if (local_98 < uVar8) {
      uVar6 = local_98;
    }
    local_60 = 0;
    local_58 = 0;
    local_68 = uVar6;
LAB_0047189b:
    ppuVar3 = (undefined **)
              <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>as_std[6c98fd8553dbae28]::io::Read>
              ::read_buf(param_2,&local_70);
    if (ppuVar3 == (undefined **)0x0) goto LAB_00471920;
    switch((uint)ppuVar3 & 3) {
    case 0:
      if (*(char *)(ppuVar3 + 2) != '#') break;
      goto LAB_0047189b;
    case 1:
      if (*(char *)((longlong)ppuVar3 + 0x1f) == '#') {
        local_38 = (longlong)ppuVar3 - 1;
        local_40 = 3;
        (*(code *)PTR_drop_00799040)();
        goto LAB_0047189b;
      }
      break;
    case 2:
      lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar2 = (**(code **)(lVar7 + 0x10))();
      if (cVar2 != '\0') goto LAB_0047189b;
      break;
    case 3:
      goto switchD_004718bb_caseD_3;
    }
    goto LAB_004719d8;
  }
  auVar11 = default_read_to_end::small_probe_read::
            <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
                      (param_2,param_1);
  ppuVar3 = auVar11._8_8_;
  if (auVar11._0_8_ == 1) {
LAB_004719e6:
    lVar7 = 1;
  }
  else {
    if (ppuVar3 != (undefined **)0x0) {
      uVar10 = param_1[2];
      goto LAB_004717e1;
    }
    ppuVar3 = (undefined **)0x0;
    lVar7 = 0;
  }
  goto LAB_004719eb;
LAB_00471920:
  uVar10 = param_1[2] + local_60;
  param_1[2] = uVar10;
  if (local_60 == 0) goto LAB_00471a55;
  uVar4 = 0xffffffffffffffff;
  if ((byte)local_48 != 0) {
    uVar4 = local_98;
  }
  if (((((~local_58 | (byte)local_48) & 1) == 0) && (uVar4 = local_98, local_98 <= uVar8)) &&
     (local_60 == uVar6)) {
    if ((longlong)local_98 < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = local_98 * 2;
    }
  }
  local_98 = uVar4;
  goto LAB_004717f7;
switchD_004718bb_caseD_3:
  cVar2 = (char)((ulonglong)ppuVar3 >> 0x20);
  if (0x2a < (ulonglong)ppuVar3 >> 0x20) {
    cVar2 = -1;
  }
  if (cVar2 == '#') goto LAB_0047189b;
LAB_004719d8:
  param_1[2] = param_1[2] + local_60;
  goto LAB_004719e6;
LAB_00471a55:
  ppuVar3 = (undefined **)(uVar10 - uVar1);
  lVar7 = 0;
LAB_004719eb:
  (*(code *)PTR_from_utf8_00799468)();
  if ((char)local_70 != '\0') {
    if (lVar7 == 0) {
      ppuVar3 = &PTR_s_stream_did_not_contain_valid_UTF_0078aac0;
    }
    lVar7 = 1;
  }
  (*(code *)PTR_drop_007999a8)();
  auVar11._8_8_ = ppuVar3;
  auVar11._0_8_ = lVar7;
  return auVar11;
}


