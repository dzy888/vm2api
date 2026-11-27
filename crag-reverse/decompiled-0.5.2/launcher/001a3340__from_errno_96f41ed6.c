// 001a3340 from_errno

/* <getrandom[6c7f7f5c828d4481]::error::Error>::from_errno */

int __rustcall <getrandom[6c7f7f5c828d4481]::error::Error>::from_errno(int param_1)

{
  int iVar1;
  
  iVar1 = 0x10001;
  if (0 < param_1) {
    iVar1 = -param_1;
  }
  return iVar1;
}


