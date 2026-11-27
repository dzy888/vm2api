// 006f8dc0 poll_ready

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::poll_ready */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::poll_ready
          (undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *in_FS_OFFSET;
  undefined8 local_48;
  undefined2 local_40;
  byte local_3e;
  undefined4 local_3d;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = *param_3;
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xf0) != '\0') {
    uVar5 = 0;
    if (*(char *)(lVar2 + -0xf0) != '\x01') goto LAB_006f8e21;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  uVar1 = *(ushort *)(lVar2 + -0xf4);
  cVar3 = (char)(uVar1 >> 8);
  if ((uVar1 & 1) != 0) {
    if (uVar1 >> 8 == 0) {
      (*(code *)PTR_defer_0079a740)();
      *(undefined1 *)((longlong)param_1 + 10) = 0xff;
      return param_1;
    }
    cVar3 = cVar3 + -1;
  }
  *(char *)(lVar2 + -0xf3) = cVar3;
  uVar5 = (uint)uVar1 << 8;
LAB_006f8e21:
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::poll_readiness
            (&local_48,*(longlong *)(param_2 + 0x10) + 0x80,param_3,param_4);
  if (local_3e == 2) {
    *(undefined1 *)((longlong)param_1 + 10) = 0xff;
  }
  else {
    if ((local_3e & 1) == 0) {
      *(undefined2 *)(param_1 + 1) = local_40;
      *param_1 = local_48;
      *(undefined4 *)((longlong)param_1 + 0xb) = local_3d;
      *(undefined1 *)((longlong)param_1 + 0xf) = local_39;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
      return param_1;
    }
    uVar4 = (*(code *)PTR_<&str>_007991e8)(local_39,0x38);
    *param_1 = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = 2;
  }
  if ((uVar5 >> 8 & 1) != 0) {
    if (*(char *)(lVar2 + -0xf0) != '\0') {
      if (*(char *)(lVar2 + -0xf0) == '\x02') {
        return param_1;
      }
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
    }
    *(undefined1 *)(lVar2 + -0xf4) = 1;
    *(char *)(lVar2 + -0xf3) = (char)(uVar5 >> 0x10);
  }
  return param_1;
}


