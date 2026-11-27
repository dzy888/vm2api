// 002585e0 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::server::Registry>>

/* WARNING: Switch with 1 destination removed at 0x00258841 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::server::Registry>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::server::Registry>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong lVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0xb8) != -1) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    plVar1 = *(longlong **)(param_1 + 0xd0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0xd0);
    }
  }
  uVar19 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  uVar19 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::ControlJob>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x70);
    uVar4 = *(ulonglong *)(param_1 + 0x60);
    lVar16 = *(longlong *)(param_1 + 0x68);
    uVar8 = uVar4;
    if (uVar3 < uVar4) {
      uVar8 = 0;
    }
    lVar11 = uVar3 - uVar8;
    uVar12 = uVar4 - lVar11;
    lVar17 = uVar2 - uVar12;
    bVar18 = lVar17 != 0;
    if (uVar2 < uVar12) {
      lVar17 = 0;
    }
    uVar14 = lVar11 + uVar2;
    if (uVar2 >= uVar12 && bVar18) {
      uVar14 = uVar4;
    }
    lVar11 = uVar14 - lVar11;
    if (lVar11 != 0) {
      lVar10 = uVar3 * 0x18 + uVar8 * -0x18 + lVar16 + 8;
      do {
        if (*(longlong *)(lVar10 + -8) != 0) {
          uVar19 = (*(code *)puVar7)(uVar19,1);
        }
        lVar10 = lVar10 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar7 = PTR___rust_dealloc_00798fc8;
    if (uVar12 < uVar2) {
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
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  lVar16 = *(longlong *)(param_1 + 0x88);
  if (lVar16 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x98);
    if (lVar11 != 0) {
      pauVar13 = *(undefined1 (**) [16])(param_1 + 0x80);
      auVar20 = *pauVar13;
      pauVar15 = pauVar13 + 1;
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
            auVar20 = *pauVar15;
            pauVar13 = pauVar13 + -0x18;
            pauVar15 = pauVar15 + 1;
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
        if (*(longlong *)((longlong)pauVar13 + (ulonglong)uVar5 * -0x18 + -0x18) != 0) {
          auVar20._0_8_ = (*(code *)puVar7)(auVar20._0_8_,1);
          auVar20._8_8_ = extraout_XMM0_Qb;
        }
        lVar11 = lVar11 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar11 != 0);
    }
    if (lVar16 + (lVar16 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


