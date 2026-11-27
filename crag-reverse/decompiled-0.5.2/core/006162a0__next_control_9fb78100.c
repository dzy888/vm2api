// 006162a0 next_control

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::next_control */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::next_control
          (undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  char cVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  int *local_38;
  byte local_30;
  
  piVar1 = (int *)(param_2 + 0x310);
  LOCK();
  bVar21 = *(int *)(param_2 + 0x310) == 0;
  if (bVar21) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar21) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar17 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar18 = *(char *)(param_2 + 0x314);
  }
  else {
    local_30 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_30 = local_30 ^ 1;
    cVar18 = *(char *)(param_2 + 0x314);
  }
  if (cVar18 != '\0') {
    local_38 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_38,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  cVar18 = (*(code *)PTR_is_cancelled_00799260)();
  if (((cVar18 == '\0') && (*(int *)(param_2 + 1000) != 0)) && (*(longlong *)(param_2 + 0x368) != 0)
     ) {
    lVar19 = *(longlong *)(param_2 + 0x360);
    lVar5 = *(longlong *)(param_2 + 0x358);
    uVar20 = 0;
    if (*(ulonglong *)(param_2 + 0x350) <= lVar19 + 1U) {
      uVar20 = *(ulonglong *)(param_2 + 0x350);
    }
    *(ulonglong *)(param_2 + 0x360) = (lVar19 - uVar20) + 1;
    *(longlong *)(param_2 + 0x368) = *(longlong *)(param_2 + 0x368) + -1;
    lVar19 = lVar19 * 0x68;
    uVar10 = ((undefined8 *)(lVar5 + lVar19))[1];
    puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar19);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar19);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar19);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    *param_1 = *(undefined8 *)(lVar5 + lVar19);
    param_1[1] = uVar10;
    param_1[0xc] = *(undefined8 *)(lVar5 + 0x60 + lVar19);
    puVar2 = (undefined8 *)(lVar5 + 0x50 + lVar19);
    uVar10 = puVar2[1];
    param_1[10] = *puVar2;
    param_1[0xb] = uVar10;
    puVar3 = (undefined4 *)(lVar5 + 0x40 + lVar19);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    *(undefined4 *)(param_1 + 8) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 9) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
    param_1[6] = uVar15;
    param_1[7] = uVar16;
    param_1[4] = uVar13;
    param_1[5] = uVar14;
    param_1[2] = uVar11;
    param_1[3] = uVar12;
  }
  else {
    *param_1 = 0xffffffffffffffff;
  }
  if (((local_30 == 0) && ((*(ulonglong *)puVar17 & 0x7fffffffffffffff) != 0)) &&
     (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
    *(undefined1 *)(param_2 + 0x314) = 1;
  }
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar4 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


