// 00587940 machine_fingerprint

/* WARNING: Removing unreachable block (ram,0x005879e4) */
/* WARNING: Removing unreachable block (ram,0x005879f6) */
/* WARNING: Removing unreachable block (ram,0x005879fb) */
/* WARNING: Removing unreachable block (ram,0x00587a13) */
/* craggemini_core[66f3c71560d70857]::license::files::machine_fingerprint */

undefined2 * __rustcall
craggemini_core[66f3c71560d70857]::license::files::machine_fingerprint
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_d0;
  uint local_c8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (*(code *)PTR__open_00799768)(param_3,param_2);
  if (local_d0 == 1) {
    if ((1 < (local_c8 & 3) - 2) && ((local_c8 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    *param_1 = 0x301;
  }
  else {
    (*(code *)PTR_metadata_00799b30)();
    *(undefined4 *)(param_1 + 4) = local_a0;
    *(undefined4 *)(param_1 + 6) = uStack_9c;
    *(undefined4 *)(param_1 + 8) = uStack_98;
    *(undefined4 *)(param_1 + 10) = uStack_94;
    *(undefined8 *)(param_1 + 0xc) = local_70;
    *(undefined8 *)(param_1 + 0x10) = local_48;
    *(undefined8 *)(param_1 + 0x14) = uStack_40;
    *(undefined8 *)(param_1 + 0x18) = local_38;
    *(undefined8 *)(param_1 + 0x1c) = uStack_30;
    *(undefined1 *)param_1 = 0;
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


