// 00637d70 <char>

/* <str>::rsplit_once::<char> */

void __rustcall
<str>::rsplit_once::<char>(longlong *param_1,longlong param_2,ulonglong param_3,char param_4)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_memrchr_0079a040;
  uVar3 = param_3;
  do {
    lVar2 = (*(code *)puVar1)();
    if (lVar2 != 1) break;
    if ((uVar3 < param_3) && (*(char *)(param_2 + uVar3) == param_4)) {
      *param_1 = param_2;
      param_1[1] = uVar3;
      param_1[2] = param_2 + uVar3 + 1;
      param_1[3] = param_3 - (uVar3 + 1);
      return;
    }
  } while (uVar3 <= param_3);
  *param_1 = 0;
  return;
}


