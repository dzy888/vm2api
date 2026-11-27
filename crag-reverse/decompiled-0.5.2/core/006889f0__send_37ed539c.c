// 006889f0 send

/* WARNING: Removing unreachable block (ram,0x00688c7c) */
/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::send */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::send(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  
  uVar6 = *(ulonglong *)(param_1 + 0x80);
  plVar10 = *(longlong **)(param_1 + 0x88);
  uVar2 = 1;
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
    plVar4 = (longlong *)0x0;
    do {
      while( true ) {
        uVar7 = (uint)(uVar6 >> 1) & 0x1f;
        uVar8 = (ulonglong)uVar7;
        if (uVar7 != 0x1f) break;
        if (uVar9 < 7) {
          if (uVar9 != 0) {
            uVar5 = uVar9 * uVar9;
            uVar7 = uVar5 & 5;
            if (7 < uVar5) {
              uVar5 = uVar5 & 0x38;
              do {
                uVar5 = uVar5 - 8;
              } while (uVar5 != 0);
              if (uVar7 == 0) goto LAB_00688b36;
            }
            do {
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
        else {
          (*(code *)PTR_yield_now_00799b28)();
        }
LAB_00688b36:
        uVar9 = uVar9 + 1;
        uVar6 = *(ulonglong *)(param_1 + 0x80);
        plVar10 = *(longlong **)(param_1 + 0x88);
        if ((uVar6 & 1) != 0) goto LAB_00688bd1;
      }
      plVar3 = plVar4;
      if (uVar8 == 0x1e && plVar4 == (longlong *)0x0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        param_2 = 8;
        plVar3 = (longlong *)(*(code *)PTR___rust_alloc_zeroed_007997c8)();
        if (plVar3 == (longlong *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          goto LAB_00688c53;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        bVar11 = uVar6 == *(ulonglong *)(param_1 + 0x80);
        if (bVar11) {
          *(ulonglong *)(param_1 + 0x80) = uVar6 + 2;
        }
        UNLOCK();
        plVar4 = plVar10;
        if (!bVar11) {
LAB_00688add:
          uVar7 = 6;
          if (uVar9 < 6) {
            uVar7 = uVar9;
          }
          plVar4 = plVar3;
          if (uVar9 != 0) {
            uVar7 = uVar7 * uVar7;
            uVar5 = uVar7 & 5;
            if (7 < uVar7) {
              uVar7 = uVar7 & 0x38;
              do {
                uVar7 = uVar7 - 8;
              } while (uVar7 != 0);
              if (uVar5 == 0) goto LAB_00688b36;
            }
            do {
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          goto LAB_00688b36;
        }
LAB_00688bf8:
        if (uVar7 != 0x1e) goto LAB_00688bd7;
        if (plVar3 == (longlong *)0x0) {
          (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        *(longlong **)(param_1 + 0x88) = plVar3;
        LOCK();
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 2;
        UNLOCK();
        *plVar4 = (longlong)plVar3;
        uVar8 = 0x1e;
        goto LAB_00688c1c;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      param_2 = 8;
      plVar4 = (longlong *)(*(code *)PTR___rust_alloc_zeroed_007997c8)();
      if (plVar4 == (longlong *)0x0) {
LAB_00688c53:
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      LOCK();
      bVar11 = *(longlong *)(param_1 + 0x88) == 0;
      if (bVar11) {
        *(longlong *)(param_1 + 0x88) = (longlong)plVar4;
      }
      UNLOCK();
      if (bVar11) {
        *(longlong **)(param_1 + 8) = plVar4;
        LOCK();
        bVar11 = uVar6 == *(ulonglong *)(param_1 + 0x80);
        if (bVar11) {
          *(ulonglong *)(param_1 + 0x80) = uVar6 + 2;
        }
        UNLOCK();
        if (bVar11) goto LAB_00688bf8;
        goto LAB_00688add;
      }
      if (plVar3 != (longlong *)0x0) {
        param_2 = 0x100;
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      uVar6 = *(ulonglong *)(param_1 + 0x80);
      plVar10 = *(longlong **)(param_1 + 0x88);
    } while ((uVar6 & 1) == 0);
LAB_00688bd1:
    uVar8 = 0;
    plVar3 = plVar4;
    plVar4 = (longlong *)0x0;
LAB_00688bd7:
    if (plVar3 != (longlong *)0x0) {
      param_2 = 0x100;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar2 = 1;
    if (plVar4 != (longlong *)0x0) {
LAB_00688c1c:
      LOCK();
      plVar4[uVar8 + 1] = plVar4[uVar8 + 1] | 1;
      UNLOCK();
      <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_1 + 0x100,param_2);
      uVar2 = 2;
    }
  }
  return uVar2;
}


