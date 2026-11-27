// 006f9180 sleep

/* tokio[d7d91d38da47d894]::time::sleep::sleep */

ulonglong * __rustcall
tokio[d7d91d38da47d894]::time::sleep::sleep
          (ulonglong *param_1,ulonglong param_2,int param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  (*(code *)PTR_now_00799250)();
  bVar2 = 0x38640900 < param_2;
  if (param_2 == 0x38640900) {
    bVar2 = param_3 != 0;
  }
  iVar5 = 0;
  if (!bVar2) {
    iVar5 = param_3;
  }
  uVar7 = 0x38640900;
  if (!bVar2) {
    uVar7 = param_2;
  }
  uVar3 = (*(code *)PTR_add_00799280)
                    (iVar5,uVar7,&anon_cbe4ed91a1eb3280be5cbdd57023f5c1_64_llvm_17798946807444736387
                    );
  uVar8 = uVar7;
  uVar4 = (*(code *)PTR_current_00799480)();
  lVar6 = uVar8 + 0x240;
  if ((uVar4 & 1) != 0) {
    lVar6 = uVar8 + 0x338;
  }
  if (*(int *)(lVar6 + 0x90) == -1) {
    (*(code *)PTR_expect_failed_00799440)(lVar6,param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[0xc] = uVar3;
  *(int *)(param_1 + 0xd) = (int)uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar8;
  param_1[2] = 2;
  return param_1;
}


