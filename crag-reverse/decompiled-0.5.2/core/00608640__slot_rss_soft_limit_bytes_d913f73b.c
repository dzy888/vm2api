// 00608640 slot_rss_soft_limit_bytes

/* <craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::slot_rss_soft_limit_bytes */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::slot_rss_soft_limit_bytes
          (byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 local_60;
  ulonglong local_58;
  int aiStack_50 [2];
  ulonglong uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = craggemini_core[66f3c71560d70857]::admission::read_meminfo(uVar1,uVar2);
  craggemini_core[66f3c71560d70857]::admission::read_cgroup_memory(&local_60,uVar1,uVar2);
  uVar4 = *(ulonglong *)(param_1 + 8);
  if ((uVar4 != 0 & *param_1) == 1) {
    local_40 = local_60;
    local_38 = local_58;
    local_30 = (ulonglong)(uVar3 != 0);
    local_28 = uVar3;
    uVar5 = 1;
    uVar8 = 0x10;
    local_40._0_4_ = (int)local_60;
joined_r0x00608746:
    if ((int)local_40 == 1) {
      uVar8 = *(ulonglong *)((longlong)aiStack_50 + uVar8 + 8);
      uVar6 = uVar8;
      if (uVar4 < uVar8) {
        uVar6 = uVar4;
      }
      if (uVar8 != 0) {
        uVar4 = uVar6;
      }
    }
    if ((uVar5 != 2 && uVar3 != 0) && (uVar3 <= uVar4)) {
      uVar4 = uVar3;
    }
  }
  else {
    bVar7 = local_58 != 0 & (byte)local_60;
    uVar8 = 0x80000000;
    if ((uVar3 != 0 | bVar7) != 1) goto LAB_00608773;
    local_40 = local_60;
    local_38 = local_58;
    local_30 = (ulonglong)(uVar3 != 0);
    local_28 = uVar3;
    uVar4 = uVar3;
    if (bVar7 != 0) {
      uVar5 = bVar7 ^ 3;
      uVar8 = (ulonglong)(uVar5 << 4);
      local_40._0_4_ = *(int *)((longlong)aiStack_50 + uVar8);
      uVar4 = local_58;
      goto joined_r0x00608746;
    }
  }
  uVar8 = 0x20000000;
  if (0x20000000 < uVar4 >> 3) {
    uVar8 = uVar4 >> 3;
  }
  if (0xffffffff < uVar8) {
    uVar8 = 0x100000000;
  }
LAB_00608773:
  uVar4 = 0x4000000;
  if (0x4000000 < *(ulonglong *)(param_1 + 0x18)) {
    uVar4 = *(ulonglong *)(param_1 + 0x18);
  }
  if (param_1[0x10] == 0) {
    uVar4 = uVar8;
  }
  return uVar4;
}


