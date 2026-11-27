// 007636d0 take_box

/* <std[6c98fd8553dbae28]::panicking::resume_unwind::RewrapBox as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::take_box */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::panicking::resume_unwind::RewrapBox_as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::take_box(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = *param_1;
  *(undefined8 *)*param_1 = 1;
  *(undefined **)(*param_1 + 8) = &DAT_00797210;
  return auVar1;
}


