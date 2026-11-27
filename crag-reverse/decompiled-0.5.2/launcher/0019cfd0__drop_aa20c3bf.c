// 0019cfd0 drop

/* WARNING: Switch with 1 destination removed at 0x0019cff8 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str, ())> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 8) * 0x11 == -0x21)) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,0x10);
  return;
}


