// 001db990 {closure#0}

/* WARNING: Removing unreachable block (ram,0x001db9b5) */
/* std[6c98fd8553dbae28]::sys::env::unix::getenv::{closure#0} */

longlong * __rustcall std[6c98fd8553dbae28]::sys::env::unix::getenv::_closure_0_(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (ENV_LOCK < 0x3ffffffe) {
    ENV_LOCK = ENV_LOCK + 1;
    LOCK();
    UNLOCK();
  }
  else {
    (*(code *)PTR_read_contended_0021a898)();
  }
  lVar3 = (*(code *)PTR_getenv_0021a888)();
  if (lVar3 == 0) {
    *param_1 = -1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_0021a890)();
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR_memcpy_00219c60)();
    }
    *param_1 = lVar3;
    param_1[1] = lVar4;
    param_1[2] = lVar3;
  }
  LOCK();
  iVar2 = ENV_LOCK - 1;
  UNLOCK();
  uVar5 = ENV_LOCK - 1;
  ENV_LOCK = iVar2;
  if (SBORROW4(0,uVar5 & 0xbfffffff)) {
    (*(code *)PTR_wake_writer_or_readers_0021a760)();
  }
  return param_1;
}


