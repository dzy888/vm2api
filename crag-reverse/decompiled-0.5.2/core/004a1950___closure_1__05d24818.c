// 004a1950 {closure#1}

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv::_closure_1_(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong extraout_RDX;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = *param_2;
  local_50 = 0x100;
  local_60 = -2;
  piVar5 = (int *)param_2[3];
  LOCK();
  lVar14 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  local_a0 = param_2;
  local_90 = param_1;
  if (*param_3 != 0 && SCARRY8(lVar14,1) == *param_3 < 0) {
    local_a8 = &local_88;
    lVar14 = *(longlong *)(piVar5 + 0x12);
    local_b8 = param_3;
    uStack_b0 = lVar4;
    local_98 = piVar5;
    if (lVar14 == *(longlong *)(piVar5 + 0xe)) {
      (*(code *)PTR_grow_one_00799b08)();
    }
    lVar6 = *(longlong *)(piVar5 + 0x10);
    *(undefined4 **)(lVar6 + 0x10 + lVar14 * 0x18) = local_a8;
    puVar2 = (undefined4 *)(lVar6 + lVar14 * 0x18);
    *puVar2 = (undefined4)local_b8;
    puVar2[1] = local_b8._4_4_;
    puVar2[2] = (undefined4)uStack_b0;
    puVar2[3] = uStack_b0._4_4_;
    *(longlong *)(piVar5 + 0x12) = lVar14 + 1;
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(piVar5 + 2);
    lVar14 = extraout_RDX;
    if ((((char)local_a0[4] == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(local_98 + 1) = 1;
    }
    LOCK();
    iVar3 = *local_98;
    *local_98 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar10 = PTR_park_00799b20;
    puVar9 = PTR_now_00799250;
    uVar19 = *(uint *)((longlong *)local_a0[1] + 1);
    if (uVar19 == 0xffffffff) {
      while (uVar17 = param_3[3], uVar17 == 0) {
        (*(code *)puVar10)();
      }
    }
    else {
      lVar6 = *(longlong *)local_a0[1];
      while( true ) {
        uVar20 = (uint)lVar14;
        uVar17 = param_3[3];
        if (uVar17 != 0) break;
        lVar14 = (*(code *)puVar9)();
        bVar22 = uVar20 < uVar19;
        if (lVar14 != lVar6) {
          bVar22 = lVar14 < lVar6;
        }
        if (!bVar22) {
          uVar15 = 0;
          LOCK();
          uVar21 = param_3[3];
          if (uVar21 == 0) {
            param_3[3] = 1;
          }
          else {
            uVar15 = uVar21;
          }
          UNLOCK();
          uVar17 = 3;
          if (uVar15 < 3) {
            uVar17 = uVar15;
          }
          if (uVar21 != 0) goto LAB_004a1ac0;
          plVar7 = (longlong *)local_a0[2];
          LOCK();
          bVar22 = (int)*plVar7 == 0;
          if (bVar22) {
            *(int *)plVar7 = 1;
          }
          UNLOCK();
          uVar23 = extraout_XMM0_Da;
          if (!bVar22) {
            uVar23 = (*(code *)PTR_lock_contended_00798fe0)();
          }
          puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar11 = 0;
            cVar12 = *(char *)((longlong)plVar7 + 4);
          }
          else {
            bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar11 = bVar11 ^ 1;
            cVar12 = *(char *)((longlong)plVar7 + 4);
            uVar23 = extraout_XMM0_Da_00;
          }
          if (cVar12 == '\0') {
            lVar6 = plVar7[8];
            uVar17 = plVar7[9];
            uVar21 = 0xffffffffffffffff;
            lVar18 = 0;
            lVar14 = lVar6;
            goto LAB_004a1cf0;
          }
          uVar17 = (ulonglong)uStack_b0 >> 8;
          uStack_b0 = CONCAT71((int7)uVar17,bVar11);
          local_b8 = plVar7;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
                     ,&local_b8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b308);
          goto LAB_004a201e;
        }
        (*(code *)PTR_sub_00799b10)();
        (*(code *)PTR_park_timeout_00799b18)();
      }
    }
    puVar9 = PTR_yield_now_00799b28;
    if (uVar17 - 1 < 2) {
LAB_004a1ac0:
                    /* WARNING: Could not recover jumptable at 0x004a1ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00195ebc + *(int *)(&DAT_00195ebc + uVar17 * 4)))
                (&DAT_00195ebc + *(int *)(&DAT_00195ebc + uVar17 * 4));
      return;
    }
    if ((char)local_50 == '\0') {
      uVar19 = 0;
      uVar20 = 0;
      do {
        if (uVar20 < 7) {
          if (uVar20 != 0) {
            uVar13 = uVar19 & 7;
            if (6 < uVar19 - 1) {
              uVar16 = uVar19 & 0xfffffff8;
              do {
                uVar16 = uVar16 - 8;
              } while (uVar16 != 0);
              if (uVar13 == 0) goto LAB_004a1df3;
            }
            do {
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        else {
          (*(code *)puVar9)();
        }
LAB_004a1df3:
        iVar3 = uVar20 * 2;
        uVar20 = uVar20 + 1;
        uVar19 = uVar19 + iVar3 + 1;
      } while ((char)local_50 == '\0');
    }
    lVar14 = local_60;
    local_60 = -2;
    if (lVar14 != -2) {
      *(undefined8 *)(local_90 + 8) = local_68;
      *(undefined8 *)(local_90 + 4) = local_78;
      *(undefined8 *)(local_90 + 6) = uStack_70;
      *local_90 = local_88;
      local_90[1] = uStack_84;
      local_90[2] = uStack_80;
      local_90[3] = uStack_7c;
      *(longlong *)(local_90 + 10) = lVar14;
      *(undefined8 *)(local_90 + 0xc) = local_58;
      return;
    }
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  goto LAB_004a201e;
  while( true ) {
    lVar18 = lVar18 + 0x18;
    uVar21 = uVar21 + 1;
    plVar1 = (longlong *)(lVar14 + 8);
    lVar14 = lVar14 + 0x18;
    if (*plVar1 == lVar4) break;
LAB_004a1cf0:
    if (uVar17 * 0x18 == lVar18) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_004a201e;
    }
  }
  if (uVar21 < uVar17) {
    plVar1 = *(longlong **)(lVar6 + -0x18 + lVar18);
    puVar2 = (undefined4 *)(lVar6 + -0x10 + lVar18);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    uVar23 = (*(code *)PTR_memmove_00799258)(lVar18,uVar17 * 0x18 - lVar18);
    plVar7[9] = uVar17 - 1;
    if (plVar1 != (longlong *)0x0) {
      uStack_b0 = CONCAT44(uStack_44,local_48);
      local_a8 = (undefined4 *)CONCAT44(uStack_3c,uStack_40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_b8 = plVar1;
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
      if (((bVar11 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
         (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 4) = 1;
      }
      LOCK();
      lVar14 = *plVar7;
      *(int *)plVar7 = 0;
      UNLOCK();
      if ((int)lVar14 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)local_90 = 0;
      *(undefined8 *)(local_90 + 10) = 0xfffffffffffffffe;
      if ((int)local_60 != -2) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
        if ((int)local_60 != -1) {
          <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(&local_60);
        }
      }
      return;
    }
  }
  (*(code *)PTR_assert_failed_00799718)(uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b668);
LAB_004a201e:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


