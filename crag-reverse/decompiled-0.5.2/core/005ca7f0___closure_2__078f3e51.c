// 005ca7f0 {closure#2}

/* <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::<<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},
   ()>::{closure#2} */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
<<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},()>
::_closure_2_(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *in_RDI;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)(*(code *)PTR_new_007995e8)();
  local_20 = *in_RDI;
  *in_RDI = 0;
  if (local_20 == 0) {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = (undefined4)in_RDI[1];
  uStack_14 = *(undefined4 *)((longlong)in_RDI + 0xc);
  uStack_10 = (undefined4)in_RDI[2];
  uStack_c = *(undefined4 *)((longlong)in_RDI + 0x14);
  <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
  ::send::_closure_0_(&local_20,plVar2);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007995f0)();
  }
  return;
}


