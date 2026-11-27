// 00065f30 <agy_bridge[64a9e9deac6c45ce]::start::{closure#2},()>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>(void)

{
  code *pcVar1;
  longlong local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1232_4_ == 0) {
    local_38 = <agy_bridge[64a9e9deac6c45ce]::Runtime>::serve(agy_bridge[64a9e9deac6c45ce]::RUNTIME)
    ;
    if (local_38 != 0) {
      <core[c0acaeba6ab4c2e0]::io::error::Error_as_alloc[12e961f32105355]::string::SpecToString>::
      spec_to_string(local_30,&local_38);
      <agy_bridge[64a9e9deac6c45ce]::Runtime>::fatal
                (agy_bridge[64a9e9deac6c45ce]::RUNTIME,local_28,local_20);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}


