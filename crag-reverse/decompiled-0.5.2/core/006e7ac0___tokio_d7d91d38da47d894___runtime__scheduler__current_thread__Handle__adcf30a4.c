// 006e7ac0 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>

/* tokio[d7d91d38da47d894]::util::wake::clone_arc_raw::<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>
    */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::util::wake::clone_arc_raw::
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x80);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = &PTR_<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>_00793dd0
  ;
  return auVar4;
}


