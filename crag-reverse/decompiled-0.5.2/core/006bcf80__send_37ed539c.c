// 006bcf80 send

/* WARNING: Removing unreachable block (ram,0x006bd03f) */
/* WARNING: Removing unreachable block (ram,0x006bd051) */
/* WARNING: Removing unreachable block (ram,0x006bd0af) */
/* WARNING: Removing unreachable block (ram,0x006bd0c1) */
/* WARNING: Removing unreachable block (ram,0x006bd0cc) */
/* WARNING: Removing unreachable block (ram,0x006bd0d2) */
/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>>>::send */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>
::send(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
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
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  
  if (param_2 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_006bd108:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2[7] != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
              (param_2 + 8);
  }
  param_2[7] = 1;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[8];
  uVar11 = param_3[9];
  uVar12 = param_3[10];
  uVar13 = param_3[0xb];
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
  *(undefined4 *)(param_2 + 9) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar5;
  *(undefined4 *)(param_2 + 10) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar7;
  *(undefined4 *)(param_2 + 0xb) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar9;
  *(undefined4 *)(param_2 + 0xc) = uVar10;
  *(undefined4 *)((longlong)param_2 + 100) = uVar11;
  *(undefined4 *)(param_2 + 0xd) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar13;
  uVar19 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar19 & 5) == 1) {
    (**(code **)(param_2[4] + 0x10))();
  }
  if ((uVar19 & 4) == 0) {
    *param_1 = 0;
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (*param_2 == 0) {
      (*(code *)PTR_drop_slow_007994c8)();
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 7);
    param_2[7] = 0;
    if ((bVar1 & 1) == 0) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_006bd108;
    }
    lVar14 = param_2[8];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
    lVar15 = param_2[9];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
    lVar16 = param_2[10];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x54);
    lVar17 = param_2[0xb];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x5c);
    uVar7 = *(undefined4 *)((longlong)param_2 + 100);
    lVar18 = param_2[0xd];
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(int *)(param_1 + 5) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
    *(int *)(param_1 + 6) = (int)lVar18;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
    *(int *)(param_1 + 3) = (int)lVar16;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    *(int *)(param_1 + 4) = (int)lVar17;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
    *(int *)(param_1 + 1) = (int)lVar14;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    *(int *)(param_1 + 2) = (int)lVar15;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *param_1 = 1;
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (*param_2 == 0) {
      (*(code *)PTR_drop_slow_007994c8)();
    }
  }
  return param_1;
}


