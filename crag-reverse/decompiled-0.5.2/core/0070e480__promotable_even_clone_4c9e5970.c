// 0070e480 promotable_even_clone

/* bytes[e9829e187354639b]::bytes::promotable_even_clone */

undefined8 * __rustcall
bytes[e9829e187354639b]::bytes::promotable_even_clone
          (undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    shallow_clone_vec();
    return param_1;
  }
  LOCK();
  plVar1 = (longlong *)(uVar3 + 0x10);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
    (*(code *)PTR_abort_0079aa98)();
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = uVar3;
  *param_1 = &SHARED_VTABLE;
  return param_1;
}


