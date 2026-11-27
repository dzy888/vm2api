// 006329a0 read_pid_rss_bytes_at

/* craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_64;
  undefined4 *local_60;
  undefined *local_58;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = &local_64;
  local_58 = PTR_fmt_00799470;
  local_64 = param_3;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_60);
  (*(code *)PTR__join_00799210)(local_28,param_2,local_20);
  if (local_30 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  (*(code *)PTR_inner_007998c0)();
  if (local_60 != (undefined4 *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_48 == -1) {
    if ((1 < ((uint)local_40 & 3) - 2) && ((local_40 & 3) != 0)) {
      local_58 = (undefined *)(local_40 - 1);
      local_60 = (undefined4 *)CONCAT71(local_60._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = parse_proc_kib_field(local_40,local_38,"VmRSS:",6);
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  return uVar1;
}


