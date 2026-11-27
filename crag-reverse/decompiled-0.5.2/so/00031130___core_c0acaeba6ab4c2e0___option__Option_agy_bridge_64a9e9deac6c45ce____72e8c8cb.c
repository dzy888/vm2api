// 00031130 <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::Turn>>

/* WARNING: Switch with 1 destination removed at 0x00031462 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::Turn>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::Turn>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar9;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  if (*param_1 != 2) {
    if (*(longlong *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x82) != -1) && (*(longlong *)(param_1 + 0x82) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    if ((*(ulonglong *)(param_1 + 0x94) < 0xfffffffffffffffe) &&
       (*(ulonglong *)(param_1 + 0x94) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    auVar20._0_8_ = <agy_bridge[64a9e9deac6c45ce]::StreamSlot>(param_1 + 0x1c);
    auVar20._8_8_ = extraout_XMM0_Qb;
    lVar11 = *(longlong *)(param_1 + 0xa0);
    if (lVar11 != 0) {
      lVar17 = *(longlong *)(param_1 + 0xa4);
      if (lVar17 != 0) {
        pauVar13 = *(undefined1 (**) [16])(param_1 + 0x9e);
        auVar20 = *pauVar13;
        pauVar15 = pauVar13 + 1;
        uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
          if ((short)uVar8 == 0) {
            do {
              auVar20 = *pauVar15;
              pauVar13 = pauVar13 + -0x140;
              pauVar15 = pauVar15 + 1;
              uVar8 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
            } while (uVar8 == 0);
          }
          uVar4 = 0;
          for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          auVar20._0_8_ =
               <(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>
                         (pauVar13 + (ulonglong)uVar4 * -0x14 + -0x14);
          auVar20._8_8_ = extraout_XMM0_Qb_00;
          uVar8 = uVar8 - 1 & uVar8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar11 * 0x141 != -0x151) {
        auVar20._0_8_ = (*(code *)PTR___rust_dealloc_000c3aa0)();
        auVar20._8_8_ = extraout_XMM0_Qb_01;
      }
    }
    if ((*(longlong *)(param_1 + 0xac) != 0) && (*(longlong *)(param_1 + 0xac) * 0x11 != -0x21)) {
      auVar20._0_8_ = (*(code *)PTR___rust_dealloc_000c3aa0)();
      auVar20._8_8_ = extraout_XMM0_Qb_02;
    }
    lVar11 = 0;
    if ((*(longlong *)(param_1 + 0xb8) != 0) &&
       (lVar11 = *(longlong *)(param_1 + 0xb8) * 0x11 + 0x21, lVar11 != 0)) {
      auVar20._0_8_ = (*(code *)PTR___rust_dealloc_000c3aa0)();
      auVar20._8_8_ = extraout_XMM0_Qb_03;
    }
    puVar6 = PTR___rust_dealloc_000c3aa0;
    uVar19 = auVar20._0_8_;
    uVar1 = *(ulonglong *)(param_1 + 0x6a);
    uVar2 = *(ulonglong *)(param_1 + 0x70);
    if (uVar2 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x6c);
      uVar3 = *(ulonglong *)(param_1 + 0x6e);
      uVar7 = uVar1;
      if (uVar3 < uVar1) {
        uVar7 = 0;
      }
      lVar11 = uVar3 - uVar7;
      uVar12 = uVar1 - lVar11;
      lVar14 = uVar2 - uVar12;
      bVar18 = lVar14 != 0;
      if (uVar2 < uVar12) {
        lVar14 = 0;
      }
      uVar10 = lVar11 + uVar2;
      if (uVar2 >= uVar12 && bVar18) {
        uVar10 = uVar1;
      }
      lVar9 = uVar10 - lVar11;
      if (lVar9 != 0) {
        lVar16 = uVar3 * 0x18 + uVar7 * -0x18 + lVar17 + 8;
        do {
          lVar11 = *(longlong *)(lVar16 + -8);
          if (lVar11 != 0) {
            auVar20._0_8_ = (*(code *)puVar6)(auVar20._0_8_,1);
            auVar20._8_8_ = extraout_XMM0_Qb_05;
          }
          lVar16 = lVar16 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      puVar6 = PTR___rust_dealloc_000c3aa0;
      uVar19 = auVar20._0_8_;
      if (uVar12 < uVar2) {
        lVar17 = lVar17 + 8;
        do {
          lVar11 = *(longlong *)(lVar17 + -8);
          if (lVar11 != 0) {
            auVar20._0_8_ = (*(code *)puVar6)(auVar20._0_8_,1);
            auVar20._8_8_ = extraout_XMM0_Qb_04;
          }
          uVar19 = auVar20._0_8_;
          lVar17 = lVar17 + 0x18;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    if (uVar1 != 0) {
      lVar11 = uVar1 * 0x18;
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar19,8);
    }
    uVar19 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(param_1 + 0x72,lVar11);
    if (*(longlong *)(param_1 + 0x72) != 0) {
      uVar19 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar19,8);
    }
    if ((*(longlong *)(param_1 + 0x88) != -1) && (*(longlong *)(param_1 + 0x88) != 0)) {
      uVar19 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar19,1);
    }
    if ((*(longlong *)(param_1 + 0x8e) != -1) && (*(longlong *)(param_1 + 0x8e) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar19,1);
    }
    uVar19 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::vec::Vec<u8>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(param_1 + 0x7a);
    if (*(longlong *)(param_1 + 0x7a) != 0) {
      (*(code *)PTR_free_000c4290)(uVar19,8);
      return;
    }
  }
  return;
}


