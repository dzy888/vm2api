// 007675b0 fmt

/* <core[c0acaeba6ab4c2e0]::result::Result<isize, core[c0acaeba6ab4c2e0]::io::error::Error> as
   core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<isize,core[c0acaeba6ab4c2e0]::io::error::Error>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
::fmt(int *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int *local_10;
  
  local_10 = param_1 + 2;
  if (*param_1 == 1) {
    puVar2 = &DAT_00797590;
    uVar1 = 3;
  }
  else {
    puVar2 = &DAT_00797570;
    uVar1 = 2;
  }
  (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_10,uVar1,puVar2);
  return;
}


