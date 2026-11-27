// 00556cc0 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>
          (longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  bool bVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x1b8);
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x1c0);
    }
  }
  if ((*(longlong *)(param_1 + 0xb0) != -1) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  uVar19 = <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]>
                     (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  lVar12 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x20) << 5;
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String))>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 200,lVar12);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpActiveTurn)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xf8);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x128);
  uVar19 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  uVar19 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(param_1 + 0x158);
  puVar7 = PTR___rust_dealloc_00798fc8;
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar3 = *(ulonglong *)(param_1 + 0x70);
  if (uVar3 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x60);
    uVar4 = *(ulonglong *)(param_1 + 0x68);
    uVar8 = uVar2;
    if (uVar4 < uVar2) {
      uVar8 = 0;
    }
    lVar13 = uVar4 - uVar8;
    uVar14 = uVar2 - lVar13;
    lVar15 = uVar3 - uVar14;
    bVar18 = lVar15 != 0;
    if (uVar3 < uVar14) {
      lVar15 = 0;
    }
    uVar11 = lVar13 + uVar3;
    if (uVar3 >= uVar14 && bVar18) {
      uVar11 = uVar2;
    }
    lVar13 = uVar11 - lVar13;
    if (lVar13 != 0) {
      lVar10 = uVar4 * 0x18 + uVar8 * -0x18 + lVar12 + 8;
      do {
        if (*(longlong *)(lVar10 + -8) != 0) {
          uVar19 = (*(code *)puVar7)(uVar19,1);
        }
        lVar10 = lVar10 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar7 = PTR___rust_dealloc_00798fc8;
    if (uVar14 < uVar3) {
      lVar12 = lVar12 + 8;
      do {
        if (*(longlong *)(lVar12 + -8) != 0) {
          uVar19 = (*(code *)puVar7)(uVar19,1);
        }
        lVar12 = lVar12 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  if (uVar2 != 0) {
    uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar12 = *(longlong *)(param_1 + 0x80);
  if (lVar12 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x90);
    if (lVar13 != 0) {
      pauVar16 = *(undefined1 (**) [16])(param_1 + 0x78);
      auVar20 = *pauVar16;
      pauVar17 = pauVar16 + 1;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar20 = *pauVar17;
            pauVar16 = pauVar16 + -0x18;
            pauVar17 = pauVar17 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar9 == 0);
        }
        uVar5 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (*(longlong *)((longlong)pauVar16 + (ulonglong)uVar5 * -0x18 + -0x18) != 0) {
          auVar20._0_8_ = (*(code *)puVar7)(auVar20._0_8_,1);
          auVar20._8_8_ = extraout_XMM0_Qb;
        }
        uVar19 = auVar20._0_8_;
        lVar13 = lVar13 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar13 != 0);
    }
    if (lVar12 + (lVar12 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,0x10);
    }
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x188);
  return;
}


