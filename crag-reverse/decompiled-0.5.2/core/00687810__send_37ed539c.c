// 00687810 send

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send(undefined4 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar9 = *(ulonglong *)(param_3 + 0x80);
  lVar11 = *(longlong *)(param_3 + 0x88);
  if ((uVar9 & 1) == 0) {
    uVar12 = 0;
    lVar5 = 0;
    lVar10 = param_3;
    do {
      while( true ) {
        uVar8 = (uint)(uVar9 >> 1) & 0x1f;
        if (uVar8 == 0x1f) {
          if (uVar12 < 7) {
            if (uVar12 != 0) {
              uVar6 = uVar12 * uVar12;
              uVar8 = uVar6 & 5;
              if (7 < uVar6) {
                uVar6 = uVar6 & 0x38;
                do {
                  uVar6 = uVar6 - 8;
                } while (uVar6 != 0);
                if (uVar8 == 0) goto LAB_00687966;
              }
              do {
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          else {
            param_1 = (*(code *)PTR_yield_now_00799b28)();
          }
          goto LAB_00687966;
        }
        lVar4 = lVar5;
        if (uVar8 == 0x1e && lVar5 == 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar10 = 8;
          lVar4 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
          param_1 = extraout_XMM0_Da;
          if (lVar4 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
            goto LAB_00687bc1;
          }
        }
        if (lVar11 == 0) break;
        LOCK();
        bVar13 = uVar9 == *(ulonglong *)(param_3 + 0x80);
        if (bVar13) {
          *(ulonglong *)(param_3 + 0x80) = uVar9 + 2;
        }
        UNLOCK();
joined_r0x00687907:
        if (bVar13) {
          if (uVar8 != 0x1e) goto LAB_00687a0c;
          if (lVar4 == 0) {
            (*(code *)PTR_unwrap_failed_00799278)();
LAB_00687bc1:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(longlong *)(param_3 + 0x88) = lVar4;
          LOCK();
          *(longlong *)(param_3 + 0x80) = *(longlong *)(param_3 + 0x80) + 2;
          UNLOCK();
          *(longlong *)(lVar11 + 0x7c0) = lVar4;
          local_68 = param_4[4];
          local_88 = *param_4;
          uStack_80 = param_4[1];
          local_78 = param_4[2];
          uStack_70 = param_4[3];
          lVar5 = param_4[5];
          uVar7 = param_4[6];
          uVar8 = 0x1e;
          goto LAB_00687b2e;
        }
        uVar8 = 6;
        if (uVar12 < 6) {
          uVar8 = uVar12;
        }
        lVar5 = lVar4;
        if (uVar12 != 0) {
          uVar8 = uVar8 * uVar8;
          uVar6 = uVar8 & 5;
          if (7 < uVar8) {
            uVar8 = uVar8 & 0x38;
            do {
              uVar8 = uVar8 - 8;
            } while (uVar8 != 0);
            if (uVar6 == 0) goto LAB_00687966;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
LAB_00687966:
        uVar12 = uVar12 + 1;
        uVar9 = *(ulonglong *)(param_3 + 0x80);
        lVar11 = *(longlong *)(param_3 + 0x88);
        if ((uVar9 & 1) != 0) goto LAB_00687a07;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = 8;
      lVar5 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
      if (lVar5 == 0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
        goto LAB_00687bc1;
      }
      LOCK();
      bVar13 = *(longlong *)(param_3 + 0x88) == 0;
      if (bVar13) {
        *(longlong *)(param_3 + 0x88) = lVar5;
      }
      UNLOCK();
      param_1 = extraout_XMM0_Da_00;
      if (bVar13) {
        *(longlong *)(param_3 + 8) = lVar5;
        LOCK();
        bVar13 = uVar9 == *(ulonglong *)(param_3 + 0x80);
        if (bVar13) {
          *(ulonglong *)(param_3 + 0x80) = uVar9 + 2;
        }
        UNLOCK();
        lVar11 = lVar5;
        goto joined_r0x00687907;
      }
      if (lVar4 != 0) {
        lVar10 = 0x7c8;
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,8);
      }
      uVar9 = *(ulonglong *)(param_3 + 0x80);
      lVar11 = *(longlong *)(param_3 + 0x88);
    } while ((uVar9 & 1) == 0);
LAB_00687a07:
    uVar8 = 0;
    lVar11 = 0;
    lVar4 = lVar5;
LAB_00687a0c:
    if (lVar4 != 0) {
      lVar10 = 0x7c8;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    local_68 = param_4[4];
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = param_4[2];
    uStack_70 = param_4[3];
    lVar5 = param_4[5];
    uVar7 = param_4[6];
    if (lVar11 != 0) {
LAB_00687b2e:
      uVar9 = (ulonglong)(uVar8 << 6);
      *(undefined8 *)(lVar11 + 0x20 + uVar9) = local_68;
      puVar1 = (undefined4 *)(lVar11 + 0x10 + uVar9);
      *puVar1 = (undefined4)local_78;
      puVar1[1] = local_78._4_4_;
      puVar1[2] = (undefined4)uStack_70;
      puVar1[3] = uStack_70._4_4_;
      puVar1 = (undefined4 *)(lVar11 + uVar9);
      *puVar1 = (undefined4)local_88;
      puVar1[1] = local_88._4_4_;
      puVar1[2] = (undefined4)uStack_80;
      puVar1[3] = uStack_80._4_4_;
      *(longlong *)(lVar11 + 0x28 + uVar9) = lVar5;
      *(undefined8 *)(lVar11 + 0x30 + uVar9) = uVar7;
      LOCK();
      puVar2 = (ulonglong *)(lVar11 + 0x38 + uVar9);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_3 + 0x100,lVar10);
      goto LAB_00687b77;
    }
  }
  else {
    local_68 = param_4[4];
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = param_4[2];
    uStack_70 = param_4[3];
    lVar5 = param_4[5];
    uVar7 = param_4[6];
  }
  if (lVar5 != -2) {
    param_2[5] = local_68;
    param_2[3] = local_78;
    param_2[4] = uStack_70;
    param_2[1] = local_88;
    param_2[2] = uStack_80;
    *param_2 = 1;
    param_2[6] = lVar5;
    param_2[7] = uVar7;
    return param_2;
  }
LAB_00687b77:
  *param_2 = 2;
  return param_2;
}


