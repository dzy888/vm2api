// 00184520 open_file

/* <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open_file */

ulonglong __rustcall <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open_file(void)

{
  int iVar1;
  ulonglong uVar2;
  int local_d8;
  uint local_d0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  
  uVar2 = craggemini[b21da2d71f2da7a3]::license::files::open_read_at();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR_metadata_0021a048)();
    if (local_d8 == 2) {
      if ((1 < (local_d0 & 3) - 2) && ((local_d0 & 3) != 0)) {
        (*(code *)PTR_drop_00219c58)();
      }
    }
    else if (((((local_a0 & 0xf000) == 0x8000) &&
              (iVar1 = (*(code *)PTR_geteuid_0021a050)(), local_a8 == 1)) &&
             ((local_a0 & 0xfff) == 0x180)) && (local_9c == iVar1)) {
      return uVar2 & 0xffffffff00000000;
    }
    (*(code *)PTR_close_00219d60)();
    uVar2 = 0x301;
  }
  else {
    uVar2 = (ulonglong)((uint)uVar2 & 0xff01);
  }
  return uVar2;
}


