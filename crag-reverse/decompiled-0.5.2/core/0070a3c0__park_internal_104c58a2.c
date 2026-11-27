// 0070a3c0 park_internal

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park_internal */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park_internal
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>
                (*(longlong *)(param_1 + 0x10));
      (*(code *)PTR___rust_dealloc_00798fc8)();
      lVar3 = *(longlong *)(param_1 + 8) + 1;
    }
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 8) = lVar3;
    if (param_5 == -1) {
      <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park(param_4,param_3 + 0x1c0);
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    else {
      <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park_timeout(param_4,param_3 + 0x1c0,0,0);
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    while (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_0070a48f;
      lVar3 = *(longlong *)(param_1 + 0x30) + -1;
      *(longlong *)(param_1 + 0x30) = lVar3;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3 * 0x10) + 8))();
      plVar1 = (longlong *)(param_1 + 0x18);
      *plVar1 = *plVar1 + 1;
      lVar3 = *plVar1;
    }
    (*(code *)PTR_panic_already_borrowed_007997b0)();
LAB_0070a48f:
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      lVar3 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (lVar3 != 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        return;
      }
    }
    else {
      (*(code *)PTR_panic_already_borrowed_007997b0)();
    }
    (*(code *)PTR_expect_failed_00799440)();
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


