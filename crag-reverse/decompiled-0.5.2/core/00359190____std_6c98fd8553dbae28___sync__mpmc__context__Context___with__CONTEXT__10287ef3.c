// 00359190 <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>

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
  longlong *plVar2;
  undefined8 uVar3;
  
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
      goto LAB_003591cb;
    }
  }
  uVar3 = (*(code *)PTR_new_007995e8)();
  cVar1 = *(char *)(param_1 + 1);
  plVar2 = (longlong *)*param_1;
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (plVar2 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007995f0)();
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    (*(code *)PTR_panic_00799338)
              (plVar2,&anon_869a44742910931491f4b62d80901a16_2_llvm_763634721200370616);
  }
LAB_003591cb:
  (*(code *)PTR_register_00799240)();
  return param_1;
}


