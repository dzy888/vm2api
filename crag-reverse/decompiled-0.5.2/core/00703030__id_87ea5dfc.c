// 00703030 id

/* <tokio[d7d91d38da47d894]::process::Child>::id */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::process::Child>::id(char *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 == -2) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  if ((int)lVar4 == -1) {
    lVar3 = 0x20;
    if (*(int *)(param_1 + 0x78) != 2) goto LAB_00703072;
    param_1 = "inner has gone away";
    (*(code *)PTR_expect_failed_00799440)
              (lVar4,&anon_4a510ad2c2ece6409108a5920cec5cc2_14_llvm_1700297362806677381);
  }
  lVar3 = 0x28;
  if ((int)lVar4 == 2) {
    ppuVar5 = &anon_4a510ad2c2ece6409108a5920cec5cc2_16_llvm_1700297362806677381;
    (*(code *)PTR_expect_failed_00799440)();
    pcVar1 = (code *)swi(3);
    auVar7._0_8_ = (*pcVar1)();
    auVar7._8_8_ = ppuVar5;
    return auVar7;
  }
LAB_00703072:
  auVar6._12_4_ = 0;
  auVar6._8_4_ = *(uint *)(param_1 + lVar3 + 0x60);
  auVar6._0_8_ = 1;
  return auVar6;
}


