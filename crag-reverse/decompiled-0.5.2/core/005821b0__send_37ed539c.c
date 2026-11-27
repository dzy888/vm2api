// 005821b0 send

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>>::send */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
::send(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_2 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_005822a2:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar1 = param_2 + 7;
  local_30 = param_2;
  if ((int)param_2[7] != 2) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
              (param_2 + 8);
  }
  param_2[0xb] = *(longlong *)(param_3 + 8);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  *(undefined4 *)(param_2 + 9) = param_3[4];
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar8;
  *(undefined4 *)(param_2 + 10) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar10;
  *(undefined4 *)plVar1 = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
  *(undefined4 *)(param_2 + 8) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar7;
  uVar14 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar14 & 5) == 1) {
    (**(code **)(param_2[4] + 0x10))();
  }
  if ((uVar14 & 4) == 0) {
    *param_1 = 2;
    LOCK();
    *param_2 = *param_2 + -1;
    lVar2 = *param_2;
    UNLOCK();
  }
  else {
    lVar2 = *plVar1;
    *plVar1 = 2;
    if (lVar2 == 2) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_005822a2;
    }
    lVar12 = param_2[8];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
    lVar13 = param_2[9];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
    lVar11 = param_2[0xb];
    param_1[3] = param_2[10];
    param_1[4] = lVar11;
    *(int *)(param_1 + 1) = (int)lVar12;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    *(int *)(param_1 + 2) = (int)lVar13;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *param_1 = lVar2;
    LOCK();
    *param_2 = *param_2 + -1;
    lVar2 = *param_2;
    UNLOCK();
  }
  if (lVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
    ::drop_slow(&local_30);
  }
  return param_1;
}


