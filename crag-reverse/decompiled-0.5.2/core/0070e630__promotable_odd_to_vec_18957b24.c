// 0070e630 promotable_odd_to_vec

/* bytes[e9829e187354639b]::bytes::promotable_odd_to_vec */

longlong * __rustcall
bytes[e9829e187354639b]::bytes::promotable_odd_to_vec
          (longlong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  if ((param_2 & 1) == 0) {
    shared_to_vec_impl(param_1);
  }
  else {
    (*(code *)PTR_memmove_00799258)(param_4,param_4);
    *param_1 = (param_3 - param_2) + param_4;
    param_1[1] = param_2;
    param_1[2] = param_4;
  }
  return param_1;
}


