// 00582310 send

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>::send */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
::send(undefined4 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,undefined8 param_5
      )

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_3 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_0058246d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar1 = param_3 + 2;
  lVar2 = param_3[2];
  local_30 = param_3;
  if (lVar2 != -3) {
    if (lVar2 == -2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (param_3 + 3);
    }
    else {
      if ((lVar2 != -1) && (lVar2 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_5,1);
      }
      if ((param_3[5] != -1) && (param_3[5] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_3[8]);
    }
  }
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  uVar8 = param_4[4];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  uVar12 = param_4[8];
  uVar13 = param_4[9];
  uVar14 = param_4[10];
  uVar15 = param_4[0xb];
  uVar16 = param_4[0xd];
  uVar17 = param_4[0xe];
  uVar18 = param_4[0xf];
  *(undefined4 *)(param_3 + 8) = param_4[0xc];
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar16;
  *(undefined4 *)(param_3 + 9) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar18;
  *(undefined4 *)(param_3 + 6) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar13;
  *(undefined4 *)(param_3 + 7) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar15;
  *(undefined4 *)(param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar9;
  *(undefined4 *)(param_3 + 5) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar11;
  *(undefined4 *)plVar1 = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
  *(undefined4 *)(param_3 + 3) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar7;
  uVar24 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar24 & 5) == 1) {
    (**(code **)(param_3[0xc] + 0x10))();
  }
  if ((uVar24 & 4) == 0) {
    *param_2 = -3;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar2 = *param_3;
    UNLOCK();
  }
  else {
    lVar2 = *plVar1;
    *plVar1 = -3;
    if (lVar2 == -3) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_0058246d;
    }
    param_2[7] = param_3[9];
    lVar22 = param_3[3];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar23 = param_3[4];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar19 = param_3[5];
    lVar20 = param_3[6];
    lVar21 = param_3[8];
    param_2[5] = param_3[7];
    param_2[6] = lVar21;
    param_2[3] = lVar19;
    param_2[4] = lVar20;
    *(int *)(param_2 + 1) = (int)lVar22;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(int *)(param_2 + 2) = (int)lVar23;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    *param_2 = lVar2;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar2 = *param_3;
    UNLOCK();
  }
  if (lVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
    ::drop_slow(&local_30);
  }
  return param_2;
}


