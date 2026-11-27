// 006d6ca0 checked_add_months

/* <chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_add_months */

int * __rustcall
<chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_add_months
          (int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (param_3 != 0) {
    iVar2 = 0;
    if (param_3 < 0) goto LAB_006d6cce;
    iVar1 = (*(code *)PTR_diff_months_0079a6d0)();
    if (iVar1 == 0) goto LAB_006d6cce;
  }
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  iVar2 = iVar1;
LAB_006d6cce:
  *param_1 = iVar2;
  return param_1;
}


