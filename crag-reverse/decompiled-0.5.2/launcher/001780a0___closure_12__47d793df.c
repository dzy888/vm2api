// 001780a0 {closure#12}

/* craggemini[b21da2d71f2da7a3]::entry::{closure#12} */

void __rustcall
craggemini[b21da2d71f2da7a3]::entry::_closure_12_
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong local_40;
  ulonglong uStack_38;
  longlong local_30;
  
  uVar1 = (*(code *)PTR_inner_00219db8)(param_4,param_2[2]);
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar1,1);
  }
  if (local_40 == -1) {
    *param_1 = -1;
    if ((1 < ((uint)uStack_38 & 3) - 2) && ((uStack_38 & 3) != 0)) {
      (*(code *)PTR_drop_00219c58)();
    }
  }
  else {
    param_1[2] = local_30;
    *param_1 = local_40;
    param_1[1] = uStack_38;
  }
  return;
}


