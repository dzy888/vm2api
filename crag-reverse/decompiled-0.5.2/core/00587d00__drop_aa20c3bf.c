// 00587d00 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar2 & 5) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00587d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))();
      return;
    }
  }
  return;
}


