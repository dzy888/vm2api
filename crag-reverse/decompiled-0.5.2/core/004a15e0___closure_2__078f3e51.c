// 004a15e0 {closure#2}

/* <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},
   core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),
   std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>::{closure#2} */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
::_closure_2_(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char local_18;
  undefined3 local_17;
  undefined1 uStack_14;
  undefined3 uStack_13;
  
  plVar2 = (longlong *)(*(code *)PTR_new_007995e8)();
  local_18 = *(char *)(param_2 + 8);
  *(undefined1 *)(param_2 + 8) = 2;
  if (local_18 == '\x02') {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_17 = (undefined3)*(undefined4 *)((longlong)param_2 + 0x21);
  uStack_14 = (undefined1)param_2[9];
  uStack_13 = (undefined3)((uint)param_2[9] >> 8);
  <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
  ::recv::_closure_1_(param_1,&local_38,plVar2);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007995f0)();
  }
  return;
}


