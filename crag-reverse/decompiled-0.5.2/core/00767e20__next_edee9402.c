// 00767e20 next

/* <std[6c98fd8553dbae28]::fs::ReadDir as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::fs::ReadDir_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::
next(undefined8 *param_1)

{
  int local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  (*(code *)PTR_next_0079b0c8)();
  if (local_58 == 1) {
    if (local_50 != 0) {
      local_18 = local_30;
      local_28 = local_40;
      uStack_20 = uStack_38;
    }
    param_1[1] = local_50;
    param_1[2] = local_48;
    param_1[3] = local_28;
    param_1[4] = uStack_20;
    param_1[5] = local_18;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}


