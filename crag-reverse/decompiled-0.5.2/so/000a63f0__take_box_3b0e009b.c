// 000a63f0 take_box

/* <std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::take_box */

void __rustcall
<std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload_as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::take_box(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == -1) {
    (*(code *)PTR_write_000c3f70)((*(undefined8 **)param_1[3])[1],**(undefined8 **)param_1[3]);
    param_1[2] = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    lVar5 = *param_1;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  plVar4 = (longlong *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (plVar4 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *plVar4 = lVar5;
  plVar4[1] = lVar1;
  plVar4[2] = lVar2;
  return;
}


