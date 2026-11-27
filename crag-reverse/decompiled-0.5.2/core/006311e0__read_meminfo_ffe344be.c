// 006311e0 read_meminfo

/* craggemini_core[66f3c71560d70857]::admission::read_meminfo */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::admission::read_meminfo(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 local_50;
  undefined7 uStack_4f;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  (*(code *)PTR__join_00799210)("proc/meminfo",param_2,0xc);
  (*(code *)PTR_inner_007998c0)();
  if (CONCAT71(uStack_4f,local_50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_38 == -1) {
    if ((1 < ((uint)local_30 & 3) - 2) && ((local_30 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    auVar3 = parse_proc_kib_field(local_30,local_28,"MemTotal:",9);
    uVar2 = 0;
    if ((auVar3._0_8_ & 1) != 0) {
      uVar2 = auVar3._8_8_;
    }
    auVar3 = parse_proc_kib_field(local_30,local_28,"MemAvailable:",0xd);
    if (auVar3._0_8_ == 1) {
      auVar3._8_8_ = auVar3._8_8_;
      auVar3._0_8_ = 1;
    }
    else {
      auVar3 = parse_proc_kib_field(local_30,local_28,&DAT_00185358,8);
    }
    uVar1 = 0;
    if ((auVar3._0_8_ & 1) != 0) {
      uVar1 = auVar3._8_8_;
    }
    if (local_38 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


