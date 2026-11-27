// 007064c0 pop

/* <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::pop */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::pop
          (longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  code *pcVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  lVar14 = *(longlong *)(param_1 + 0x370);
  uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),2);
  if (lVar14 != 0) {
    lVar13 = 0;
    pcVar11 = (code *)PTR_is_zero_slow_path_00798fe8;
    pcVar12 = (code *)PTR_wake_00799010;
    do {
      uVar7 = param_2 + (int)lVar13 & 0xf;
      if (((uint)lVar14 >> uVar7 & 1) != 0) {
        uVar8 = (ulonglong)(uVar7 * 0x30);
        piVar1 = (int *)(param_1 + uVar8);
        LOCK();
        bVar15 = *(int *)(param_1 + uVar8) == 0;
        if (bVar15) {
          *(int *)(param_1 + uVar8) = 1;
        }
        UNLOCK();
        if (bVar15) {
          if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0) goto LAB_0070660d;
LAB_00706562:
          lVar9 = *(longlong *)(piVar1 + 8);
          if (lVar9 == 0) goto LAB_00706577;
          bVar6 = 0;
        }
        else {
          (*(code *)PTR_lock_contended_00798fe0)(uVar8,uVar10);
          uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
          pcVar11 = (code *)PTR_is_zero_slow_path_00798fe8;
          pcVar12 = (code *)PTR_wake_00799010;
          if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) goto LAB_00706562;
LAB_0070660d:
          bVar6 = (*pcVar11)();
          lVar9 = *(longlong *)(piVar1 + 8);
          if (lVar9 == 0) {
            uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
            pcVar11 = (code *)PTR_is_zero_slow_path_00798fe8;
            pcVar12 = (code *)PTR_wake_00799010;
            if (bVar6 != 0) {
LAB_00706577:
              if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0) {
                cVar5 = (*pcVar11)();
                pcVar12 = (code *)PTR_wake_00799010;
                uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
                if (cVar5 == '\0') {
                  *(undefined1 *)(piVar1 + 1) = 1;
                }
              }
            }
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = 0;
            UNLOCK();
            if (iVar2 == 2) {
              (*pcVar12)();
              uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
              pcVar11 = (code *)PTR_is_zero_slow_path_00798fe8;
            }
            goto LAB_0070651d;
          }
          bVar6 = bVar6 ^ 1;
        }
        lVar13 = *(longlong *)(piVar1 + 6);
        uVar10 = 0;
        if (*(ulonglong *)(piVar1 + 2) <= lVar13 + 1U) {
          uVar10 = *(ulonglong *)(piVar1 + 2);
        }
        *(ulonglong *)(piVar1 + 6) = (lVar13 - uVar10) + 1;
        lVar9 = lVar9 + -1;
        *(longlong *)(piVar1 + 8) = lVar9;
        lVar14 = *(longlong *)(*(longlong *)(piVar1 + 4) + lVar13 * 0x10);
        bVar3 = *(byte *)(*(longlong *)(piVar1 + 4) + 8 + lVar13 * 0x10);
        if (lVar9 == 0) {
          LOCK();
          *(ulonglong *)(param_1 + 0x370) = *(ulonglong *)(param_1 + 0x370) & ~(1L << (sbyte)uVar7);
          UNLOCK();
        }
        if (((bVar6 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(lVar9,bVar3), cVar5 == '\0')) {
          *(undefined1 *)(piVar1 + 1) = 1;
        }
        uVar10 = (ulonglong)bVar3;
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (iVar2 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        break;
      }
LAB_0070651d:
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x10);
  }
  auVar16._8_8_ = uVar10;
  auVar16._0_8_ = lVar14;
  return auVar16;
}


