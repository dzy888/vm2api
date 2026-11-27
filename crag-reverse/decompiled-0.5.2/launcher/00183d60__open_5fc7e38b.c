// 00183d60 open

/* <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open */

ulonglong __rustcall <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open(void)

{
  int iVar1;
  ulonglong uVar2;
  int local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint local_98;
  int local_94;
  
  uVar2 = craggemini[b21da2d71f2da7a3]::license::files::walk_directory();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR_metadata_0021a048)();
    if (local_d0 == 2) {
      if ((1 < (local_c8 & 3) - 2) && ((local_c8 & 3) != 0)) {
        (*(code *)PTR_drop_00219c58)();
      }
    }
    else {
      iVar1 = (*(code *)PTR_geteuid_0021a050)();
      if (((((local_98 & 0xfff) == 0x1c0) && (local_94 == iVar1)) &&
          (iVar1 = (*(code *)PTR_fstatfs_0021a058)(), iVar1 == 0)) &&
         ((CONCAT44(uStack_cc,local_d0) != 0x1021997 && (CONCAT44(uStack_cc,local_d0) != 0x53464846)
          ))) {
        return uVar2 & 0xffffffff00000000;
      }
    }
    (*(code *)PTR_close_00219d60)();
    uVar2 = 0x301;
  }
  else {
    uVar2 = (ulonglong)((uint)uVar2 & 0xff01);
  }
  return uVar2;
}


