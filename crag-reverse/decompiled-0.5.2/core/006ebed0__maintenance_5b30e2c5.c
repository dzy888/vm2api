// 006ebed0 maintenance

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>::maintenance */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>::maintenance
          (longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  
  uVar2 = *(ulonglong *)(*param_2 + 0x1d8);
  if (uVar2 <= (ulonglong)param_2[1]) {
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar2,&PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_00794168)
    ;
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(*param_2 + 0x1d0);
  lVar7 = param_2[1] * 0x80;
  *(undefined8 *)(lVar3 + 0x10 + lVar7) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar3 + 0x20 + lVar7) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar3 + 0x28 + lVar7) = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x72) != '\0') goto LAB_006ebf79;
  lVar3 = *param_2;
  LOCK();
  bVar9 = *(int *)(lVar3 + 0x80) == 0;
  if (bVar9) {
    *(int *)(lVar3 + 0x80) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    uVar8 = *(undefined1 *)(lVar3 + 0x98);
    uVar2 = *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
joined_r0x006ebfd9:
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar6 == '\0') {
        *(undefined1 *)(lVar3 + 0x84) = 1;
      }
    }
  }
  else {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    uVar8 = *(undefined1 *)(lVar3 + 0x98);
    if (cVar6 != '\0') {
      uVar2 = *(ulonglong *)puVar5;
      goto joined_r0x006ebfd9;
    }
  }
  LOCK();
  iVar1 = *(int *)(lVar3 + 0x80);
  *(int *)(lVar3 + 0x80) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x72) = uVar8;
LAB_006ebf79:
  if (*(char *)(param_1 + 0x73) == '\0') {
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  return;
}


