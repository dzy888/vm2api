// 00745860 is_dir

/* <std[6c98fd8553dbae28]::path::Path>::is_dir */

undefined4 __rustcall
<std[6c98fd8553dbae28]::path::Path>::is_dir
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_b8;
  uint local_b0;
  uint local_80;
  
  (*(code *)PTR_metadata_00799308)(param_4,param_2);
  if (local_b8 != 2) {
    return CONCAT31((int3)((local_80 & 0xf000) >> 8),(local_80 & 0xf000) == 0x4000);
  }
  if ((1 < (local_b0 & 3) - 2) && ((local_b0 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return 0;
}


