// 00577e90 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>

/* tokio[d7d91d38da47d894]::sync::oneshot::channel::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::sync::oneshot::channel::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>
          (void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 in_RCX;
  undefined1 auVar3 [16];
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  auVar3._0_8_ = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (auVar3._0_8_ == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(in_RCX,0x888);
    LOCK();
    lVar1 = *auVar3._0_8_;
    *auVar3._0_8_ = *auVar3._0_8_ + 1;
    UNLOCK();
    if (*auVar3._0_8_ != 0 && SCARRY8(lVar1,1) == *auVar3._0_8_ < 0) {
      auVar3._8_8_ = auVar3._0_8_;
      return auVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


