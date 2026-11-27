// 001f43b0 try_statx

/* std[6c98fd8553dbae28]::sys::fs::unix::try_statx */

void __rustcall
std[6c98fd8553dbae28]::sys::fs::unix::try_statx
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong local_138;
  undefined8 uStack_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  ushort uStack_11c;
  undefined2 uStack_11a;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  cVar2 = try_statx::STATX_SAVED_STATE;
  if (try_statx::STATX_SAVED_STATE != '\x02') {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_11a = 0;
    local_138 = 0;
    uStack_130 = 0;
    if (PTR_statx_0021ab20 == (undefined *)0x0) {
      iVar3 = (*(code *)PTR_syscall_0021a0a0)(0,param_3,0xfff,&local_138);
    }
    else {
      iVar3 = (*(code *)PTR_statx_0021ab20)(0xfff,param_4,&local_138);
    }
    if (iVar3 != -1) {
      if (cVar2 == '\0') {
        try_statx::STATX_SAVED_STATE = '\x01';
      }
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[1] = local_e8;
      param_1[2] = uStack_e0;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 3) = (undefined4)local_138;
      param_1[4] = (uStack_b0 >> 0x20 & 0xffffff00) << 0xc |
                   uStack_b0 >> 0x20 & 0xff |
                   CONCAT44((int)uStack_b0,(int)uStack_b0 << 8) & 0xfffff000000fff00;
      param_1[5] = local_118;
      param_1[6] = (ulonglong)local_128;
      *(uint *)(param_1 + 7) = (uint)uStack_11c;
      *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(uStack_120,uStack_124);
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
      param_1[9] = (local_b8 >> 0x20 & 0xffffff00) << 0xc |
                   local_b8 >> 0x20 & 0xff |
                   CONCAT44((int)local_b8,(int)local_b8 << 8) & 0xfffff000000fff00;
      param_1[10] = uStack_110;
      param_1[0xb] = local_138 >> 0x20;
      param_1[0xc] = local_108;
      param_1[0xd] = local_f8;
      param_1[0xe] = uStack_f0 & 0xffffffff;
      param_1[0xf] = local_c8;
      param_1[0x10] = uStack_c0 & 0xffffffff;
      param_1[0x11] = local_d8;
      param_1[0x12] = uStack_d0 & 0xffffffff;
      return;
    }
    piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
    puVar1 = PTR_OS_FUNCTIONS_00219f20;
    iVar3 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    uVar5 = (longlong)iVar3 << 0x20 | 2;
    if (try_statx::STATX_SAVED_STATE == '\x01') {
LAB_001f4624:
      *param_1 = 2;
      param_1[1] = uVar5;
      return;
    }
    local_38 = uVar5;
    if (PTR_statx_0021ab20 == (undefined *)0x0) {
      iVar3 = (*(code *)PTR_syscall_0021a0a0)(0,0,0xfff,0);
    }
    else {
      iVar3 = (*(code *)PTR_statx_0021ab20)(0xfff,0,0);
    }
    if (iVar3 == -1) {
      iVar3 = *piVar4;
      if (*(undefined ***)puVar1 != &PTR_call_once_002175a8) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      if (iVar3 == 0xe) {
        try_statx::STATX_SAVED_STATE = '\x01';
        goto LAB_001f4624;
      }
    }
    try_statx::STATX_SAVED_STATE = '\x02';
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


