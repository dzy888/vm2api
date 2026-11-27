// 006e4eb0 poll_readiness

/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::poll_readiness */

ulonglong * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::poll_readiness
          (ulonglong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  byte local_4c;
  undefined8 local_48;
  longlong *local_40;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = param_4 * 5 + 5;
  if (((uint)uVar2 & (uVar6 | 0x80000000)) != 0) {
    *param_1 = (ulonglong)(uVar6 & (uint)uVar2);
    *(ushort *)(param_1 + 1) = (ushort)((ulonglong)uVar2 >> 0x10) & 0x7fff;
    *(byte *)((longlong)param_1 + 10) = (byte)((ulonglong)uVar2 >> 0x18) >> 7;
    return param_1;
  }
  LOCK();
  bVar11 = *(int *)(param_2 + 0x18) == 0;
  if (bVar11) {
    *(int *)(param_2 + 0x18) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_4c = 0;
  }
  else {
    local_4c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_4c = local_4c ^ 1;
  }
  uVar9 = (ulonglong)((param_4 & 0xff) << 4);
  uVar7 = *(ulonglong *)(param_2 + 0x30 + uVar9);
  lVar10 = uVar9 + 0x18;
  puVar3 = *(undefined8 **)*param_3;
  if (uVar7 == 0) {
    local_48 = (*(code *)*puVar3)();
    lVar4 = *(longlong *)(param_2 + 0x18 + lVar10);
    local_40 = param_3;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))();
    }
LAB_006e4fb1:
    *(undefined8 *)(param_2 + 0x18 + lVar10) = local_48;
    *(longlong **)(param_2 + 0x20 + lVar10) = local_40;
  }
  else {
    local_40 = (longlong *)
               (uVar7 ^ (ulonglong)puVar3 |
               *(ulonglong *)(param_2 + 0x20 + lVar10) ^ ((ulonglong *)*param_3)[1]);
    if (local_40 != (longlong *)0x0) {
      local_48 = (*(code *)*puVar3)();
      (**(code **)(uVar7 + 0x18))();
      goto LAB_006e4fb1;
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = (uint)uVar2;
  if ((char)param_4 == '\0') {
    if (-1 < (int)uVar6) {
      uVar7 = (ulonglong)(uVar6 & 5);
      if (uVar7 != 0) goto LAB_006e4fdf;
LAB_006e4ff1:
      *(undefined1 *)((longlong)param_1 + 10) = 2;
      goto joined_r0x006e5026;
    }
    uVar8 = 1;
    uVar7 = 5;
  }
  else if ((int)uVar6 < 0) {
    uVar8 = 1;
    uVar7 = 10;
  }
  else {
    uVar7 = (ulonglong)(uVar6 & 10);
    if (uVar7 == 0) goto LAB_006e4ff1;
LAB_006e4fdf:
    uVar8 = 0;
  }
  *param_1 = uVar7;
  *(ushort *)(param_1 + 1) = (ushort)((ulonglong)uVar2 >> 0x10) & 0x7fff;
  *(undefined1 *)((longlong)param_1 + 10) = uVar8;
joined_r0x006e5026:
  if (((local_4c == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(param_2 + 0x18) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


