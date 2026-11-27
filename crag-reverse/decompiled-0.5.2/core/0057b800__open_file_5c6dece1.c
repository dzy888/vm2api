// 0057b800 open_file

/* <craggemini_core[66f3c71560d70857]::license::files::PrivateDir>::open_file */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::license::files::PrivateDir>::open_file(void)

{
  int iVar1;
  ulonglong uVar2;
  int local_d8;
  uint local_d0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  
  uVar2 = craggemini_core[66f3c71560d70857]::license::files::open_read_at();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR_metadata_00799b30)();
    if (local_d8 == 2) {
      if ((1 < (local_d0 & 3) - 2) && ((local_d0 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    else if (((((local_a0 & 0xf000) == 0x8000) &&
              (iVar1 = (*(code *)PTR_geteuid_007992d8)(), local_a8 == 1)) &&
             ((local_a0 & 0xfff) == 0x180)) && (local_9c == iVar1)) {
      return uVar2 & 0xffffffff00000000;
    }
    (*(code *)PTR_close_00799030)();
    uVar2 = 0x301;
  }
  else {
    uVar2 = (ulonglong)((uint)uVar2 & 0xff01);
  }
  return uVar2;
}


