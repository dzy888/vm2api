// 006e8f50 reset

/* <tokio[d7d91d38da47d894]::runtime::Timer>::reset */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::Timer>::reset
          (char *param_1,longlong param_2,longlong *param_3,ulonglong param_4,undefined8 param_5,
          undefined8 param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  uVar5 = 0xfffffffffffffffd;
  if (param_4 < 0xfffffffffffffffd) {
    uVar5 = param_4;
  }
  do {
    if (uVar5 < uVar3) {
      lVar4 = 0x240;
      if (*param_1 != '\0') {
        lVar4 = 0x338;
      }
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x90 + lVar4) == -1) {
        (*(code *)PTR_expect_failed_00799440)
                  (param_4,&anon_880d723ff0f66ce4ced63274bf095def_35_llvm_12887403613343987975);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar4 = *(longlong *)(param_1 + 8) + lVar4;
      <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister
                (lVar4 + 0x50,lVar4,param_4,param_1 + 0x10,param_1 + 0x10,param_6,param_2,param_3);
      break;
    }
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    bVar6 = uVar3 == uVar1;
    if (bVar6) {
      *(ulonglong *)(param_1 + 0x28) = param_4;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
  LOCK();
  *param_3 = *param_3 + -1;
  UNLOCK();
  if (param_2 == 0) {
    if (*param_3 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else if (*param_3 == 0) {
    (*(code *)PTR_drop_slow_00799070)();
  }
  return;
}


