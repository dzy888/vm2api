// 00702fa0 start_kill

/* <tokio[d7d91d38da47d894]::process::Child>::start_kill */

longlong __rustcall
<tokio[d7d91d38da47d894]::process::Child>::start_kill
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x60) != -2) {
    iVar2 = (int)*(longlong *)(param_1 + 0x60);
    if (iVar2 == -1) {
      if (*(int *)(param_1 + 0x78) == 2) {
LAB_00703008:
        (*(code *)PTR_expect_failed_00799440)
                  (param_4,&anon_4a510ad2c2ece6409108a5920cec5cc2_17_llvm_1700297362806677381);
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
      lVar3 = (*(code *)PTR_kill_0079a9a8)();
    }
    else {
      if (iVar2 == 2) {
        (*(code *)PTR_expect_failed_00799440)
                  (param_4,&anon_4a510ad2c2ece6409108a5920cec5cc2_18_llvm_1700297362806677381);
        goto LAB_00703008;
      }
      lVar3 = (*(code *)PTR_kill_0079a9a8)();
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return 0;
}


