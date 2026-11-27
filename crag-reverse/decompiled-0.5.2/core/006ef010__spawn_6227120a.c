// 006ef010 spawn

/* <tokio[d7d91d38da47d894]::runtime::task_hooks::TaskHooks>::spawn */

void __rustcall <tokio[d7d91d38da47d894]::runtime::task_hooks::TaskHooks>::spawn(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
                    /* WARNING: Could not recover jumptable at 0x006ef033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (UNRECOVERED_JUMPTABLE,*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0);
  return;
}


