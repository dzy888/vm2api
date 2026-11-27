// 0073ed30 now

/* <std[6c98fd8553dbae28]::time::Instant>::now */

void __rustcall <std[6c98fd8553dbae28]::time::Instant>::now(void)

{
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(1);
  return;
}


