// 0070cb70 handler

/* signal_hook_registry[9dd8ecc3788bb260]::handler */

void __rustcall
signal_hook_registry[9dd8ecc3788bb260]::handler(int param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  (*(code *)PTR_errno_0079aa18)();
  lVar9 = GLOBAL_DATA;
  if (GLOBAL_DATA == 0) {
    (*(code *)PTR_expect_failed_00799440)();
LAB_0070cd2f:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar10 = (ulonglong)((uint)*(undefined8 *)(GLOBAL_DATA + 0x40) & 1);
  LOCK();
  plVar3 = (longlong *)(GLOBAL_DATA + 0x28 + uVar10 * 8);
  lVar4 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar4,1) == *plVar3 < 0) {
    pcVar5 = *(char **)(lVar9 + 0x38);
    uVar11 = (ulonglong)((uint)*(undefined8 *)(lVar9 + 0x18) & 1);
    LOCK();
    plVar3 = (longlong *)(lVar9 + uVar11 * 8);
    lVar4 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar4,1) == *plVar3 < 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x18);
      uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x20);
      lVar8 = uVar6 * 0xc0;
      uVar12 = 0xffffffffffffffff;
      lVar13 = 0;
      do {
        if (lVar8 == lVar13) {
          if (((*pcVar5 != '\0') && (*(int *)(pcVar5 + 0xa0) == param_1)) &&
             (pcVar7 = *(code **)(pcVar5 + 8), (code *)0x1 < pcVar7)) {
            if ((pcVar5[0x90] & 4U) == 0) {
              (*pcVar7)();
            }
            else {
              (*pcVar7)(pcVar7,param_3);
            }
          }
          goto LAB_0070cccc;
        }
        uVar12 = uVar12 + 1;
        lVar1 = lVar13 + 0xc0;
        piVar2 = (int *)(lVar4 + lVar13);
        lVar13 = lVar1;
      } while (*piVar2 != param_1);
      if (uVar12 < uVar6) {
        pcVar7 = *(code **)(lVar4 + -0xa0 + lVar1);
        if ((code *)0x1 < pcVar7) {
          if ((*(byte *)(lVar4 + -0x18 + lVar1) & 4) == 0) {
            (*pcVar7)();
          }
          else {
            (*pcVar7)(lVar8,param_3);
          }
        }
        if (param_2 == 0) {
          (*(code *)PTR_write_00799ef8)();
          (*(code *)PTR_abort_0079aa20)();
          return;
        }
        lVar8 = *(longlong *)(lVar4 + -0xa8 + lVar1);
        if (lVar8 != 0) {
          lVar4 = *(longlong *)(lVar4 + -0xb0 + lVar1);
          lVar13 = 0;
          do {
            lVar1 = *(longlong *)(lVar4 + 0x18 + lVar13);
            (**(code **)(lVar1 + 0x28))(lVar1,*(longlong *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0)
            ;
            lVar13 = lVar13 + 0x20;
          } while (lVar8 * 0x20 != lVar13);
        }
LAB_0070cccc:
        LOCK();
        plVar3 = (longlong *)(lVar9 + uVar11 * 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        LOCK();
        plVar3 = (longlong *)(lVar9 + 0x28 + uVar10 * 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        (*(code *)PTR_set_errno_0079a9f8)();
        return;
      }
      (*(code *)PTR_panic_bounds_check_00799520)
                (lVar8,&PTR_s__vendor_signal_hook_registry_1_4_007957b8);
      goto LAB_0070cd2f;
    }
  }
  (*(code *)PTR_abort_0079aa20)();
  return;
}


