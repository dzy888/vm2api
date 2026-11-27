// 007102e0 poll

/* <mio[4b4dae02747c797f]::poll::Poll>::poll */

ulonglong __rustcall
<mio[4b4dae02747c797f]::poll::Poll>::poll
          (undefined8 param_1,undefined4 *param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  
  if (param_4 == 0xffffffff) {
    uVar7 = 0xffffffff;
  }
  else {
    if (param_4 < 0x3b8b87c1) {
      uVar4 = param_4 + 999999;
      in_RAX = param_3;
    }
    else if (param_3 == 0xffffffffffffffff) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = param_4 + 0xc474783f;
      in_RAX = param_3 + 1;
    }
    if (uVar4 != 0xffffffff) {
      param_4 = uVar4;
      param_3 = in_RAX;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulonglong)param_4 / 1000000;
    auVar3 = auVar2 * ZEXT816(1000) + auVar3;
    uVar7 = auVar3._0_8_;
    uVar5 = 0x7fffffff;
    if (uVar7 < 0x7fffffff) {
      uVar5 = uVar7;
    }
    uVar7 = 0x7fffffff;
    if (auVar3._8_8_ == 0) {
      uVar7 = uVar5 & 0xffffffff;
    }
  }
  *(undefined8 *)(param_2 + 4) = 0;
  uVar4 = (*(code *)PTR_epoll_wait_0079aac0)(uVar7,*param_2);
  if (-1 < (int)uVar4) {
    *(ulonglong *)(param_2 + 4) = (ulonglong)uVar4;
    return 0;
  }
  piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar6;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 ==
      &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
    return (longlong)iVar1 << 0x20 | 2;
  }
  (*(code *)PTR_set_functions_inner_007990c0)();
  return (longlong)iVar1 << 0x20 | 2;
}


