// 00472170 <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::
<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
          (undefined8 param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  byte local_48;
  undefined1 local_40;
  longlong local_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar11 = 0x2000;
  uVar8 = uVar2;
  uVar10 = uVar1;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar4 = param_4 + 0x400;
      uVar7 = (ulonglong)((uint)uVar4 & 0x1fff);
      uVar9 = (param_4 - uVar7) + 0x2400;
      if (uVar4 <= uVar9) {
        uVar11 = uVar9;
      }
      if (uVar7 == 0) {
        uVar11 = uVar4;
      }
      if (param_4 == 0) goto LAB_004721d9;
    }
  }
  else {
LAB_004721d9:
    if (uVar1 - uVar2 < 0x20) {
      auVar12 = small_probe_read::
                <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                          (param_1,param_2);
      uVar4 = auVar12._8_8_;
      if (auVar12._0_8_ == 1) {
LAB_004724b1:
        uVar6 = 1;
        goto LAB_004724b6;
      }
      if (uVar4 == 0) {
        uVar4 = 0;
LAB_004724e1:
        uVar6 = 0;
        goto LAB_004724b6;
      }
      uVar8 = param_2[2];
      uVar10 = *param_2;
    }
  }
LAB_00472248:
  uVar4 = uVar10;
  if ((uVar8 == uVar10) && (uVar10 == uVar1)) {
    auVar12 = small_probe_read::
              <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                        (param_1,param_2);
    uVar4 = auVar12._8_8_;
    if (auVar12._0_8_ == 1) goto LAB_004724b1;
    uVar8 = param_2[2];
    if (uVar4 == 0) {
      uVar4 = uVar8 - uVar2;
      goto LAB_004724e1;
    }
    uVar4 = *param_2;
  }
  uVar10 = uVar4;
  if (uVar8 == uVar4) {
    uVar10 = uVar4 * 2;
    if (uVar4 * 2 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
              (&local_60,uVar4,param_2[1],uVar10,1,1);
    if ((int)local_60 == 1) {
      uVar6 = 1;
      uVar4 = 0x2600000003;
      goto LAB_004724b6;
    }
    param_2[1] = local_58;
    *param_2 = uVar10;
  }
  local_60 = param_2[1] + uVar8;
  uVar9 = uVar10 - uVar8;
  uVar7 = uVar9;
  if (uVar11 < uVar9) {
    uVar7 = uVar11;
  }
  local_50 = 0;
  local_48 = 0;
  local_58 = uVar7;
  uVar4 = <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>as_std[6c98fd8553dbae28]::io::Read>
          ::read_buf(param_1,&local_60);
  if (uVar4 != 0) {
    do {
      switch((uint)uVar4 & 3) {
      case 0:
        cVar3 = *(char *)(uVar4 + 0x10);
        break;
      case 1:
        if (*(char *)(uVar4 + 0x1f) == '#') {
          local_38 = uVar4 - 1;
          local_40 = 3;
          (*(code *)PTR_drop_00799040)();
          goto LAB_0047231b;
        }
        goto LAB_004724a3;
      case 2:
        lVar5 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar3 = (**(code **)(lVar5 + 0x10))();
        if (cVar3 == '\0') goto LAB_004724a3;
        goto LAB_0047231b;
      case 3:
        cVar3 = (char)(uVar4 >> 0x20);
        if (0x2a < uVar4 >> 0x20) {
          cVar3 = -1;
        }
      }
      if (cVar3 != '#') {
LAB_004724a3:
        param_2[2] = uVar8 + local_50;
        goto LAB_004724b1;
      }
LAB_0047231b:
      uVar4 = <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>as_std[6c98fd8553dbae28]::io::Read>
              ::read_buf(param_1,&local_60);
    } while (uVar4 != 0);
  }
  uVar8 = uVar8 + local_50;
  param_2[2] = uVar8;
  if (local_50 != 0) {
    if (((~local_48 | (byte)param_3) & 1) == 0) {
      if ((uVar11 <= uVar9) && (local_50 == uVar7)) {
        if ((longlong)uVar11 < 0) {
          uVar11 = 0xffffffffffffffff;
        }
        else {
          uVar11 = uVar11 * 2;
        }
      }
    }
    else {
      uVar11 = uVar11 | -(ulonglong)((param_3 & 1) == 0);
    }
    goto LAB_00472248;
  }
  uVar4 = uVar8 - uVar2;
  uVar6 = 0;
LAB_004724b6:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


