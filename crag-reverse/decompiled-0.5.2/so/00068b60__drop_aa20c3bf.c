// 00068b60 drop

/* WARNING: Switch with 1 destination removed at 0x00068b88 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize, u32)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,u32)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 8) * 0x11 == -0x21)) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,0x10);
  return;
}


