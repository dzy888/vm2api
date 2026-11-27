// 00282cf0 {closure#7}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::{closure#7} */

void __rustcall
craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::_closure_7_
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
          undefined4 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_4 == 0) {
    *param_1 = 0xfffffffffffffffe;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_5);
    return;
  }
  local_28 = *param_5;
  uStack_24 = param_5[1];
  lStack_20 = *(longlong *)(param_5 + 2);
  local_18 = param_5[4];
  uStack_14 = param_5[5];
  uStack_10 = param_5[6];
  uStack_c = param_5[7];
  uVar2 = <craggemini_core[66f3c71560d70857]::journal::Journal>::append
                    (param_4,param_2,param_3,
                     "provider_startprovider_endsubagent_eventstream_starterrorstream_errordeltastream_endstream_failedmcp_tool_callnetns transparent egress calibration timed outcalled `Result::unwrap()` on an `Err` valuenative stream idle timed outnative turn timed outnative first byte timed out"
                     ,0xe,&local_28,0);
  if (uVar2 == 0) {
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
    lStack_20 = uVar2 - 1;
    local_28 = CONCAT31(local_28._1_3_,3);
    (*(code *)PTR_drop_00799040)();
  }
  uVar1 = _UNK_00783ec8;
  param_1[6] = _DAT_00783ec0;
  param_1[7] = uVar1;
  uVar1 = _UNK_00783eb8;
  param_1[4] = PTR_s_session_journal_write_failedcanc_00783eb0;
  param_1[5] = uVar1;
  uVar1 = _UNK_00783ea8;
  param_1[2] = _DAT_00783ea0;
  param_1[3] = uVar1;
  uVar1 = _UNK_00783e98;
  *param_1 = _DAT_00783e90;
  param_1[1] = uVar1;
  return;
}


