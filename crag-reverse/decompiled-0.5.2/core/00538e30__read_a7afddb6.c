// 00538e30 read

/* <craggemini_core[66f3c71560d70857]::license::HostStamp>::read */

void __rustcall
<craggemini_core[66f3c71560d70857]::license::HostStamp>::read
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_14c;
  char local_148;
  undefined1 local_147;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_a0;
  undefined4 local_8e;
  undefined4 uStack_8a;
  undefined4 uStack_86;
  undefined4 uStack_82;
  undefined4 local_7e;
  undefined4 uStack_7a;
  undefined4 uStack_76;
  undefined4 uStack_72;
  undefined4 local_6e;
  undefined4 uStack_6a;
  undefined4 uStack_66;
  undefined4 uStack_62;
  undefined8 local_5e;
  undefined8 local_20;
  
  uVar2 = <craggemini_core[66f3c71560d70857]::license::files::HostDir>::open(param_2,param_3);
  if ((uVar2 & 1) != 0) {
    *(char *)((longlong)param_1 + 1) = (char)(uVar2 >> 8);
    *(undefined1 *)param_1 = 1;
    return;
  }
  local_14c = (undefined4)(uVar2 >> 0x20);
  uVar1 = craggemini_core[66f3c71560d70857]::license::files::open_read_at
                    (local_14c,"sync-pendingArc counter overflow",0xc);
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_close_00799030)();
  }
  if ((uVar1 & 0xff01) == 1) {
    <craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint
              (&local_148,&local_14c,&DAT_0019ba64,7);
    if (local_148 != '\x01') {
      local_5e = local_110;
      local_6e = local_120;
      uStack_6a = uStack_11c;
      uStack_66 = uStack_118;
      uStack_62 = uStack_114;
      local_7e = local_130;
      uStack_7a = uStack_12c;
      uStack_76 = uStack_128;
      uStack_72 = uStack_124;
      local_8e = local_140;
      uStack_8a = uStack_13c;
      uStack_86 = uStack_138;
      uStack_82 = uStack_134;
      <craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint
                (&local_148,&local_14c,&DAT_00183da0,0x10);
      if (local_148 != '\x01') {
        local_20 = local_110;
        local_a0 = local_110;
        local_d8 = local_5e;
        local_108 = CONCAT44(uStack_8a,local_8e);
        uStack_100 = CONCAT44(uStack_82,uStack_86);
        local_f8 = CONCAT44(uStack_7a,local_7e);
        uStack_f0 = CONCAT44(uStack_72,uStack_76);
        local_e8 = CONCAT44(uStack_6a,local_6e);
        uStack_e0 = CONCAT44(uStack_62,uStack_66);
        *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_114,uStack_118);
        *(undefined8 *)(param_1 + 0x38) = local_110;
        *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_124,uStack_128);
        *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_11c,local_120);
        *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_134,uStack_138);
        *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_12c,local_130);
        *(undefined8 *)(param_1 + 0x1c) = local_5e;
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_13c,local_140);
        *(undefined8 *)(param_1 + 0x14) = local_e8;
        *(undefined8 *)(param_1 + 0x18) = uStack_e0;
        *(undefined8 *)(param_1 + 0xc) = local_f8;
        *(undefined8 *)(param_1 + 0x10) = uStack_f0;
        *(undefined4 *)(param_1 + 4) = local_8e;
        *(undefined4 *)(param_1 + 6) = uStack_8a;
        *(undefined4 *)(param_1 + 8) = uStack_86;
        *(undefined4 *)(param_1 + 10) = uStack_82;
        *(undefined1 *)param_1 = 0;
        goto LAB_00538f42;
      }
    }
    *(undefined1 *)((longlong)param_1 + 1) = local_147;
    *(undefined1 *)param_1 = 1;
  }
  else {
    *param_1 = 0x301;
  }
LAB_00538f42:
  (*(code *)PTR_close_00799030)();
  return;
}


