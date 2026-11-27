// 00557120 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>

/* WARNING: Switch with 1 destination removed at 0x005573ed */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>
          (longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  
  lVar16 = *(longlong *)(param_1 + 0xa8);
  if (lVar16 != 0) {
    lVar13 = *(longlong *)(param_1 + 0xb8);
    if (lVar13 != 0) {
      pauVar15 = *(undefined1 (**) [16])(param_1 + 0xa0);
      auVar19 = *pauVar15;
      pauVar10 = pauVar15 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar19 = *pauVar10;
            pauVar15 = pauVar15 + -0xe0;
            pauVar10 = pauVar10 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        <craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo>
                  (pauVar15[(ulonglong)uVar4 * -0xe + -0xe] + 8);
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lVar16 * 0xe1 != -0xf1) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  uVar18 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 8));
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
  }
  uVar18 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
  }
  uVar18 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(param_1 + 0xd0);
  puVar6 = PTR___rust_dealloc_00798fc8;
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  if (uVar2 != 0) {
    lVar16 = *(longlong *)(param_1 + 0x50);
    uVar3 = *(ulonglong *)(param_1 + 0x58);
    uVar7 = uVar1;
    if (uVar3 < uVar1) {
      uVar7 = 0;
    }
    lVar13 = uVar3 - uVar7;
    uVar12 = uVar1 - lVar13;
    lVar14 = uVar2 - uVar12;
    bVar17 = lVar14 != 0;
    if (uVar2 < uVar12) {
      lVar14 = 0;
    }
    uVar11 = lVar13 + uVar2;
    if (uVar2 >= uVar12 && bVar17) {
      uVar11 = uVar1;
    }
    lVar13 = uVar11 - lVar13;
    if (lVar13 != 0) {
      lVar9 = uVar3 * 0x18 + uVar7 * -0x18 + lVar16 + 8;
      do {
        if (*(longlong *)(lVar9 + -8) != 0) {
          uVar18 = (*(code *)puVar6)(uVar18,1);
        }
        lVar9 = lVar9 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar6 = PTR___rust_dealloc_00798fc8;
    if (uVar12 < uVar2) {
      lVar16 = lVar16 + 8;
      do {
        if (*(longlong *)(lVar16 + -8) != 0) {
          uVar18 = (*(code *)puVar6)(uVar18,1);
        }
        lVar16 = lVar16 + 0x18;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
  }
  puVar6 = PTR___rust_dealloc_00798fc8;
  lVar16 = *(longlong *)(param_1 + 0x70);
  if (lVar16 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x80);
    if (lVar13 != 0) {
      pauVar15 = *(undefined1 (**) [16])(param_1 + 0x68);
      auVar19 = *pauVar15;
      pauVar10 = pauVar15 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar19 = *pauVar10;
            pauVar15 = pauVar15 + -0x18;
            pauVar10 = pauVar10 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (*(longlong *)((longlong)pauVar15 + (ulonglong)uVar4 * -0x18 + -0x18) != 0) {
          auVar19._0_8_ = (*(code *)puVar6)(auVar19._0_8_,1);
          auVar19._8_8_ = extraout_XMM0_Qb;
        }
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar16 + (lVar16 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


