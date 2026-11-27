// 006deb30 can_read_output

/* tokio[d7d91d38da47d894]::runtime::task::harness::can_read_output */

ulonglong __rustcall
tokio[d7d91d38da47d894]::runtime::task::harness::can_read_output
          (ulonglong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  bool bVar8;
  
  uVar5 = *param_1;
  uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if ((uVar5 & 2) == 0) {
    if ((uVar5 & 0x10) == 0) {
      uVar4 = (**(code **)*param_3)();
      if ((uVar5 & 8) == 0) goto LAB_006ded06;
      if (*(longlong *)(param_2 + 0x10) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))();
      }
      *(ulonglong *)(param_2 + 0x10) = uVar4;
      *(longlong **)(param_2 + 0x18) = param_3;
      uVar5 = *param_1;
      do {
        if ((uVar5 & 8) == 0) goto LAB_006deca2;
        if ((uVar5 & 0x10) != 0) goto LAB_006decbb;
        if ((uVar5 & 2) != 0) goto LAB_006dec6e;
        LOCK();
        uVar6 = *param_1;
        bVar8 = uVar5 == uVar6;
        if (bVar8) {
          *param_1 = uVar5 | 0x10;
        }
        else {
          uVar5 = uVar6;
        }
        UNLOCK();
      } while (!bVar8);
    }
    else {
      if (*(undefined8 **)(param_2 + 0x10) == (undefined8 *)0x0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_006ded2e;
      }
      puVar2 = (undefined8 *)*param_3;
      lVar7 = param_3[1];
      if (*(undefined8 **)(param_2 + 0x10) != puVar2 || *(longlong *)(param_2 + 0x18) != lVar7) {
        uVar5 = *param_1;
        do {
          if ((uVar5 & 8) == 0) goto LAB_006decd4;
          if ((uVar5 & 2) != 0) goto LAB_006dec8c;
          if ((uVar5 & 0x10) == 0) goto LAB_006deced;
          uVar4 = uVar5 & 0xffffffffffffffed;
          LOCK();
          uVar6 = *param_1;
          bVar8 = uVar5 == uVar6;
          if (bVar8) {
            *param_1 = uVar4;
          }
          else {
            uVar5 = uVar6;
          }
          UNLOCK();
        } while (!bVar8);
        param_3 = (longlong *)(*(code *)*puVar2)();
        if (*(longlong *)(param_2 + 0x10) != 0) {
          (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))();
        }
        *(longlong **)(param_2 + 0x10) = param_3;
        *(ulonglong *)(param_2 + 0x18) = uVar4;
        uVar5 = *param_1;
        do {
          if ((uVar5 & 8) == 0) goto LAB_006deca2;
          if ((uVar5 & 0x10) != 0) goto LAB_006decbb;
          if ((uVar5 & 2) != 0) goto LAB_006dec6e;
          uVar6 = 0;
          LOCK();
          uVar1 = *param_1;
          bVar8 = uVar5 == uVar1;
          if (bVar8) {
            *param_1 = uVar5 | 0x10;
          }
          else {
            uVar5 = uVar1;
          }
          UNLOCK();
        } while (!bVar8);
        goto LAB_006dec96;
      }
    }
    uVar6 = 0;
  }
  goto LAB_006dec96;
LAB_006deca2:
  (*(code *)PTR_panic_00799338)();
LAB_006decbb:
  (*(code *)PTR_panic_00799338)();
LAB_006decd4:
  (*(code *)PTR_panic_00799338)();
LAB_006deced:
  (*(code *)PTR_panic_00799338)();
LAB_006ded06:
  (*(code *)PTR_panic_00799338)();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_006dec6e:
  lVar7 = *(longlong *)(param_2 + 0x10);
  unaff_R14 = uVar4;
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))();
    unaff_R14 = uVar5;
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  unaff_R15 = param_3;
LAB_006dec8c:
  uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  if ((uVar5 & 2) == 0) {
LAB_006ded2e:
    (*(code *)PTR_panic_00799338)();
    *(longlong **)(param_2 + 0x10) = unaff_R15;
    *(ulonglong *)(param_2 + 0x18) = unaff_R14;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
LAB_006dec96:
  return uVar6 & 0xffffffff;
}


