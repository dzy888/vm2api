// 00587dc0 clone_box

/* <hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade as
   http[56314f485c23ccf6]::extensions::AnyClone>::clone_box */

void __rustcall
<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade_as_http[56314f485c23ccf6]::extensions::AnyClone>::
clone_box(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_00587e13;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = plVar2;
    return;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00587e13:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


