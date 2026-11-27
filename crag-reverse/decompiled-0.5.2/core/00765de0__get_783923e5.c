// 00765de0 get

/* <std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::get */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::panicking::panic_handler::FormatStringPayload_as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::get(longlong *param_1)

{
  undefined1 auVar1 [16];
  
  if (*param_1 == -1) {
    (*(code *)PTR_write_007994b0)((*(undefined8 **)param_1[3])[1],**(undefined8 **)param_1[3]);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
  }
  auVar1._8_8_ = &PTR_<alloc[12e961f32105355]::string::String>_00797340;
  auVar1._0_8_ = param_1;
  return auVar1;
}


