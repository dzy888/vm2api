// 0038d750 send

/* <tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>::send
    */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>
::send(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *param_2;
  uVar8 = *(ulonglong *)(lVar3 + 0x1c0);
  while( true ) {
    if ((uVar8 & 1) != 0) {
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[3];
      param_1[2] = param_3[2];
      param_1[3] = uVar7;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      return param_1;
    }
    if (uVar8 == 0xfffffffffffffffe) break;
    puVar1 = (ulonglong *)(lVar3 + 0x1c0);
    LOCK();
    uVar2 = *puVar1;
    bVar9 = uVar8 == uVar2;
    if (bVar9) {
      *puVar1 = uVar8 + 2;
    }
    else {
      uVar8 = uVar2;
    }
    UNLOCK();
    if (bVar9) {
      local_38 = *(undefined4 *)param_3;
      uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = *(undefined4 *)(param_3 + 2);
      uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_20 = *(undefined4 *)(param_3 + 3);
      uStack_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>
      ::send(param_2,&local_38);
      *(undefined1 *)param_1 = 0xff;
      return param_1;
    }
  }
  (*(code *)PTR_abort_00799748)();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


