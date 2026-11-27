// 006e7b10 <(),tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::with_current<(),<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_task::{closure#0}>::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x006e7c56) */
/* WARNING: Removing unreachable block (ram,0x006e7c7f) */
/* WARNING: Removing unreachable block (ram,0x006e7c6c) */
/* WARNING: Removing unreachable block (ram,0x006e7d0c) */
/* tokio[d7d91d38da47d894]::runtime::context::with_scheduler::<(),
   tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::with_current<(),
   <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_task::{closure#0}>::{closure#0}>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::context::with_scheduler::
<(),tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::with_current<(),<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_task::_closure_0_>::_closure_0_>
          (longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = (undefined1 *)param_1[2];
  lVar5 = *param_1;
  lVar6 = param_1[1];
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xf0) == '\0') {
LAB_006e7b45:
    if (lVar5 == 0) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_006e7d81;
    }
    if (((*(char *)(lVar2 + -0xf2) == '\x02') ||
        (pcVar3 = *(char **)(lVar2 + -0x110), pcVar3 == (char *)0x0)) || (*pcVar3 == '\0')) {
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task
                (lVar5,lVar6);
      goto LAB_006e7c08;
    }
    if (lVar5 == *(longlong *)(*(longlong *)(pcVar3 + 8) + 0x10) + 0x80) {
      if (*(longlong *)(pcVar3 + 0x10) != 0) {
        (*(code *)PTR_panic_already_borrowed_007997b0)();
        goto LAB_006e7d81;
      }
      pcVar3[0x10] = -1;
      pcVar3[0x11] = -1;
      pcVar3[0x12] = -1;
      pcVar3[0x13] = -1;
      pcVar3[0x14] = -1;
      pcVar3[0x15] = -1;
      pcVar3[0x16] = -1;
      pcVar3[0x17] = -1;
      if (*(longlong *)(pcVar3 + 0x18) != 0) {
        <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_local
                  (lVar5,*(longlong *)(pcVar3 + 0x18),lVar6,*puVar1);
        *(longlong *)(pcVar3 + 0x10) = *(longlong *)(pcVar3 + 0x10) + 1;
        return;
      }
      pcVar3[0x10] = '\0';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
    }
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task
              (lVar5,lVar6);
    auVar8 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
             worker_to_notify(lVar5 + 0x80,lVar5);
    if (auVar8._0_8_ != 1) {
      return;
    }
    uVar7 = extraout_XMM0_Da;
    if (auVar8._8_8_ < *(ulonglong *)(lVar5 + 0x148)) {
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                (*(longlong *)(lVar5 + 0x140) + auVar8._8_8_ * 0x10 + 8,lVar5 + 0x2b8);
      return;
    }
  }
  else {
    if (*(char *)(lVar2 + -0xf0) == '\x01') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
      goto LAB_006e7b45;
    }
    if (lVar5 == 0) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_006e7d81;
    }
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task
              (lVar5,param_1[1]);
LAB_006e7c08:
    auVar8 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
             worker_to_notify(lVar5 + 0x80,lVar5);
    if (auVar8._0_8_ != 1) {
      return;
    }
    uVar7 = extraout_XMM0_Da_00;
    if (auVar8._8_8_ < *(ulonglong *)(lVar5 + 0x148)) {
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                (*(longlong *)(lVar5 + 0x140) + auVar8._8_8_ * 0x10 + 8,lVar5 + 0x2b8);
      return;
    }
  }
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar7,&anon_dbc6346551702d8f49f87a432b9dece2_33_llvm_7788165550271277997);
LAB_006e7d81:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


