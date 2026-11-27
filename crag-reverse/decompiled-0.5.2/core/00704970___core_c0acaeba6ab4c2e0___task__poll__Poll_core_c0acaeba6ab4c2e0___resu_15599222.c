// 00704970 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>

/* WARNING: Switch with 1 destination removed at 0x00704a1e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,
   tokio[d7d91d38da47d894]::io::blocking::Buf),
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>
          (longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if ((int)lVar1 == -1) {
      if (param_1[2] != 0) {
        puVar3 = (undefined8 *)param_1[3];
        pcVar4 = (code *)*puVar3;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
        if (puVar3[1] != 0) {
          (*(code *)PTR_free_0079adc8)();
          return;
        }
      }
    }
    else {
      if (lVar1 == 0) {
        if (((param_1[1] != 0) && (1 < ((uint)param_1[2] & 3) - 2)) && ((param_1[2] & 3U) != 0)) {
          (*(code *)PTR_drop_00799040)();
        }
      }
      else if ((int)lVar1 == 1) {
        uVar2 = param_1[1];
        if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
          (*(code *)PTR_drop_00799040)();
        }
      }
      else if (((param_1[1] != 0) && (1 < ((uint)param_1[2] & 3) - 2)) && ((param_1[2] & 3U) != 0))
      {
        (*(code *)PTR_drop_00799040)();
      }
      if (param_1[3] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  return;
}


