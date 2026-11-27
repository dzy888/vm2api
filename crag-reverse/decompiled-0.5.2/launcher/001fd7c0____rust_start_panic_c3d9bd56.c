// 001fd7c0 __rust_start_panic

/* __rustc[100742bb89c490cb]::__rust_start_panic */

void __rustcall
__rustc[100742bb89c490cb]::__rust_start_panic
          (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = (**(code **)(param_2 + 0x20))();
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar3 = 0x54535552005a4f4d;
  puVar3[1] = panic_unwind[69967eabe7c96ba7]::imp::panic::exception_cleanup;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = &panic_unwind[69967eabe7c96ba7]::imp::CANARY;
  puVar3[5] = uVar2;
  puVar3[6] = param_3;
  (*(code *)PTR__Unwind_RaiseException_0021abe8)();
  return;
}


