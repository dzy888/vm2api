// 006f9320 drop

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::clear_wakers
            (*(longlong *)(param_1 + 0x10) + 0x80);
  return;
}


