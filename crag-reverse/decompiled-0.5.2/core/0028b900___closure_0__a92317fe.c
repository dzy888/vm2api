// 0028b900 {closure#0}

/* WARNING: Removing unreachable block (ram,0x0028bb3d) */
/* WARNING: Removing unreachable block (ram,0x0028bb4f) */
/* WARNING: Removing unreachable block (ram,0x0028bb54) */
/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::try_exit_code::{closure#0} */

bool __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::try_exit_code::_closure_0_
          (longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong unaff_R13;
  bool bVar7;
  bool bVar8;
  undefined1 *local_58;
  int local_50;
  char local_4c;
  uint local_48;
  undefined4 uStack_44;
  
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] == '\x01') {
      (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    }
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::ExitStatus>,core[c0acaeba6ab4c2e0]::io::error::Error>>
              (local_50,CONCAT44(uStack_44,local_48));
    (*(code *)PTR_release_00799050)();
    *(undefined1 *)(unaff_R13 + 8) = 2;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x228);
  piVar1 = (int *)(lVar4 + 0x10);
  LOCK();
  bVar7 = *(int *)(lVar4 + 0x10) == 0;
  if (bVar7) {
    *(int *)(lVar4 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar4 + 0x14) != '\0') {
LAB_0028b973:
      if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
        *(undefined1 *)(lVar4 + 0x14) = 1;
      }
      goto LAB_0028b986;
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
LAB_0028ba9a:
      if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
        *(undefined1 *)(lVar4 + 0x14) = 1;
      }
LAB_0028baad:
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      bVar7 = true;
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      goto LAB_0028bb7a;
    }
LAB_0028bc2d:
    if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(lVar4 + 0x14) = 1;
    }
LAB_0028bc3c:
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (*(char *)(lVar4 + 0x14) == '\0') {
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (cVar5 != '\0') goto LAB_0028ba9a;
        goto LAB_0028baad;
      }
      if (cVar5 != '\0') goto LAB_0028bc2d;
      goto LAB_0028bc3c;
    }
    if (cVar5 != '\0') goto LAB_0028b973;
LAB_0028b986:
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  cVar5 = (*(code *)PTR_try_acquire_00799318)();
  bVar7 = false;
  if (cVar5 != '\x02') goto LAB_0028bb7a;
  if (*(int *)(lVar3 + 0x3a0) != -1) {
    (*(code *)PTR_try_wait_00799320)();
    if ((local_50 == 0) && (local_4c != '\0')) {
      bVar7 = (local_48 & 0x7f) == 0;
      lVar3 = *(longlong *)(lVar3 + 0x228);
      piVar1 = (int *)(lVar3 + 0x10);
      LOCK();
      bVar8 = *(int *)(lVar3 + 0x10) == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = 1;
      }
      UNLOCK();
      if (!bVar8) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      uVar6 = local_48 >> 8 & 0xff;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        if (*(char *)(lVar3 + 0x14) != '\0') {
LAB_0028ba55:
          local_58 = (undefined1 *)(lVar3 + 0x14);
          if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
             (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
            *local_58 = 1;
          }
          goto LAB_0028ba68;
        }
        *(uint *)(lVar3 + 0x18) = (uint)bVar7;
        *(uint *)(lVar3 + 0x1c) = uVar6;
LAB_0028bb15:
        local_58 = (undefined1 *)(lVar3 + 0x14);
        if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
          *local_58 = 1;
        }
LAB_0028bb28:
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (iVar2 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      else {
        cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        if (*(char *)(lVar3 + 0x14) == '\0') {
          *(uint *)(lVar3 + 0x18) = (uint)bVar7;
          *(uint *)(lVar3 + 0x1c) = uVar6;
          if (cVar5 != '\0') goto LAB_0028bb15;
          goto LAB_0028bb28;
        }
        if (cVar5 != '\0') goto LAB_0028ba55;
LAB_0028ba68:
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (iVar2 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      (*(code *)PTR_release_00799050)();
      goto LAB_0028bb7a;
    }
    if (((local_50 != 0) && (1 < (local_48 & 3) - 2)) && ((local_48 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  (*(code *)PTR_release_00799050)();
LAB_0028bb7a:
  *(undefined1 *)(param_1 + 1) = 1;
  return bVar7;
}


