// 001f71a0 make_handler

/* WARNING: Removing unreachable block (ram,0x001f7223) */
/* WARNING: Removing unreachable block (ram,0x001f7250) */
/* WARNING: Removing unreachable block (ram,0x001f726d) */
/* WARNING: Removing unreachable block (ram,0x001f72a3) */
/* WARNING: Removing unreachable block (ram,0x001f72ba) */
/* WARNING: Removing unreachable block (ram,0x001f72be) */
/* WARNING: Removing unreachable block (ram,0x001f72ea) */
/* WARNING: Removing unreachable block (ram,0x001f7303) */
/* WARNING: Removing unreachable block (ram,0x001f7393) */
/* WARNING: Removing unreachable block (ram,0x001f746e) */
/* WARNING: Removing unreachable block (ram,0x001f73b6) */
/* WARNING: Removing unreachable block (ram,0x001f7337) */
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
      (*(code *)PTR_pthread_self_0021aa50)();
      iVar2 = (*(code *)PTR_pthread_getattr_np_0021aa58)();
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_pthread_attr_getguardsize_0021ab60)();
        uVar3 = extraout_XMM0_Da;
        if (iVar2 != 0) {
          uVar3 = (*(code *)PTR_<i32,i32>_0021a778)(0,"");
        }
        (*(code *)PTR_panic_fmt_0021a010)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00218008);
        (*(code *)PTR_<i32,i32>_0021a778)(0,"");
        (*(code *)PTR_<i32,i32>_0021a778)(0,"");
        uVar3 = (*(code *)PTR_set_functions_inner_00219f28)();
        (*(code *)PTR_panic_fmt_0021a010)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_002180c8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (*(code *)PTR_sigaltstack_0021ab58)();
  }
  return 0;
}


