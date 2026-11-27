// 00257ca0 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>

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
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String))>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 200);
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
  uVar2 = *(ulonglong *)(param_1 + 0x70);
  if (uVar2 != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x68);
    uVar4 = *(ulonglong *)(param_1 + 0x58);
    lVar16 = *(longlong *)(param_1 + 0x60);
    uVar8 = uVar4;
    if (uVar3 < uVar4) {
      uVar8 = 0;
    }
    lVar10 = uVar3 - uVar8;
    uVar11 = uVar4 - lVar10;
    lVar17 = uVar2 - uVar11;
    bVar18 = lVar17 != 0;
    if (uVar2 < uVar11) {
      lVar17 = 0;
    }
    uVar9 = lVar10 + uVar2;
    if (uVar2 >= uVar11 && bVar18) {
      uVar9 = uVar4;
    }
    lVar10 = uVar9 - lVar10;
    if (lVar10 != 0) {
      lVar14 = uVar3 * 0x18 + uVar8 * -0x18 + lVar16 + 8;
      do {
        if (*(longlong *)(lVar14 + -8) != 0) {
          uVar19 = (*(code *)puVar7)(uVar19,1);
        }
        lVar14 = lVar14 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    puVar7 = PTR___rust_dealloc_00798fc8;
    if (uVar11 < uVar2) {
      lVar16 = lVar16 + 8;
      do {
        if (*(longlong *)(lVar16 + -8) != 0) {
          uVar19 = (*(code *)puVar7)(uVar19,1);
        }
        lVar16 = lVar16 + 0x18;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar16 = *(longlong *)(param_1 + 0x80);
  if (lVar16 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x90);
    if (lVar10 != 0) {
      pauVar12 = *(undefined1 (**) [16])(param_1 + 0x78);
      auVar20 = *pauVar12;
      pauVar13 = pauVar12 + 1;
      uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
        if ((short)uVar15 == 0) {
          do {
            auVar20 = *pauVar13;
            pauVar12 = pauVar12 + -0x18;
            pauVar13 = pauVar13 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
          } while (uVar15 == 0);
        }
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (*(longlong *)((longlong)pauVar12 + (ulonglong)uVar5 * -0x18 + -0x18) != 0) {
          auVar20._0_8_ = (*(code *)puVar7)(auVar20._0_8_,1);
          auVar20._8_8_ = extraout_XMM0_Qb;
        }
        uVar19 = auVar20._0_8_;
        lVar10 = lVar10 + -1;
        uVar15 = uVar15 - 1 & uVar15;
      } while (lVar10 != 0);
    }
    if (lVar16 + (lVar16 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,0x10);
    }
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x188);
  return;
}


