// 006ec3c0 park_internal

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::park_internal */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::park_internal
          (longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  ulonglong local_48;
  ulonglong *local_40;
  undefined *local_38;
  
  lVar3 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar3 == 0) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_00794240
              );
    goto LAB_006ec6ea;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    goto LAB_006ec6ea;
  }
  param_1[1] = -1;
  if (param_1[2] == 0) {
    lVar7 = 0;
    lVar9 = param_2;
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>(param_1[2]);
    (*(code *)PTR___rust_dealloc_00798fc8)();
    lVar7 = param_1[1] + 1;
    lVar9 = 0x78;
  }
  param_1[2] = param_2;
  param_1[1] = lVar7;
  lVar7 = *(longlong *)(*param_1 + 0x10) + 0x338;
  plVar1 = (longlong *)(lVar3 + 0x10);
  if (param_3 == -1) {
    LOCK();
    bVar13 = *(longlong *)(lVar3 + 0x18) == 3;
    if (bVar13) {
      *(longlong *)(lVar3 + 0x18) = 0;
    }
    UNLOCK();
    uVar6 = 1;
    if (!bVar13) {
      lVar12 = *plVar1;
      LOCK();
      bVar13 = *(char *)(lVar12 + 0x68) == '\0';
      if (bVar13) {
        *(char *)(lVar12 + 0x68) = '\x01';
      }
      UNLOCK();
      if (bVar13) {
        uVar10 = 2;
        uVar8 = 0;
        LOCK();
        uVar2 = *(ulonglong *)(lVar3 + 0x18);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(ulonglong *)(lVar3 + 0x18) = 2;
        }
        else {
          uVar8 = uVar2;
        }
        UNLOCK();
        if (bVar13) {
          <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park(lVar12 + 0x10,lVar7);
          LOCK();
          uVar2 = *(ulonglong *)(lVar3 + 0x18);
          *(ulonglong *)(lVar3 + 0x18) = 0;
          UNLOCK();
          uVar10 = uVar2 & 0xfffffffffffffffe;
          if (uVar10 == 2) {
LAB_006ec50b:
            uVar6 = !bVar13;
            goto LAB_006ec50f;
          }
          ppuVar11 = &anon_a54838b0e2c6049171e94f4eeb8260c4_43_llvm_5899425866962164388;
          local_48 = uVar2;
        }
        else {
          if (uVar8 == 3) {
            LOCK();
            *(undefined8 *)(lVar3 + 0x18) = 0;
            UNLOCK();
            goto LAB_006ec50b;
          }
          ppuVar11 = &anon_a54838b0e2c6049171e94f4eeb8260c4_45_llvm_5899425866962164388;
          local_48 = uVar8;
        }
        local_40 = &local_48;
        local_38 = PTR_fmt_007991f0;
        (*(code *)PTR_panic_fmt_007991a8)(uVar10,ppuVar11);
        goto LAB_006ec6ea;
      }
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_condvar
                (plVar1,lVar9,0xffffffff);
    }
  }
  else {
    lVar12 = *plVar1;
    uVar6 = 1;
    LOCK();
    bVar13 = *(char *)(lVar12 + 0x68) == '\0';
    if (bVar13) {
      *(char *)(lVar12 + 0x68) = '\x01';
    }
    UNLOCK();
    if (bVar13) {
      uVar6 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_driver
                        (plVar1,lVar12 + 0x10,lVar7,0,0);
LAB_006ec50f:
      LOCK();
      *(undefined1 *)(lVar12 + 0x68) = 0;
      UNLOCK();
    }
  }
  lVar9 = param_1[3];
  while (lVar9 == 0) {
    param_1[3] = -1;
    if (param_1[6] == 0) {
      param_1[3] = 0;
      if (param_1[1] != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
        goto LAB_006ec6ea;
      }
      param_1[1] = -1;
      plVar1 = (longlong *)param_1[2];
      param_1[2] = 0;
      if (plVar1 == (longlong *)0x0) {
        (*(code *)PTR_expect_failed_00799440)();
        goto LAB_006ec6ea;
      }
      param_1[1] = 0;
      plVar4 = (longlong *)plVar1[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799658)();
        }
      }
      plVar1[1] = lVar3;
      *(undefined1 *)((longlong)plVar1 + 0x74) = uVar6;
      if ((*(char *)((longlong)plVar1 + 0x71) == '\0') &&
         (1 < ((ulonglong)
               (uint)(*(int *)(plVar1[3] + 0x20) - (int)*(undefined8 *)(plVar1[3] + 0x18)) + 1) -
              (ulonglong)(*plVar1 == 0))) {
        lVar3 = *(longlong *)(*param_1 + 0x10);
        auVar14 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                  worker_to_notify(lVar3 + 0x100,lVar3 + 0x80);
        if (auVar14._0_8_ == 1) {
          if (*(ulonglong *)(lVar3 + 0x1c8) <= auVar14._8_8_) {
            (*(code *)PTR_panic_bounds_check_00799520)();
            goto LAB_006ec6ea;
          }
          <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                    (*(longlong *)(lVar3 + 0x1c0) + auVar14._8_8_ * 0x10 + 8,lVar3 + 0x338);
        }
      }
      return plVar1;
    }
    lVar9 = param_1[6] + -1;
    param_1[6] = lVar9;
    (**(code **)(*(longlong *)(param_1[5] + lVar9 * 0x10) + 8))();
    plVar1 = param_1 + 3;
    *plVar1 = *plVar1 + 1;
    lVar9 = *plVar1;
  }
  (*(code *)PTR_panic_already_borrowed_007997b0)();
LAB_006ec6ea:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


