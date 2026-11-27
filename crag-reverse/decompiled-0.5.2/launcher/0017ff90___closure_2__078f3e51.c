// 0017ff90 {closure#2}

/* <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::<<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},
   ()>::{closure#2} */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
<<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
::_closure_2_(void)

{
  code *pcVar1;
  longlong *in_RDI;
  longlong *local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = (longlong *)(*(code *)PTR_new_00219fc0)();
  local_20 = *in_RDI;
  *in_RDI = 0;
  if (local_20 == 0) {
    (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = (undefined4)in_RDI[1];
  uStack_14 = *(undefined4 *)((longlong)in_RDI + 0xc);
  uStack_10 = (undefined4)in_RDI[2];
  uStack_c = *(undefined4 *)((longlong)in_RDI + 0x14);
  <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
  ::recv::_closure_1_(&local_20,local_28);
  LOCK();
  *local_28 = *local_28 + -1;
  UNLOCK();
  if (*local_28 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
    drop_slow(&local_28);
  }
  return;
}


