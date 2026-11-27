// 00474790 <craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession>

/* WARNING: Switch with 1 destination removed at 0x004748e7 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  plVar1 = (longlong *)param_1[5];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
    ::drop_slow(param_1 + 5);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar1 = (longlong *)param_1[6];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 6);
  }
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar9 = param_1[10];
    if (lVar9 != 0) {
      pauVar7 = (undefined1 (*) [16])param_1[7];
      auVar10 = *pauVar7;
      pauVar8 = pauVar7 + 1;
      uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar10[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar6 == 0) {
          do {
            auVar10 = *pauVar8;
            pauVar7 = pauVar7 + -0x30;
            pauVar8 = pauVar8 + 1;
            uVar6 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar6 == 0);
        }
        uVar3 = 0;
        for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (*(longlong *)pauVar7[(ulonglong)uVar3 * -3 + -3] != 0) {
          auVar10._0_8_ = (*(code *)puVar5)(auVar10._0_8_,1);
          auVar10._8_8_ = extraout_XMM0_Qb;
        }
        if (*(longlong *)(pauVar7[(ulonglong)uVar3 * -3 + -2] + 8) != 0) {
          auVar10._0_8_ = (*(code *)puVar5)(auVar10._0_8_,1);
          auVar10._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar2 * 0x31 != -0x41) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


