// 006fa770 register_listener

/* <tokio[d7d91d38da47d894]::signal::registry::Globals>::register_listener */

void __rustcall
<tokio[d7d91d38da47d894]::signal::registry::Globals>::register_listener
          (longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong local_18;
  undefined1 *local_10;
  undefined *local_8;
  
  uVar1 = param_2 - 1;
  local_18 = param_2;
  if ((uVar1 < *(ulonglong *)(param_1 + 0x10)) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar1 * 0x20);
    LOCK();
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar2,1) == *plVar3 < 0) {
      LOCK();
      plVar3[0x27] = plVar3[0x27] + 1;
      UNLOCK();
      return;
    }
  }
  else {
    local_8 = PTR_fmt_007991f0;
    local_10 = (undefined1 *)&local_18;
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar1,&anon_4a510ad2c2ece6409108a5920cec5cc2_11_llvm_1700297362806677381);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


