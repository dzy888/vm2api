// 0075d180 is_zero_slow_path

/* std[6c98fd8553dbae28]::panicking::panic_count::is_zero_slow_path */

undefined8 __rustcall std[6c98fd8553dbae28]::panicking::panic_count::is_zero_slow_path(void)

{
  longlong *in_FS_OFFSET;
  
  return CONCAT71((int7)((ulonglong)*in_FS_OFFSET >> 8),*(longlong *)(*in_FS_OFFSET + -0x48) == 0);
}


