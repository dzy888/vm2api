// 001633b0 machine

/* <craggemini[b21da2d71f2da7a3]::license::Device>::machine */

void __rustcall <craggemini[b21da2d71f2da7a3]::license::Device>::machine(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar1 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x696d656767617263;
    *(undefined2 *)(puVar1 + 1) = 0x696e;
    (*(code *)PTR_clone_00219d58)();
    (*(code *)PTR_clone_00219d58)();
    (*(code *)PTR_clone_00219d58)();
    *(undefined1 *)(param_1 + 0xc) = 1;
    *param_1 = 10;
    param_1[1] = puVar1;
    param_1[2] = 10;
    param_1[5] = local_50;
    param_1[3] = local_60;
    param_1[4] = uStack_58;
    param_1[6] = local_48;
    param_1[7] = uStack_40;
    param_1[8] = local_38;
    param_1[9] = local_30;
    param_1[10] = uStack_28;
    param_1[0xb] = local_20;
    return;
  }
  uVar2 = (*(code *)PTR_handle_error_00219c78)();
  if (local_48 != 0) {
    uVar2 = (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
  }
  if (local_60 != 0) {
    uVar2 = (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
  }
  (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


