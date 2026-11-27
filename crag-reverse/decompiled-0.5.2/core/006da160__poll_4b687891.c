// 006da160 poll

/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined4 __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture_as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  cVar4 = tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::is_cancelled(*param_1);
  puVar3 = PTR_poll_007992b8;
  puVar2 = PTR_drop_007990e8;
  if (cVar4 == '\0') {
    do {
      uVar5 = (*(code *)puVar3)();
      if ((char)uVar5 != '\0') {
        return uVar5;
      }
      lVar1 = *(longlong *)*param_1;
      (*(code *)PTR_notified_00799190)();
      (*(code *)puVar2)();
      if (param_1[5] != 0) {
        (**(code **)(param_1[5] + 0x18))();
      }
      *(undefined4 *)(param_1 + 7) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
      *(undefined4 *)(param_1 + 8) = uStack_38;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_4c;
      *(undefined4 *)(param_1 + 6) = uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_44;
      *(undefined4 *)(param_1 + 3) = local_60;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
      *(undefined4 *)(param_1 + 4) = uStack_58;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_54;
      *(undefined4 *)(param_1 + 1) = local_70;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_6c;
      *(undefined4 *)(param_1 + 2) = uStack_68;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_64;
      cVar4 = tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::is_cancelled
                        (*param_1,lVar1 + 0x50);
    } while (cVar4 == '\0');
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


