// 001890a0 <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>

/* <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,
   ()>>::get_or_init_slow::<<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
::get_or_init_slow::
<<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
          (undefined8 *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (undefined8 *)0x0;
  }
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    if (*param_2 == 1) {
      *param_1 = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001890db;
    }
  }
  uVar2 = (*(code *)PTR_new_00219fc0)();
  cVar1 = *(char *)(param_1 + 1);
  local_10 = (longlong *)*param_1;
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (local_10 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
      drop_slow(&local_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    (*(code *)PTR_panic_00219ca8)
              (local_10,&anon_c7f97ca7de608b4d7a735a6c32ca97ae_2_llvm_15581412977740537520);
  }
LAB_001890db:
  (*(code *)PTR_register_0021a180)();
  return param_1;
}


