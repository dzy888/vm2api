// 00196d70 <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::{closure#0},std[6c98fd8553dbae28]::hash::random::RandomState>

/* <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,
   u64)>>>::with::<<std[6c98fd8553dbae28]::hash::random::RandomState>::new::{closure#0},
   std[6c98fd8553dbae28]::hash::random::RandomState> */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>::
with::
<<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  
  pauVar2 = (undefined1 (*) [16])(*(code *)*param_1)();
  if (pauVar2 == (undefined1 (*) [16])0x0) {
    (*(code *)PTR_panic_access_error_0021a328)();
    pcVar1 = (code *)swi(3);
    auVar3._0_8_ = (*pcVar1)();
    auVar3._8_8_ = param_3;
    return auVar3;
  }
  *(longlong *)*pauVar2 = *(longlong *)*pauVar2 + 1;
  return *pauVar2;
}


