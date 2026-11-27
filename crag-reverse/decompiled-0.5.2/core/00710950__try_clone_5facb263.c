// 00710950 try_clone

/* <mio[4b4dae02747c797f]::poll::Registry>::try_clone */

uint * __rustcall <mio[4b4dae02747c797f]::poll::Registry>::try_clone(uint *param_1)

{
  int local_18;
  uint local_14;
  undefined8 local_10;
  
  (*(code *)PTR_try_clone_0079ab00)();
  if (local_18 != 1) {
    param_1[1] = local_14;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_10;
  }
  *param_1 = (uint)(local_18 == 1);
  return param_1;
}


