// 0070e0e0 shared_to_vec_impl

/* bytes[e9829e187354639b]::bytes::shared_to_vec_impl */

void __rustcall
bytes[e9829e187354639b]::bytes::shared_to_vec_impl
          (longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 local_31;
  
  LOCK();
  bVar6 = param_2[2] == 1;
  if (bVar6) {
    param_2[2] = 0;
  }
  UNLOCK();
  if (bVar6) {
    lVar4 = *param_2;
    lVar5 = param_2[1];
    (*(code *)PTR___rust_dealloc_00798fc8)(0,8);
    (*(code *)PTR_memmove_00799258)();
  }
  else {
    plVar3 = param_2 + 2;
    uVar7 = param_4 == 0;
    if (-1 < param_4) goto LAB_0070e14e;
    do {
      uVar7 = 1;
      plVar3 = (longlong *)(*(code *)PTR_handle_error_00798ff0)();
LAB_0070e14e:
      if ((bool)uVar7) {
        lVar4 = 1;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 != 0) goto LAB_0070e1cb;
        goto LAB_0070e199;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar4 == 0);
    (*(code *)PTR_memcpy_00799008)();
    plVar3 = param_2 + 2;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
LAB_0070e199:
      puVar2 = PTR___rust_dealloc_00798fc8;
      if (param_2[1] < 0) {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&DAT_00795858,&local_31,
                   &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795968);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
      (*(code *)puVar2)();
    }
LAB_0070e1cb:
    lVar5 = param_4;
  }
  *param_1 = lVar5;
  param_1[1] = lVar4;
  param_1[2] = param_4;
  return;
}


