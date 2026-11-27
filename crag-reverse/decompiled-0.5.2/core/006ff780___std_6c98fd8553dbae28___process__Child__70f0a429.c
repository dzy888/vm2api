// 006ff780 <std[6c98fd8553dbae28]::process::Child>

/* tokio[d7d91d38da47d894]::process::imp::orphan::drain_orphan_queue::<std[6c98fd8553dbae28]::process::Child>
    */

void __rustcall
tokio[d7d91d38da47d894]::process::imp::orphan::drain_orphan_queue::
<std[6c98fd8553dbae28]::process::Child>(undefined4 param_1,int *param_2,char param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  longlong lVar15;
  code *pcVar16;
  ulonglong uVar17;
  int local_58;
  char local_54;
  uint local_50;
  
  uVar17 = *(ulonglong *)(param_2 + 6);
  if (uVar17 != 0) {
    lVar15 = uVar17 * 0x1c;
    pcVar16 = (code *)PTR_try_wait_0079a900;
    do {
      uVar17 = uVar17 - 1;
      lVar15 = lVar15 + -0x1c;
      if (*(ulonglong *)(param_2 + 6) <= uVar17) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (param_1,&PTR_s__vendor_tokio_1_54_1_src_process_00794de0);
LAB_006ff952:
                    /* WARNING: Does not return */
        pcVar16 = (code *)invalidInstructionException();
        (*pcVar16)();
      }
      param_1 = (*pcVar16)();
      if ((local_58 != 0) || (local_54 != '\0')) {
        uVar8 = *(ulonglong *)(param_2 + 6);
        if (uVar8 <= uVar17) {
          (*(code *)PTR_assert_failed_0079a108)();
          goto LAB_006ff952;
        }
        lVar9 = *(longlong *)(param_2 + 4);
        iVar3 = *(int *)(lVar9 + 0xc + lVar15);
        iVar4 = *(int *)(lVar9 + 0x10 + lVar15);
        iVar5 = *(int *)(lVar9 + 0x14 + lVar15);
        iVar6 = *(int *)(lVar9 + 0x18 + lVar15);
        lVar2 = (uVar8 - 1) + (uVar8 - 1) * 0x1b;
        uVar7 = *(undefined4 *)(lVar9 + 0x18 + lVar2);
        uVar10 = *(undefined8 *)(lVar9 + 0x10 + lVar2);
        puVar1 = (undefined4 *)(lVar9 + lVar2);
        param_1 = *puVar1;
        uVar11 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];
        puVar1 = (undefined4 *)(lVar9 + lVar15);
        *puVar1 = param_1;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        *(undefined8 *)(lVar9 + 0x10 + lVar15) = uVar10;
        *(undefined4 *)(lVar9 + 0x18 + lVar15) = uVar7;
        *(ulonglong *)(param_2 + 6) = uVar8 - 1;
        if (iVar3 != -1) {
          param_1 = (*(code *)PTR_close_00799030)();
        }
        if (iVar4 != -1) {
          param_1 = (*(code *)PTR_close_00799030)();
        }
        if (iVar5 != -1) {
          param_1 = (*(code *)PTR_close_00799030)();
        }
        if (iVar6 != -1) {
          param_1 = (*(code *)PTR_close_00799030)();
        }
        pcVar16 = (code *)PTR_try_wait_0079a900;
        if (local_58 != 0) {
          if ((1 < (local_50 & 3) - 2) && ((local_50 & 3) != 0)) {
            param_1 = (*(code *)PTR_drop_00799040)();
          }
        }
      }
    } while (uVar17 != 0);
  }
  if ((param_3 == '\0') &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
    cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar14 == '\0') {
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  LOCK();
  iVar3 = *param_2;
  *param_2 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


