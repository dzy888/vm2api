// 004acf60 needs_rss_rotation

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::needs_rss_rotation */

byte __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot>::needs_rss_rotation
          (undefined4 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  
  if (param_1[0x1c] == 1) {
    auVar2._8_8_ = *(undefined8 *)(param_1 + 0x1e);
    auVar2._0_8_ = 1;
  }
  else {
    auVar2 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                       ("/",1,param_1[0x210]);
  }
  uVar1 = auVar2._8_8_;
  if ((auVar2._0_8_ & 1) == 0) {
    uVar1 = *(ulonglong *)(param_1 + 2);
  }
  return param_2 <= uVar1 & (auVar2[0] | (byte)*param_1);
}


