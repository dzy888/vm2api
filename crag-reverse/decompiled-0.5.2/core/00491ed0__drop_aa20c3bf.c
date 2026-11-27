// 00491ed0 drop

/* WARNING: Switch with 1 destination removed at 0x00491ef9 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,
   ())> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (lVar1 + (lVar1 * 8 + 0x17U & 0xfffffffffffffff0) == -0x11)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


