// 0017f5f0 <std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1a0) << 3;
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
  }
  <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>(param_1 + 0x108,lVar1);
  <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>(param_1 + 0x148);
  return;
}


