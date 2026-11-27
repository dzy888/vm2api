// 003aa8f0 <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>

/* WARNING: Switch with 1 destination removed at 0x003aae60 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x22] != -1) && (param_1[0x22] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x25] != -1) && (param_1[0x25] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x28] != -1) && (param_1[0x28] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0xc] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0xf] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar17 = param_1[0x14];
  if (lVar17 != 0) {
    lVar11 = param_1[0x13] + 8;
    do {
      if (*(longlong *)(lVar11 + -8) != 0) {
        (*(code *)puVar7)();
      }
      lVar11 = lVar11 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (param_1[0x12] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar17 = param_1[0x17];
  if (lVar17 != 0) {
    lVar11 = param_1[0x16] + 8;
    do {
      if (*(longlong *)(lVar11 + -8) != 0) {
        (*(code *)puVar7)();
      }
      lVar11 = lVar11 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (param_1[0x15] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar17 = param_1[0x47];
  if (lVar17 != 0) {
    lVar11 = param_1[0x49];
    if (lVar11 != 0) {
      pauVar12 = (undefined1 (*) [16])param_1[0x46];
      auVar1 = *pauVar12;
      pauVar14 = pauVar12 + 1;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar16 == 0) {
          do {
            auVar1 = *pauVar14;
            pauVar12 = pauVar12 + -0x20;
            pauVar14 = pauVar14 + 1;
            uVar16 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar16 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        if (*(longlong *)((longlong)pauVar12 + (-0x20 - (ulonglong)(uint)(iVar5 << 5))) != 0) {
          (*(code *)puVar7)();
        }
        lVar11 = lVar11 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (lVar11 != 0);
    }
    if (lVar17 * 0x21 != -0x31) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar17 = param_1[0x1a];
  if (lVar17 != 0) {
    lVar11 = param_1[0x19] + 0x38;
    do {
      if (*(longlong *)(lVar11 + -0x38) != 0) {
        (*(code *)puVar7)();
      }
      if (*(longlong *)(lVar11 + -0x20) != 0) {
        (*(code *)puVar7)();
      }
      if (*(longlong *)(lVar11 + -8) != 0) {
        (*(code *)puVar7)();
      }
      lVar11 = lVar11 + 0x48;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (param_1[0x18] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0x2b] != -1) {
    if (param_1[0x2b] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[0x2e] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[0x31] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  uVar2 = param_1[0x1b];
  uVar3 = param_1[0x1e];
  if (uVar3 != 0) {
    lVar17 = param_1[0x1c];
    uVar4 = param_1[0x1d];
    uVar8 = uVar2;
    if (uVar4 < uVar2) {
      uVar8 = 0;
    }
    lVar11 = uVar4 - uVar8;
    uVar10 = uVar2 - lVar11;
    lVar13 = uVar3 - uVar10;
    bVar18 = lVar13 != 0;
    if (uVar3 < uVar10) {
      lVar13 = 0;
    }
    uVar9 = lVar11 + uVar3;
    if (uVar3 >= uVar10 && bVar18) {
      uVar9 = uVar2;
    }
    lVar11 = uVar9 - lVar11;
    if (lVar11 != 0) {
      lVar15 = uVar4 * 0x18 + uVar8 * -0x18 + lVar17 + 8;
      do {
        if (*(longlong *)(lVar15 + -8) != 0) {
          (*(code *)puVar7)();
        }
        lVar15 = lVar15 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar7 = PTR___rust_dealloc_00798fc8;
    if (uVar10 < uVar3) {
      lVar17 = lVar17 + 8;
      do {
        if (*(longlong *)(lVar17 + -8) != 0) {
          (*(code *)puVar7)();
        }
        lVar17 = lVar17 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  if (uVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar17 = param_1[0x20];
  lVar11 = param_1[0x21];
  if (lVar11 != 0) {
    do {
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar17);
      lVar17 = lVar17 + 200;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (param_1[0x1f] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x38] != -1) && (param_1[0x38] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar17 = param_1[0x3b];
  if (lVar17 != -1) {
    if ((param_1[0x3e] != -1) && (param_1[0x3e] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (lVar17 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if ((param_1[0x43] == -1) || (param_1[0x43] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


