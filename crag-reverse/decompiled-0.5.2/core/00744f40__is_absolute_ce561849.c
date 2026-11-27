// 00744f40 is_absolute

/* <std[6c98fd8553dbae28]::path::Path>::is_absolute */

bool __rustcall <std[6c98fd8553dbae28]::path::Path>::is_absolute(char *param_1,longlong param_2)

{
  if (param_2 == 0) {
    return false;
  }
  return *param_1 == '/';
}


