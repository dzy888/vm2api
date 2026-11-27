// 000932d0 metadata

/* <std[6c98fd8553dbae28]::fs::File>::metadata */

longlong * __rustcall <std[6c98fd8553dbae28]::fs::File>::metadata(longlong *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  uVar3 = (ulonglong)*param_2;
  uVar6 = std[6c98fd8553dbae28]::sys::fs::unix::try_statx(&local_d8,uVar3,&DAT_0000a00f,0x1000);
  uVar4 = uStack_d0;
  lVar5 = local_d8;
  if (local_d8 == -1) {
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
    iVar1 = (*(code *)PTR_fstat64_000c4180)();
    if (iVar1 != -1) {
      uVar6 = (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,0x90);
      lVar5 = 0;
      goto LAB_000933a0;
    }
    piVar2 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar4 = (longlong)iVar1 << 0x20 | 2;
  }
  else {
    uVar6 = (*(code *)PTR_memcpy_000c3aa8)(uVar6,0xa0);
    uVar3 = uVar4;
    if ((int)lVar5 != 2) {
LAB_000933a0:
      (*(code *)PTR_memcpy_000c3aa8)(uVar6,0xa0);
      *param_1 = lVar5;
      param_1[1] = uVar3;
      return param_1;
    }
  }
  param_1[1] = uVar4;
  *param_1 = 2;
  return param_1;
}


