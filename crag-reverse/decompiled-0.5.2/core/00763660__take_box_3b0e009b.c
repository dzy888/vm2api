// 00763660 take_box

/* <std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str> as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::take_box */

void __rustcall
<std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str>as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::take_box(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = lVar1;
      plVar4[1] = lVar2;
      return;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  (*(code *)PTR_abort_00799748)();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


