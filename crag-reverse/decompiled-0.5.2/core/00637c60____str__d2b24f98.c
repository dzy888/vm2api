// 00637c60 <&str>

/* <str>::split_once::<&str> */

void __rustcall <str>::split_once::<&str>(longlong *param_1,longlong param_2,longlong param_3)

{
  int local_a0 [2];
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [104];
  
  (*(code *)PTR_new_00799a18)(&DAT_001a392a,param_3,2);
  <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_a0,local_88);
  if (local_a0[0] == 1) {
    param_1[1] = local_98;
    param_1[2] = local_90 + param_2;
    param_1[3] = param_3 - local_90;
  }
  else {
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}


