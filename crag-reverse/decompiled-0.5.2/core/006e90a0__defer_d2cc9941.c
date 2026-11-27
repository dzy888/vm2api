// 006e90a0 defer

/* tokio[d7d91d38da47d894]::runtime::context::defer */

void __rustcall tokio[d7d91d38da47d894]::runtime::context::defer(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  longlong *in_FS_OFFSET;
  
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xf0) == '\0') {
    cVar1 = *(char *)(lVar2 + -0xf2);
  }
  else {
    if (*(char *)(lVar2 + -0xf0) != '\x01') goto LAB_006e9123;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
    cVar1 = *(char *)(lVar2 + -0xf2);
  }
  if ((cVar1 == '\x02') || (piVar3 = *(int **)(lVar2 + -0x110), piVar3 == (int *)0x0)) {
LAB_006e9123:
                    /* WARNING: Could not recover jumptable at 0x006e9131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  if (*piVar3 == 1) {
    if (0x7ffffffffffffffe < *(ulonglong *)(piVar3 + 4)) {
      (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(piVar3 + 6) == 0) goto LAB_006e9123;
  }
  <tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>::defer(piVar3 + 8,param_1);
  return;
}


