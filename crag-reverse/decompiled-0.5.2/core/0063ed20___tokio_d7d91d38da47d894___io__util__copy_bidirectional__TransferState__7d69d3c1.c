// 0063ed20 <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::TransferState>

/* WARNING: Switch with 1 destination removed at 0x0063ed37 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::TransferState>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::TransferState>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + 0x29) < 2) && (*(longlong *)(param_1 + 8) != 0)) {
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  return;
}


