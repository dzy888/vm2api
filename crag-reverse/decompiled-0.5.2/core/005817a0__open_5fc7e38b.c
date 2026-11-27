// 005817a0 open

/* <craggemini_core[66f3c71560d70857]::license::files::HostDir>::open */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::license::files::HostDir>::open
          (undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int local_c0;
  uint local_b8;
  byte local_88;
  
  uVar1 = craggemini_core[66f3c71560d70857]::license::files::walk_directory(param_1,param_2,0);
  if ((uVar1 & 1) != 0) {
    return (ulonglong)((uint)uVar1 & 0xff01);
  }
  (*(code *)PTR_metadata_00799b30)();
  if (local_c0 == 2) {
    if ((1 < (local_b8 & 3) - 2) && ((local_b8 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if ((local_88 & 0x12) == 0) {
    return uVar1 & 0xffffffff00000000;
  }
  (*(code *)PTR_close_00799030)();
  return 0x301;
}


