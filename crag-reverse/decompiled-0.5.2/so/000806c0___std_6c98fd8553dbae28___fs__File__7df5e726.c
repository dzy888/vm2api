// 000806c0 <std[6c98fd8553dbae28]::fs::File>

/* std[6c98fd8553dbae28]::io::default_read_to_end::<std[6c98fd8553dbae28]::fs::File> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::<std[6c98fd8553dbae28]::fs::File>
          (undefined4 param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined4 local_34;
  
  uVar9 = *param_2;
  uVar8 = param_2[2];
  local_48 = 0x2000;
  local_58 = param_3;
  local_50 = uVar9;
  local_40 = uVar8;
  local_34 = param_1;
  if (param_3 == 1) {
    if (0xfffffffffffffbff < param_4) {
      local_48 = 0x2000;
      goto LAB_00080786;
    }
    uVar10 = param_4 + 0x400;
    uVar6 = (ulonglong)((uint)uVar10 & 0x1fff);
    uVar7 = (param_4 - uVar6) + 0x2400;
    local_48 = 0x2000;
    if (uVar10 <= uVar7) {
      local_48 = uVar7;
    }
    if (uVar6 == 0) {
      local_48 = uVar10;
    }
    if (param_4 != 0) goto LAB_00080786;
  }
  if (0x1f < uVar9 - uVar8) {
LAB_00080786:
    local_58 = local_58 & 0xffffffffffffff01;
    uVar10 = local_50;
    local_60 = param_2;
    if (uVar8 != uVar9) goto LAB_000807ca;
    do {
      param_2 = local_60;
      if (uVar9 == uVar10) {
        auVar11 = small_probe_read::<std[6c98fd8553dbae28]::fs::File>(local_34,local_60);
        uVar9 = auVar11._8_8_;
        if (auVar11._0_8_ == 1) goto LAB_0008092a;
        uVar8 = param_2[2];
        if (uVar9 == 0) goto LAB_00080941;
        uVar9 = *param_2;
        uVar10 = local_50;
      }
LAB_000807ca:
      do {
        if (uVar8 == uVar9) {
          uVar6 = uVar9 * 2;
          if (uVar9 * 2 < uVar9 + 0x20) {
            uVar6 = uVar9 + 0x20;
          }
          <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                    (&local_88,uVar9,param_2[1],uVar6,1,1);
          if ((int)local_88 == 1) {
            uVar5 = 1;
            uVar9 = 0x2600000003;
            goto LAB_0008092f;
          }
          param_2[1] = local_80;
          *param_2 = uVar6;
        }
        else {
          uVar6 = *param_2;
        }
        local_70 = uVar8;
        local_68 = uVar6;
        lVar3 = (*(code *)PTR_read_000c3d20)();
        if (lVar3 == -1) {
          piVar4 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
          do {
            iVar1 = *piVar4;
            if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
              (*(code *)PTR_set_functions_inner_000c3d08)();
            }
            uVar9 = (longlong)iVar1 << 0x20 | 2;
            local_88 = uVar9;
            lVar3 = (*(code *)PTR_get_os_functions_000c3c18)();
            cVar2 = (**(code **)(lVar3 + 0x10))();
            if (cVar2 == '\0') {
              local_60[2] = local_70;
              goto LAB_0008092a;
            }
            lVar3 = (*(code *)PTR_read_000c3d20)();
          } while (lVar3 == -1);
          uVar10 = local_50;
        }
        uVar8 = local_70 + lVar3;
        local_60[2] = uVar8;
        if (lVar3 == 0) goto LAB_00080941;
        local_48 = local_48 | -(ulonglong)((char)local_58 == '\0');
        uVar9 = local_68;
        param_2 = local_60;
      } while (uVar8 != local_68);
    } while( true );
  }
  auVar11 = small_probe_read::<std[6c98fd8553dbae28]::fs::File>(param_1,param_2);
  uVar9 = auVar11._8_8_;
  if (auVar11._0_8_ == 1) {
LAB_0008092a:
    uVar5 = 1;
  }
  else {
    if (uVar9 != 0) {
      uVar9 = *param_2;
      uVar8 = param_2[2];
      goto LAB_00080786;
    }
    uVar9 = 0;
    uVar5 = 0;
  }
  goto LAB_0008092f;
LAB_00080941:
  uVar9 = uVar8 - local_40;
  uVar5 = 0;
LAB_0008092f:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar5;
  return auVar11;
}


