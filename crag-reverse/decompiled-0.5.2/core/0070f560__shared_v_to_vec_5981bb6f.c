// 0070f560 shared_v_to_vec

/* bytes[e9829e187354639b]::bytes_mut::shared_v_to_vec */

longlong * __rustcall
bytes[e9829e187354639b]::bytes_mut::shared_v_to_vec
          (longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  plVar2 = param_2 + 4;
  if (param_2[4] == 1) {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    *param_2 = 0;
    param_2[1] = 1;
    param_2[2] = 0;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(plVar2,1);
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    (*(code *)PTR_memmove_00799258)();
  }
  else {
    uVar4 = param_4 == 0;
    if (-1 < param_4) goto LAB_0070f606;
    do {
      uVar4 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
LAB_0070f606:
      if ((bool)uVar4) {
        lVar1 = 1;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) goto LAB_0070f682;
        goto LAB_0070f651;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00799008)();
    plVar2 = param_2 + 4;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
LAB_0070f651:
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_0070f682:
    lVar3 = param_4;
  }
  *param_1 = lVar3;
  param_1[1] = lVar1;
  param_1[2] = param_4;
  return param_1;
}


