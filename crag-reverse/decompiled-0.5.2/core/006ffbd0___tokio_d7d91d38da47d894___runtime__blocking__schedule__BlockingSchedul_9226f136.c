// 006ffbd0 <tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::schedule::<tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::schedule::
<tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>(void)

{
  code *pcVar1;
  
  (*(code *)PTR_schedule_007996a8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


