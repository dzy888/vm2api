// 00581680 check_ready

/* <craggemini_core[66f3c71560d70857]::license::files::HostDir>::check_ready */

byte __rustcall
<craggemini_core[66f3c71560d70857]::license::files::HostDir>::check_ready(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = craggemini_core[66f3c71560d70857]::license::files::open_read_at
                    (*param_1,"sync-pendingArc counter overflow",0xc);
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_close_00799030)();
  }
  return -((uVar1 & 0xff01) == 1) | 3;
}


