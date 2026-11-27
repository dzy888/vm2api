// 00616710 enqueue_control

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::server::Runtime>::enqueue_control */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::enqueue_control
          (undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  int *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  piVar1 = (int *)(param_2 + 0x310);
  LOCK();
  bVar13 = *(int *)(param_2 + 0x310) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar10 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    cVar11 = *(char *)(param_2 + 0x314);
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
    cVar11 = *(char *)(param_2 + 0x314);
  }
  if (cVar11 != '\0') {
    uVar4 = (uint)uStack_90 >> 8;
    uStack_90 = CONCAT31((int3)uVar4,bVar12);
    local_98 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_98,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar11 = (*(code *)PTR_is_cancelled_00799260)();
  uVar9 = _UNK_0078f598;
  uVar8 = _UNK_0078f558;
  if (cVar11 == '\0') {
    if (((*(char *)(param_2 + 0x414) == '\0') && (*(char *)(param_2 + 0x413) != '\x01')) &&
       (*(int *)(param_2 + 1000) != 0)) {
      if (*(char *)(param_2 + 0x411) == '\0') {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = "live_control_unsupported";
        param_1[2] = 0x18;
        param_1[3] = 0xffffffffffffffff;
        param_1[4] = "attached native bridge does not support live runtime controls";
        param_1[5] = 0x3d;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0x60201f5;
      }
      else {
        if (*(ulonglong *)(param_2 + 0x368) < 0x10) {
          local_38 = param_3[0xc];
          local_48 = param_3[10];
          uStack_40 = param_3[0xb];
          local_58 = param_3[8];
          uStack_50 = param_3[9];
          local_98 = (int *)*param_3;
          uStack_90 = *(undefined4 *)(param_3 + 1);
          uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
          local_88 = *(undefined4 *)(param_3 + 2);
          uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
          uStack_80 = *(undefined4 *)(param_3 + 3);
          uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_78 = *(undefined4 *)(param_3 + 4);
          uStack_74 = *(undefined4 *)((longlong)param_3 + 0x24);
          uStack_70 = *(undefined4 *)(param_3 + 5);
          uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_68 = *(undefined4 *)(param_3 + 6);
          uStack_64 = *(undefined4 *)((longlong)param_3 + 0x34);
          uStack_60 = *(undefined4 *)(param_3 + 7);
          uStack_5c = *(undefined4 *)((longlong)param_3 + 0x3c);
          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::ControlJob>>
          ::push_back_mut(param_2 + 0x350,&local_98);
          (*(code *)PTR_notify_one_00799168)();
          *param_1 = 0xfffffffffffffffe;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::server::Registry>>
                    (piVar1,bVar12);
          return param_1;
        }
        *param_1 = 0xffffffffffffffff;
        param_1[1] = "control_queue_full";
        param_1[2] = 0x12;
        param_1[3] = 0xffffffffffffffff;
        param_1[4] = "too many pending live control requestsnative_unavailable";
        param_1[5] = 0x26;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0x60201f7;
      }
    }
    else {
      param_1[6] = _DAT_0078f550;
      param_1[7] = uVar8;
      uVar8 = _UNK_0078f548;
      param_1[4] = PTR_s_native_TUI_session_unavailable_o_0078f540;
      param_1[5] = uVar8;
      uVar8 = _UNK_0078f538;
      param_1[2] = _DAT_0078f530;
      param_1[3] = uVar8;
      uVar7 = _UNK_0078f52c;
      uVar6 = _UNK_0078f528;
      uVar5 = _UNK_0078f524;
      *(undefined4 *)param_1 = _DAT_0078f520;
      *(undefined4 *)((longlong)param_1 + 4) = uVar5;
      *(undefined4 *)(param_1 + 1) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    }
  }
  else {
    param_1[6] = _DAT_0078f590;
    param_1[7] = uVar9;
    uVar8 = _UNK_0078f588;
    param_1[4] = PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_385_llvm_10049508496007902178_0078f580;
    param_1[5] = uVar8;
    uVar8 = _UNK_0078f578;
    param_1[2] = _DAT_0078f570;
    param_1[3] = uVar8;
    uVar7 = _UNK_0078f56c;
    uVar6 = _UNK_0078f568;
    uVar5 = _UNK_0078f564;
    *(undefined4 *)param_1 = _anon_1b4a85c95499e1b671cf4fa96a1b6d0f_386_llvm_10049508496007902178;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
  }
  if (((bVar12 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(param_2 + 0x314) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::ControlJob>
            (param_3);
  return param_1;
}


