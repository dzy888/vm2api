// 0070f430 shared_v_to_mut

/* bytes[e9829e187354639b]::bytes_mut::shared_v_to_mut */

longlong * __rustcall
bytes[e9829e187354639b]::bytes_mut::shared_v_to_mut
          (longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (param_2[4] == 1) {
    plVar2 = (longlong *)((*param_2 - param_3) + param_2[1]);
  }
  else {
    plVar2 = param_2 + 4;
    uVar5 = param_4 == (longlong *)0x0;
    if (-1 < (longlong)param_4) goto LAB_0070f46f;
    plVar1 = (longlong *)0x0;
    do {
      param_1 = plVar1;
      uVar5 = 1;
      plVar2 = (longlong *)(*(code *)PTR_handle_error_00798ff0)();
      param_2 = param_4;
LAB_0070f46f:
      if ((bool)uVar5) {
        param_3 = 1;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) goto LAB_0070f50c;
        goto LAB_0070f4cf;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      param_3 = (*(code *)PTR___rust_alloc_00799000)();
      plVar1 = (longlong *)0x1;
    } while (param_3 == 0);
    (*(code *)PTR_memcpy_00799008)();
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
LAB_0070f4cf:
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_0070f50c:
    uVar3 = 0x3f;
    if ((ulonglong)param_4 >> 10 != 0) {
      for (; ((ulonglong)param_4 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar4 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
    uVar3 = 7;
    if (uVar4 < 7) {
      uVar3 = uVar4;
    }
    param_2 = (longlong *)((uVar3 & 0xffffffff) * 4 + 1);
    plVar2 = param_4;
  }
  *param_1 = param_3;
  param_1[1] = (longlong)param_4;
  param_1[2] = (longlong)plVar2;
  param_1[3] = (longlong)param_2;
  return param_1;
}


