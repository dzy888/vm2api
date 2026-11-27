// 006b3600 drop

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::SenderDropGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::SenderDropGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 2;
  if (cVar1 != '\x02') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 2) = 2;
    (*(code *)PTR_send_error_00799590)();
    (*(code *)PTR_drop_007994d0)();
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007994d8)();
    }
  }
  return;
}


