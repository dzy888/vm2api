// 006f90e0 sleep_until

/* tokio[d7d91d38da47d894]::time::sleep::sleep_until */

ulonglong * __rustcall
tokio[d7d91d38da47d894]::time::sleep::sleep_until
          (ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_3;
  uVar2 = (*(code *)PTR_current_00799480)();
  lVar3 = uVar4 + 0x240;
  if ((uVar2 & 1) != 0) {
    lVar3 = uVar4 + 0x338;
  }
  if (*(int *)(lVar3 + 0x90) == -1) {
    (*(code *)PTR_expect_failed_00799440)(lVar3,param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[0xc] = param_2;
  *(int *)(param_1 + 0xd) = (int)param_3;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = 2;
  return param_1;
}


