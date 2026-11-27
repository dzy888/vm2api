// 006ffb30 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* WARNING: Switch with 1 destination removed at 0x006ffb50 */
/* tokio[d7d91d38da47d894]::runtime::task::raw::dealloc::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::dealloc::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (void)

{
  undefined8 in_RCX;
  
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
            ();
  (*(code *)PTR_free_0079adc8)(in_RCX,0x80);
  return;
}


