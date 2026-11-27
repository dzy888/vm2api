// 006fd960 unpark

/* WARNING: Switch with 1 destination removed at 0x006fd9ec */
/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined8 *local_28;
  undefined *local_20;
  undefined8 local_18;
  
  puVar7 = (undefined1 *)*param_1;
  LOCK();
  uVar2 = *(undefined8 *)(puVar7 + 0x18);
  *(undefined8 *)(puVar7 + 0x18) = 3;
  UNLOCK();
  switch(uVar2) {
  case 0:
  case 3:
    return;
  case 1:
    LOCK();
    bVar8 = *(int *)(puVar7 + 0x20) == 0;
    if (bVar8) {
      *(int *)(puVar7 + 0x20) = 1;
    }
    UNLOCK();
    if (!bVar8) goto LAB_006fda5a;
    break;
  case 2:
    if (*(int *)((longlong)param_2 + 0x44) == -1) {
      <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark(*param_2 + 0x10);
      return;
    }
    local_28 = (undefined8 *)(*(code *)PTR_wake_0079a830)();
    if (local_28 != (undefined8 *)0x0) {
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_28,
                 &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    return;
  default:
    local_28 = &local_18;
    local_20 = PTR_fmt_007991f0;
    puVar7 = anon_a54838b0e2c6049171e94f4eeb8260c4_53_llvm_5899425866962164388;
    local_18 = uVar2;
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_a54838b0e2c6049171e94f4eeb8260c4_54_llvm_5899425866962164388);
LAB_006fda5a:
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    uVar3 = *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  }
  else {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar6 == '\0') goto LAB_006fd9d3;
    uVar3 = *(ulonglong *)puVar5;
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar6 == '\0') {
      puVar7[0x24] = 1;
    }
  }
LAB_006fd9d3:
  LOCK();
  iVar1 = *(int *)(puVar7 + 0x20);
  *(int *)(puVar7 + 0x20) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  LOCK();
  *(int *)(puVar7 + 0x28) = *(int *)(puVar7 + 0x28) + 1;
  UNLOCK();
  (*(code *)PTR_syscall_00799e60)(1,0x81);
  return;
}


