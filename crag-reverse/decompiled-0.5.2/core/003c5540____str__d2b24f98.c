// 003c5540 <&str>

/* <hyper[c4782d5b5c5e3493]::error::Error>::new_body::<&str> */

longlong * __rustcall
<hyper[c4782d5b5c5e3493]::error::Error>::new_body::<&str>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(*(code *)PTR_new_00799588)();
  if (param_2 == 0) {
    lVar4 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar4 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003c563c;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,param_2);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar5 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = param_2;
    plVar5[1] = lVar4;
    plVar5[2] = param_2;
    if (*plVar3 != 0) {
      puVar1 = (undefined8 *)plVar3[1];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
      }
    }
    *plVar3 = (longlong)plVar5;
    plVar3[1] = (longlong)&anon_759b25d0f49402244ed1d2ce4dc43d04_326_llvm_4022685846690702743;
    return plVar3;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_003c563c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


