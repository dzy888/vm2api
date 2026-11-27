// 001f2c00 get_backtrace_style

/* std[6c98fd8553dbae28]::panic::get_backtrace_style */

byte __rustcall std[6c98fd8553dbae28]::panic::get_backtrace_style(void)

{
  byte bVar1;
  undefined8 in_RCX;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 local_1c8;
  undefined5 uStack_1c7;
  undefined2 local_1c2;
  undefined6 uStack_1c0;
  undefined1 local_1ba;
  undefined1 uStack_1b9;
  int local_48;
  undefined8 local_40;
  longlong local_30;
  int *local_28;
  longlong local_20;
  
  if ((byte)(SHOULD_CAPTURE - 1) < 3) {
    return SHOULD_CAPTURE - 1;
  }
  uStack_1c0 = 0x45434152544b;
  local_1c8 = 0x52;
  uStack_1c7 = 0x425f545355;
  local_1c2 = 0x4341;
  local_1ba = 0;
  (*(code *)PTR_from_bytes_with_nul_0021a6e8)(in_RCX,0xf);
  if (local_48 == 1) {
    local_28 = (int *)&DAT_002175c0;
  }
  else {
    sys::env::unix::getenv::_closure_0_(&local_30,&local_1c8,local_40);
    if (local_30 != -2) {
      bVar4 = 3;
      bVar2 = 2;
      if (local_30 == -1) goto LAB_001f2cc1;
      if (local_20 == 4) {
        if (*local_28 != 0x6c6c7566) goto LAB_001f2d16;
        bVar2 = 1;
        bVar4 = 2;
      }
      else if ((local_20 != 1) || (bVar4 = 3, (char)*local_28 != '0')) {
LAB_001f2d16:
        bVar4 = 1;
        if (local_30 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        bVar2 = 0;
        goto LAB_001f2cc1;
      }
      if (local_30 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      goto LAB_001f2cc1;
    }
  }
  if ((1 < ((uint)local_28 & 3) - 2) && (((ulonglong)local_28 & 3) != 0)) {
    pcVar3 = (char *)((longlong)local_28 + -1);
    uStack_1c0 = SUB86(pcVar3,0);
    local_1ba = (undefined1)((ulonglong)pcVar3 >> 0x30);
    uStack_1b9 = (undefined1)((ulonglong)pcVar3 >> 0x38);
    local_1c8 = 3;
    (*(code *)PTR_drop_00219c58)();
  }
  bVar4 = 3;
  bVar2 = 2;
LAB_001f2cc1:
  bVar1 = 0;
  LOCK();
  bVar5 = SHOULD_CAPTURE == 0;
  if (bVar5) {
    SHOULD_CAPTURE = bVar4;
  }
  else {
    bVar1 = SHOULD_CAPTURE;
  }
  UNLOCK();
  if (!bVar5) {
    bVar2 = 0xff;
    if (bVar1 < 4) {
      bVar2 = bVar1 - 1;
    }
  }
  return bVar2;
}


