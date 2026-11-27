// 005cffe0 stderr_snapshot

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::stderr_snapshot */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::stderr_snapshot
          (undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar8 [16];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  lVar3 = *(longlong *)(param_2 + 0x220);
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar7 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar7) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  if (cVar6 == '\0') {
    if (*(longlong *)(lVar3 + 0x28) == 0) {
      *param_1 = 0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_from_utf8_lossy_00799b68)();
      craggemini_core[66f3c71560d70857]::acp_backend::strip_ansi_escapes
                (&local_68,local_78,local_70);
      auVar8 = ::<str>::trim_matches::<<char>::is_whitespace>(local_60,local_58);
      if (auVar8._8_8_ == 0) {
        *param_1 = 0xffffffffffffffff;
        local_50 = extraout_XMM0_Da;
      }
      else {
        craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_50,auVar8._0_8_);
        param_1[2] = local_40;
        *(undefined4 *)param_1 = local_50;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_4c;
        *(undefined4 *)(param_1 + 1) = uStack_48;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_44;
      }
      if (local_68 != 0) {
        local_50 = (*(code *)PTR___rust_dealloc_00798fc8)(local_50,1);
      }
      if (0 < local_80) {
        (*(code *)PTR___rust_dealloc_00798fc8)(local_50,1);
      }
    }
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    *param_1 = 0xffffffffffffffff;
  }
  return param_1;
}


