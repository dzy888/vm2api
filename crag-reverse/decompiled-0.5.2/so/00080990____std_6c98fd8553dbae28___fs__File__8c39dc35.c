// 00080990 <&std[6c98fd8553dbae28]::fs::File>

/* std[6c98fd8553dbae28]::io::default_read_to_end::<&std[6c98fd8553dbae28]::fs::File> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::<&std[6c98fd8553dbae28]::fs::File>
          (undefined8 *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  uVar11 = *param_2;
  uVar8 = param_2[2];
  uVar10 = 0x2000;
  uVar7 = uVar8;
  local_48 = param_3;
  local_40 = param_1;
  local_38 = uVar11;
  if (param_3 == 1) {
    if (0xfffffffffffffbff < param_4) goto LAB_00080a4a;
    uVar12 = param_4 + 0x400;
    uVar6 = (ulonglong)((uint)uVar12 & 0x1fff);
    uVar9 = (param_4 - uVar6) + 0x2400;
    if (uVar12 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar6 == 0) {
      uVar10 = uVar12;
    }
    if (param_4 != 0) goto LAB_00080a4a;
  }
  if (uVar11 - uVar8 < 0x20) {
    auVar13 = small_probe_read::<&std[6c98fd8553dbae28]::fs::File>(param_1,param_2);
    uVar11 = auVar13._8_8_;
    if (auVar13._0_8_ == 1) {
LAB_00080a22:
      uVar3 = 1;
    }
    else {
      if (uVar11 != 0) {
        uVar11 = *param_2;
        uVar7 = param_2[2];
        goto LAB_00080a4a;
      }
      uVar11 = 0;
LAB_00080c45:
      uVar3 = 0;
    }
LAB_00080c47:
    auVar13._8_8_ = uVar11;
    auVar13._0_8_ = uVar3;
    return auVar13;
  }
LAB_00080a4a:
  local_68 = *local_40;
  local_48 = local_48 & 0xffffffffffffff01;
  uVar12 = local_38;
  local_60 = param_2;
  local_58 = uVar8;
  if (uVar7 != uVar11) goto LAB_00080aa2;
  do {
    param_2 = local_60;
    if (uVar11 == uVar12) {
      auVar13 = small_probe_read::<&std[6c98fd8553dbae28]::fs::File>(local_40,local_60);
      uVar11 = auVar13._8_8_;
      if (auVar13._0_8_ == 1) goto LAB_00080a22;
      uVar7 = param_2[2];
      if (uVar11 == 0) {
        uVar11 = uVar7 - uVar8;
        goto LAB_00080c45;
      }
      uVar11 = *param_2;
      uVar12 = local_38;
    }
LAB_00080aa2:
    do {
      local_50 = uVar7;
      if (uVar7 == uVar11) {
        uVar7 = uVar11 * 2;
        if (uVar11 * 2 < uVar11 + 0x20) {
          uVar7 = uVar11 + 0x20;
        }
        <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                  (&local_90,uVar11,param_2[1],uVar7,1,1);
        if ((int)local_90 == 1) {
          uVar3 = 1;
          uVar11 = 0x2600000003;
          goto LAB_00080c47;
        }
        param_2[1] = local_88;
        *param_2 = uVar7;
        uVar8 = local_58;
      }
      else {
        uVar7 = *param_2;
      }
      local_78 = uVar7;
      lVar4 = (*(code *)PTR_read_000c3d20)();
      if (lVar4 == -1) {
        local_70 = uVar10;
        piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
        do {
          iVar1 = *piVar5;
          if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
            (*(code *)PTR_set_functions_inner_000c3d08)();
          }
          uVar11 = (longlong)iVar1 << 0x20 | 2;
          local_90 = uVar11;
          lVar4 = (*(code *)PTR_get_os_functions_000c3c18)();
          cVar2 = (**(code **)(lVar4 + 0x10))();
          if (cVar2 == '\0') {
            local_60[2] = local_50;
            uVar3 = 1;
            goto LAB_00080c47;
          }
          lVar4 = (*(code *)PTR_read_000c3d20)();
        } while (lVar4 == -1);
        uVar8 = local_58;
        uVar10 = local_70;
        uVar12 = local_38;
      }
      uVar7 = local_50 + lVar4;
      local_60[2] = uVar7;
      if (lVar4 == 0) {
        uVar11 = uVar7 - uVar8;
        goto LAB_00080c45;
      }
      uVar10 = uVar10 | -(ulonglong)((char)local_48 == '\0');
      uVar11 = local_78;
      param_2 = local_60;
    } while (uVar7 != local_78);
  } while( true );
}


