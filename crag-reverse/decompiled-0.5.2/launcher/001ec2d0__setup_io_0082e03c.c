// 001ec2d0 setup_io

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::setup_io */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::setup_io
          (undefined4 *param_1,longlong param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_48;
  uint local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  iVar8 = 1;
  if (param_5 != 0) {
    iVar8 = param_3;
  }
  uVar1 = param_4;
  if (*(int *)(param_2 + 0x48) != -1) {
    uVar1 = *(undefined4 *)(param_2 + 0x4c);
    iVar8 = *(int *)(param_2 + 0x48);
  }
  iVar7 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x58);
  local_38 = param_4;
  <std[6c98fd8553dbae28]::sys::process::unix::common::Stdio>::to_child_stdio
            (&local_48,iVar8,uVar1,1);
  uVar4 = local_40;
  uVar6 = local_44;
  if (local_48 == 1) {
    *(undefined8 *)(param_1 + 2) = local_40;
    *param_1 = 1;
  }
  else {
    uVar1 = local_38;
    iVar8 = param_3;
    if (iVar7 != -1) {
      uVar1 = *(undefined4 *)(param_2 + 0x54);
      iVar8 = iVar7;
    }
    <std[6c98fd8553dbae28]::sys::process::unix::common::Stdio>::to_child_stdio
              (&local_48,iVar8,uVar1,0);
    uVar5 = local_40;
    uVar3 = local_44;
    iVar8 = (int)((ulonglong)uVar4 >> 0x20);
    if (local_48 == 1) {
      *(undefined8 *)(param_1 + 2) = local_40;
      *param_1 = 1;
    }
    else {
      local_34 = uVar6;
      uVar1 = local_38;
      iVar7 = param_3;
      if (iVar2 != -1) {
        uVar1 = *(undefined4 *)(param_2 + 0x5c);
        iVar7 = iVar2;
      }
      <std[6c98fd8553dbae28]::sys::process::unix::common::Stdio>::to_child_stdio
                (&local_48,iVar7,uVar1,0);
      iVar7 = (int)((ulonglong)uVar5 >> 0x20);
      if (local_48 != 1) {
        param_1[1] = iVar8;
        param_1[2] = iVar7;
        param_1[3] = (int)((ulonglong)local_40 >> 0x20);
        param_1[4] = local_34;
        param_1[5] = (int)uVar4;
        param_1[6] = uVar3;
        param_1[7] = (int)uVar5;
        param_1[8] = local_44;
        param_1[9] = (int)local_40;
        *param_1 = 0;
        goto joined_r0x001ec49f;
      }
      *(undefined8 *)(param_1 + 2) = local_40;
      *param_1 = 1;
      if (iVar7 != -1) {
        (*(code *)PTR_close_00219d60)();
      }
      uVar6 = local_34;
      if (1 < uVar3) {
        (*(code *)PTR_close_00219d60)();
        uVar6 = local_34;
      }
    }
    if (iVar8 != -1) {
      (*(code *)PTR_close_00219d60)();
    }
    if (1 < uVar6) {
      (*(code *)PTR_close_00219d60)();
    }
  }
joined_r0x001ec49f:
  if (param_3 == 3) {
    (*(code *)PTR_close_00219d60)();
    return;
  }
  return;
}


