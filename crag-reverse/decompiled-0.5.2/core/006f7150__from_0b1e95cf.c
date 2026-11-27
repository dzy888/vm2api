// 006f7150 from

/* <core[c0acaeba6ab4c2e0]::io::error::Error as
   core[c0acaeba6ab4c2e0]::convert::From<tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>::from
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error_as_core[c0acaeba6ab4c2e0]::convert::From<tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
::from(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = (*(code *)PTR_<&str>_007991e8)(param_4,(lVar1 == 0) * '\x05' + '\r');
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar2[2]);
    }
  }
  return uVar3;
}


