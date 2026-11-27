// 001e4f90 now

/* <std[6c98fd8553dbae28]::time::SystemTime>::now */

void __rustcall <std[6c98fd8553dbae28]::time::SystemTime>::now(void)

{
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(0);
  return;
}


