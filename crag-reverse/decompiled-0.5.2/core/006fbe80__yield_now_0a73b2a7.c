// 006fbe80 yield_now

/* <tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule as
   tokio[d7d91d38da47d894]::runtime::task::Schedule>::yield_now */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule_as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
::yield_now(void)

{
  code *pcVar1;
  
  (*(code *)PTR_schedule_007996a8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


