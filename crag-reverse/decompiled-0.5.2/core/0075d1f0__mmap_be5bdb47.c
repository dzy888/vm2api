// 0075d1f0 mmap

/* WARNING: Removing unreachable block (ram,0x0075d286) */
/* std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap */

void __rustcall
std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap
          (ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  longlong local_1e8;
  undefined1 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_68;
  undefined8 local_60;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  local_48 = 0x1b600000000;
  local_3c = 0;
  local_40 = 1;
  local_50 = &local_48;
  if (param_3 < 0x180) {
    uVar6 = (*(code *)PTR_memcpy_00799008)();
    *(undefined1 *)((longlong)&local_1e8 + param_3) = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)(uVar6,param_3 + 1);
    if (local_68 == 1) {
      local_30 = &DAT_00796450;
      local_38 = 1;
      goto LAB_0075d29f;
    }
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_38,local_60,&local_48);
    uVar6 = local_34;
  }
  else {
    sys::helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::fs::unix::File>
              (&local_38,param_2,param_3,&local_50,
               <std[6c98fd8553dbae28]::sys::fs::unix::File>::open::_closure_0_);
    uVar6 = local_34;
  }
  if (local_38 == 1) {
LAB_0075d29f:
    if ((1 < ((uint)local_30 & 3) - 2) && (((ulonglong)local_30 & 3) != 0)) {
      puStack_1e0 = local_30 + -1;
      local_1e8 = CONCAT71(local_1e8._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *param_1 = 0;
    return;
  }
  sys::fs::unix::try_statx(&local_1e8,uVar6,&DAT_001874f9,0x1000);
  if (local_1e8 == -1) {
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    puStack_1e0 = (undefined1 *)0x0;
    iVar1 = (*(code *)PTR_fstat64_0079aca8)();
    if (iVar1 != -1) {
      uVar4 = local_1b8;
      goto LAB_0075d39d;
    }
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    puVar5 = (undefined1 *)((longlong)iVar1 << 0x20 | 2);
  }
  else {
    if ((int)local_1e8 != 2) {
      uVar4 = local_198;
LAB_0075d39d:
      uVar2 = (*(code *)PTR_mmap64_0079b090)(2,1,uVar6,0);
      if (uVar2 != 0xffffffffffffffff) {
        param_1[1] = uVar2;
        param_1[2] = uVar4;
      }
      *param_1 = (ulonglong)(uVar2 != 0xffffffffffffffff);
      goto LAB_0075d433;
    }
    puVar5 = puStack_1e0;
  }
  if ((1 < ((uint)puVar5 & 3) - 2) && (((ulonglong)puVar5 & 3) != 0)) {
    puStack_1e0 = (undefined1 *)((longlong)puVar5 - 1);
    local_1e8 = CONCAT71(local_1e8._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  *param_1 = 0;
LAB_0075d433:
  (*(code *)PTR_close_00799030)();
  return;
}


