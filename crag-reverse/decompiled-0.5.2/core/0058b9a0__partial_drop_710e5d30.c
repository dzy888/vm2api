// 0058b9a0 partial_drop

/* <[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<(http[56314f485c23ccf6]::header::name::HeaderName,
   &str)>; 1usize] as core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>::partial_drop */

void __rustcall
<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<(http[56314f485c23ccf6]::header::name::HeaderName,&str)>;1:usize]as_core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>
::partial_drop(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 != param_2) {
    lVar1 = ~param_2 + param_3;
    lVar2 = param_2 * 0x30 + param_1 + 0x48;
    do {
      if (*(longlong *)(lVar2 + -0x48) != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x48) + 0x20))(param_4,*(undefined8 *)(lVar2 + -0x38));
      }
      lVar2 = lVar2 + 0x30;
      bVar3 = lVar1 != 0;
      lVar1 = lVar1 + -1;
    } while (bVar3);
  }
  return;
}


