// 00576160 <hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>

/* WARNING: Switch with 1 destination removed at 0x0057616e */
/* WARNING: Switch with 1 destination removed at 0x006ba729 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>
          (undefined4 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(lVar3 + 0x18);
      if (lVar4 != 0) {
        uVar6 = *(ulonglong *)(lVar4 + 0x30);
        do {
          LOCK();
          uVar1 = *(ulonglong *)(lVar4 + 0x30);
          bVar7 = uVar6 == uVar1;
          if (bVar7) {
            *(ulonglong *)(lVar4 + 0x30) = uVar6 | 4;
          }
          else {
            uVar6 = uVar1;
          }
          UNLOCK();
        } while (!bVar7);
        if (((uint)uVar6 & 10) == 8) {
          param_1 = (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x10))();
        }
        if (((uint)uVar6 & 3) == 1) {
          LOCK();
          *(ulonglong *)(lVar4 + 0x30) = *(ulonglong *)(lVar4 + 0x30) & 0xfffffffffffffffe;
          UNLOCK();
          param_1 = (*(code *)PTR_drop_task_00799060)();
        }
        if ((uVar6 & 2) != 0) {
          uStack_28 = *(undefined8 *)(lVar4 + 0x68);
          param_1 = *(undefined4 *)(lVar4 + 0x38);
          lVar5 = *(longlong *)(lVar4 + 0x38);
          uStack_50 = *(undefined4 *)(lVar4 + 0x40);
          uStack_4c = *(undefined4 *)(lVar4 + 0x44);
          uStack_48 = *(undefined4 *)(lVar4 + 0x48);
          uStack_44 = *(undefined4 *)(lVar4 + 0x4c);
          uStack_40 = *(undefined4 *)(lVar4 + 0x50);
          uStack_3c = *(undefined4 *)(lVar4 + 0x54);
          uStack_38 = *(undefined4 *)(lVar4 + 0x58);
          uStack_34 = *(undefined4 *)(lVar4 + 0x5c);
          uStack_30 = *(undefined4 *)(lVar4 + 0x60);
          uStack_2c = *(undefined4 *)(lVar4 + 100);
          *(undefined8 *)(lVar4 + 0x38) = 0;
          if (lVar5 != 0) {
            param_1 = <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                                (&uStack_50);
          }
        }
        plVar2 = *(longlong **)(lVar3 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            param_1 = (*(code *)PTR_drop_slow_007994c8)();
          }
        }
      }
      if (lVar3 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar3 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_free_0079adc8)(param_1,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


