// 00705010 set_task

/* <tokio[d7d91d38da47d894]::sync::oneshot::Task>::set_task */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Task>::set_task
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined8 **)*param_2)();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}


