// 003c5240 <axum_core[61c49771464cda0a]::error::Error>

/* <hyper[c4782d5b5c5e3493]::error::Error>::new_user_body::<axum_core[61c49771464cda0a]::error::Error>
    */

longlong * __rustcall
<hyper[c4782d5b5c5e3493]::error::Error>::new_user_body::<axum_core[61c49771464cda0a]::error::Error>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar3 = (longlong *)(*(code *)PTR_new_user_00799870)();
  uVar5 = param_1;
  uVar6 = param_2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *puVar4 = param_1;
  puVar4[1] = param_2;
  if (*plVar3 != 0) {
    puVar1 = (undefined8 *)plVar3[1];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2],param_5,param_6,uVar5,uVar6);
    }
  }
  *plVar3 = (longlong)puVar4;
  plVar3[1] = (longlong)&anon_759b25d0f49402244ed1d2ce4dc43d04_312_llvm_4022685846690702743;
  return plVar3;
}


