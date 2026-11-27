// 000a0430 is_zero_slow_path

/* std[6c98fd8553dbae28]::panicking::panic_count::is_zero_slow_path */

bool __rustcall std[6c98fd8553dbae28]::panicking::panic_count::is_zero_slow_path(void)

{
  longlong lVar1;
  
  lVar1 = __tls_get_addr();
  return *(longlong *)(lVar1 + 0x40) == 0;
}


