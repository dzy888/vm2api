// 006edcb0 run_task

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::run_task */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::run_task
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  
  if (*(char *)(param_3 + 0x71) == '\x01') {
    lVar6 = *param_1;
    *(undefined1 *)(param_3 + 0x71) = 0;
    lVar8 = *(longlong *)(lVar6 + 0x10);
    LOCK();
    plVar1 = (longlong *)(lVar8 + 0x100);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((short)lVar6 == 1) {
      auVar14 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                worker_to_notify(lVar8 + 0x100,lVar8 + 0x80);
      if (auVar14._0_8_ == 1) {
        if (*(ulonglong *)(lVar8 + 0x1c8) <= auVar14._8_8_) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (extraout_XMM0_Da,
                     &anon_dbc6346551702d8f49f87a432b9dece2_32_llvm_7788165550271277997);
          goto LAB_006ee03b;
        }
        <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                  (*(longlong *)(lVar8 + 0x1c0) + auVar14._8_8_ * 0x10 + 8,lVar8 + 0x338);
      }
    }
  }
  *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 1;
  if (param_1[1] != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    goto LAB_006ee03b;
  }
  param_1[1] = -1;
  if (param_1[2] == 0) {
    lVar6 = 0;
  }
  else {
    uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>(param_1[2]);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
    lVar6 = param_1[1] + 1;
  }
  param_1[2] = param_3;
  param_1[1] = lVar6;
  lVar6 = *in_FS_OFFSET;
  cVar9 = *(char *)(lVar6 + -0xf0);
  if (cVar9 == '\0') {
LAB_006eddbb:
    cVar5 = *(char *)(lVar6 + -0xf4);
    cVar9 = *(char *)(lVar6 + -0xf3);
    *(undefined2 *)(lVar6 + -0xf4) = 0x8001;
  }
  else {
    if (cVar9 == '\x01') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar6 + -0xf0) = 0;
      goto LAB_006eddbb;
    }
    cVar5 = cVar9;
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))();
  if (param_1[1] == 0) {
    uVar11 = 1;
    do {
      param_1[1] = -1;
      plVar1 = (longlong *)param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      if (plVar1 == (longlong *)0x0) goto LAB_006edf83;
      lVar8 = *plVar1;
      *plVar1 = 0;
      if (lVar8 == 0) {
        *(byte *)(plVar1 + 0xe) = *(byte *)(*(longlong *)(*param_1 + 0x10) + 0x284) ^ 1;
        goto LAB_006edf83;
      }
      if (*(char *)(lVar6 + -0xf0) == '\0') {
        cVar2 = *(char *)(lVar6 + -0xf4);
joined_r0x006edefa:
        if ((cVar2 == '\x01') && (*(char *)(lVar6 + -0xf3) == '\0')) {
          lVar12 = *(longlong *)(*param_1 + 0x10) + 0x80;
          lVar7 = plVar1[3];
          goto LAB_006edf30;
        }
      }
      else if (*(char *)(lVar6 + -0xf0) != '\x02') {
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar6 + -0xf0) = 0;
        cVar2 = *(char *)(lVar6 + -0xf4);
        goto joined_r0x006edefa;
      }
      if (2 < uVar11) {
        *(undefined1 *)(plVar1 + 0xe) = 0;
      }
      if (param_1[1] != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
        goto LAB_006ee03b;
      }
      param_1[1] = -1;
      if (param_1[2] == 0) {
        lVar7 = 0;
      }
      else {
        uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>
                           (param_1[2]);
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        lVar7 = param_1[1] + 1;
      }
      param_1[2] = (longlong)plVar1;
      param_1[1] = lVar7;
      (*(code *)**(undefined8 **)(lVar8 + 0x10))();
      uVar11 = uVar11 + 1;
    } while (param_1[1] == 0);
  }
  (*(code *)PTR_panic_already_borrowed_007997b0)();
LAB_006ee03b:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_006edf30:
  uVar11 = *(ulonglong *)(lVar7 + 0x18);
  uVar3 = *(uint *)(lVar7 + 0x20);
  iVar10 = (int)(uVar11 >> 0x20);
  if (uVar3 - iVar10 < 0x100) {
    *(longlong *)(*(longlong *)(lVar7 + 0x10) + ((ulonglong)uVar3 & 0xff) * 8) = lVar8;
    *(uint *)(lVar7 + 0x20) = uVar3 + 1;
    goto LAB_006edf83;
  }
  if (iVar10 != (int)uVar11) {
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task
              (lVar12,lVar8);
    goto LAB_006edf83;
  }
  lVar8 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
          ::push_overflow::
          <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
                    (lVar7,lVar8,uVar11 >> 0x20,(ulonglong)uVar3,lVar12);
  if (lVar8 == 0) {
LAB_006edf83:
    if (cVar5 != '\x02') {
      if (*(char *)(lVar6 + -0xf0) != '\0') {
        if (*(char *)(lVar6 + -0xf0) == '\x02') {
          return plVar1;
        }
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar6 + -0xf0) = 0;
      }
      *(char *)(lVar6 + -0xf4) = cVar5;
      *(char *)(lVar6 + -0xf3) = cVar9;
    }
    return plVar1;
  }
  goto LAB_006edf30;
}


