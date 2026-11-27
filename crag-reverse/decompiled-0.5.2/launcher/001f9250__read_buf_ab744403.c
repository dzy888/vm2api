// 001f9250 read_buf

/* <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>
   as std[6c98fd8553dbae28]::io::Read>::read_buf */

ulonglong __rustcall
<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>as_std[6c98fd8553dbae28]::io::Read>
::read_buf(undefined4 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  puVar1 = (ulonglong *)(param_2 + 2);
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  if (uVar7 == uVar6) {
    lVar8 = *(longlong *)(param_3 + 0x10);
    uVar3 = *(longlong *)(param_3 + 8) - lVar8;
    if ((ulonglong)param_2[1] <= uVar3) {
      *puVar1 = 0;
      param_2[3] = 0;
      uVar6 = 0x7fffffffffffffff;
      if (uVar3 < 0x7fffffffffffffff) {
        uVar6 = uVar3;
      }
      lVar5 = (*(code *)PTR_read_0021a0d8)(0,uVar6);
      if (lVar5 != -1) {
        *(longlong *)(param_3 + 0x10) = lVar5 + lVar8;
        return 0;
      }
      piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
      iVar2 = *piVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      if (iVar2 == 9) {
        return 0;
      }
      return (longlong)iVar2 << 0x20 | 2;
    }
    lVar5 = *param_2;
    uVar3 = uVar7 - uVar6;
    if (uVar6 <= uVar7 && uVar3 != 0) {
LAB_001f9326:
      if (lVar5 == 0) {
        return uVar3;
      }
      goto LAB_001f932b;
    }
  }
  else {
    lVar8 = *(longlong *)(param_3 + 0x10);
    lVar5 = *param_2;
    uVar3 = uVar7 - uVar6;
    if (uVar6 <= uVar7 && uVar3 != 0) goto LAB_001f9326;
  }
  lVar5 = param_2[4];
  uVar6 = 0x7fffffffffffffff;
  if ((ulonglong)param_2[1] < 0x7fffffffffffffff) {
    uVar6 = param_2[1];
  }
  uVar3 = (*(code *)PTR_read_0021a0d8)(param_5,uVar6);
  param_1 = extraout_XMM0_Da;
  if (uVar3 == 0xffffffffffffffff) {
    piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar2 = *piVar4;
    param_1 = extraout_XMM0_Da_00;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      param_1 = (*(code *)PTR_set_functions_inner_00219f28)();
    }
    if (iVar2 != 9) {
      *puVar1 = 0;
      param_2[3] = 0;
      *(char *)(param_2 + 4) = (char)lVar5;
      return (longlong)iVar2 << 0x20 | 2;
    }
    uVar3 = 0;
  }
  param_2[3] = uVar3;
  *(char *)(param_2 + 4) = (char)lVar5;
  uVar6 = 0;
  uVar7 = uVar3;
LAB_001f932b:
  uVar9 = *(longlong *)(param_3 + 8) - lVar8;
  if (uVar3 < uVar9) {
    uVar9 = uVar3;
  }
  (*(code *)PTR_memcpy_00219c60)(param_1,uVar9);
  *(ulonglong *)(param_3 + 0x10) = lVar8 + uVar9;
  uVar3 = uVar9 + uVar6;
  if (uVar7 < uVar9 + uVar6) {
    uVar3 = uVar7;
  }
  *puVar1 = uVar3;
  return 0;
}


