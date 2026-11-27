// 000a3780 make_handler

/* WARNING: Removing unreachable block (ram,0x000a3803) */
/* WARNING: Removing unreachable block (ram,0x000a3830) */
/* WARNING: Removing unreachable block (ram,0x000a384d) */
/* WARNING: Removing unreachable block (ram,0x000a3883) */
/* WARNING: Removing unreachable block (ram,0x000a389a) */
/* WARNING: Removing unreachable block (ram,0x000a389e) */
/* WARNING: Removing unreachable block (ram,0x000a38ca) */
/* WARNING: Removing unreachable block (ram,0x000a38e3) */
/* WARNING: Removing unreachable block (ram,0x000a3973) */
/* WARNING: Removing unreachable block (ram,0x000a3a4e) */
/* WARNING: Removing unreachable block (ram,0x000a3996) */
/* WARNING: Removing unreachable block (ram,0x000a3917) */
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
      (*(code *)PTR_pthread_self_000c43d0)();
      iVar2 = (*(code *)PTR_pthread_getattr_np_000c43d8)();
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_pthread_attr_getguardsize_000c44e0)();
        uVar3 = extraout_XMM0_Da;
        if (iVar2 != 0) {
          uVar3 = (*(code *)PTR_<i32,i32>_000c4130)(0,"");
        }
        (*(code *)PTR_panic_fmt_000c3e90)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1f88);
        (*(code *)PTR_<i32,i32>_000c4130)(0,"");
        (*(code *)PTR_<i32,i32>_000c4130)(0,"");
        uVar3 = (*(code *)PTR_set_functions_inner_000c3d08)();
        (*(code *)PTR_panic_fmt_000c3e90)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2000);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (*(code *)PTR_sigaltstack_000c44d8)();
  }
  return 0;
}


