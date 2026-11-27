// 0075ee00 remove_dir_all_modern

/* std[6c98fd8553dbae28]::sys::fs::unix::remove_dir_impl::remove_dir_all_modern */

ulonglong __rustcall
std[6c98fd8553dbae28]::sys::fs::unix::remove_dir_impl::remove_dir_all_modern(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
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
  
  try_statx(&local_c8,0xffffff9c,param_1,0x100);
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
    iVar2 = (*(code *)PTR_lstat64_0079b050)();
    if (iVar2 == -1) goto LAB_0075eee4;
    uVar1 = (uint)uStack_b0;
  }
  else {
    if ((int)local_c8 == 2) {
      return uStack_c0;
    }
    uVar1 = (uint)uStack_90;
  }
  if ((uVar1 & 0xf000) != 0xa000) {
    uVar3 = remove_dir_all_recursive(0);
    return uVar3;
  }
  iVar2 = (*(code *)PTR_unlink_0079b048)();
  if (iVar2 != -1) {
    return 0;
  }
LAB_0075eee4:
  piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar2 << 0x20 | 2;
}


