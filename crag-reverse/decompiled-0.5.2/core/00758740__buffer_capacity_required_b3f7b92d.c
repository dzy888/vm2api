// 00758740 buffer_capacity_required

/* std[6c98fd8553dbae28]::fs::buffer_capacity_required */

bool __rustcall std[6c98fd8553dbae28]::fs::buffer_capacity_required(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_c8;
  ulonglong uStack_c0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = sys::fs::unix::try_statx(&local_c8,*param_1,&DAT_001874f9,0x1000);
  if (local_c8 == -1) {
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
    iVar1 = (*(code *)PTR_fstat64_0079aca8)();
    uVar4 = extraout_XMM0_Da;
    if (iVar1 != -1) goto LAB_007587dc;
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uStack_c0 = (longlong)iVar1 << 0x20 | 2;
  }
  else if ((int)local_c8 != 2) {
LAB_007587dc:
    lVar2 = (*(code *)PTR_lseek64_0079afc0)(uVar4,1);
    if ((lVar2 == -1) &&
       ((*(code *)PTR___errno_location_007990a0)(),
       *(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    return lVar2 != -1;
  }
  if ((1 < ((uint)uStack_c0 & 3) - 2) && ((uStack_c0 & 3) != 0)) {
    uStack_c0 = uStack_c0 - 1;
    local_c8 = CONCAT71(local_c8._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return false;
}


