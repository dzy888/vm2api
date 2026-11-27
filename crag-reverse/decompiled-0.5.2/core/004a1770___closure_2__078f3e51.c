// 004a1770 {closure#2}

/* <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::{closure#1},
   core[c0acaeba6ab4c2e0]::result::Result<(),
   std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>::{closure#2} */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
::_closure_2_(void)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 *in_RDI;
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
  local_18 = *(char *)(in_RDI + 8);
  *(undefined1 *)(in_RDI + 8) = 2;
  if (local_18 == '\x02') {
    (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = *in_RDI;
  uStack_34 = in_RDI[1];
  uStack_30 = in_RDI[2];
  uStack_2c = in_RDI[3];
  local_28 = in_RDI[4];
  uStack_24 = in_RDI[5];
  uStack_20 = in_RDI[6];
  uStack_1c = in_RDI[7];
  local_17 = (undefined3)*(undefined4 *)((longlong)in_RDI + 0x21);
  uStack_14 = (undefined1)in_RDI[9];
  uStack_13 = (undefined3)((uint)in_RDI[9] >> 8);
  uVar3 = <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::_closure_1_
                    (&local_38,plVar2);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar3 = uVar3 & 0xffffffff;
    (*(code *)PTR_drop_slow_007995f0)();
  }
  return uVar3;
}


