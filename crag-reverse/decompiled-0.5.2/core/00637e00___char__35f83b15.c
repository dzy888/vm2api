// 00637e00 <char>

/* <str>::find::<char> */

undefined1  [16] __rustcall <str>::find::<char>(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18 [16];
  
  local_38 = 0;
  local_20 = 1;
  local_28 = 0x2f0000002f;
  local_48 = param_1;
  local_40 = param_2;
  local_30 = param_2;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_18,&local_48);
  return local_18;
}


