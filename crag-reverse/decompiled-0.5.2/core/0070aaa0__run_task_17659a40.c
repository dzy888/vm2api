// 0070aaa0 run_task

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::run_task */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::run_task
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *in_FS_OFFSET;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    goto LAB_0070abd1;
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(uVar4);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    lVar2 = *(longlong *)(param_1 + 8) + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *in_FS_OFFSET;
  cVar3 = *(char *)(lVar2 + -0xf0);
  if (cVar3 == '\0') {
LAB_0070ab28:
    cVar3 = *(char *)(lVar2 + -0xf4);
    uVar4 = (ulonglong)*(byte *)(lVar2 + -0xf3);
    *(undefined2 *)(lVar2 + -0xf4) = 0x8001;
  }
  else if (cVar3 == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
    goto LAB_0070ab28;
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))();
  if (cVar3 != '\x02') {
    if (*(char *)(lVar2 + -0xf0) != '\0') {
      if (*(char *)(lVar2 + -0xf0) == '\x02') goto LAB_0070ab67;
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
    }
    *(char *)(lVar2 + -0xf4) = cVar3;
    *(char *)(lVar2 + -0xf3) = (char)uVar4;
  }
LAB_0070ab67:
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
  (*(code *)PTR_expect_failed_00799440)
            (param_4,&PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795408
            );
LAB_0070abd1:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


