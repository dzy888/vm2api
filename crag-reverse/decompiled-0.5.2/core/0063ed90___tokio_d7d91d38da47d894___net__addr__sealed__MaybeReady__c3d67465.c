// 0063ed90 <tokio[d7d91d38da47d894]::net::addr::sealed::MaybeReady>

/* WARNING: Switch with 1 destination removed at 0x0063edab */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::net::addr::sealed::MaybeReady>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::net::addr::sealed::MaybeReady>
          (short param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_1 == -1) && (cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))();
    return;
  }
  return;
}


