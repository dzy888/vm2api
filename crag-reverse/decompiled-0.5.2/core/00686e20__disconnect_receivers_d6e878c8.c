// 00686e20 disconnect_receivers

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::disconnect_receivers
    */

bool __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::disconnect_receivers(ulonglong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  LOCK();
  puVar1 = param_1 + 0x10;
  uVar7 = *puVar1;
  *puVar1 = *puVar1 | 1;
  puVar3 = PTR_yield_now_00799b28;
  bVar14 = (uVar7 & 1) == 0;
  UNLOCK();
  if (bVar14) {
    uVar7 = param_1[0x10];
    uVar13 = 0;
    if ((~(uint)uVar7 & 0x3e) == 0) {
      uVar11 = 0;
      uVar13 = 0;
      do {
        if (uVar13 < 7) {
          if (uVar13 != 0) {
            uVar5 = uVar11 & 7;
            if (6 < uVar11 - 1) {
              uVar6 = uVar11 & 0xfffffff8;
              do {
                uVar6 = uVar6 - 8;
              } while (uVar6 != 0);
              if ((uVar11 & 7) == 0) goto LAB_00686e73;
            }
            do {
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else {
          (*(code *)puVar3)();
        }
LAB_00686e73:
        iVar10 = uVar13 * 2;
        uVar13 = uVar13 + 1;
        uVar7 = param_1[0x10];
        uVar11 = uVar11 + iVar10 + 1;
      } while ((~(uint)uVar7 & 0x3e) == 0);
    }
    uVar8 = *param_1;
    LOCK();
    uVar12 = param_1[1];
    param_1[1] = 0;
    UNLOCK();
    uVar9 = uVar8 >> 1;
    puVar3 = PTR_yield_now_00799b28;
    if (uVar12 == 0 && uVar9 != uVar7 >> 1) {
      uVar11 = uVar13 * uVar13;
      iVar10 = uVar13 * 2 + 1;
      do {
        if (uVar13 < 7) {
          if (uVar13 != 0) {
            if (6 < uVar11 - 1) {
              uVar5 = uVar11 & 0xfffffff8;
              do {
                uVar5 = uVar5 - 8;
              } while (uVar5 != 0);
              if ((uVar11 & 7) == 0) goto LAB_00686f26;
            }
            uVar5 = uVar11 & 7;
            do {
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else {
          (*(code *)PTR_yield_now_00799b28)();
        }
LAB_00686f26:
        LOCK();
        uVar12 = param_1[1];
        param_1[1] = 0;
        UNLOCK();
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 + iVar10;
        iVar10 = iVar10 + 2;
        puVar3 = PTR_yield_now_00799b28;
      } while (uVar12 == 0);
    }
    while (puVar4 = PTR_yield_now_00799b28, PTR_yield_now_00799b28 = puVar3, uVar9 != uVar7 >> 1) {
      uVar13 = (uint)uVar9 & 0x1f;
      if (uVar13 == 0x1f) {
        if (*(longlong *)(uVar12 + 0x7c0) == 0) {
          uVar11 = 0;
          uVar13 = 0;
          do {
            if (uVar13 < 7) {
              if (uVar13 != 0) {
                uVar5 = uVar11 & 7;
                if (6 < uVar11 - 1) {
                  uVar6 = uVar11 & 0xfffffff8;
                  do {
                    uVar6 = uVar6 - 8;
                  } while (uVar6 != 0);
                  if (uVar5 == 0) goto LAB_00687103;
                }
                do {
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else {
              (*(code *)puVar4)();
            }
LAB_00687103:
            iVar10 = uVar13 * 2;
            uVar13 = uVar13 + 1;
            uVar11 = uVar11 + iVar10 + 1;
          } while (*(longlong *)(uVar12 + 0x7c0) == 0);
        }
        uVar12 = *(ulonglong *)(uVar12 + 0x7c0);
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      else {
        uVar9 = (ulonglong)(uVar13 << 6);
        lVar2 = uVar12 + uVar9;
        if ((*(ulonglong *)(uVar12 + 0x38 + uVar9) & 1) == 0) {
          uVar11 = 0;
          uVar13 = 0;
          do {
            if (uVar13 < 7) {
              if (uVar13 != 0) {
                uVar5 = uVar11 & 7;
                if (6 < uVar11 - 1) {
                  uVar6 = uVar11 & 0xfffffff8;
                  do {
                    uVar6 = uVar6 - 8;
                  } while (uVar6 != 0);
                  if ((uVar11 & 7) == 0) goto LAB_00687063;
                }
                do {
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else {
              (*(code *)puVar4)();
            }
LAB_00687063:
            iVar10 = uVar13 * 2;
            uVar13 = uVar13 + 1;
            uVar11 = uVar11 + iVar10 + 1;
          } while ((*(ulonglong *)(lVar2 + 0x38) & 1) == 0);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(lVar2);
        if (*(int *)(lVar2 + 0x28) != -1) {
          <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(lVar2 + 0x28);
        }
      }
      uVar8 = uVar8 + 2;
      puVar3 = PTR_yield_now_00799b28;
      PTR_yield_now_00799b28 = puVar4;
      uVar9 = uVar8 >> 1;
    }
    if (uVar12 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *param_1 = uVar8 & 0xfffffffffffffffe;
  }
  return bVar14;
}


