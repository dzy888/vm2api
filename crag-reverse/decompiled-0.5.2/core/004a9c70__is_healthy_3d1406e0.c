// 004a9c70 is_healthy

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::is_healthy */

bool __rustcall <craggemini_core[66f3c71560d70857]::pool::AgySlot>::is_healthy(void)

{
  int iVar1;
  int local_18;
  char local_14;
  uint local_10;
  
  (*(code *)PTR_try_wait_00799320)();
  if (local_18 == 0) {
    if (local_14 == '\0') {
      (*(code *)PTR_as_raw_fd_00799b70)();
      iVar1 = (*(code *)PTR_poll_00799b78)();
      return -1 < iVar1;
    }
  }
  else if ((1 < (local_10 & 3) - 2) && ((local_10 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
    return false;
  }
  return false;
}


