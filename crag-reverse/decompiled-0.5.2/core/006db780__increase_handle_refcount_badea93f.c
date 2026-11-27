// 006db780 increase_handle_refcount

/* WARNING: Switch with 1 destination removed at 0x006db879 */
/* tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::increase_handle_refcount */

void __rustcall
tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::increase_handle_refcount
          (longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int *local_30;
  byte local_28;
  
  lVar3 = *param_1;
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar9 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar9) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    cVar8 = *(char *)(lVar3 + 0x14);
    bVar6 = 0;
    bVar7 = local_28;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    cVar8 = *(char *)(lVar3 + 0x14);
    bVar6 = bVar7 ^ 1;
    bVar7 = local_28;
  }
  local_28 = bVar6;
  if (cVar8 == '\0') {
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      if (((local_28 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *(undefined1 *)(lVar3 + 0x14) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    local_28 = bVar7;
    (*(code *)PTR_panic_00799338)();
  }
  else {
    local_30 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_30,
               &anon_ad2f892e54e1b23d293987efc0a65e00_26_llvm_172257243520341577);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


