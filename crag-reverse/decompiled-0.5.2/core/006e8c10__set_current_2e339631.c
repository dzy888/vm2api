// 006e8c10 set_current

/* <tokio[d7d91d38da47d894]::runtime::context::Context>::set_current */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::context::Context>::set_current
          (longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  
  if (*param_2 == 0) {
    *param_2 = -1;
    iVar2 = *param_3;
    plVar3 = *(longlong **)(param_3 + 2);
    lVar6 = 1;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (iVar2 == 1) {
      if (lVar1 < 0) goto LAB_006e8cb3;
    }
    else {
      if (lVar1 < 0) goto LAB_006e8cb3;
      lVar6 = 0;
    }
    lVar1 = param_2[1];
    lVar4 = param_2[2];
    param_2[1] = lVar6;
    param_2[2] = (longlong)plVar3;
    *param_2 = *param_2 + 1;
    if (param_2[3] != -1) {
      lVar6 = param_2[3] + 1;
      param_2[3] = lVar6;
      *param_1 = lVar1;
      param_1[1] = lVar4;
      param_1[2] = lVar6;
      return param_1;
    }
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
  (*(code *)PTR_panic_fmt_007991a8)();
LAB_006e8cb3:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


