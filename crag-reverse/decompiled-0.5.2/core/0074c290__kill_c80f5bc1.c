// 0074c290 kill

/* <std[6c98fd8553dbae28]::process::Child>::kill */

void __rustcall <std[6c98fd8553dbae28]::process::Child>::kill(undefined8 param_1)

{
  <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::send_signal(param_1,9);
  return;
}


