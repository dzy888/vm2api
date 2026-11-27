// 006f92d0 drop

/* <tokio[d7d91d38da47d894]::runtime::time::entry::TimerEntry as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::entry::TimerEntry_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = 0x240;
  if (*param_1 != '\0') {
    lVar2 = 0x338;
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x90 + lVar2) == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (0x338,&anon_880d723ff0f66ce4ced63274bf095def_35_llvm_12887403613343987975);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::clear_entry
            (*(longlong *)(param_1 + 8) + lVar2 + 0x50,param_1 + 0x10);
  return;
}


