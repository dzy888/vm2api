// 004d4ce0 wake_by_ref

/* WARNING: Switch with 1 destination removed at 0x004d4e88 */
/* <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>
   as tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref */

void __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_tokio[d7d91d38da47d894]::util::wake::Wake>
::wake_by_ref(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  longlong in_RAX;
  undefined8 in_R8;
  bool bVar11;
  longlong local_38;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10);
  piVar1 = (int *)(lVar5 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar5 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar5 + 0x10) = 1;
  }
  UNLOCK();
  local_38 = in_RAX;
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar8 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)(lVar4 + 0x30);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)(lVar4 + 0x30);
  }
  if (cVar10 != '\x01') goto LAB_004d4e51;
  lVar2 = lVar4 + 0x10;
  *(undefined1 *)(lVar4 + 0x30) = 0;
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    if (*(longlong *)(lVar5 + 0x28) == lVar2) {
      lVar6 = *(longlong *)(lVar4 + 0x20);
      *(longlong *)(lVar5 + 0x28) = lVar6;
      goto joined_r0x004d4d81;
    }
LAB_004d4ee4:
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x20);
    *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10) = lVar6;
joined_r0x004d4d81:
    if (lVar6 == 0) {
      if (*(longlong *)(lVar5 + 0x30) != lVar2) goto LAB_004d4ee4;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x18);
    }
    else {
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar4 + 0x18);
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    lVar6 = *(longlong *)(lVar5 + 0x18);
    local_38 = lVar2;
    if (lVar6 != lVar2) {
      *(longlong *)(lVar4 + 0x20) = lVar6;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (lVar6 != 0) {
        *(longlong *)(lVar6 + 8) = lVar2;
      }
      *(longlong *)(lVar5 + 0x18) = lVar2;
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        *(longlong *)(lVar5 + 0x20) = lVar2;
      }
      lVar4 = *(longlong *)(lVar5 + 0x38);
      *(undefined8 *)(lVar5 + 0x38) = 0;
      if (lVar4 != 0) {
        if (((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
           (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
          *(undefined1 *)(lVar5 + 0x14) = 1;
        }
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
                    /* WARNING: Could not recover jumptable at 0x004d4e1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 8))();
        return;
      }
LAB_004d4e51:
      if (((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
        *(undefined1 *)(lVar5 + 0x14) = 1;
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    core[c0acaeba6ab4c2e0]::panicking::assert_failed::
    <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
              (1,lVar5 + 0x18,&local_38,0,in_R8,
               &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


