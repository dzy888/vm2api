// 00581de0 send

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>::send */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
::send(undefined4 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_3 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_00581f8d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar1 = param_3 + 7;
  local_30 = param_3;
  if (param_3[7] != -2) {
    if (param_3[7] == -1) {
      if ((param_3[8] != -1) && (param_3[8] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((param_3[0xb] != -1) && (param_3[0xb] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_3[0xe]);
    }
    else {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(plVar1);
    }
  }
  param_3[0x15] = *(longlong *)(param_4 + 0x1c);
  lVar2 = *(longlong *)(param_4 + 0x1a);
  param_3[0x13] = *(longlong *)(param_4 + 0x18);
  param_3[0x14] = lVar2;
  lVar2 = *(longlong *)(param_4 + 0x16);
  param_3[0x11] = *(longlong *)(param_4 + 0x14);
  param_3[0x12] = lVar2;
  lVar2 = *(longlong *)(param_4 + 0x12);
  param_3[0xf] = *(longlong *)(param_4 + 0x10);
  param_3[0x10] = lVar2;
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
  *(undefined4 *)(param_3 + 0xd) = param_4[0xc];
  *(undefined4 *)((longlong)param_3 + 0x6c) = uVar16;
  *(undefined4 *)(param_3 + 0xe) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x74) = uVar18;
  *(undefined4 *)(param_3 + 0xb) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uVar13;
  *(undefined4 *)(param_3 + 0xc) = uVar14;
  *(undefined4 *)((longlong)param_3 + 100) = uVar15;
  *(undefined4 *)(param_3 + 9) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar9;
  *(undefined4 *)(param_3 + 10) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x54) = uVar11;
  *(undefined4 *)plVar1 = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar5;
  *(undefined4 *)(param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar7;
  uVar26 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar26 & 5) == 1) {
    (**(code **)(param_3[4] + 0x10))();
  }
  if ((uVar26 & 4) == 0) {
    *param_2 = -2;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar2 = *param_3;
    UNLOCK();
  }
  else {
    lVar2 = *plVar1;
    *plVar1 = -2;
    if (lVar2 == -2) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_00581f8d;
    }
    lVar19 = param_3[0x15];
    param_2[0xd] = param_3[0x14];
    param_2[0xe] = lVar19;
    lVar19 = param_3[0x13];
    param_2[0xb] = param_3[0x12];
    param_2[0xc] = lVar19;
    lVar19 = param_3[0x11];
    param_2[9] = param_3[0x10];
    param_2[10] = lVar19;
    lVar24 = param_3[8];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x44);
    lVar25 = param_3[9];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x4c);
    lVar19 = param_3[10];
    lVar20 = param_3[0xb];
    lVar21 = param_3[0xc];
    lVar22 = param_3[0xd];
    lVar23 = param_3[0xf];
    param_2[7] = param_3[0xe];
    param_2[8] = lVar23;
    param_2[5] = lVar21;
    param_2[6] = lVar22;
    param_2[3] = lVar19;
    param_2[4] = lVar20;
    *(int *)(param_2 + 1) = (int)lVar24;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(int *)(param_2 + 2) = (int)lVar25;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    *param_2 = lVar2;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar2 = *param_3;
    UNLOCK();
  }
  if (lVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
    ::drop_slow(&local_30);
  }
  return param_2;
}


