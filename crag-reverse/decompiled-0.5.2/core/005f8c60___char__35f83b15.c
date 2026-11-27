// 005f8c60 <char>

/* <str>::split_once::<char> */

void __rustcall <str>::split_once::<char>(longlong *param_1,longlong param_2,longlong param_3)

{
  int local_60 [2];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_38 = 0;
  local_20 = 1;
  local_28 = 0x2c0000002c;
  local_48 = param_2;
  local_40 = param_3;
  local_30 = param_3;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_60,&local_48);
  if (local_60[0] == 1) {
    param_1[1] = local_58;
    param_1[2] = local_50 + param_2;
    param_1[3] = param_3 - local_50;
  }
  else {
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}


