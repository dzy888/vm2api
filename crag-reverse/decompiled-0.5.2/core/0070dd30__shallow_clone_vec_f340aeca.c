// 0070dd30 shallow_clone_vec

/* WARNING: Switch with 1 destination removed at 0x0070ddf3 */
/* bytes[e9829e187354639b]::bytes::shallow_clone_vec */

void __rustcall
bytes[e9829e187354639b]::bytes::shallow_clone_vec
          (undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *plVar3 = param_4;
    plVar3[1] = (param_5 - param_4) + param_6;
    plVar3[2] = 2;
    LOCK();
    lVar1 = *param_2;
    bVar4 = param_3 == lVar1;
    if (bVar4) {
      *param_2 = (longlong)plVar3;
    }
    else {
      param_3 = lVar1;
    }
    UNLOCK();
    if (bVar4) {
      param_1[1] = param_5;
      param_1[2] = param_6;
      param_1[3] = plVar3;
      *param_1 = &SHARED_VTABLE;
      return;
    }
    LOCK();
    plVar3 = (longlong *)(param_3 + 0x10);
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      param_1[1] = param_5;
      param_1[2] = param_6;
      param_1[3] = param_3;
      *param_1 = &SHARED_VTABLE;
      (*(code *)PTR_free_0079adc8)(param_2,8);
      return;
    }
  }
  (*(code *)PTR_abort_0079aa98)();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


