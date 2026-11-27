// 006fea90 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>
          (longlong param_1)

{
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake(param_1 + 0x80,0x3f);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fead8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))();
  return;
}


