// 00063cf0 <&str>

/* std[6c98fd8553dbae28]::env::remove_var::<&str> */

void __rustcall
std[6c98fd8553dbae28]::env::remove_var::<&str>(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_1;
  local_8 = param_2;
  lVar2 = (*(code *)PTR_unsetenv_000c3e48)();
  if (lVar2 == 0) {
    return;
  }
  <&str>::_closure_0_(&local_10,lVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


