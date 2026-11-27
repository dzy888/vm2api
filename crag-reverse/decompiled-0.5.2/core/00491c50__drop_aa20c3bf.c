// 00491c50 drop

/* WARNING: Switch with 1 destination removed at 0x00491c78 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::resume::ModelFamily,
   craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 8) * 0x21 == -0x31)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


