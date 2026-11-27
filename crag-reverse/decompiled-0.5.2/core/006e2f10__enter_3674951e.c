// 006e2f10 enter

/* <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>::enter */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::runtime::Runtime>::enter
          (undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *in_FS_OFFSET;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  
  lVar2 = *in_FS_OFFSET;
  cVar1 = *(char *)(lVar2 + -0xf0);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') goto LAB_006e2f92;
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  param_1 = (*(code *)PTR_set_current_007996c0)(param_1,param_3 + 0x30);
  if (local_30 != -1) {
    param_2[1] = local_28;
    param_2[2] = lStack_20;
    *param_2 = local_30;
    return param_2;
  }
LAB_006e2f92:
  (*(code *)PTR_panic_fmt_007991a8)
            (param_1,&anon_1c7207ea9655bfcf55d918eab6d9918c_27_llvm_17559541839288726608);
  pcVar3 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar3)();
  return plVar4;
}


