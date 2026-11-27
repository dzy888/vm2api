// 000bdcb0 fmt

/* <core[c0acaeba6ab4c2e0]::str::error::Utf8Error as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::error::Utf8Error_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *local_30;
  undefined *local_28;
  undefined1 *local_20;
  undefined *local_18;
  undefined1 local_9;
  
  if (param_1[8] == '\x01') {
    local_9 = param_1[9];
    local_30 = &local_9;
    local_28 = PTR_fmt_000c3f28;
    local_18 = PTR_fmt_000c3b68;
    puVar1 = &DAT_0000a7e4;
    local_20 = param_1;
  }
  else {
    local_28 = PTR_fmt_000c3b68;
    puVar1 = &DAT_0000a41e;
    local_30 = param_1;
  }
  (*(code *)PTR_write_000c3f70)(&local_30,puVar1);
  return;
}


