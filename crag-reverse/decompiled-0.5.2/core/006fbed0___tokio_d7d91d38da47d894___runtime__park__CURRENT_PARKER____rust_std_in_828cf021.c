// 006fbed0 <tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>

/* <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,
   ()>>::get_or_init_slow::<tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
    */

longlong * __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<tokio[d7d91d38da47d894]::runtime::park::ParkThread,()>>
::get_or_init_slow::
<tokio[d7d91d38da47d894]::runtime::park::CURRENT_PARKER::__rust_std_internal_init_fn>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] != '\x01') {
      param_1 = (longlong *)0x0;
    }
    return param_1;
  }
  if (param_2 != (longlong *)0x0) {
    lVar1 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      *param_1 = lVar1;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_006fbf7b;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *puVar3 = 1;
    puVar3[1] = 1;
    uVar5 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    lVar1 = param_1[1];
    plVar4 = (longlong *)*param_1;
    *param_1 = (longlong)puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    if ((char)lVar1 == '\x01') {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00799668)();
        return param_1;
      }
      return param_1;
    }
    if ((char)lVar1 == '\0') {
LAB_006fbf7b:
      (*(code *)PTR_register_00799240)();
      return param_1;
    }
  }
  (*(code *)PTR_panic_00799338)
            (uVar5,&anon_a54838b0e2c6049171e94f4eeb8260c4_2_llvm_5899425866962164388);
  pcVar2 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar2)();
  return plVar4;
}


