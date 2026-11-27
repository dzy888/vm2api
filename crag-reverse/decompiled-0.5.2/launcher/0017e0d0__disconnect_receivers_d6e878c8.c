// 0017e0d0 disconnect_receivers

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::disconnect_receivers */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::disconnect_receivers(ulonglong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uint uVar11;
  
  LOCK();
  puVar10 = param_1 + 0x10;
  uVar5 = *puVar10;
  *puVar10 = *puVar10 | 1;
  puVar1 = PTR_yield_now_00219ff8;
  UNLOCK();
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar5 = param_1[0x10];
  uVar11 = 0;
  if ((~(uint)uVar5 & 0x3e) == 0) {
    uVar6 = 0;
    uVar11 = 0;
    do {
      if (uVar11 < 7) {
        if (uVar11 != 0) {
          uVar3 = uVar6 & 7;
          if (6 < uVar6 - 1) {
            uVar4 = uVar6 & 0xfffffff8;
            do {
              uVar4 = uVar4 - 8;
            } while (uVar4 != 0);
            if ((uVar6 & 7) == 0) goto LAB_0017e133;
          }
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
        (*(code *)puVar1)();
      }
LAB_0017e133:
      iVar8 = uVar11 * 2;
      uVar11 = uVar11 + 1;
      uVar5 = param_1[0x10];
      uVar6 = uVar6 + iVar8 + 1;
    } while ((~(uint)uVar5 & 0x3e) == 0);
  }
  uVar9 = *param_1;
  LOCK();
  puVar10 = (ulonglong *)param_1[1];
  param_1[1] = 0;
  UNLOCK();
  uVar7 = uVar9 >> 1;
  puVar1 = PTR_yield_now_00219ff8;
  if (puVar10 == (ulonglong *)0x0 && uVar7 != uVar5 >> 1) {
    uVar6 = uVar11 * uVar11;
    iVar8 = uVar11 * 2 + 1;
    do {
      if (uVar11 < 7) {
        if (uVar11 != 0) {
          if (6 < uVar6 - 1) {
            uVar3 = uVar6 & 0xfffffff8;
            do {
              uVar3 = uVar3 - 8;
            } while (uVar3 != 0);
            if ((uVar6 & 7) == 0) goto LAB_0017e1e6;
          }
          uVar3 = uVar6 & 7;
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
        (*(code *)PTR_yield_now_00219ff8)();
      }
LAB_0017e1e6:
      LOCK();
      puVar10 = (ulonglong *)param_1[1];
      param_1[1] = 0;
      UNLOCK();
      uVar11 = uVar11 + 1;
      uVar6 = uVar6 + iVar8;
      iVar8 = iVar8 + 2;
      puVar1 = PTR_yield_now_00219ff8;
    } while (puVar10 == (ulonglong *)0x0);
  }
  do {
    puVar2 = PTR_yield_now_00219ff8;
    PTR_yield_now_00219ff8 = puVar1;
    if (uVar7 == uVar5 >> 1) {
      if (puVar10 != (ulonglong *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      *param_1 = uVar9 & 0xfffffffffffffffe;
      return 1;
    }
    uVar7 = (ulonglong)((uint)uVar7 & 0x1f);
    if (uVar7 == 0x1f) {
      if (*puVar10 == 0) {
        uVar11 = 0;
        uVar6 = 0;
        do {
          if (uVar6 < 7) {
            if (uVar6 != 0) {
              uVar3 = uVar11 & 7;
              if (6 < uVar11 - 1) {
                uVar4 = uVar11 & 0xfffffff8;
                do {
                  uVar4 = uVar4 - 8;
                } while (uVar4 != 0);
                if (uVar3 == 0) goto LAB_0017e373;
              }
              do {
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else {
            (*(code *)puVar2)();
          }
LAB_0017e373:
          iVar8 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          uVar11 = uVar11 + iVar8 + 1;
        } while (*puVar10 == 0);
      }
      puVar10 = (ulonglong *)*puVar10;
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    else if ((puVar10[uVar7 + 1] & 1) == 0) {
      uVar11 = 0;
      uVar6 = 0;
      do {
        if (uVar6 < 7) {
          if (uVar6 != 0) {
            uVar3 = uVar11 & 7;
            if (6 < uVar11 - 1) {
              uVar4 = uVar11 & 0xfffffff8;
              do {
                uVar4 = uVar4 - 8;
              } while (uVar4 != 0);
              if ((uVar11 & 7) == 0) goto LAB_0017e303;
            }
            do {
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
        }
        else {
          (*(code *)puVar2)();
        }
LAB_0017e303:
        iVar8 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 + iVar8 + 1;
      } while ((puVar10[uVar7 + 1] & 1) == 0);
    }
    uVar9 = uVar9 + 2;
    uVar7 = uVar9 >> 1;
    puVar1 = PTR_yield_now_00219ff8;
    PTR_yield_now_00219ff8 = puVar2;
  } while( true );
}


