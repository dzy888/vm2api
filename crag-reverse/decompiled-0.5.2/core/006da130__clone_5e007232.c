// 006da130 clone

/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::increase_handle_refcount();
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return;
}


