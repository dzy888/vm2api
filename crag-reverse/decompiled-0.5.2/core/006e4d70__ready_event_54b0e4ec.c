// 006e4d70 ready_event

/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::ready_event */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::ready_event
          (ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (param_3 - 1 < (param_3 ^ param_3 - 1)) {
    uVar2 = 0;
    for (; (param_3 & 1) == 0; param_3 = param_3 >> 1 | 0x8000000000000000) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 < 6) {
      uVar2 = (&DAT_001b6598)[uVar2] & uVar1;
      goto LAB_006e4da3;
    }
  }
  uVar2 = 0;
LAB_006e4da3:
  *(ushort *)(param_1 + 1) = (ushort)(uVar1 >> 0x10) & 0x7fff;
  *param_1 = uVar2;
  *(byte *)((longlong)param_1 + 10) = (byte)(uVar1 >> 0x18) >> 7;
  return;
}


