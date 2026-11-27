// 006f9020 handle

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::handle */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::handle(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = 0x240;
  if (*param_1 != '\0') {
    lVar2 = 0x338;
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x44 + lVar2) == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (lVar2,&anon_880d723ff0f66ce4ced63274bf095def_24_llvm_12887403613343987975);
    pcVar1 = (code *)swi(3);
    lVar2 = (*pcVar1)();
    return lVar2;
  }
  return *(longlong *)(param_1 + 8) + lVar2;
}


