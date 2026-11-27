// 00536430 bind_conversation

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  (*(code *)PTR_now_00799478)();
  iVar4 = (int)local_34 >> 0xd;
  iVar3 = iVar4 + -1;
  iVar1 = 0;
  if (iVar4 < 1) {
    iVar1 = (1U - iVar4) / 400 + 1;
    iVar3 = iVar3 + iVar1 * 400;
    iVar1 = iVar1 * -0x23ab1;
  }
  lVar2 = (ulonglong)local_2c / 1000000 +
          ((longlong)
           (int)((((local_34 >> 4 & 0x1ff) + iVar1) - iVar3 / 100) + (iVar3 * 0x5b5 >> 2) +
                 (iVar3 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_30) * 1000;
  lVar5 = 0;
  if (0 < lVar2) {
    lVar5 = lVar2;
  }
  bind_conversation_at(param_1,param_2,param_3,param_4,param_5,lVar5);
  return;
}


