// 006e8cd0 defer

/* <tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>::defer */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>::defer
          (longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_R14;
  
  if (*param_1 != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    (**(code **)(unaff_R14 + 0x18))();
    *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *param_1 = -1;
  if (param_1[3] != 0) {
    param_3 = param_1[2];
    lVar3 = param_1[3] * 0x10;
    if ((*(undefined8 **)(param_3 + -0x10 + lVar3) == (undefined8 *)*param_2) &&
       (*(longlong *)(param_3 + -8 + lVar3) == param_2[1])) {
      lVar3 = 0;
      goto LAB_006e8d57;
    }
  }
  uVar2 = (**(code **)*param_2)();
  lVar3 = param_1[3];
  if (lVar3 == param_1[1]) {
    (*(code *)PTR_grow_one_0079a808)();
  }
  lVar1 = param_1[2];
  *(undefined8 *)(lVar1 + lVar3 * 0x10) = uVar2;
  *(longlong *)(lVar1 + 8 + lVar3 * 0x10) = param_3;
  param_1[3] = lVar3 + 1;
  lVar3 = *param_1 + 1;
LAB_006e8d57:
  *param_1 = lVar3;
  return;
}


