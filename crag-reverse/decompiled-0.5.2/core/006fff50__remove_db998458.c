// 006fff50 remove

/* <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::remove */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::remove
          (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *in_RAX;
  
  plVar2 = (longlong *)*param_3;
  plVar1 = plVar2 + 0x10;
  if (plVar2[0x10] == 0) {
    if (*(longlong **)(param_2 + 0x18) != plVar1) {
      return in_RAX;
    }
    plVar3 = (longlong *)plVar2[0x11];
    *(longlong **)(param_2 + 0x18) = plVar3;
  }
  else {
    plVar3 = (longlong *)plVar2[0x11];
    *(longlong **)(plVar2[0x10] + 8) = plVar3;
  }
  if (plVar3 == (longlong *)0x0) {
    if (*(longlong **)(param_2 + 0x20) != plVar1) {
      return in_RAX;
    }
    *(longlong *)(param_2 + 0x20) = *plVar1;
  }
  else {
    *plVar3 = *plVar1;
  }
  *plVar1 = 0;
  plVar2[0x11] = 0;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799150)();
    return plVar2;
  }
  return plVar2;
}


