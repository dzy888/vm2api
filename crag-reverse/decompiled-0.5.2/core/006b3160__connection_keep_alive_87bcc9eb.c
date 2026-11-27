// 006b3160 connection_keep_alive

/* hyper[c4782d5b5c5e3493]::headers::connection_keep_alive */

void __rustcall hyper[c4782d5b5c5e3493]::headers::connection_keep_alive(longlong param_1)

{
  connection_has(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 "keep-aliveinvalid header nameinvalid header valueinvalid response statusinvalid tokeninvalid HTTP version"
                 ,10);
  return;
}


