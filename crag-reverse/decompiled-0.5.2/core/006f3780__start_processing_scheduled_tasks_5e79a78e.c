// 006f3780 start_processing_scheduled_tasks

/* <tokio[d7d91d38da47d894]::runtime::metrics::batch::MetricsBatch>::start_processing_scheduled_tasks
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::metrics::batch::MetricsBatch>::start_processing_scheduled_tasks
          (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_now_00799250)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}


