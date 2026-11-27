// 006fb4a0 push_orphan

/* <tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue as
   tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueue<std[6c98fd8553dbae28]::process::Child>>::push_orphan
    */

void __rustcall
<tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue_as_tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueue<std[6c98fd8553dbae28]::process::Child>>
::push_orphan(void)

{
  <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
  ::push_orphan(tokio[d7d91d38da47d894]::process::imp::get_orphan_queue::ORPHAN_QUEUE);
  return;
}


