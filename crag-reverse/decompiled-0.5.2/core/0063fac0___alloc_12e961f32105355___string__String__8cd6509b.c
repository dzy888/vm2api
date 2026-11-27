// 0063fac0 <alloc[12e961f32105355]::string::String>

/* tokio[d7d91d38da47d894]::sync::mpsc::bounded::channel::<alloc[12e961f32105355]::string::String>
    */

void __rustcall
tokio[d7d91d38da47d894]::sync::mpsc::bounded::channel::<alloc[12e961f32105355]::string::String>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 local_40 [40];
  longlong local_18;
  
  if (param_1 == 0) {
    (*(code *)PTR_panic_fmt_007991a8)(param_4,param_2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)PTR_new_00799230)();
  local_18 = param_1;
  chan::channel::
  <alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>
            (local_40,param_1);
  return;
}


