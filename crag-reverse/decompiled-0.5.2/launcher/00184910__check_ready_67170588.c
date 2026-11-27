// 00184910 check_ready

/* <craggemini[b21da2d71f2da7a3]::license::files::HostDir>::check_ready */

byte __rustcall
<craggemini[b21da2d71f2da7a3]::license::files::HostDir>::check_ready(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = craggemini[b21da2d71f2da7a3]::license::files::open_read_at(*param_1,"sync-pending",0xc);
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_close_00219d60)();
  }
  return -((uVar1 & 0xff01) == 1) | 3;
}


