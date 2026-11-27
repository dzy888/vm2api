// 001f74b0 signal_handler

/* std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::signal_handler */

void __rustcall
std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::imp::signal_handler
          (undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  undefined1 **local_d8;
  code *local_d0;
  undefined8 *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  if (uVar4 != 0) {
    iVar10 = 10000000;
    uVar3 = (*(code *)PTR___errno_location_00219f18)();
    do {
      uVar9 = 0;
      LOCK();
      bVar11 = thread_info::SPIN_LOCK == 0;
      if (bVar11) {
        thread_info::SPIN_LOCK = uVar3;
      }
      else {
        uVar9 = thread_info::SPIN_LOCK;
      }
      UNLOCK();
      if (bVar11) {
LAB_001f75a9:
        if (thread_info::THREAD_INFO == 0) goto LAB_001f7631;
        lVar5 = thread_info::THREAD_INFO;
        lVar7 = thread_info::THREAD_INFO;
        goto LAB_001f75c0;
      }
      if (uVar9 == uVar3) {
LAB_001f7736:
        uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>
                ::write_all(param_1,&DAT_0012e2c8,0x68);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar6)
        ;
        goto LAB_001f774f;
      }
      uVar9 = 0;
      LOCK();
      bVar11 = thread_info::SPIN_LOCK == 0;
      if (bVar11) {
        thread_info::SPIN_LOCK = uVar3;
      }
      else {
        uVar9 = thread_info::SPIN_LOCK;
      }
      UNLOCK();
      if (bVar11) goto LAB_001f75a9;
      if (uVar9 == uVar3) goto LAB_001f7736;
      uVar9 = 0;
      LOCK();
      bVar11 = thread_info::SPIN_LOCK == 0;
      if (bVar11) {
        thread_info::SPIN_LOCK = uVar3;
      }
      else {
        uVar9 = thread_info::SPIN_LOCK;
      }
      UNLOCK();
      if (bVar11) goto LAB_001f75a9;
      if (uVar9 == uVar3) goto LAB_001f7736;
      uVar9 = 0;
      LOCK();
      bVar11 = thread_info::SPIN_LOCK == 0;
      if (bVar11) {
        thread_info::SPIN_LOCK = uVar3;
      }
      else {
        uVar9 = thread_info::SPIN_LOCK;
      }
      UNLOCK();
      if (bVar11) goto LAB_001f75a9;
      if (uVar9 == uVar3) goto LAB_001f7736;
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    uVar4 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(param_1,&DAT_0012e2ad,0x1b);
    if (((uVar4 != 0) && (1 < ((uint)uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
      local_d0 = (code *)(uVar4 - 1);
      local_d8 = (undefined1 **)CONCAT71(local_d8._1_7_,3);
      (*(code *)PTR_drop_00219c58)();
    }
  }
  goto LAB_001f763c;
LAB_001f75c0:
  uVar9 = 0xffffffffffffffff;
  lVar8 = 0;
  do {
    if ((ulonglong)((uint)*(ushort *)(lVar5 + 0x21a) * 8) * 5 == lVar8) {
      uVar9 = (ulonglong)*(ushort *)(lVar5 + 0x21a);
      goto LAB_001f7613;
    }
    uVar1 = *(ulonglong *)(lVar5 + 0x10 + uVar9 * 8);
    lVar8 = lVar8 + 0x28;
    uVar9 = uVar9 + 1;
  } while ((char)((uVar1 < uVar3) - (uVar3 < uVar1)) == '\x01');
  if (uVar1 < uVar3 != uVar3 < uVar1) {
LAB_001f7613:
    bVar11 = lVar7 == 0;
    lVar7 = lVar7 + -1;
    if (bVar11) goto LAB_001f7631;
    lVar5 = *(longlong *)(lVar5 + 0x220 + uVar9 * 8);
    goto LAB_001f75c0;
  }
  if ((*(ulonglong *)(lVar5 + 0x48 + lVar8) <= uVar4) &&
     (uVar4 < *(ulonglong *)(lVar5 + 0x50 + lVar8))) {
    local_30 = *(undefined8 *)(lVar5 + 0x58 + lVar8);
    local_40 = *(undefined1 **)(lVar5 + 0x38 + lVar8);
    if (local_40 == (undefined1 *)0x0) {
      local_38 = 9;
      local_40 = &DAT_0012e4b7;
    }
    else {
      local_38 = *(undefined8 *)(lVar5 + 0x40 + lVar8);
    }
    local_d8 = &local_40;
    local_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puStack_c8 = &local_30;
    local_c0 = PTR_fmt_0021a3b8;
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_21,&DAT_00116843,&local_d8);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar6);
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar6);
LAB_001f774f:
    (*(code *)PTR_abort_00219ea8)();
    (*(code *)PTR_panic_cannot_unwind_0021a1d8)();
    thread_info::SPIN_LOCK = 0;
    (*(code *)PTR_panic_cannot_unwind_0021a1d8)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_001f7631:
  thread_info::SPIN_LOCK = 0;
LAB_001f763c:
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (undefined *)0x0;
  uStack_b8 = 0;
  local_d0 = (code *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  local_d8 = (undefined1 **)0x0;
  (*(code *)PTR_sigaction_0021aa68)(0,0);
  return;
}


