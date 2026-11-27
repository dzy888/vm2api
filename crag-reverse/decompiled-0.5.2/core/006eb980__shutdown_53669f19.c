// 006eb980 shutdown

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::shutdown
          (undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*param_2 == 1) {
    unaff_RBX = *(longlong *)(param_2 + 2);
    LOCK();
    bVar8 = *(int *)(unaff_RBX + 0x80) == 0;
    if (bVar8) {
      *(int *)(unaff_RBX + 0x80) = 1;
    }
    UNLOCK();
    if (bVar8) goto LAB_006eb9a9;
  }
  else {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_dbc6346551702d8f49f87a432b9dece2_22_llvm_7788165550271277997);
  }
  (*(code *)PTR_lock_contended_00798fe0)();
LAB_006eb9a9:
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar2 = *(char *)(unaff_RBX + 0x98);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    cVar2 = *(char *)(unaff_RBX + 0x98);
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(unaff_RBX + 0x98) = 1;
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(unaff_RBX + 0x84) = 1;
  }
  LOCK();
  iVar1 = *(int *)(unaff_RBX + 0x80);
  *(int *)(unaff_RBX + 0x80) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if ((cVar2 == '\0') && (*(longlong *)(unaff_RBX + 0x1c8) != 0)) {
    lVar7 = *(longlong *)(unaff_RBX + 0x1c8) << 4;
    lVar6 = *(longlong *)(unaff_RBX + 0x1c0) + 8;
    do {
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                (lVar6,unaff_RBX + 0x338);
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return;
}


