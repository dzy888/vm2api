// 00764400 read

/* <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>
   as std[6c98fd8553dbae28]::io::Read>::read */

bool __rustcall
<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>as_std[6c98fd8553dbae28]::io::Read>
::read(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  uVar9 = param_1[1];
  uVar8 = param_1[2];
  uVar5 = param_1[3];
  if (uVar9 <= param_3 && uVar5 == uVar8) {
    *puVar1 = 0;
    param_1[3] = 0;
    lVar4 = (*(code *)PTR_read_00799e98)();
    if (lVar4 != -1) {
      return false;
    }
    piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar6;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    return iVar2 != 9;
  }
  lVar4 = *param_1;
  uVar7 = uVar5 - uVar8;
  if (uVar5 < uVar8 || uVar7 == 0) {
    lVar3 = param_1[4];
    uVar7 = 0x7fffffffffffffff;
    if (uVar9 < 0x7fffffffffffffff) {
      uVar7 = uVar9;
    }
    uVar5 = (*(code *)PTR_read_00799e98)(uVar5 != uVar8,uVar7);
    if (uVar5 == 0xffffffffffffffff) {
      piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar2 = *piVar6;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      if (iVar2 != 9) {
        *puVar1 = 0;
        param_1[3] = 0;
        *(char *)(param_1 + 4) = (char)lVar3;
        return true;
      }
      uVar5 = 0;
    }
    param_1[3] = uVar5;
    *(char *)(param_1 + 4) = (char)lVar3;
    uVar8 = 0;
    uVar7 = uVar5;
    if (param_3 <= uVar5) {
      uVar7 = param_3;
    }
  }
  else {
    if (lVar4 == 0) {
      return true;
    }
    if (param_3 <= uVar7) {
      uVar7 = param_3;
    }
  }
  if (uVar7 == 1) {
    *param_2 = *(undefined1 *)(lVar4 + uVar8);
  }
  else {
    (*(code *)PTR_memcpy_00799008)();
  }
  uVar9 = uVar8 + uVar7;
  if (uVar5 < uVar8 + uVar7) {
    uVar9 = uVar5;
  }
  *puVar1 = uVar9;
  return false;
}


