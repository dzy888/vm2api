// 00763640 get

/* <std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str> as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::get */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str>as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::get(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*param_1 == 0) {
    (*(code *)PTR_abort_00799748)();
    pcVar1 = (code *)swi(3);
    auVar3._0_8_ = (*pcVar1)();
    auVar3._8_8_ = param_3;
    return auVar3;
  }
  auVar2._8_8_ = &DAT_007971f0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


