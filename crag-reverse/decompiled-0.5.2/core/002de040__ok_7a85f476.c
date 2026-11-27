// 002de040 ok

/* <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::ExitStatus>,
   core[c0acaeba6ab4c2e0]::io::error::Error>>::ok */

int __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::ExitStatus>,core[c0acaeba6ab4c2e0]::io::error::Error>>
::ok(int *param_1)

{
  if (*param_1 != 1) {
    return param_1[1];
  }
  if ((1 < ((uint)*(ulonglong *)(param_1 + 2) & 3) - 2) && ((*(ulonglong *)(param_1 + 2) & 3) != 0))
  {
    (*(code *)PTR_drop_00799040)();
  }
  return 2;
}


