// 006a6ab0 partial_drop

/* <[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<(http[56314f485c23ccf6]::header::name::HeaderName,
   http[56314f485c23ccf6]::header::value::HeaderValue)>; 1usize] as
   core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>::partial_drop */

void __rustcall
<[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue)>;1:usize]as_core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>
::partial_drop(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + param_2 * 0x48);
    while( true ) {
      bVar2 = param_3 == 0;
      param_3 = param_3 + -1;
      if (bVar2) break;
      if (*plVar1 != 0) {
        (**(code **)(*plVar1 + 0x20))(param_4,plVar1[2]);
      }
      (**(code **)(plVar1[4] + 0x20))(param_4,plVar1[6]);
      plVar1 = plVar1 + 9;
    }
  }
  return;
}


