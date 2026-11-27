// 006f3730 end_processing_scheduled_tasks

/* <tokio[d7d91d38da47d894]::runtime::metrics::batch::MetricsBatch>::end_processing_scheduled_tasks
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::metrics::batch::MetricsBatch>::end_processing_scheduled_tasks
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  
  if ((int)param_1[4] != -1) {
    uVar3 = (*(code *)PTR_elapsed_00799270)();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3 & 0xffffffff;
    auVar2 = auVar1 * ZEXT816(1000000000) + auVar2;
    *param_1 = *param_1 + (-(ulonglong)(auVar2._8_8_ != 0) | auVar2._0_8_);
  }
  return;
}


