// 006e1620 notify_locked

/* tokio[d7d91d38da47d894]::sync::notify::notify_locked */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::sync::notify::notify_locked
          (undefined4 param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4,
          ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong unaff_R14;
  bool bVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  switch((uint)param_4 & 3) {
  default:
    LOCK();
    uVar1 = *param_3;
    bVar7 = param_4 == uVar1;
    if (bVar7) {
      *param_3 = param_4 & 0xfffffffffffffffc | 2;
    }
    else {
      param_4 = uVar1;
    }
    UNLOCK();
    if (bVar7) {
      lVar6 = 0;
      goto LAB_006e1711;
    }
    if ((param_4 & 1) != 0) goto LAB_006e1736;
    param_4 = param_4 & 0xfffffffffffffffc | 2;
    lVar6 = 0;
    break;
  case 1:
    if ((param_5 & 1) == 0) {
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) goto LAB_006e1777;
      lVar5 = *plVar4;
      param_2[1] = lVar5;
      if (lVar5 == 0) {
        *param_2 = 0;
        lVar5 = 1;
        goto LAB_006e16e1;
      }
      *(undefined8 *)(lVar5 + 8) = 0;
      bVar7 = *param_2 == 0;
      lVar5 = 1;
    }
    else {
      plVar4 = (longlong *)*param_2;
      if (plVar4 == (longlong *)0x0) {
        (*(code *)PTR_unwrap_failed_00799278)();
LAB_006e1777:
        (*(code *)PTR_unwrap_failed_00799278)();
        if (unaff_RBX != 0) {
          (**(code **)(unaff_RBX + 0x18))();
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      puVar2 = (undefined8 *)plVar4[1];
      *param_2 = (longlong)puVar2;
      if (puVar2 == (undefined8 *)0x0) {
        param_2[1] = 0;
        lVar5 = 5;
LAB_006e16e1:
        bVar7 = true;
      }
      else {
        *puVar2 = 0;
        lVar5 = 5;
        bVar7 = false;
      }
    }
    uVar8 = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar6 = plVar4[2];
    unaff_R14 = plVar4[3];
    plVar4[2] = 0;
    plVar4[4] = lVar5;
    if (!bVar7) goto LAB_006e1711;
    if (param_2[1] != 0) goto LAB_006e174f;
    param_4 = param_4 & 0xfffffffffffffffc;
    break;
  case 3:
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&PTR_s__vendor_tokio_1_54_1_src_sync_no_00793c48);
LAB_006e1736:
    uVar8 = (*(code *)PTR_panic_00799338)(param_1,&PTR_s__vendor_tokio_1_54_1_src_sync_no_00793c00);
LAB_006e174f:
    (*(code *)PTR_panic_00799338)
              (uVar8,&PTR_anon_3e483e6b3ccbdca1751358c89510dd96_8_llvm_15764310632135838254_00793ba0
              );
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *param_3 = param_4;
LAB_006e1711:
  auVar9._8_8_ = unaff_R14;
  auVar9._0_8_ = lVar6;
  return auVar9;
}


