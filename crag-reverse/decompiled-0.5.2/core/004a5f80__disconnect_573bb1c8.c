// 004a5f80 disconnect

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect
   <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::disconnect
    */

byte __rustcall <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  int *local_40;
  byte local_38;
  
  LOCK();
  iVar3 = *param_1;
  if (iVar3 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = (char)param_1[1];
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = (char)param_1[1];
  }
  if (cVar9 != '\0') {
    local_40 = param_1;
    local_38 = bVar8;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b698);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  bVar4 = *(byte *)(param_1 + 0x1a);
  if (bVar4 == 0) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    lVar5 = *(longlong *)(param_1 + 6);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 4);
      lVar10 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar6 + lVar10) + 0x18);
        LOCK();
        bVar11 = *plVar1 == 0;
        if (bVar11) {
          *plVar1 = 2;
        }
        UNLOCK();
        if (bVar11) {
          LOCK();
          piVar2 = (int *)(*(longlong *)(*(longlong *)(lVar6 + lVar10) + 0x10) + 0x28);
          iVar3 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
          if (iVar3 == -1) {
            (*(code *)PTR_futex_wake_00799b60)();
          }
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar5 * 0x18 != lVar10);
    }
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(param_1 + 2);
    lVar5 = *(longlong *)(param_1 + 0x12);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar10 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar6 + lVar10) + 0x18);
        LOCK();
        bVar11 = *plVar1 == 0;
        if (bVar11) {
          *plVar1 = 2;
        }
        UNLOCK();
        if (bVar11) {
          LOCK();
          piVar2 = (int *)(*(longlong *)(*(longlong *)(lVar6 + lVar10) + 0x10) + 0x28);
          iVar3 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
          if (iVar3 == -1) {
            (*(code *)PTR_futex_wake_00799b60)();
          }
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar5 * 0x18 != lVar10);
    }
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(param_1 + 0xe);
  }
  if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar3 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return bVar4 ^ 1;
}


