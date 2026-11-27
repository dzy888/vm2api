// 0058b900 partial_drop

/* <[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<std[6c98fd8553dbae28]::path::PathBuf>;
   2usize] as core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>::partial_drop */

void __rustcall
<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<std[6c98fd8553dbae28]::path::PathBuf>;2:usize]as_core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>
::partial_drop(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    lVar2 = param_1 + param_2 * 0x18 + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


