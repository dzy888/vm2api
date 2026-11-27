// 005d04a0 is_rss_oversized

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::is_rss_oversized */

byte __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::is_rss_oversized
          (undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  
  if (*(uint *)(param_1 + 0xb6) < 2) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (*(char *)(param_1[0x46] + 0x10) == '\0') {
    return 0;
  }
  auVar3 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                     ("/",1,*(undefined4 *)(param_1 + 0xb6));
  return uVar2 <= auVar3._8_8_ & (byte)uVar1 & auVar3[0];
}


