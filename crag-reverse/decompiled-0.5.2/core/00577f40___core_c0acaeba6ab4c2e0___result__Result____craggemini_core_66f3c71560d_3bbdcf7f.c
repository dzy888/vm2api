// 00577f40 <core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>

/* tokio[d7d91d38da47d894]::sync::oneshot::channel::<core[c0acaeba6ab4c2e0]::result::Result<(),
   craggemini_core[66f3c71560d70857]::protocol::Failure>> */

void __rustcall
tokio[d7d91d38da47d894]::sync::oneshot::channel::
<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>
          (void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong lStack_18;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    plVar3[0xe] = 0;
    plVar3[0xc] = local_20;
    plVar3[0xd] = lStack_18;
    plVar3[10] = local_30;
    plVar3[0xb] = lStack_28;
    plVar3[8] = local_40;
    plVar3[9] = lStack_38;
    plVar3[6] = local_50;
    plVar3[7] = lStack_48;
    plVar3[4] = local_60;
    plVar3[5] = lStack_58;
    plVar3[2] = -3;
    plVar3[3] = lStack_68;
    *plVar3 = 1;
    plVar3[1] = 1;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


