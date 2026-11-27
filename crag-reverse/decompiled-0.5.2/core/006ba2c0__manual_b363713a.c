// 006ba2c0 manual

/* <hyper[c4782d5b5c5e3493]::upgrade::Pending>::manual */

void __rustcall <hyper[c4782d5b5c5e3493]::upgrade::Pending>::manual(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_70;
  undefined8 *local_68;
  longlong local_40;
  undefined1 local_38 [48];
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_68 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (local_68 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *local_68 = 0;
  *(undefined2 *)(local_68 + 2) = 0x601;
  local_70 = 0;
  <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>
  ::send(&local_40,param_1,&local_70);
  if (local_40 != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
              (local_38);
  }
  return;
}


