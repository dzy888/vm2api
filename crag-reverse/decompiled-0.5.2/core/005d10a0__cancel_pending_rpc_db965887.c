// 005d10a0 cancel_pending_rpc

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::cancel_pending_rpc */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::cancel_pending_rpc
          (longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  byte bVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  uint uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  
  lVar3 = *(longlong *)(param_1 + 0x210);
  LOCK();
  bVar21 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar21) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  local_48 = param_2;
  if (!bVar21) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar10 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    cVar12 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    cVar12 = *(char *)(lVar3 + 0x14);
  }
  if (cVar12 == '\0') {
    uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&u64>(lVar3 + 0x38,&local_48);
    lVar4 = *(longlong *)(lVar3 + 0x18);
    uVar14 = *(ulonglong *)(lVar3 + 0x20);
    bVar22 = (byte)(uVar13 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar17 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar14;
      auVar24 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar26[0] = -(auVar24[0] == auVar23[0]);
      auVar26[1] = -(auVar24[1] == auVar23[1]);
      auVar26[2] = -(auVar24[2] == auVar23[2]);
      auVar26[3] = -(auVar24[3] == auVar23[3]);
      auVar26[4] = -(auVar24[4] == auVar23[4]);
      auVar26[5] = -(auVar24[5] == auVar23[5]);
      auVar26[6] = -(auVar24[6] == auVar23[6]);
      auVar26[7] = -(auVar24[7] == auVar23[7]);
      auVar26[8] = -(auVar24[8] == auVar23[0]);
      auVar26[9] = -(auVar24[9] == auVar23[1]);
      auVar26[10] = -(auVar24[10] == auVar23[2]);
      auVar26[0xb] = -(auVar24[0xb] == auVar23[3]);
      auVar26[0xc] = -(auVar24[0xc] == auVar23[4]);
      auVar26[0xd] = -(auVar24[0xd] == auVar23[5]);
      auVar26[0xe] = -(auVar24[0xe] == auVar23[6]);
      auVar26[0xf] = -(auVar24[0xf] == auVar23[7]);
      uVar18 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar18;
      while (uVar18 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar19 = uVar8 + uVar13 & uVar14;
        lVar20 = lVar4 + uVar19 * -0x10;
        if (param_2 == *(longlong *)(lVar20 + -0x10)) {
          uVar14 = uVar19 - 0x10 & uVar14;
          pcVar1 = (char *)(lVar4 + uVar14);
          auVar23[0] = -(*pcVar1 == -1);
          auVar23[1] = -(pcVar1[1] == -1);
          auVar23[2] = -(pcVar1[2] == -1);
          auVar23[3] = -(pcVar1[3] == -1);
          auVar23[4] = -(pcVar1[4] == -1);
          auVar23[5] = -(pcVar1[5] == -1);
          auVar23[6] = -(pcVar1[6] == -1);
          auVar23[7] = -(pcVar1[7] == -1);
          auVar23[8] = -(pcVar1[8] == -1);
          auVar23[9] = -(pcVar1[9] == -1);
          auVar23[10] = -(pcVar1[10] == -1);
          auVar23[0xb] = -(pcVar1[0xb] == -1);
          auVar23[0xc] = -(pcVar1[0xc] == -1);
          auVar23[0xd] = -(pcVar1[0xd] == -1);
          auVar23[0xe] = -(pcVar1[0xe] == -1);
          auVar23[0xf] = -(pcVar1[0xf] == -1);
          uVar6 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar23[0xf] >> 7) << 0xf;
          pcVar1 = (char *)(lVar4 + uVar19);
          auVar24[0] = -(*pcVar1 == -1);
          auVar24[1] = -(pcVar1[1] == -1);
          auVar24[2] = -(pcVar1[2] == -1);
          auVar24[3] = -(pcVar1[3] == -1);
          auVar24[4] = -(pcVar1[4] == -1);
          auVar24[5] = -(pcVar1[5] == -1);
          auVar24[6] = -(pcVar1[6] == -1);
          auVar24[7] = -(pcVar1[7] == -1);
          auVar24[8] = -(pcVar1[8] == -1);
          auVar24[9] = -(pcVar1[9] == -1);
          auVar24[10] = -(pcVar1[10] == -1);
          auVar24[0xb] = -(pcVar1[0xb] == -1);
          auVar24[0xc] = -(pcVar1[0xc] == -1);
          auVar24[0xd] = -(pcVar1[0xd] == -1);
          auVar24[0xe] = -(pcVar1[0xe] == -1);
          auVar24[0xf] = -(pcVar1[0xf] == -1);
          uVar18 = 0xf;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar18 == 0; uVar18 = uVar18 - 1) {
            }
          }
          sVar7 = 0;
          for (uVar16 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar24[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            sVar7 = sVar7 + 1;
          }
          uVar15 = 0x80;
          if ((ushort)(sVar7 + (uVar18 ^ 0xf)) < 0x10) {
            *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + 1;
            uVar15 = 0xff;
          }
          *(undefined1 *)(lVar4 + uVar19) = uVar15;
          *(undefined1 *)(lVar4 + 0x10 + uVar14) = uVar15;
          *(longlong *)(lVar3 + 0x30) = *(longlong *)(lVar3 + 0x30) + -1;
          plVar5 = *(longlong **)(lVar20 + -8);
          local_40 = 1;
          local_38 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            uVar16 = (*(code *)PTR_set_complete_00799058)();
            if ((uVar16 & 5) == 1) {
              (**(code **)(plVar5[4] + 0x10))();
            }
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
              ::drop_slow(&local_38);
            }
          }
          goto LAB_005d10f7;
        }
        uVar18 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar18);
      }
      auVar25[0] = -(auVar24[0] == -1);
      auVar25[1] = -(auVar24[1] == -1);
      auVar25[2] = -(auVar24[2] == -1);
      auVar25[3] = -(auVar24[3] == -1);
      auVar25[4] = -(auVar24[4] == -1);
      auVar25[5] = -(auVar24[5] == -1);
      auVar25[6] = -(auVar24[6] == -1);
      auVar25[7] = -(auVar24[7] == -1);
      auVar25[8] = -(auVar24[8] == -1);
      auVar25[9] = -(auVar24[9] == -1);
      auVar25[10] = -(auVar24[10] == -1);
      auVar25[0xb] = -(auVar24[0xb] == -1);
      auVar25[0xc] = -(auVar24[0xc] == -1);
      auVar25[0xd] = -(auVar24[0xd] == -1);
      auVar25[0xe] = -(auVar24[0xe] == -1);
      auVar25[0xf] = -(auVar24[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar13 = uVar13 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_005d10f7:
  if (((bVar11 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
     (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
    *(undefined1 *)(lVar3 + 0x14) = 1;
  }
  LOCK();
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


