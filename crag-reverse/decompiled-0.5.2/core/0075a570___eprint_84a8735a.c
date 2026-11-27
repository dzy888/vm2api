// 0075a570 _eprint

/* std[6c98fd8553dbae28]::io::stdio::_eprint */

void __rustcall
std[6c98fd8553dbae28]::io::stdio::_eprint
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  char *local_58;
  undefined8 local_50;
  char **local_48;
  code *local_40;
  longlong *local_38;
  undefined *local_30;
  undefined *local_28;
  longlong local_20;
  
  local_58 = "stderr";
  local_50 = 6;
  cVar2 = print_to_buffer_if_capture_used();
  if (cVar2 == '\0') {
    local_28 = PTR_INSTANCE_0079b030;
    local_48 = &local_28;
    local_20 = (*(code *)PTR_write_fmt_0079b038)(param_4,param_2);
    if (local_20 != 0) {
      local_48 = &local_58;
      local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_38 = &local_20;
      local_30 = PTR_fmt_007991d0;
      (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_007963d8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}


