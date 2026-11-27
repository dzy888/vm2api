// 0070f400 shared_v_clone

/* bytes[e9829e187354639b]::bytes_mut::shared_v_clone */

undefined8 * __rustcall
bytes[e9829e187354639b]::bytes_mut::shared_v_clone
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  lVar3 = *param_2;
  LOCK();
  plVar1 = (longlong *)(lVar3 + 0x20);
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
  param_1[3] = lVar3;
  *param_1 = PTR_SHARED_VTABLE_00799a60;
  return param_1;
}


