// 00039240 sse_ok

/* agy_bridge[64a9e9deac6c45ce]::sse_ok */

undefined8 __rustcall
agy_bridge[64a9e9deac6c45ce]::sse_ok(short param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_30;
  int local_28 [6];
  
  local_50 = 0;
  local_40 = 0x3b0000003b;
  local_38 = 1;
  local_30 = 1;
  local_60 = param_2;
  local_58 = param_3;
  local_48 = param_3;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_28,&local_60);
  if (local_28[0] != 1) {
    if ((local_30._1_1_ == '\0') && ((param_3 != 0 | (byte)local_30) == 1)) {
      param_2 = local_60;
    }
    else {
      param_2 = 0;
    }
  }
  lVar2 = 1;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  auVar3 = <str>::trim_matches::<<char>::is_whitespace>(lVar2);
  if ((param_1 == 200) && (auVar3._8_8_ == 0x11)) {
    uVar1 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                      (auVar3._0_8_,0x11,"text/event-stream",0x11);
    return uVar1;
  }
  return 0;
}


