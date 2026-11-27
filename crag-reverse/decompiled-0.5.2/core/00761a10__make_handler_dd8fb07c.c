// 00761a10 make_handler

/* WARNING: Removing unreachable block (ram,0x00761a93) */
/* WARNING: Removing unreachable block (ram,0x00761ac0) */
/* WARNING: Removing unreachable block (ram,0x00761add) */
/* WARNING: Removing unreachable block (ram,0x00761b13) */
/* WARNING: Removing unreachable block (ram,0x00761b2a) */
/* WARNING: Removing unreachable block (ram,0x00761b2e) */
/* WARNING: Removing unreachable block (ram,0x00761b5a) */
/* WARNING: Removing unreachable block (ram,0x00761b73) */
/* WARNING: Removing unreachable block (ram,0x00761c03) */
/* WARNING: Removing unreachable block (ram,0x00761cde) */
/* WARNING: Removing unreachable block (ram,0x00761c26) */
/* WARNING: Removing unreachable block (ram,0x00761ba7) */
/* std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::make_handler */

undefined8 __rustcall
std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::make_handler(char param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  
  if (NEED_ALTSTACK != '\0') {
    if (param_1 == '\0') {
      (*(code *)PTR_pthread_self_0079afd0)();
      iVar2 = (*(code *)PTR_pthread_getattr_np_0079afd8)();
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_pthread_attr_getguardsize_0079b108)();
        uVar3 = extraout_XMM0_Da;
        if (iVar2 != 0) {
          uVar3 = (*(code *)PTR_<i32,i32>_0079ac48)(0,"");
        }
        (*(code *)PTR_panic_fmt_007991a8)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_007970d0);
        (*(code *)PTR_<i32,i32>_0079ac48)(0,"");
        (*(code *)PTR_<i32,i32>_0079ac48)(0,"");
        uVar3 = (*(code *)PTR_set_functions_inner_007990c0)();
        (*(code *)PTR_panic_fmt_007991a8)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797190);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (*(code *)PTR_sigaltstack_0079b100)();
  }
  return 0;
}


