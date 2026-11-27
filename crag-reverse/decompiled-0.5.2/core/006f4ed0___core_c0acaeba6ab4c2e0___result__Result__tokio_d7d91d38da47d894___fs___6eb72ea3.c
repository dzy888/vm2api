// 006f4ed0 <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>

/* WARNING: Switch with 1 destination removed at 0x006f4efc */
/* WARNING: Switch with 1 destination removed at 0x006f4f31 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,
   tokio[d7d91d38da47d894]::io::blocking::Buf),
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*param_1 == -1) {
    if (*(longlong *)(param_1 + 4) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        uVar2 = puVar1[2];
        goto __rustc_100742bb89c490cb____rust_dealloc;
      }
    }
  }
  else {
    <tokio[d7d91d38da47d894]::fs::file::Operation>(param_1);
    if (*(longlong *)(param_1 + 6) != 0) {
      uVar2 = 1;
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar2);
      return;
    }
  }
  return;
}


