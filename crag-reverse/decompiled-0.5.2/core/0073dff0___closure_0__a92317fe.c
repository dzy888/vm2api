// 0073dff0 {closure#0}

/* WARNING: Removing unreachable block (ram,0x0073e015) */
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
    (*(code *)PTR_read_contended_0079ad80)();
  }
  lVar3 = (*(code *)PTR_getenv_0079ad78)();
  if (lVar3 == 0) {
    *param_1 = -1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_0079aa38)();
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR_memcpy_00799008)();
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
    (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
  }
  return param_1;
}


